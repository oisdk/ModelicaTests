# Problem Description #

Optimising parameters of models can be achieved through a variety of algorithms, including Approximate Bayesian Computation. This allows the placement of a prior function over each of the parameters, so the next parameter can be intelligently chosen. The prior function can also be adjusted after each run of the model.

However, this setup does *not* allow easy adjustment of hyperparameters. Each parameter search must be run sequentially, with the model search being performed without heuristics or guidance.

# Strategy #

It's reasonably easy to describe a model as a collection of components and equations. The core datatype would be a `Model` type:

```haskell
data Model = Model { modName :: String
                   , comps :: [Component]
                   , eqs :: [Equation]
                   }
```

This basic `Model` type has three fields: a name, a list of components, and a list of equations. Since each component is itself a `Model`, a possible refinement would be to unify the `Component` and `Model` types. This also has no understanding of the Modelica type system, or the capacity for outward-facing connections.

The `Component` type is also very bare-bones:

```haskell
data Component = Component { compName :: String
                           , imports :: [String]
                           , initialise :: [(String,String)]
                           }
```

From this, some basic Modelica code can be generated:

```haskell
pipe = Component
  "pipe" 
  ["Modelica", "Fluid", "Pipes", "StaticPipe"]
  [ ("redeclare package Medium", "Modelica.Media.Water.ConstantPropertyLiquidWater")
  , ("length", "1")
  , ("diameter", "0.1")
  , ("height_ab", "-1")]

putStr (show pipe)

Modelica.Fluid.Pipes.StaticPipe pipe(
  redeclare package Medium=Modelica.Media.Water.ConstantPropertyLiquidWater,
  length=1,
  diameter=0.1,
  height_ab=-1
);
```

This description language can be arbitrarily sophisticated. At a minimum, I would expect compile-time type safety, especially between connections.

However, so far no value has been added: the description language would be essentially the same as Modelica itself.

What's possibly more useful would be to describe a model as a system of functions, which take a configuration, and produce a model. The model produced would be in the basic description language described above.

For instance, if only one property of the model was to be varied, say the length, the function should be of the type `Real -> Model`.

This, while giving a better interface to tools like cosmoabc, still isn't much more useful than writing small custom scripts to vary models manually.

Where this system may become useful is in varying more complex parameters. Say, for instance, you wanted to optimise between two components, `A` and `B`, for a given model. Each component has one parameter: `A` has a parameter of type `Real`, and `B` has a Boolean parameter. The function for generating the model could be of the type: `Either Real Bool -> Model`. This would allow a tree-search of the model space.

`Either`, of course, is too restrictive. It only allows two types. The tree data structure, representing the model space, is probably the most important part of the program. Each node should be able to branch off into either continuous, discrete, or categorical branches. However, if described properly, the tree structure may be a better structure on which to apply model-searching algorithms, like cosmoabc.

model PipesValveLinear
  extends Modelica.Icons.Example;
  Modelica.Fluid.Vessels.OpenTank tank1(
    redeclare package Medium = 
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    nPorts=1,
    crossArea=1,
    level_start=1,
    portsData={Modelica.Fluid.Vessels.BaseClasses.VesselPortsData(diameter=
        0.1)},
    height=1.1);

  Modelica.Fluid.Pipes.StaticPipe pipe(
    redeclare package Medium = 
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    length=1,
    diameter=0.1,
    height_ab=-1);

  Modelica.Fluid.Vessels.OpenTank tank2(
    crossArea=1,
    redeclare package Medium = 
        Modelica.Media.Water.ConstantPropertyLiquidWater,
    nPorts=1,
    height=1.1,
    portsData={Modelica.Fluid.Vessels.BaseClasses.VesselPortsData(diameter=
        0.1, height=0.5)},
    level_start=0);
  Modelica.Fluid.Valves.ValveLinear valve(
    redeclare package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater,
    dp_nominal=101325,
    m_flow_nominal=0.1
  );
  Modelica.Blocks.Sources.Ramp valveOpening(
    duration=20
  );
  inner Modelica.Fluid.System system;
equation 
  connect(tank1.ports[1], pipe.port_a);
  connect(pipe.port_b, valve.port_a);
  connect(valveOpening.y, valve.opening);
  connect(valve.port_b, tank2.ports[1]);
end PipesValveLinear;
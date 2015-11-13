#include "PipesValveDiscrete_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "PipesValveDiscrete_literals.h"
#include "PipesValveDiscrete_includes.h"



Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank1$ports_Medium_FluidConstants omc_Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank1$ports_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank1$ports_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank1$ports_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank1$ports_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regSquare2(threadData_t *threadData, modelica_real _x, modelica_real _x_small, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp5 = (modelica_boolean)(_x >= _x_small);
  if(tmp5)
  {
    tmp1 = _x;
    tmp6 = (_k1 * (tmp1 * tmp1));
  }
  else
  {
    tmp3 = (modelica_boolean)(_x <= (-_x_small));
    if(tmp3)
    {
      tmp2 = _x;
      tmp4 = ((-_k2) * (tmp2 * tmp2));
    }
    else
    {
      tmp4 = ((_k1 >= _k2)?omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData, _x, _x_small, _k1, _k2, _use_yd0, _yd0):(-omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData, (-_x), _x_small, _k2, _k1, _use_yd0, _yd0)));
    }
    tmp6 = tmp4;
  }
  _y = tmp6;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare2(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x_small, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_real tmp6;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x_small);
  tmp3 = mmc_unbox_real(_k1);
  tmp4 = mmc_unbox_real(_k2);
  tmp5 = mmc_unbox_integer(_use_yd0);
  tmp6 = mmc_unbox_real(_yd0);
  _y = omc_Modelica_Fluid_Utilities_regSquare2(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}
DLLExport
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_real _dp, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _g_times_height_ab, modelica_real _crossArea, modelica_real _roughness, modelica_real _dp_small, modelica_real _Re_turbulent)
{
  modelica_real _m_flow;
  modelica_real _Re;
  modelica_real _dp_a;
  modelica_real _dp_b;
  modelica_real _m_flow_a;
  modelica_real _m_flow_b;
  modelica_real _dm_flow_ddp_fric_a;
  modelica_real _dm_flow_ddp_fric_b;
  modelica_real _m_flow_zero;
  modelica_real _dm_flow_ddp_fric_zero;
  modelica_real _dp_grav_a;
  modelica_real _dp_grav_b;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re2;
  modelica_real _dp_zero;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  _m_flow_zero = 0.0;
  _dp_grav_a = (_g_times_height_ab * _rho_a);
  _dp_grav_b = (_g_times_height_ab * _rho_b);
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "roughness / diameter");}
  _Delta = (_roughness / _diameter);
  _Re2 = _Re_turbulent;
  _dp_zero = (0.5 * (_dp_grav_a + _dp_grav_b));
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "0.0065 / Delta");}
    tmp4 = (0.0065 / _Delta);
  }
  _Re1 = fmin(pow((745.0 * exp(tmp4)), 0.97),_Re_turbulent);
  _dp_a = (fmax(_dp_grav_a,_dp_grav_b) + _dp_small);

  _dp_b = (fmin(_dp_grav_a,_dp_grav_b) - _dp_small);

  if((_dp >= _dp_a))
  {
    _m_flow = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, (_dp - _dp_grav_a), _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
  }
  else
  {
    if((_dp <= _dp_b))
    {
      _m_flow = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, (_dp - _dp_grav_b), _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
    }
    else
    {
      /* tuple assignment m_flow_a, dm_flow_ddp_fric_a*/
      _m_flow_a = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, (_dp_a - _dp_grav_a), _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_a);

      /* tuple assignment m_flow_b, dm_flow_ddp_fric_b*/
      _m_flow_b = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, (_dp_b - _dp_grav_b), _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_b);

      /* tuple assignment m_flow, dm_flow_ddp_fric_zero*/
      _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp_zero, _dp_b, _dp_a, _m_flow_b, _m_flow_a, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_a ,&_dm_flow_ddp_fric_zero);

      if((_dp > _dp_zero))
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_zero, _dp_a, _m_flow_zero, _m_flow_a, _dm_flow_ddp_fric_zero, _dm_flow_ddp_fric_a, NULL);
      }
      else
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_b, _dp_zero, _m_flow_b, _m_flow_zero, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_zero, NULL);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _g_times_height_ab, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _dp_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_g_times_height_ab);
  tmp9 = mmc_unbox_real(_crossArea);
  tmp10 = mmc_unbox_real(_roughness);
  tmp11 = mmc_unbox_real(_dp_small);
  tmp12 = mmc_unbox_real(_Re_turbulent);
  _m_flow = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  out_m_flow = mmc_mk_rcon(_m_flow);
  return out_m_flow;
}
Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_FluidConstants omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Interfaces_FluidPort__b$pipe$port__b_Medium_FluidConstants omc_Modelica_Fluid_Interfaces_FluidPort__b$pipe$port__b_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Interfaces_FluidPort__b$pipe$port__b_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Interfaces_FluidPort__b$pipe$port__b_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Interfaces_FluidPort__b$pipe$port__b_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Interfaces_FluidPort__a$valve$port__a_Medium_FluidConstants omc_Modelica_Fluid_Interfaces_FluidPort__a$valve$port__a_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Interfaces_FluidPort__a$valve$port__a_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Interfaces_FluidPort__a$valve$port__a_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Interfaces_FluidPort__a$valve$port__a_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Interfaces_FluidPort__a$pipe$port__a_Medium_FluidConstants omc_Modelica_Fluid_Interfaces_FluidPort__a$pipe$port__a_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Interfaces_FluidPort__a$pipe$port__a_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Interfaces_FluidPort__a$pipe$port__a_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Interfaces_FluidPort__a$pipe$port__a_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Interfaces_FluidPort__b$valve$port__b_Medium_FluidConstants omc_Modelica_Fluid_Interfaces_FluidPort__b$valve$port__b_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Interfaces_FluidPort__b$valve$port__b_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Interfaces_FluidPort__b$valve$port__b_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Interfaces_FluidPort__b$valve$port__b_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
DLLExport
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_density(threadData_t *threadData, Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _d;
  modelica_metatype out_d;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _d = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}
Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_real p, modelica_real T)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState tmp1;
  tmp1._p = p;
  tmp1._T = T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState__desc, _p, _T);
}
DLLExport
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_pressure(threadData_t *threadData, Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  _p = _state._p;
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_pressure(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _p;
  modelica_metatype out_p;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _p = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_pressure(threadData, tmp1);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}
DLLExport
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_dynamicViscosity(threadData_t *threadData, Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  _eta = 0.001;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_dynamicViscosity(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _eta;
  modelica_metatype out_eta;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _eta = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_dynamicViscosity(threadData, tmp1);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}
Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_FluidConstants omc_Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
DLLExport
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_real _dp_fric, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real *out_dm_flow_ddp_fric)
{
  modelica_real _m_flow;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _lambda2;
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _aux1;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  _tailrecursive: OMC_LABEL_UNUSED
  if((_dp_fric >= 0.0))
  {
    _rho = _rho_a;

    _mu = _mu_a;
  }
  else
  {
    _rho = _rho_b;

    _mu = _mu_b;
  }

  tmp1 = _diameter;
  tmp2 = _mu;
  tmp3 = ((tmp2 * tmp2) * _length);
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s", "rho / (mu ^ 2.0 * length)");}
  _lambda2 = (2.0 * (fabs(_dp_fric) * ((tmp1 * tmp1 * tmp1) * (_rho / ((tmp2 * tmp2) * _length)))));

  tmp4 = _diameter;
  tmp5 = _mu;
  tmp6 = ((tmp5 * tmp5) * _length);
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s", "rho / (mu ^ 2.0 * length)");}
  _aux1 = (2.0 * ((tmp4 * tmp4 * tmp4) * (_rho / ((tmp5 * tmp5) * _length))));

  _Re = (0.015625 * _lambda2);

  _dRe_ddp = (0.015625 * _aux1);

  if((_Re > _Re1))
  {
    tmp7 = _lambda2; 
    if(!(tmp7 >= 0.0))
    {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp7);
    }
    tmp8 = _lambda2; 
    if(!(tmp8 >= 0.0))
    {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp8);
    }
    tmp9 = sqrt(tmp8);
    if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s", "2.51 / sqrt(lambda2)");}
    tmp10 = ((2.51 / sqrt(tmp8)) + (0.27 * _Delta));if(!(tmp10 > 0.0))
    {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of log10(2.51 / sqrt(lambda2) + 0.27 * Delta) was %g should be > 0", tmp10);
    }
    _Re = (-2.0 * (sqrt(tmp7) * log10(tmp10)));

    tmp11 = (_aux1 * fabs(_dp_fric)); 
    if(!(tmp11 >= 0.0))
    {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of sqrt(aux1 * abs(dp_fric)) was %g should be >= 0", tmp11);
    }
    _aux2 = sqrt(tmp11);

    tmp12 = _aux2;
    if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s", "2.51 / aux2");}
    tmp13 = (((2.51 / _aux2) + (0.27 * _Delta)) * fabs(_dp_fric));
    if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s", "2.51 / ((2.51 / aux2 + 0.27 * Delta) * abs(dp_fric))");}
    tmp14 = _aux2;
    if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s", "2.51 / aux2");}
    tmp15 = ((2.51 / _aux2) + (0.27 * _Delta));if(!(tmp15 > 0.0))
    {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of log(2.51 / aux2 + 0.27 * Delta) was %g should be > 0", tmp15);
    }
    tmp16 = _aux2;
    if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s", "aux1 / aux2");}
    _dRe_ddp = (0.4342944819032518 * ((2.51 / (((2.51 / _aux2) + (0.27 * _Delta)) * fabs(_dp_fric))) - (log(tmp15) * (_aux1 / _aux2))));

    if((_Re < _Re2))
    {
      /* tuple assignment Re, dRe_ddp*/
      _Re = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, _lambda2, _Re1, _Re2, _Delta, _dp_fric ,&_dRe_ddp);
    }
  }

  tmp17 = _diameter;
  if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(if dp_fric >= 0.0 then Re else -Re) / diameter");}
  _m_flow = (_crossArea * (_mu * (((_dp_fric >= 0.0)?_Re:(-_Re)) / _diameter)));

  tmp18 = _diameter;
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s", "dRe_ddp / diameter");}
  _dm_flow_ddp_fric = (_crossArea * (_mu * (_dRe_ddp / _diameter)));
  _return: OMC_LABEL_UNUSED
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = _dm_flow_ddp_fric; }
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_metatype _dp_fric, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype *out_dm_flow_ddp_fric)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp_fric);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_Re1);
  tmp10 = mmc_unbox_real(_Re2);
  tmp11 = mmc_unbox_real(_Delta);
  _m_flow = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, &_dm_flow_ddp_fric);
  out_m_flow = mmc_mk_rcon(_m_flow);
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = mmc_mk_rcon(_dm_flow_ddp_fric); }
  return out_m_flow;
}
DLLExport
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _roughness, modelica_real _m_flow_small, modelica_real _Re_turbulent)
{
  modelica_real _dp;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _Re;
  modelica_real _lambda2;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re2;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "roughness / diameter");}
  _Delta = (_roughness / _diameter);
  _Re2 = _Re_turbulent;
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "0.0065 / Delta");}
    tmp4 = (0.0065 / _Delta);
  }
  _Re1 = fmin((745.0 * exp(tmp4)),_Re_turbulent);
  _rho = ((_m_flow >= 0.0)?_rho_a:_rho_b);

  _mu = ((_m_flow >= 0.0)?_mu_a:_mu_b);

  tmp5 = (_mu * _crossArea);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s", "abs(m_flow) / (mu * crossArea)");}
  _Re = (_diameter * (fabs(_m_flow) / (_mu * _crossArea)));

  tmp13 = (modelica_boolean)(_Re <= _Re1);
  if(tmp13)
  {
    tmp14 = (64.0 * _Re);
  }
  else
  {
    tmp11 = (modelica_boolean)(_Re >= _Re2);
    if(tmp11)
    {
      tmp6 = 3.7;
      if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Delta / 3.7");}
      tmp7 = pow(_Re, 0.9);
      if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s", "5.74 / Re ^ 0.9");}
      tmp8 = ((_Delta / 3.7) + (5.74 / pow(_Re, 0.9)));if(!(tmp8 > 0.0))
      {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert(threadData, info, "Model error: Argument of log10(Delta / 3.7 + 5.74 / Re ^ 0.9) was %g should be > 0", tmp8);
      }
      tmp9 = log10(tmp8);
      if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Re / log10(Delta / 3.7 + 5.74 / Re ^ 0.9)");}
      tmp10 = (_Re / log10(tmp8));
      tmp12 = (0.25 * (tmp10 * tmp10));
    }
    else
    {
      tmp12 = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, _Re, _Re1, _Re2, _Delta);
    }
    tmp14 = tmp12;
  }
  _lambda2 = tmp14;

  tmp15 = _mu;
  tmp16 = _rho;
  if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(if m_flow >= 0.0 then lambda2 else -lambda2) / rho");}
  _dp = (0.5 * (_length * ((tmp15 * tmp15) * (real_int_pow(threadData, _diameter, -3) * (((_m_flow >= 0.0)?_lambda2:(-_lambda2)) / _rho)))));
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _m_flow_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_m_flow);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_roughness);
  tmp10 = mmc_unbox_real(_m_flow_small);
  tmp11 = mmc_unbox_real(_Re_turbulent);
  _dp = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_real _lambda2, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real _dp_fric, modelica_real *out_dRe_ddp)
{
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _y1d;
  modelica_real _y;
  modelica_real _dy_dx;
  modelica_real _x;
  modelica_real tmp1;
  modelica_real _x1;
  modelica_real tmp2;
  modelica_real _y1;
  modelica_real tmp3;
  modelica_real _aux2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _aux3;
  modelica_real tmp6;
  modelica_real _L2;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real _aux4;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real _x2;
  modelica_real tmp11;
  modelica_real _aux5;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real _y2;
  modelica_real tmp14;
  modelica_real _y2d;
  modelica_real tmp15;
  modelica_real tmp16;
  _tailrecursive: OMC_LABEL_UNUSED
  _y1d = 1.0;
  tmp1 = _lambda2;if(!(tmp1 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(lambda2) was %g should be > 0", tmp1);
  }
  _x = log10(tmp1);
  tmp2 = (64.0 * _Re1);if(!(tmp2 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp2);
  }
  _x1 = log10(tmp2);
  tmp3 = _Re1;if(!(tmp3 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp3);
  }
  _y1 = log10(tmp3);
  tmp4 = 3.7;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Delta / 3.7");}
  tmp5 = pow(_Re2, 0.9);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s", "5.74 / Re2 ^ 0.9");}
  _aux2 = ((_Delta / 3.7) + (5.74 / pow(_Re2, 0.9)));
  tmp6 = _aux2;if(!(tmp6 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp6);
  }
  _aux3 = log10(tmp6);
  tmp7 = _aux3;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Re2 / aux3");}
  tmp8 = (_Re2 / _aux3);
  _L2 = (0.25 * (tmp8 * tmp8));
  tmp9 = _L2; 
  if(!(tmp9 >= 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp9);
  }
  tmp10 = sqrt(tmp9);
  if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s", "2.51 / sqrt(L2)");}
  _aux4 = ((2.51 / sqrt(tmp9)) + (0.27 * _Delta));
  tmp11 = _L2;if(!(tmp11 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp11);
  }
  _x2 = log10(tmp11);
  tmp12 = _L2; 
  if(!(tmp12 >= 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp12);
  }
  tmp13 = _aux4;if(!(tmp13 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp13);
  }
  _aux5 = (-2.0 * (sqrt(tmp12) * log10(tmp13)));
  tmp14 = _aux5;if(!(tmp14 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(aux5) was %g should be > 0", tmp14);
  }
  _y2 = log10(tmp14);
  tmp15 = (_aux5 * _aux4);
  if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s", "1.090079149577162 / (aux5 * aux4)");}
  _y2d = (0.5 + (1.090079149577162 / (_aux5 * _aux4)));
  /* tuple assignment y, dy_dx*/
  _y = omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d ,&_dy_dx);

  _Re = pow(10.0, _y);

  tmp16 = fabs(_dp_fric);
  if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s", "dy_dx / abs(dp_fric)");}
  _dRe_ddp = (_Re * (_dy_dx / fabs(_dp_fric)));
  _return: OMC_LABEL_UNUSED
  if (out_dRe_ddp) { *out_dRe_ddp = _dRe_ddp; }
  return _Re;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_metatype _lambda2, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype _dp_fric, modelica_metatype *out_dRe_ddp)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _dRe_ddp;
  modelica_real _Re;
  modelica_metatype out_Re;
  tmp1 = mmc_unbox_real(_lambda2);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  tmp5 = mmc_unbox_real(_dp_fric);
  _Re = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, &_dRe_ddp);
  out_Re = mmc_mk_rcon(_Re);
  if (out_dRe_ddp) { *out_dRe_ddp = mmc_mk_rcon(_dRe_ddp); }
  return out_Re;
}
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_real _Re, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta)
{
  modelica_real _lambda2;
  modelica_real _yd1;
  modelica_real _aux1;
  modelica_real _dx;
  modelica_real _x1;
  modelica_real tmp1;
  modelica_real _y1;
  modelica_real tmp2;
  modelica_real _x2;
  modelica_real tmp3;
  modelica_real _aux2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _diff_x;
  modelica_real _aux3;
  modelica_real tmp6;
  modelica_real _L2;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real _yd2;
  modelica_real tmp9;
  modelica_real _aux4;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _y2;
  modelica_real tmp12;
  modelica_real _aux5;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real _m;
  modelica_real tmp15;
  modelica_real _c2;
  modelica_real tmp16;
  modelica_real _c3;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  _tailrecursive: OMC_LABEL_UNUSED
  _yd1 = 1.0;
  _aux1 = 1.121782646756099;
  tmp1 = _Re1;if(!(tmp1 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp1);
  }
  _x1 = log10(tmp1);
  tmp2 = (64.0 * _Re1);if(!(tmp2 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp2);
  }
  _y1 = log10(tmp2);
  tmp3 = _Re2;if(!(tmp3 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(Re2) was %g should be > 0", tmp3);
  }
  _x2 = log10(tmp3);
  tmp4 = 3.7;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Delta / 3.7");}
  tmp5 = pow(_Re2, 0.9);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s", "5.74 / Re2 ^ 0.9");}
  _aux2 = ((_Delta / 3.7) + (5.74 / pow(_Re2, 0.9)));
  _diff_x = (_x2 - _x1);
  tmp6 = _aux2;if(!(tmp6 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp6);
  }
  _aux3 = log10(tmp6);
  tmp7 = _aux3;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Re2 / aux3");}
  tmp8 = (_Re2 / _aux3);
  _L2 = (0.25 * (tmp8 * tmp8));
  tmp9 = (pow(_Re2, 0.9) * (_aux2 * _aux3));
  if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s", "aux1 / (Re2 ^ 0.9 * aux2 * aux3)");}
  _yd2 = (2.0 + (4.0 * (_aux1 / (pow(_Re2, 0.9) * (_aux2 * _aux3)))));
  tmp10 = _L2; 
  if(!(tmp10 >= 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp10);
  }
  tmp11 = sqrt(tmp10);
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s", "2.51 / sqrt(L2)");}
  _aux4 = ((2.51 / sqrt(tmp10)) + (0.27 * _Delta));
  tmp12 = _L2;if(!(tmp12 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp12);
  }
  _y2 = log10(tmp12);
  tmp13 = _L2; 
  if(!(tmp13 >= 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp13);
  }
  tmp14 = _aux4;if(!(tmp14 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp14);
  }
  _aux5 = (-2.0 * (sqrt(tmp13) * log10(tmp14)));
  tmp15 = _diff_x;
  if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y2 - y1) / diff_x");}
  _m = ((_y2 - _y1) / _diff_x);
  tmp16 = _diff_x;
  if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(3.0 * m + -2.0 * yd1 - yd2) / diff_x");}
  _c2 = (((3.0 * _m) + ((-2.0 * _yd1) - _yd2)) / _diff_x);
  tmp17 = _diff_x;
  tmp18 = (tmp17 * tmp17);
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(yd1 + yd2 + -2.0 * m) / diff_x ^ 2.0");}
  _c3 = ((_yd1 + (_yd2 + (-2.0 * _m))) / (tmp17 * tmp17));
  tmp19 = _Re1;
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Re / Re1");}
  tmp20 = (_Re / _Re1);if(!(tmp20 > 0.0))
  {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(Re / Re1) was %g should be > 0", tmp20);
  }
  _dx = log10(tmp20);

  tmp21 = _Re1;
  if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s", "Re / Re1");}
  _lambda2 = (64.0 * (_Re1 * pow((_Re / _Re1), (1.0 + (_dx * (_c2 + (_dx * _c3)))))));
  _return: OMC_LABEL_UNUSED
  return _lambda2;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_metatype _Re, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _lambda2;
  modelica_metatype out_lambda2;
  tmp1 = mmc_unbox_real(_Re);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  _lambda2 = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, tmp1, tmp2, tmp3, tmp4);
  out_lambda2 = mmc_mk_rcon(_lambda2);
  return out_lambda2;
}
DLLExport
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d, modelica_real *out_dy_dx)
{
  modelica_real _y;
  modelica_real _dy_dx;
  modelica_real _h;
  modelica_real _t;
  modelica_real _h00;
  modelica_real _h10;
  modelica_real _h01;
  modelica_real _h11;
  modelica_real _h00d;
  modelica_real _h10d;
  modelica_real _h01d;
  modelica_real _h11d;
  modelica_real _aux3;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  _tailrecursive: OMC_LABEL_UNUSED
  _h = (_x2 - _x1);

  if((fabs(_h) > 0.0))
  {
    tmp1 = _h;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(x - x1) / h");}
    _t = ((_x - _x1) / _h);

    tmp2 = _t;
    _aux3 = (tmp2 * tmp2 * tmp2);

    tmp3 = _t;
    _aux2 = (tmp3 * tmp3);

    _h00 = (1.0 + ((2.0 * _aux3) + (-3.0 * _aux2)));

    _h10 = (_aux3 + ((-2.0 * _aux2) + _t));

    _h01 = ((3.0 * _aux2) + (-2.0 * _aux3));

    _h11 = (_aux3 - _aux2);

    _h00d = (6.0 * (_aux2 - _t));

    _h10d = (1.0 + ((3.0 * _aux2) + (-4.0 * _t)));

    _h01d = (6.0 * (_t - _aux2));

    _h11d = ((3.0 * _aux2) + (-2.0 * _t));

    _y = ((_y1 * _h00) + ((_h * (_y1d * _h10)) + ((_y2 * _h01) + (_h * (_y2d * _h11)))));

    tmp4 = _h;
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s", "h00d / h");}
    tmp5 = _h;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s", "h01d / h");}
    _dy_dx = ((_y1 * (_h00d / _h)) + ((_y1d * _h10d) + ((_y2 * (_h01d / _h)) + (_y2d * _h11d))));
  }
  else
  {
    _y = (0.5 * (_y1 + _y2));

    _dy_dx = (9.999999999999999e+59 * ((modelica_real)sign((_y2 - _y1))));
  }
  _return: OMC_LABEL_UNUSED
  if (out_dy_dx) { *out_dy_dx = _dy_dx; }
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d, modelica_metatype *out_dy_dx)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _dy_dx;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, &_dy_dx);
  out_y = mmc_mk_rcon(_y);
  if (out_dy_dx) { *out_dy_dx = mmc_mk_rcon(_dy_dx); }
  return out_y;
}
Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState omc_Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_real p, modelica_real T)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState tmp1;
  tmp1._p = p;
  tmp1._T = T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState__desc, _p, _T);
}
DLLExport
modelica_real omc_Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_density(threadData_t *threadData, Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _d;
  modelica_metatype out_d;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _d = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}
DLLExport
modelica_real omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _y1, modelica_real _y1d, modelica_real _y0d)
{
  modelica_real _y;
  modelica_real _a1;
  modelica_real _a2;
  modelica_real _a3;
  modelica_real _xx;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  _a1 = (_x1 * _y0d);

  _a2 = ((3.0 * _y1) + ((-2.0 * _a1) - (_x1 * _y1d)));

  _a3 = (_y1 + ((-_a2) - _a1));

  tmp1 = _x1;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "x / x1");}
  _xx = (_x / _x1);

  _y = (_xx * (_a1 + (_xx * (_a2 + (_xx * _a3)))));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _y1, modelica_metatype _y1d, modelica_metatype _y0d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_y1);
  tmp4 = mmc_unbox_real(_y1d);
  tmp5 = mmc_unbox_real(_y0d);
  _y = omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, tmp1, tmp2, tmp3, tmp4, tmp5);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}
DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regFun3(threadData_t *threadData, modelica_real _x, modelica_real _x0, modelica_real _x1, modelica_real _y0, modelica_real _y1, modelica_real _y0d, modelica_real _y1d, modelica_real *out_c)
{
  modelica_real _y;
  modelica_real _c;
  modelica_real _h0;
  modelica_real _Delta0;
  modelica_real _xstar;
  modelica_real _mu;
  modelica_real _eta;
  modelica_real _omega;
  modelica_real _rho;
  modelica_real _theta0;
  modelica_real _mu_tilde;
  modelica_real _eta_tilde;
  modelica_real _xi1;
  modelica_real _xi2;
  modelica_real _a1;
  modelica_real _a2;
  modelica_real _const12;
  modelica_real _const3;
  modelica_real _aux01;
  modelica_real _aux02;
  modelica_boolean _useSingleCubicPolynomial;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_string tmp4;
  modelica_string tmp5;
  static int tmp6 = 0;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  _useSingleCubicPolynomial = 0;
  {
    if(!(_x0 < _x1))
    {
      tmp1 = modelica_real_to_modelica_string(_x0, (modelica_integer) 0, 1, (modelica_integer) 6);
      tmpMeta[0] = stringAppend(_OMC_LIT19,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT20);
      tmp2 = modelica_real_to_modelica_string(_x1, (modelica_integer) 0, 1, (modelica_integer) 6);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT21);
      {
        FILE_INFO info = {"/opt/openmodelica/lib/omlibrary/Modelica 3.2.1/Fluid/Utilities.mo",606,5,607,74,1};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  if(((_y0d * _y1d) >= 0.0))
  {
  }
  else
  {
    {
      if(!((fabs(_y0d) < 1e-15) || (fabs(_y1d) < 1e-15)))
      {
        tmp4 = modelica_real_to_modelica_string(_y0d, (modelica_integer) 0, 1, (modelica_integer) 6);
        tmpMeta[0] = stringAppend(_OMC_LIT22,tmp4);
        tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT23);
        tmp5 = modelica_real_to_modelica_string(_y1d, (modelica_integer) 0, 1, (modelica_integer) 6);
        tmpMeta[2] = stringAppend(tmpMeta[1],tmp5);
        tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT24);
        {
          FILE_INFO info = {"/opt/openmodelica/lib/omlibrary/Modelica 3.2.1/Fluid/Utilities.mo",613,7,614,79,1};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
        }
      }
    }
  }

  _h0 = (_x1 - _x0);

  tmp7 = _h0;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y1 - y0) / h0");}
  _Delta0 = ((_y1 - _y0) / _h0);

  if((fabs(_Delta0) <= 0.0))
  {
    _y = (_y0 + (_Delta0 * (_x - _x0)));

    _c = 0.0;
  }
  else
  {
    if((fabs((_y1d + (_y0d + (-2.0 * _Delta0)))) < 1e-13))
    {
      tmp8 = _h0;
      if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y0d + y1d + -2.0 * Delta0) / h0");}
      tmp9 = _h0;
      if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(-2.0 * y0d + 3.0 * Delta0 + (x - x0) * (y0d + y1d + -2.0 * Delta0) / h0 - y1d) / h0");}
      _y = (_y0 + ((_x - _x0) * (_y0d + ((_x - _x0) * (((-2.0 * _y0d) + ((3.0 * _Delta0) + (((_x - _x0) * ((_y0d + (_y1d + (-2.0 * _Delta0))) / _h0)) - _y1d))) / _h0)))));

      _aux01 = (0.5 * (_x0 + _x1));

      tmp10 = _h0;
      if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(aux01 - x0) / h0");}
      tmp11 = ((_aux01 - _x0) / _h0);
      tmp12 = _h0;
      if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(aux01 - x0) / h0");}
      _c = ((3.0 * ((_y0d + (_y1d + (-2.0 * _Delta0))) * (tmp11 * tmp11))) + ((2.0 * (((-2.0 * _y0d) + ((3.0 * _Delta0) - _y1d)) * ((_aux01 - _x0) / _h0))) + _y0d));
    }
    else
    {
      tmp13 = ((2.0 * _Delta0) + ((-_y1d) - _y0d));
      if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(x0 * (-3.0 * (y0d + y1d) + 6.0 * Delta0) + h0 * (-2.0 * y0d - y1d) + 3.0 * h0 * Delta0) / (2.0 * Delta0 + (-y1d) - y0d)");}
      _xstar = (0.3333333333333333 * (((_x0 * ((-3.0 * (_y0d + _y1d)) + (6.0 * _Delta0))) + ((_h0 * ((-2.0 * _y0d) - _y1d)) + (3.0 * (_h0 * _Delta0)))) / ((2.0 * _Delta0) + ((-_y1d) - _y0d))));

      _mu = (_xstar - _x0);

      _eta = (_x1 - _xstar);

      tmp14 = _h0;
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(xstar - x0) / h0");}
      tmp15 = ((_xstar - _x0) / _h0);
      tmp16 = _h0;
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(xstar - x0) / h0");}
      _omega = ((3.0 * ((_y0d + (_y1d + (-2.0 * _Delta0))) * (tmp15 * tmp15))) + ((2.0 * (((-2.0 * _y0d) + ((3.0 * _Delta0) - _y1d)) * ((_xstar - _x0) / _h0))) + _y0d));

      _aux01 = (0.25 * (((modelica_real)sign(_Delta0)) * fmin(fabs(_omega),fabs(_Delta0))));

      if((fabs((_y0d - _y1d)) <= 1e-13))
      {
        _aux02 = _y0d;

        if((_y1 > (_y0 + (_y0d * (_x1 - _x0)))))
        {
          _useSingleCubicPolynomial = 1;
        }
      }
      else
      {
        if((fabs((_y1d + (_y0d + (-2.0 * _Delta0)))) < 1e-13))
        {
          tmp17 = _y1d;
          tmp18 = _y0d;
          _aux02 = (9.999999999999999e+59 * (((6.0 * (_Delta0 * (_y1d + (_y0d + (-1.5 * _Delta0))))) + ((((-_y1d) * _y0d) - (tmp17 * tmp17)) - (tmp18 * tmp18))) * (((_y1d + (_y0d + (-2.0 * _Delta0))) >= 0.0)?1.0:-1.0)));
        }
        else
        {
          tmp19 = _y0d;
          tmp20 = _y1d;
          tmp21 = ((_y1d + (_y0d + (-2.0 * _Delta0))) * 3.0);
          if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(6.0 * Delta0 * (y1d + y0d + -1.5 * Delta0) + (-y0d ^ 2.0) - y1d * y0d - y1d ^ 2.0) / ((y1d + y0d + -2.0 * Delta0) * 3.0)");}
          _aux02 = (((6.0 * (_Delta0 * (_y1d + (_y0d + (-1.5 * _Delta0))))) + (((-(tmp19 * tmp19)) - (_y1d * _y0d)) - (tmp20 * tmp20))) / ((_y1d + (_y0d + (-2.0 * _Delta0))) * 3.0));
        }
      }

      if(((((((_mu > 0.0) && (_eta < _h0)) && ((_Delta0 * _omega) <= 0.0)) || ((fabs(_aux01) < fabs(_aux02)) && ((_aux02 * _Delta0) >= 0.0))) || (fabs(_aux01) < fabs((0.1 * _Delta0)))) && (!_useSingleCubicPolynomial)))
      {
        _c = _aux01;

        if(((fabs(_c) < fabs(_aux02)) && ((_aux02 * _Delta0) >= 0.0)))
        {
          _c = _aux02;
        }

        if((fabs(_c) < fabs((0.1 * _Delta0))))
        {
          _c = (0.1 * _Delta0);
        }

        tmp22 = _h0;
        if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y0d * mu + y1d * eta) / h0");}
        _theta0 = (((_y0d * _mu) + (_y1d * _eta)) / _h0);

        if((fabs((_theta0 - _c)) < 1e-06))
        {
          _c = (0.999999 * _theta0);
        }

        tmp23 = (_theta0 - _c);
        if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(Delta0 - c) / (theta0 - c)");}
        _rho = (3.0 * ((_Delta0 - _c) / (_theta0 - _c)));

        _mu_tilde = (_rho * _mu);

        _eta_tilde = (_rho * _eta);

        _xi1 = (_x0 + _mu_tilde);

        _xi2 = (_x1 - _eta_tilde);

        tmp24 = _mu_tilde;
        tmp25 = fmax((tmp24 * tmp24),1e-13);
        if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y0d - c) / max(mu_tilde ^ 2.0, 1e-13)");}
        _a1 = ((_y0d - _c) / fmax((tmp24 * tmp24),1e-13));

        tmp26 = _eta_tilde;
        tmp27 = fmax((tmp26 * tmp26),1e-13);
        if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y1d - c) / max(eta_tilde ^ 2.0, 1e-13)");}
        _a2 = ((_y1d - _c) / fmax((tmp26 * tmp26),1e-13));

        tmp28 = (_x0 - _xi1);
        _const12 = (_y0 + ((-0.3333333333333333 * (_a1 * (tmp28 * tmp28 * tmp28))) - (_c * _x0)));

        tmp29 = (_x1 - _xi2);
        _const3 = (_y1 + ((-0.3333333333333333 * (_a2 * (tmp29 * tmp29 * tmp29))) - (_c * _x1)));

        if((_x < _xi1))
        {
          tmp30 = (_x - _xi1);
          _y = ((0.3333333333333333 * (_a1 * (tmp30 * tmp30 * tmp30))) + ((_c * _x) + _const12));
        }
        else
        {
          if((_x < _xi2))
          {
            _y = ((_c * _x) + _const12);
          }
          else
          {
            tmp31 = (_x - _xi2);
            _y = ((0.3333333333333333 * (_a2 * (tmp31 * tmp31 * tmp31))) + ((_c * _x) + _const3));
          }
        }
      }
      else
      {
        tmp32 = _h0;
        if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y0d + y1d + -2.0 * Delta0) / h0");}
        tmp33 = _h0;
        if (tmp33 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(-2.0 * y0d + 3.0 * Delta0 + (x - x0) * (y0d + y1d + -2.0 * Delta0) / h0 - y1d) / h0");}
        _y = (_y0 + ((_x - _x0) * (_y0d + ((_x - _x0) * (((-2.0 * _y0d) + ((3.0 * _Delta0) + (((_x - _x0) * ((_y0d + (_y1d + (-2.0 * _Delta0))) / _h0)) - _y1d))) / _h0)))));

        _aux01 = (0.5 * (_x0 + _x1));

        tmp34 = _h0;
        if (tmp34 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(aux01 - x0) / h0");}
        tmp35 = ((_aux01 - _x0) / _h0);
        tmp36 = _h0;
        if (tmp36 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(aux01 - x0) / h0");}
        _c = ((3.0 * ((_y0d + (_y1d + (-2.0 * _Delta0))) * (tmp35 * tmp35))) + ((2.0 * (((-2.0 * _y0d) + ((3.0 * _Delta0) - _y1d)) * ((_aux01 - _x0) / _h0))) + _y0d));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_c) { *out_c = _c; }
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regFun3(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x0, modelica_metatype _x1, modelica_metatype _y0, modelica_metatype _y1, modelica_metatype _y0d, modelica_metatype _y1d, modelica_metatype *out_c)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _c;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x0);
  tmp3 = mmc_unbox_real(_x1);
  tmp4 = mmc_unbox_real(_y0);
  tmp5 = mmc_unbox_real(_y1);
  tmp6 = mmc_unbox_real(_y0d);
  tmp7 = mmc_unbox_real(_y1d);
  _y = omc_Modelica_Fluid_Utilities_regFun3(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, &_c);
  out_y = mmc_mk_rcon(_y);
  if (out_c) { *out_c = mmc_mk_rcon(_c); }
  return out_y;
}
Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_FluidConstants omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp8 = (modelica_boolean)(_x > _x_small);
  if(tmp8)
  {
    tmp9 = _y1;
  }
  else
  {
    tmp6 = (modelica_boolean)(_x < (-_x_small));
    if(tmp6)
    {
      tmp7 = _y2;
    }
    else
    {
      tmp4 = (modelica_boolean)(_x_small > 0.0);
      if(tmp4)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "x / x_small");}
        tmp2 = (_x / _x_small);
        tmp3 = _x_small;
        if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(y2 - y1) / x_small");}
        tmp5 = ((0.25 * (_x * ((-3.0 + (tmp2 * tmp2)) * ((_y2 - _y1) / _x_small)))) + (0.5 * (_y1 + _y2)));
      }
      else
      {
        tmp5 = (0.5 * (_y1 + _y2));
      }
      tmp7 = tmp5;
    }
    tmp9 = tmp7;
  }
  _y = tmp9;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_Modelica_Fluid_Utilities_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}
modelica_real omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0)
{
  modelica_real _y;
  modelica_real _x2;
  modelica_real _y1;
  modelica_real _y2;
  modelica_real _y1d;
  modelica_real _y2d;
  modelica_real _w;
  modelica_real _w1;
  modelica_real _w2;
  modelica_real _y0d;
  modelica_real _ww;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  _x2 = (-_x1);

  if((_x <= _x2))
  {
    tmp1 = _x;
    _y = ((-_k2) * (tmp1 * tmp1));
  }
  else
  {
    tmp2 = _x1;
    _y1 = (_k1 * (tmp2 * tmp2));

    tmp3 = _x2;
    _y2 = ((-_k2) * (tmp3 * tmp3));

    _y1d = (2.0 * (_k1 * _x1));

    _y2d = (-2.0 * (_k2 * _x2));

    if(_use_yd0)
    {
      _y0d = _yd0;
    }
    else
    {
      tmp4 = _x1;
      if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s", "x2 / x1");}
      _w = (_x2 / _x1);

      tmp5 = _w;
      if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(3.0 * y2 - x2 * y2d) / w");}
      tmp6 = ((1.0 - _w) * _x1);
      if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s", "((3.0 * y2 - x2 * y2d) / w + (x1 * y1d + -3.0 * y1) * w) / ((1.0 - w) * x1)");}
      _y0d = (0.5 * (((((3.0 * _y2) - (_x2 * _y2d)) / _w) + (((_x1 * _y1d) + (-3.0 * _y1)) * _w)) / ((1.0 - _w) * _x1)));
    }

    _w1 = (2.23606797749979 * (_k1 * _x1));

    _w2 = (2.23606797749979 * (_k2 * fabs(_x2)));

    _ww = (0.9 * ((_w1 < _w2)?_w1:_w2));

    if((_ww < _y0d))
    {
      _y0d = _ww;
    }

    _y = ((_x >= 0.0)?omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, _x, _x1, _y1, _y1d, _y0d):omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, _x, _x2, _y2, _y2d, _y0d));
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_real tmp6;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_k1);
  tmp4 = mmc_unbox_real(_k2);
  tmp5 = mmc_unbox_integer(_use_yd0);
  tmp6 = mmc_unbox_real(_yd0);
  _y = omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}
DLLExport
modelica_real omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_density(threadData_t *threadData, Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _d;
  modelica_metatype out_d;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _d = omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}
Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState(threadData_t *threadData, modelica_real p, modelica_real T)
{
  Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState tmp1;
  tmp1._p = p;
  tmp1._T = T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState__desc, _p, _T);
}
Modelica_Fluid_Vessels_BaseClasses_VesselPortsData omc_Modelica_Fluid_Vessels_BaseClasses_VesselPortsData(threadData_t *threadData, modelica_real diameter, modelica_real height, modelica_real zeta_out, modelica_real zeta_in)
{
  Modelica_Fluid_Vessels_BaseClasses_VesselPortsData tmp1;
  tmp1._diameter = diameter;
  tmp1._height = height;
  tmp1._zeta_out = zeta_out;
  tmp1._zeta_in = zeta_in;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_BaseClasses_VesselPortsData(threadData_t *threadData, modelica_metatype _diameter, modelica_metatype _height, modelica_metatype _zeta_out, modelica_metatype _zeta_in)
{
  return mmc_mk_box5(3, &Modelica_Fluid_Vessels_BaseClasses_VesselPortsData__desc, _diameter, _height, _zeta_out, _zeta_in);
}
DLLExport
modelica_real omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _T;
  modelica_metatype out_T;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _T = omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}
DLLExport
Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState _state;
  modelica_real tmp1;
  Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "h / 4184.0");}
  tmp2 = omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState(threadData, _p, (273.15 + (_h / 4184.0)));
  _state._p = tmp2._p;
  _state._T = tmp2._T;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState _state;
  modelica_metatype out_state;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta[0] = mmc_mk_rcon(_state._p);
  tmpMeta[1] = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &Modelica_Fluid_Valves_ValveDiscrete$valve_Medium_ThermodynamicState__desc, tmpMeta[0], tmpMeta[1]);
  return out_state;
}
Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_FluidConstants omc_Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Vessels_OpenTank$tank1_Medium_FluidConstants omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Vessels_OpenTank$tank1_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Vessels_OpenTank$tank1_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_FluidConstants omc_Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank2$ports_Medium_FluidConstants omc_Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank2$ports_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank2$ports_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank2$ports_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$tank2$ports_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real p, modelica_real T)
{
  Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._p = p;
  tmp1._T = T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_ThermodynamicState__desc, _p, _T);
}
DLLExport
modelica_real omc_Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _T;
  modelica_metatype out_T;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _T = omc_Modelica_Fluid_Vessels_OpenTank$tank1_HeatTransfer$tank1$heatTransfer_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}
DLLExport
Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState _state;
  modelica_real tmp1;
  Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "h / 4184.0");}
  tmp2 = omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState(threadData, _p, (273.15 + (_h / 4184.0)));
  _state._p = tmp2._p;
  _state._T = tmp2._T;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState _state;
  modelica_metatype out_state;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta[0] = mmc_mk_rcon(_state._p);
  tmpMeta[1] = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState__desc, tmpMeta[0], tmpMeta[1]);
  return out_state;
}
Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real p, modelica_real T)
{
  Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState tmp1;
  tmp1._p = p;
  tmp1._T = T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState__desc, _p, _T);
}
DLLExport
modelica_real omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_density(threadData_t *threadData, Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Vessels_OpenTank$tank1_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _d;
  modelica_metatype out_d;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _d = omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}
DLLExport
modelica_real omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  _h = (4184.0 * (-273.15 + _T));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_Modelica_Fluid_Vessels_OpenTank$tank1_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}
Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real p, modelica_real T)
{
  Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState tmp1;
  tmp1._p = p;
  tmp1._T = T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState__desc, _p, _T);
}
DLLExport
modelica_real omc_Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _T;
  modelica_metatype out_T;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _T = omc_Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}
Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real p, modelica_real T)
{
  Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._p = p;
  tmp1._T = T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Vessels_OpenTank$tank2_HeatTransfer$tank2$heatTransfer_Medium_ThermodynamicState__desc, _p, _T);
}
Modelica_Fluid_Vessels_OpenTank$tank2_Medium_FluidConstants omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Fluid_Vessels_OpenTank$tank2_Medium_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Vessels_OpenTank$tank2_Medium_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Media_Interfaces_Types_Basic_FluidConstants$simpleWaterConstants omc_Modelica_Media_Interfaces_Types_Basic_FluidConstants$simpleWaterConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Media_Interfaces_Types_Basic_FluidConstants$simpleWaterConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Interfaces_Types_Basic_FluidConstants$simpleWaterConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Media_Interfaces_Types_Basic_FluidConstants$simpleWaterConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
Modelica_Media_Interfaces_Types_Basic_FluidConstants omc_Modelica_Media_Interfaces_Types_Basic_FluidConstants(threadData_t *threadData, modelica_string iupacName, modelica_string casRegistryNumber, modelica_string chemicalFormula, modelica_string structureFormula, modelica_real molarMass)
{
  Modelica_Media_Interfaces_Types_Basic_FluidConstants tmp1;
  tmp1._iupacName = iupacName;
  tmp1._casRegistryNumber = casRegistryNumber;
  tmp1._chemicalFormula = chemicalFormula;
  tmp1._structureFormula = structureFormula;
  tmp1._molarMass = molarMass;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Interfaces_Types_Basic_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass)
{
  return mmc_mk_box6(3, &Modelica_Media_Interfaces_Types_Basic_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass);
}
DLLExport
modelica_real omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  _h = (4184.0 * (-273.15 + _T));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}
DLLExport
Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState _state;
  modelica_real tmp1;
  Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "h / 4184.0");}
  tmp2 = omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState(threadData, _p, (273.15 + (_h / 4184.0)));
  _state._p = tmp2._p;
  _state._T = tmp2._T;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState _state;
  modelica_metatype out_state;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta[0] = mmc_mk_rcon(_state._p);
  tmpMeta[1] = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState__desc, tmpMeta[0], tmpMeta[1]);
  return out_state;
}
DLLExport
modelica_real omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_density(threadData_t *threadData, Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Vessels_OpenTank$tank2_Medium_ThermodynamicState tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _d;
  modelica_metatype out_d;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  _d = omc_Modelica_Fluid_Vessels_OpenTank$tank2_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

#ifdef __cplusplus
}
#endif

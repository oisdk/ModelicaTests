/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define PipesValveDiscrete_INDEX_JAC_D 3
  int PipesValveDiscrete_functionJacD_column(void* data, threadData_t *threadData);
  int PipesValveDiscrete_initialAnalyticJacobianD(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* D */

#if defined(__cplusplus)
extern "C" {
#endif
  #define PipesValveDiscrete_INDEX_JAC_C 2
  int PipesValveDiscrete_functionJacC_column(void* data, threadData_t *threadData);
  int PipesValveDiscrete_initialAnalyticJacobianC(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* C */

#if defined(__cplusplus)
extern "C" {
#endif
  #define PipesValveDiscrete_INDEX_JAC_B 1
  int PipesValveDiscrete_functionJacB_column(void* data, threadData_t *threadData);
  int PipesValveDiscrete_initialAnalyticJacobianB(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* B */

#if defined(__cplusplus)
extern "C" {
#endif
  #define PipesValveDiscrete_INDEX_JAC_A 0
  int PipesValveDiscrete_functionJacA_column(void* data, threadData_t *threadData);
  int PipesValveDiscrete_initialAnalyticJacobianA(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* A */
#define $Ptank1_levelSeedA data->simulationInfo.analyticJacobians[0].seedVars[0]
#define $Ptank1_levelSeedA__varInfo dummyVAR_INFO
#define $Ptank1_medium_TSeedA data->simulationInfo.analyticJacobians[0].seedVars[1]
#define $Ptank1_medium_TSeedA__varInfo dummyVAR_INFO
#define $Ptank2_levelSeedA data->simulationInfo.analyticJacobians[0].seedVars[2]
#define $Ptank2_levelSeedA__varInfo dummyVAR_INFO
#define $Ptank2_medium_TSeedA data->simulationInfo.analyticJacobians[0].seedVars[3]
#define $Ptank2_medium_TSeedA__varInfo dummyVAR_INFO



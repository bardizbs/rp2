/*
 * File: GerasMode.c
 *
 * Code generated for Simulink model 'GerasMode'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Nov 07 21:17:32 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GerasMode.h"
#include "GerasMode_private.h"

/* Block states (auto storage) */
DW_GerasMode_T GerasMode_DW;

/* Real-time model */
RT_MODEL_GerasMode_T GerasMode_M_;
RT_MODEL_GerasMode_T *const GerasMode_M = &GerasMode_M_;

/* Model step function */
void GerasMode_step(void)
{
  /* Start for MATLABSystem: '<Root>/Motors' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  MATLABSystem: '<Root>/Motors'
   */
  if ((GerasMode_P.Constant_Value >= -1.0) && (GerasMode_P.Constant_Value <= 1.0))
  {
    copter.motors.set_roll(GerasMode_P.Constant_Value);
  }

  if ((GerasMode_P.Constant2_Value >= -1.0) && (GerasMode_P.Constant2_Value <=
       1.0)) {
    copter.motors.set_pitch(GerasMode_P.Constant2_Value);
  }

  if ((GerasMode_P.Constant_Value >= -1.0) && (GerasMode_P.Constant_Value <= 1.0))
  {
    copter.motors.set_yaw(GerasMode_P.Constant_Value);
  }

  if ((GerasMode_P.Constant1_Value >= 0.0) && (GerasMode_P.Constant1_Value <=
       1.0)) {
    copter.motors.set_throttle(GerasMode_P.Constant1_Value);
  }

  /* End of Start for MATLABSystem: '<Root>/Motors' */
}

/* Model initialize function */
void GerasMode_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(GerasMode_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&GerasMode_DW, 0,
                sizeof(DW_GerasMode_T));

  /* Start for MATLABSystem: '<Root>/Motors' */
  GerasMode_DW.obj.isInitialized = 0;
  GerasMode_DW.obj.isInitialized = 1;
}

/* Model terminate function */
void GerasMode_terminate(void)
{
  /* Start for MATLABSystem: '<Root>/Motors' incorporates:
   *  Terminate for MATLABSystem: '<Root>/Motors'
   */
  if (GerasMode_DW.obj.isInitialized == 1) {
    GerasMode_DW.obj.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<Root>/Motors' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * robotarm_student_2021a_Ipos.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ipos".
 *
 * Model version              : 2.132
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 14 16:34:55 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "robotarm_student_2021a_Ipos.h"
#include "robotarm_student_2021a_Ipos_private.h"
#include "robotarm_student_2021a_Ipos_dt.h"

/* Named constants for Chart: '<S1>/Stateflow ' */
#define robotarm_student_202_CALL_EVENT (-1)
#define robotarm_student_202_IN_Seeking (1U)
#define robotarm_student_2_IN_Belt_Home (1U)
#define robotarm_student__IN_Start_Home (2U)
#define robotarm_student__IN_Vacuum_Off (1U)

/* Named constants for Chart: '<S19>/Supervisor' */
#define robotarm__IN_EnableRunAndSafety (6U)
#define robotarm_stud_IN_AirbagConveyor (1U)
#define robotarm_stud_IN_CheckRobotIsON (4U)
#define robotarm_stud_IN_DisableOutputs (5U)
#define robotarm_stud_IN_STOPRobotIsOFF (11U)
#define robotarm_student_2021_IN_Homing (7U)
#define robotarm_student_202_IN_Waiting (13U)
#define robotarm_student_20_IN_MovetoX0 (8U)
#define robotarm_student_20_IN_ResetEnc (9U)
#define robotarm_student_20_IN_Waiting1 (14U)
#define robotarm_student_2_IN_RobotIsON (10U)
#define robotarm_student_IN_AirbagLeft1 (3U)
#define robotarm_student_IN_WaitForRest (12U)
#define robotarm_student__IN_AirbagLeft (2U)

/* Named constants for Chart: '<S20>/Supervisor2' */
#define robotar_IN_EnableRunAndSafety_k (5U)
#define robotarm_st_IN_CheckRobotIsON_b (3U)
#define robotarm_st_IN_DisableOutputs_n (4U)
#define robotarm_stude_IN_AirbagLeft1_h (2U)
#define robotarm_stude_IN_WaitForRest_p (10U)
#define robotarm_studen_IN_AirbagLeft_d (1U)
#define robotarm_student_20_IN_Homing_k (6U)
#define robotarm_student_2_IN_Waiting_a (11U)
#define robotarm_student_IN_RobotIsON_l (9U)
#define robotarm_student__IN_MovetoX0_n (7U)
#define robotarm_student__IN_ResetEnc_g (8U)
#define robotarm_student__IN_Waiting1_f (12U)

/* Named constants for Chart: '<S21>/Supervisor' */
#define robotarm_stude_IN_WaitForRest_m (9U)
#define robotarm_student_2_IN_AirbagTop (3U)
#define robotarm_student_2_IN_Waiting_l (10U)
#define robotarm_student__IN_AirbagDrop (2U)
#define robotarm_student__IN_Waiting1_m (11U)

/* Named constants for Chart: '<S22>/Supervisor' */
#define robotar_IN_EnableRunAndSafety_n (2U)
#define robotarm_st_IN_CheckRobotIsON_k (1U)
#define robotarm_stude_IN_WaitForRest_g (6U)
#define robotarm_student_20_IN_Homing_n (3U)
#define robotarm_student_2_IN_Waiting_n (7U)
#define robotarm_student__IN_MovetoX0_d (4U)
#define robotarm_student__IN_ResetEnc_h (5U)
#define robotarm_student_2021a_I_period (0.00048828125)

/* Block signals (default storage) */
B_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_B;

/* Block states (default storage) */
DW_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_PrevZCX;

/* Real-time model */
static RT_MODEL_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_M_;
RT_MODEL_robotarm_student_2021a_Ipos_T *const robotarm_student_2021a_Ipos_M =
  &robotarm_student_2021a_Ipos_M_;

/* Forward declaration for local functions */
static void robotarm_stude_SystemCore_setup(codertarget_raspi_internal_SC_T *obj);
static void robotarm_stude_SystemCore_setup(codertarget_raspi_internal_SC_T *obj)
{
  MW_SCI_Parity_Type ParityValue;
  MW_SCI_StopBits_Type StopBitsValue;
  uint32_T RxPinLoc;
  uint32_T TxPinLoc;
  void* SCIModuleVoidPtr;
  int32_T i;
  char_T b_SCIModuleLoc[13];
  static const char_T tmp[12] = { '/', 'd', 'e', 'v', '/', 't', 't', 'y', 'A',
    'C', 'M', '0' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  RxPinLoc = MW_UNDEFINED_VALUE;
  TxPinLoc = MW_UNDEFINED_VALUE;
  for (i = 0; i < 12; i++) {
    b_SCIModuleLoc[i] = tmp[i];
  }

  b_SCIModuleLoc[12] = '\x00';
  SCIModuleVoidPtr = (void*)(&b_SCIModuleLoc[0]);
  obj->MW_SCIHANDLE = MW_SCI_Open(SCIModuleVoidPtr, true, RxPinLoc, TxPinLoc);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 9600U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void robotarm_stu_SerialWrite1_Start(DW_SerialWrite1_robotarm_stud_T *localDW)
{
  /* Start for MATLABSystem: '<S26>/Serial Write1' */
  localDW->obj.isInitialized = 0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  robotarm_stude_SystemCore_setup(&localDW->obj);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void robotarm_student_2_SerialWrite1(const uint8_T rtu_0[32],
  DW_SerialWrite1_robotarm_stud_T *localDW)
{
  uint8_T TxDataLocChar[32];

  /* MATLABSystem: '<S26>/Serial Write1' */
  memcpy((void *)&TxDataLocChar[0], (void *)&rtu_0[0], (uint32_T)((size_t)32 *
          sizeof(uint8_T)));
  MW_SCI_Transmit(localDW->obj.MW_SCIHANDLE, &TxDataLocChar[0], 32U);
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
void robotarm_stud_SerialWrite1_Term(DW_SerialWrite1_robotarm_stud_T *localDW)
{
  /* Terminate for MATLABSystem: '<S26>/Serial Write1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_SCI_Close(localDW->obj.MW_SCIHANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S26>/Serial Write1' */
}

/* Model step function */
void robotarm_student_2021a_Ipos_step(void)
{
  /* local block i/o variables */
  real_T rtb_Add2;
  real_T rtb_Add;
  real_T rtb_Saturation;
  int32_T Selector2_tmp;
  int32_T i;

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ipos_DW.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ipos_DW.Subsystem3_SubsysRanBC);

  /* S-Function (ec_Supervisor): '<S3>/S-Function' */

  /* Level2 S-Function Block: '<S3>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* S-Function (Ipos360): '<S14>/ec_Ipos' */

  /* Level2 S-Function Block: '<S14>/ec_Ipos' (Ipos360) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S12>/Gain' */
  robotarm_student_2021a_Ipos_B.Gain = robotarm_student_2021a_Ipos_P.Gain_Gain *
    robotarm_student_2021a_Ipos_B.ec_Ipos_o4;

  /* Constant: '<S31>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1 =
    robotarm_student_2021a_Ipos_P.Constant1_Value;

  /* DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator =
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE;

  /* Sum: '<S19>/Sum' incorporates:
   *  DiscreteIntegrator: '<S19>/Discrete-Time Integrator'
   */
  robotarm_student_2021a_Ipos_B.Sum =
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g +
    robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator;

  /* Sum: '<S19>/Sum2' */
  robotarm_student_2021a_Ipos_B.Sum2 = robotarm_student_2021a_Ipos_B.Sum -
    robotarm_student_2021a_Ipos_B.Gain;

  /* RelationalOperator: '<S19>/Relational Operator' incorporates:
   *  Constant: '<S19>/Constant'
   */
  robotarm_student_2021a_Ipos_B.RelationalOperator =
    (robotarm_student_2021a_Ipos_B.Sum2 <=
     robotarm_student_2021a_Ipos_P.Constant_Value);

  /* Gain: '<S12>/Gain1' */
  robotarm_student_2021a_Ipos_B.Gain1 =
    robotarm_student_2021a_Ipos_P.Gain1_Gain_g2 *
    robotarm_student_2021a_Ipos_B.ec_Ipos_o3;

  /* Constant: '<S37>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1_e =
    robotarm_student_2021a_Ipos_P.Constant1_Value_a;

  /* DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_e =
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o;

  /* Sum: '<S20>/Sum' incorporates:
   *  DiscreteIntegrator: '<S20>/Discrete-Time Integrator'
   */
  robotarm_student_2021a_Ipos_B.Sum_p =
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m +
    robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_e;

  /* Sum: '<S20>/Sum2' */
  robotarm_student_2021a_Ipos_B.Sum2_a = robotarm_student_2021a_Ipos_B.Sum_p -
    robotarm_student_2021a_Ipos_B.Gain1;

  /* RelationalOperator: '<S20>/Relational Operator' incorporates:
   *  Constant: '<S20>/Constant'
   */
  robotarm_student_2021a_Ipos_B.RelationalOperator_f =
    (robotarm_student_2021a_Ipos_B.Sum2_a <=
     robotarm_student_2021a_Ipos_P.Constant_Value_f);

  /* Gain: '<S12>/Gain2' */
  robotarm_student_2021a_Ipos_B.Gain2 = robotarm_student_2021a_Ipos_P.Gain2_Gain
    * robotarm_student_2021a_Ipos_B.ec_Ipos_o2;

  /* Constant: '<S47>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1_f =
    robotarm_student_2021a_Ipos_P.Constant1_Value_e;

  /* DiscreteIntegrator: '<S47>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_p =
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j;

  /* Sum: '<S21>/Sum' incorporates:
   *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
   */
  robotarm_student_2021a_Ipos_B.Sum_o =
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a +
    robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_p;

  /* Sum: '<S21>/Sum2' */
  robotarm_student_2021a_Ipos_B.Sum2_e = robotarm_student_2021a_Ipos_B.Sum_o -
    robotarm_student_2021a_Ipos_B.Gain2;

  /* RelationalOperator: '<S21>/Relational Operator' incorporates:
   *  Constant: '<S21>/Constant'
   */
  robotarm_student_2021a_Ipos_B.RelationalOperator_k =
    (robotarm_student_2021a_Ipos_B.Sum2_e >=
     robotarm_student_2021a_Ipos_P.Constant_Value_o);

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S16>/Constant'
   *  Sum: '<S13>/Add1'
   */
  robotarm_student_2021a_Ipos_B.Compare = ((int32_T)(((uint32_T)
    robotarm_student_2021a_Ipos_B.RelationalOperator +
    robotarm_student_2021a_Ipos_B.RelationalOperator_f) +
    robotarm_student_2021a_Ipos_B.RelationalOperator_k) ==
    robotarm_student_2021a_Ipos_P.CompareToConstant1_const);

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S15>/Constant'
   *  UnitDelay: '<S13>/Unit Delay'
   */
  robotarm_student_2021a_Ipos_B.Compare_j =
    (robotarm_student_2021a_Ipos_DW.UnitDelay_DSTATE ==
     robotarm_student_2021a_Ipos_P.CompareToConstant_const);

  /* MATLAB Function: '<S19>/Angle2Z' incorporates:
   *  MATLAB Function: '<S21>/Angle2Z'
   *  SignalConversion generated from: '<S30>/ SFunction '
   */
  robotarm_student_2021a_Ipos_B.fx1_tmp = cos
    (-robotarm_student_2021a_Ipos_B.Gain1 + 1.3157007486526573) * 0.08;
  robotarm_student_2021a_Ipos_B.fy1_tmp = sin
    (-robotarm_student_2021a_Ipos_B.Gain1 + 1.3157007486526573) * 0.08;
  robotarm_student_2021a_Ipos_B.fy2_tmp = sin
    (robotarm_student_2021a_Ipos_B.Gain2 + 0.615) * 0.13 + 0.165;
  robotarm_student_2021a_Ipos_B.d12_tmp = cos
    (robotarm_student_2021a_Ipos_B.Gain2 + 0.615) * 0.13 -
    robotarm_student_2021a_Ipos_B.fx1_tmp;
  robotarm_student_2021a_Ipos_B.d13_tmp = robotarm_student_2021a_Ipos_B.fy2_tmp
    - robotarm_student_2021a_Ipos_B.fy1_tmp;
  robotarm_student_2021a_Ipos_B.d12 = sqrt(robotarm_student_2021a_Ipos_B.d12_tmp
    * robotarm_student_2021a_Ipos_B.d12_tmp +
    robotarm_student_2021a_Ipos_B.d13_tmp *
    robotarm_student_2021a_Ipos_B.d13_tmp);
  robotarm_student_2021a_Ipos_B.fy1_tmp = sqrt((0.165 -
    robotarm_student_2021a_Ipos_B.fy1_tmp) * (0.165 -
    robotarm_student_2021a_Ipos_B.fy1_tmp) +
    robotarm_student_2021a_Ipos_B.fx1_tmp *
    robotarm_student_2021a_Ipos_B.fx1_tmp);
  robotarm_student_2021a_Ipos_B.fx1_tmp = robotarm_student_2021a_Ipos_B.d12 *
    robotarm_student_2021a_Ipos_B.d12;
  robotarm_student_2021a_Ipos_B.y_b = ((robotarm_student_2021a_Ipos_B.fy2_tmp -
    sin(((3.1415926535897931 - acos(((robotarm_student_2021a_Ipos_B.fx1_tmp +
    0.016900000000000002) - robotarm_student_2021a_Ipos_B.fy1_tmp *
    robotarm_student_2021a_Ipos_B.fy1_tmp) / (2.0 *
    robotarm_student_2021a_Ipos_B.d12 * 0.13))) - acos
         (((robotarm_student_2021a_Ipos_B.fx1_tmp + 0.0144) -
           0.016900000000000002) / (2.0 * robotarm_student_2021a_Ipos_B.d12 *
    0.12))) - (robotarm_student_2021a_Ipos_B.Gain2 + 0.615)) * 0.185) - 0.045) +
    0.081;

  /* Constant: '<S13>/set_robot_calibration_r' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_r =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_r_Value;

  /* Chart: '<S19>/Supervisor' */
  if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c < 8191U) {
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c++;
  }

  robotarm_student_2021a_Ipos_DW.sfEvent_k = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ipos_DW.is_active_c12_robotarm_student_ == 0U) {
    robotarm_student_2021a_Ipos_DW.is_active_c12_robotarm_student_ = 1U;
    robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
      robotarm_student_202_IN_Waiting;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    robotarm_student_2021a_Ipos_B.Ready_a = 0.0;
    robotarm_student_2021a_Ipos_B.toPoint_b = 0.0;
    robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
    robotarm_student_2021a_Ipos_B.jogSpeed_o = -0.001;
    robotarm_student_2021a_Ipos_B.homeControllerEnabled_o = 0.01;
  } else {
    switch (robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I) {
     case robotarm_stud_IN_AirbagConveyor:
      robotarm_student_2021a_Ipos_B.airBagEnabled_f = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_stud_IN_DisableOutputs;
        robotarm_student_2021a_Ipos_B.controlEnabled_l = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_j = 1.0;
      }
      break;

     case robotarm_student__IN_AirbagLeft:
      robotarm_student_2021a_Ipos_B.airBagEnabled_f = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_stud_IN_DisableOutputs;
        robotarm_student_2021a_Ipos_B.controlEnabled_l = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_j = 1.0;
      }
      break;

     case robotarm_student_IN_AirbagLeft1:
      robotarm_student_2021a_Ipos_B.airBagEnabled_f = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_stud_IN_DisableOutputs;
        robotarm_student_2021a_Ipos_B.controlEnabled_l = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_j = 1.0;
      }
      break;

     case robotarm_stud_IN_CheckRobotIsON:
      robotarm_student_2021a_Ipos_B.freddy_k = 1.0;
      if (robotarm_student_2021a_Ipos_B.Gain < -3.0) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_stud_IN_STOPRobotIsOFF;
        robotarm_student_2021a_Ipos_B.StopSim_j = 1.0;
      } else {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student_2_IN_RobotIsON;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;
      }
      break;

     case robotarm_stud_IN_DisableOutputs:
      robotarm_student_2021a_Ipos_B.controlEnabled_l = 0.0;
      robotarm_student_2021a_Ipos_B.StopSim_j = 1.0;
      break;

     case robotarm__IN_EnableRunAndSafety:
      robotarm_student_2021a_Ipos_B.resetEnc_k = 0.0;
      if (robotarm_student_2021a_Ipos_B.Gain > 2.7) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student_IN_AirbagLeft1;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos_l =
          robotarm_student_2021a_Ipos_B.Gain;
        robotarm_student_2021a_Ipos_B.airBagEnabled_f = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef_g =
          robotarm_student_2021a_Ipos_DW.currentcarPos_l - 0.02;
      } else if (robotarm_student_2021a_Ipos_B.Gain < -1.1) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student__IN_AirbagLeft;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos_l =
          robotarm_student_2021a_Ipos_B.Gain;
        robotarm_student_2021a_Ipos_B.airBagEnabled_f = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef_g =
          robotarm_student_2021a_Ipos_DW.currentcarPos_l + 0.02;
      } else if ((robotarm_student_2021a_Ipos_B.y_b < 0.056) &&
                 (robotarm_student_2021a_Ipos_B.Gain < 1.3)) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_stud_IN_AirbagConveyor;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos_l =
          robotarm_student_2021a_Ipos_B.Gain;
        robotarm_student_2021a_Ipos_B.airBagEnabled_f = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef_g =
          robotarm_student_2021a_Ipos_DW.currentcarPos_l + 0.02;
      }
      break;

     case robotarm_student_2021_IN_Homing:
      /* Transition if homeswitch becomes high */
      if (robotarm_student_2021a_Ipos_B.RelationalOperator) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student_20_IN_MovetoX0;
        robotarm_student_2021a_Ipos_B.jogSpeed_o = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_b =
          robotarm_student_2021a_Ipos_B.set_robot_calibration_r;
      }
      break;

     case robotarm_student_20_IN_MovetoX0:
      if ((robotarm_student_2021a_Ipos_B.Sum2 < 0.005) &&
          (robotarm_student_2021a_Ipos_B.set_robot_calibration_r -
           robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator <= 0.002)) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_stud_IN_CheckRobotIsON;
        robotarm_student_2021a_Ipos_B.freddy_k = 1.0;
      }
      break;

     case robotarm_student_20_IN_ResetEnc:
      robotarm_student_2021a_Ipos_B.resetEnc_k = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm__IN_EnableRunAndSafety;
        robotarm_student_2021a_Ipos_B.resetEnc_k = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 0.0;
      }
      break;

     case robotarm_student_2_IN_RobotIsON:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student_IN_WaitForRest;
        robotarm_student_2021a_Ipos_B.Ready_a = 1.0;
      }
      break;

     case robotarm_stud_IN_STOPRobotIsOFF:
      robotarm_student_2021a_Ipos_B.StopSim_j = 1.0;
      break;

     case robotarm_student_IN_WaitForRest:
      if (robotarm_student_2021a_Ipos_B.Compare_j) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student_20_IN_ResetEnc;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 100.0;
        robotarm_student_2021a_Ipos_B.resetEnc_k = 1.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_o = 0.0;
      }
      break;

     case robotarm_student_202_IN_Waiting:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student_20_IN_Waiting1;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_a = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_b = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_o = 0.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_o = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_a = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_b = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_o = -0.001;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_o = 0.01;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I =
          robotarm_student_2021_IN_Homing;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ipos_B.Ready_a = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_b = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_o = -0.4;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_o = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_a = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_b = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_o = 0.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_o = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S19>/Supervisor' */

  /* Constant: '<S13>/set_robot_calibration_x' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_x =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_x_Value;

  /* Chart: '<S20>/Supervisor2' */
  if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me < 8191U) {
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me++;
  }

  robotarm_student_2021a_Ipos_DW.sfEvent_h = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ipos_DW.is_active_c16_robotarm_student_ == 0U) {
    robotarm_student_2021a_Ipos_DW.is_active_c16_robotarm_student_ = 1U;
    robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
      robotarm_student_2_IN_Waiting_a;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    robotarm_student_2021a_Ipos_B.Ready_i = 0.0;
    robotarm_student_2021a_Ipos_B.toPoint_e = 0.0;
    robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
    robotarm_student_2021a_Ipos_B.jogSpeed_c = -0.001;
    robotarm_student_2021a_Ipos_B.homeControllerEnabled_k = 0.01;
  } else {
    switch (robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I) {
     case robotarm_studen_IN_AirbagLeft_d:
      robotarm_student_2021a_Ipos_B.airBagEnabled_o = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_st_IN_DisableOutputs_n;
        robotarm_student_2021a_Ipos_B.controlEnabled_a = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_o = 1.0;
      }
      break;

     case robotarm_stude_IN_AirbagLeft1_h:
      robotarm_student_2021a_Ipos_B.airBagEnabled_o = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_st_IN_DisableOutputs_n;
        robotarm_student_2021a_Ipos_B.controlEnabled_a = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_o = 1.0;
      }
      break;

     case robotarm_st_IN_CheckRobotIsON_b:
      robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
        robotarm_student_IN_RobotIsON_l;
      robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me = 0U;
      break;

     case robotarm_st_IN_DisableOutputs_n:
      robotarm_student_2021a_Ipos_B.controlEnabled_a = 0.0;
      robotarm_student_2021a_Ipos_B.StopSim_o = 1.0;
      break;

     case robotar_IN_EnableRunAndSafety_k:
      robotarm_student_2021a_Ipos_B.resetEnc_c = 0.0;
      if (robotarm_student_2021a_Ipos_B.Gain1 > 0.46) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_stude_IN_AirbagLeft1_h;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos_d =
          robotarm_student_2021a_Ipos_B.Gain1;
        robotarm_student_2021a_Ipos_B.airBagEnabled_o = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef_a =
          robotarm_student_2021a_Ipos_DW.currentcarPos_d - 0.02;
      } else if (robotarm_student_2021a_Ipos_B.Gain1 < -0.45) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_studen_IN_AirbagLeft_d;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos_d =
          robotarm_student_2021a_Ipos_B.Gain1;
        robotarm_student_2021a_Ipos_B.airBagEnabled_o = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef_a =
          robotarm_student_2021a_Ipos_DW.currentcarPos_d + 0.02;
      }
      break;

     case robotarm_student_20_IN_Homing_k:
      /* Transition if homeswitch becomes high */
      if (robotarm_student_2021a_Ipos_B.RelationalOperator_f) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_student__IN_MovetoX0_n;
        robotarm_student_2021a_Ipos_B.jogSpeed_c = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_e =
          robotarm_student_2021a_Ipos_B.set_robot_calibration_x;
      }
      break;

     case robotarm_student__IN_MovetoX0_n:
      if ((robotarm_student_2021a_Ipos_B.Sum2_a < 0.005) &&
          (robotarm_student_2021a_Ipos_B.set_robot_calibration_x -
           robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_e <= 0.002)) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_st_IN_CheckRobotIsON_b;
      }
      break;

     case robotarm_student__IN_ResetEnc_g:
      robotarm_student_2021a_Ipos_B.resetEnc_c = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotar_IN_EnableRunAndSafety_k;
        robotarm_student_2021a_Ipos_B.resetEnc_c = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 0.0;
      }
      break;

     case robotarm_student_IN_RobotIsON_l:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_stude_IN_WaitForRest_p;
        robotarm_student_2021a_Ipos_B.Ready_i = 1.0;
      }
      break;

     case robotarm_stude_IN_WaitForRest_p:
      if (robotarm_student_2021a_Ipos_B.Compare_j) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_student__IN_ResetEnc_g;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 100.0;
        robotarm_student_2021a_Ipos_B.resetEnc_c = 1.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_k = 0.0;
      }
      break;

     case robotarm_student_2_IN_Waiting_a:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_student__IN_Waiting1_f;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_i = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_e = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_c = 0.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_k = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_i = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_e = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_c = -0.001;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_k = 0.01;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I =
          robotarm_student_20_IN_Homing_k;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ipos_B.Ready_i = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_e = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_c = -0.8;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_k = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_i = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint_e = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_c = 0.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_k = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S20>/Supervisor2' */

  /* MATLAB Function: '<S21>/Angle2Z' incorporates:
   *  MATLAB Function: '<S19>/Angle2Z'
   *  SignalConversion generated from: '<S30>/ SFunction '
   */
  robotarm_student_2021a_Ipos_B.d12 = sqrt(robotarm_student_2021a_Ipos_B.d12_tmp
    * robotarm_student_2021a_Ipos_B.d12_tmp +
    robotarm_student_2021a_Ipos_B.d13_tmp *
    robotarm_student_2021a_Ipos_B.d13_tmp);
  robotarm_student_2021a_Ipos_B.fx1_tmp = robotarm_student_2021a_Ipos_B.d12 *
    robotarm_student_2021a_Ipos_B.d12;
  robotarm_student_2021a_Ipos_B.y = ((robotarm_student_2021a_Ipos_B.fy2_tmp -
    sin(((3.1415926535897931 - acos(((robotarm_student_2021a_Ipos_B.fx1_tmp +
    0.016900000000000002) - robotarm_student_2021a_Ipos_B.fy1_tmp *
    robotarm_student_2021a_Ipos_B.fy1_tmp) / (2.0 *
    robotarm_student_2021a_Ipos_B.d12 * 0.13))) - acos
         (((robotarm_student_2021a_Ipos_B.fx1_tmp + 0.0144) -
           0.016900000000000002) / (2.0 * robotarm_student_2021a_Ipos_B.d12 *
    0.12))) - (robotarm_student_2021a_Ipos_B.Gain2 + 0.615)) * 0.185) - 0.045) +
    0.081;

  /* Constant: '<S13>/set_robot_calibration_z' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_z =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_z_Value;

  /* Chart: '<S21>/Supervisor' */
  if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m < 8191U) {
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m++;
  }

  robotarm_student_2021a_Ipos_DW.sfEvent_n = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ipos_DW.is_active_c18_robotarm_student_ == 0U) {
    robotarm_student_2021a_Ipos_DW.is_active_c18_robotarm_student_ = 1U;
    robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
      robotarm_student_2_IN_Waiting_l;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    robotarm_student_2021a_Ipos_B.Ready_n = 0.0;
    robotarm_student_2021a_Ipos_B.toPoint = 0.0;
    robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
    robotarm_student_2021a_Ipos_B.jogSpeed_i = 0.001;
    robotarm_student_2021a_Ipos_B.homeControllerEnabled_b = 0.1;
  } else {
    switch (robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I) {
     case robotarm_stud_IN_AirbagConveyor:
      robotarm_student_2021a_Ipos_B.airBagEnabled = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_st_IN_DisableOutputs_n;
        robotarm_student_2021a_Ipos_B.controlEnabled = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_n = 1.0;
      }
      break;

     case robotarm_student__IN_AirbagDrop:
      robotarm_student_2021a_Ipos_B.airBagEnabled = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_st_IN_DisableOutputs_n;
        robotarm_student_2021a_Ipos_B.controlEnabled = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_n = 1.0;
      }
      break;

     case robotarm_student_2_IN_AirbagTop:
      robotarm_student_2021a_Ipos_B.airBagEnabled = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_st_IN_DisableOutputs_n;
        robotarm_student_2021a_Ipos_B.controlEnabled = 0.0;
        robotarm_student_2021a_Ipos_B.StopSim_n = 1.0;
      }
      break;

     case robotarm_st_IN_DisableOutputs_n:
      robotarm_student_2021a_Ipos_B.controlEnabled = 0.0;
      robotarm_student_2021a_Ipos_B.StopSim_n = 1.0;
      break;

     case robotar_IN_EnableRunAndSafety_k:
      robotarm_student_2021a_Ipos_B.resetEnc_g = 0.0;
      if ((robotarm_student_2021a_Ipos_B.y < 0.056) &&
          (robotarm_student_2021a_Ipos_B.Gain < 1.3)) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_stud_IN_AirbagConveyor;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos =
          robotarm_student_2021a_Ipos_B.Gain2;
        robotarm_student_2021a_Ipos_B.airBagEnabled = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef =
          robotarm_student_2021a_Ipos_DW.currentcarPos + 0.1;
      } else if (robotarm_student_2021a_Ipos_B.Gain2 > 0.3) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_student_2_IN_AirbagTop;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos =
          robotarm_student_2021a_Ipos_B.Gain2;
        robotarm_student_2021a_Ipos_B.airBagEnabled = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef =
          robotarm_student_2021a_Ipos_DW.currentcarPos - 0.02;
      } else if ((robotarm_student_2021a_Ipos_B.y < 0.01) &&
                 (robotarm_student_2021a_Ipos_B.Gain > 1.3)) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_student__IN_AirbagDrop;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m = 0U;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ipos_DW.currentcarPos =
          robotarm_student_2021a_Ipos_B.Gain2;
        robotarm_student_2021a_Ipos_B.airBagEnabled = 1.0;
        robotarm_student_2021a_Ipos_B.airBagRef =
          robotarm_student_2021a_Ipos_DW.currentcarPos + 0.02;
      }
      break;

     case robotarm_student_20_IN_Homing_k:
      /* Transition if homeswitch becomes high */
      if (robotarm_student_2021a_Ipos_B.RelationalOperator_k) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_student__IN_MovetoX0_n;
        robotarm_student_2021a_Ipos_B.jogSpeed_i = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint =
          robotarm_student_2021a_Ipos_B.set_robot_calibration_z;
      }
      break;

     case robotarm_student__IN_MovetoX0_n:
      if ((robotarm_student_2021a_Ipos_B.Sum2_e < 0.005) &&
          (robotarm_student_2021a_Ipos_B.set_robot_calibration_z -
           robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_p <= 0.002)) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_stude_IN_WaitForRest_m;
        robotarm_student_2021a_Ipos_B.Ready_n = 1.0;
      }
      break;

     case robotarm_student__IN_ResetEnc_g:
      robotarm_student_2021a_Ipos_B.resetEnc_g = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotar_IN_EnableRunAndSafety_k;
        robotarm_student_2021a_Ipos_B.resetEnc_g = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 0.0;
      }
      break;

     case robotarm_stude_IN_WaitForRest_m:
      if (robotarm_student_2021a_Ipos_B.Compare_j) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_student__IN_ResetEnc_g;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m = 0U;
        robotarm_student_2021a_Ipos_B.resetEnc_g = 1.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_b = 0.0;
        robotarm_student_2021a_Ipos_B.Ready_n = 1.0;
      }
      break;

     case robotarm_student_2_IN_Waiting_l:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m >= 4096U) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_student__IN_Waiting1_m;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_n = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_i = 0.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_b = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_n = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_i = 0.001;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_b = 0.1;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m >= 4096U) {
        robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I =
          robotarm_student_20_IN_Homing_k;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ipos_B.toPoint = 0.0;
        robotarm_student_2021a_Ipos_B.Ready_n = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_i = 0.8;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_b = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ipos_B.Ready_n = 0.0;
        robotarm_student_2021a_Ipos_B.toPoint = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed_i = 0.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_b = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S21>/Supervisor' */

  /* Chart: '<S22>/Supervisor' */
  if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1 < 8191U) {
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1++;
  }

  robotarm_student_2021a_Ipos_DW.sfEvent = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ipos_DW.is_active_c1_robotarm_student_2 == 0U) {
    robotarm_student_2021a_Ipos_DW.is_active_c1_robotarm_student_2 = 1U;
    robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip =
      robotarm_student_2_IN_Waiting_n;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1 = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoi d moving to X0 too
       early */
  } else {
    switch (robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip) {
     case robotarm_st_IN_CheckRobotIsON_k:
      robotarm_student_2021a_Ipos_B.jogSpeed = 0.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1 >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip =
          robotarm_stude_IN_WaitForRest_g;
        robotarm_student_2021a_Ipos_B.Ready = 1.0;
      }
      break;

     case robotar_IN_EnableRunAndSafety_n:
      robotarm_student_2021a_Ipos_B.resetEnc = 0.0;
      robotarm_student_2021a_Ipos_B.homingBusy = 0.0;
      break;

     case robotarm_student_20_IN_Homing_n:
      robotarm_student_2021a_Ipos_B.Ready = 0.0;
      robotarm_student_2021a_Ipos_B.homingBusy = 1.0;
      robotarm_student_2021a_Ipos_B.jogSpeed = 20.0;
      robotarm_student_2021a_Ipos_B.homeControllerEnabled = 1.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1 >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip =
          robotarm_student__IN_MovetoX0_d;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1 = 0U;
        robotarm_student_2021a_Ipos_B.jogSpeed = -20.0;
      }
      break;

     case robotarm_student__IN_MovetoX0_d:
      robotarm_student_2021a_Ipos_B.jogSpeed = -20.0;

      /* Allow time for moving */
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1 >= 6144U) {
        robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip =
          robotarm_st_IN_CheckRobotIsON_k;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1 = 0U;
        robotarm_student_2021a_Ipos_B.jogSpeed = 0.0;
      }
      break;

     case robotarm_student__IN_ResetEnc_h:
      robotarm_student_2021a_Ipos_B.resetEnc = 1.0;
      robotarm_student_2021a_Ipos_B.homeControllerEnabled = 0.0;
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1 >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip =
          robotar_IN_EnableRunAndSafety_n;
        robotarm_student_2021a_Ipos_B.resetEnc = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy = 0.0;
      }
      break;

     case robotarm_stude_IN_WaitForRest_g:
      robotarm_student_2021a_Ipos_B.Ready = 1.0;
      if (robotarm_student_2021a_Ipos_B.Compare_j) {
        robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip =
          robotarm_student__IN_ResetEnc_h;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1 = 0U;
        robotarm_student_2021a_Ipos_B.resetEnc = 1.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled = 0.0;
      }
      break;

     default:
      /* case IN_Waiting: */
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1 >= 2048U) {
        robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip =
          robotarm_student_20_IN_Homing_n;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i1 = 0U;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ipos_B.Ready = 0.0;
        robotarm_student_2021a_Ipos_B.homingBusy = 1.0;
        robotarm_student_2021a_Ipos_B.jogSpeed = 20.0;
        robotarm_student_2021a_Ipos_B.homeControllerEnabled = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S22>/Supervisor' */

  /* Sum: '<S17>/Add' */
  robotarm_student_2021a_Ipos_B.fy2_tmp =
    ((robotarm_student_2021a_Ipos_B.homingBusy_l +
      robotarm_student_2021a_Ipos_B.homingBusy_j) +
     robotarm_student_2021a_Ipos_B.homingBusy_n) +
    robotarm_student_2021a_Ipos_B.homingBusy;

  /* Signum: '<S17>/Sign' */
  if (robotarm_student_2021a_Ipos_B.fy2_tmp < 0.0) {
    robotarm_student_2021a_Ipos_B.fy2_tmp = -1.0;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp > 0.0) {
    robotarm_student_2021a_Ipos_B.fy2_tmp = 1.0;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp == 0.0) {
    robotarm_student_2021a_Ipos_B.fy2_tmp = 0.0;
  } else {
    robotarm_student_2021a_Ipos_B.fy2_tmp = (rtNaN);
  }

  /* End of Signum: '<S17>/Sign' */

  /* Sum: '<S17>/Add1' incorporates:
   *  Constant: '<S17>/Constant'
   */
  robotarm_student_2021a_Ipos_B.Add1 =
    robotarm_student_2021a_Ipos_P.Constant_Value_m -
    robotarm_student_2021a_Ipos_B.fy2_tmp;

  /* Sum: '<S13>/Add2' incorporates:
   *  Gain: '<S13>/Gain'
   *  Logic: '<S13>/NOT'
   */
  rtb_Add2 = (((robotarm_student_2021a_Ipos_P.Gain_Gain_m *
                robotarm_student_2021a_Ipos_B.airBagEnabled_f +
                robotarm_student_2021a_Ipos_P.Gain_Gain_m *
                robotarm_student_2021a_Ipos_B.airBagEnabled_o) +
               robotarm_student_2021a_Ipos_P.Gain_Gain_m *
               robotarm_student_2021a_Ipos_B.airBagEnabled) + (real_T)
              !(robotarm_student_2021a_Ipos_B.Add1 != 0.0)) +
    robotarm_student_2021a_Ipos_B.homingBusy_l;

  /* Gain: '<S12>/Gain3' */
  robotarm_student_2021a_Ipos_B.Gain3 = robotarm_student_2021a_Ipos_P.Gain3_Gain
    * robotarm_student_2021a_Ipos_B.ec_Ipos_o5;

  /* Gain: '<S12>/Gain5' incorporates:
   *  Gain: '<S12>/Gain4'
   */
  robotarm_student_2021a_Ipos_B.Gain5 = robotarm_student_2021a_Ipos_P.Gain4_Gain
    * robotarm_student_2021a_Ipos_B.ec_Ipos_o1 *
    robotarm_student_2021a_Ipos_P.Gain5_Gain;

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable '
   */
  robotarm_student_2021a_Ipos_DW.Controller_MODE =
    (robotarm_student_2021a_Ipos_B.Add1 > 0.0);
  if (robotarm_student_2021a_Ipos_DW.Controller_MODE) {
    /* RelationalOperator: '<S10>/FixPt Relational Operator' incorporates:
     *  Constant: '<S4>/Object detection matrix'
     *  UnitDelay: '<S10>/Delay Input1'
     */
    for (i = 0; i < 12; i++) {
      robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[i] =
        (robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[i] !=
         robotarm_student_2021a_Ipos_DW.DelayInput1_DSTATE[i]);
    }

    /* End of RelationalOperator: '<S10>/FixPt Relational Operator' */
    for (i = 0; i < 3; i++) {
      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      robotarm_student_2021a_Ipos_B.Selector2[3 * i] =
        robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[3 * i];

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      Selector2_tmp = 3 * i + 1;

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      robotarm_student_2021a_Ipos_B.Selector2[Selector2_tmp] =
        robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[Selector2_tmp];

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       *  Selector: '<S4>/Selector'
       */
      Selector2_tmp = 3 * i + 2;
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[Selector2_tmp];

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      robotarm_student_2021a_Ipos_B.Selector2[Selector2_tmp] =
        robotarm_student_2021a_Ipos_B.fy2_tmp;

      /* Selector: '<S4>/Selector' */
      robotarm_student_2021a_Ipos_B.Selector[i] =
        robotarm_student_2021a_Ipos_B.fy2_tmp;
    }

    /* Selector: '<S1>/Selector' incorporates:
     *  Selector: '<S4>/Selector2'
     */
    robotarm_student_2021a_Ipos_B.Selector_g =
      robotarm_student_2021a_Ipos_B.Selector2[0];

    /* Selector: '<S1>/Selector1' incorporates:
     *  Selector: '<S4>/Selector2'
     */
    robotarm_student_2021a_Ipos_B.Selector1 =
      robotarm_student_2021a_Ipos_B.Selector2[1];

    /* Selector: '<S1>/Selector2' incorporates:
     *  Selector: '<S4>/Selector2'
     */
    robotarm_student_2021a_Ipos_B.Selector2_i =
      robotarm_student_2021a_Ipos_B.Selector2[2];

    /* SignalConversion: '<S1>/Signal Conversion1' */
    robotarm_student_2021a_Ipos_B.SignalConversion1 =
      robotarm_student_2021a_Ipos_B.Gain1;

    /* Gain: '<S9>/Gain1' incorporates:
     *  Constant: '<S1>/Reference X [rad]'
     *  Sum: '<S1>/Sum1'
     */
    robotarm_student_2021a_Ipos_B.Gain1_c =
      (robotarm_student_2021a_Ipos_P.ReferenceXrad_Value -
       robotarm_student_2021a_Ipos_B.SignalConversion1) *
      robotarm_student_2021a_Ipos_P.Gain1_Gain;

    /* S-Function (dpd): '<S9>/Dctpd2' */

    /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S9>/Dctleadlag3' */

    /* Level2 S-Function Block: '<S9>/Dctleadlag3' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* SignalConversion: '<S1>/Signal Conversion' */
    robotarm_student_2021a_Ipos_B.SignalConversion =
      robotarm_student_2021a_Ipos_B.Gain2;

    /* Gain: '<S8>/Gain1' incorporates:
     *  Constant: '<S1>/Reference Z [rad]'
     *  Sum: '<S1>/Sum7'
     */
    robotarm_student_2021a_Ipos_B.Gain1_k =
      (robotarm_student_2021a_Ipos_P.ReferenceZrad_Value -
       robotarm_student_2021a_Ipos_B.SignalConversion) *
      robotarm_student_2021a_Ipos_P.Gain1_Gain_e;

    /* S-Function (dpd): '<S8>/Dctpd2' */

    /* Level2 S-Function Block: '<S8>/Dctpd2' (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S8>/Dctleadlag3' */

    /* Level2 S-Function Block: '<S8>/Dctleadlag3' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* DiscreteIntegrator: '<S1>/Discrete  integrator' */
    robotarm_student_2021a_Ipos_B.Conveyorreferencemm =
      robotarm_student_2021a_Ipos_DW.Discreteintegrator_DSTATE;

    /* Gain: '<S5>/Gain1' incorporates:
     *  Sum: '<S1>/Sum3'
     */
    robotarm_student_2021a_Ipos_B.Gain1_g =
      (robotarm_student_2021a_Ipos_B.Conveyorreferencemm -
       robotarm_student_2021a_Ipos_B.Gain3) *
      robotarm_student_2021a_Ipos_P.Gain1_Gain_g;

    /* S-Function (dweakint): '<S5>/Dctintegrator3' */

    /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S5>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[5];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S5>/Dctleadlag' */

    /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[6];
      sfcnOutputs(rts,0);
    }

    /* S-Function (getSystemClockTimeval): '<S4>/S-Function Builder' */
    getSystemClockTimeval_Outputs_wrapper
      (&robotarm_student_2021a_Ipos_B.SFunctionBuilder);

    /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S11>/Enable'
     */
    /* RelationalOperator: '<S10>/FixPt Relational Operator' incorporates:
     *  Inport: '<S11>/In1'
     */
    if (robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[0] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[1] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[2] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[3] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[4] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[5] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[6] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[7] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[8] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[9] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[10] ||
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[11]) {
      robotarm_student_2021a_Ipos_B.In1 =
        robotarm_student_2021a_Ipos_B.SFunctionBuilder;
      srUpdateBC(robotarm_student_2021a_Ipos_DW.EnabledSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */

    /* Sum: '<S4>/Sum' incorporates:
     *  Constant: '<S4>/Object detection matrix'
     *  Selector: '<S4>/Selector3'
     */
    robotarm_student_2021a_Ipos_B.Sum_m = robotarm_student_2021a_Ipos_B.In1 -
      robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[9];

    /* Sum: '<S1>/Sum6' incorporates:
     *  Constant: '<S1>/Feedfoward Z [V]'
     */
    robotarm_student_2021a_Ipos_B.Sum6 =
      robotarm_student_2021a_Ipos_P.FeedfowardZV_Value +
      robotarm_student_2021a_Ipos_B.Dctleadlag3_m;

    /* Sum: '<S1>/Sum5' incorporates:
     *  Constant: '<S1>/Feedfoward X [V]'
     */
    robotarm_student_2021a_Ipos_B.Sum5 =
      robotarm_student_2021a_Ipos_P.FeedfowardXV_Value +
      robotarm_student_2021a_Ipos_B.Dctleadlag3;

    /* SignalConversion: '<S1>/Signal Conversion2' */
    robotarm_student_2021a_Ipos_B.SignalConversion2 =
      robotarm_student_2021a_Ipos_B.Gain;

    /* Sum: '<S1>/Sum4' incorporates:
     *  Constant: '<S1>/Feedfoward R [V]'
     *  Constant: '<S1>/Reference R [rad]'
     *  Sum: '<S1>/Sum2'
     */
    robotarm_student_2021a_Ipos_B.Sum4 =
      (robotarm_student_2021a_Ipos_P.ReferenceRrad_Value -
       robotarm_student_2021a_Ipos_B.SignalConversion2) +
      robotarm_student_2021a_Ipos_P.FeedfowardRV_Value;

    /* Saturate: '<S1>/Saturation ' incorporates:
     *  Constant: '<S1>/Conveyor speed [mm//s]'
     */
    if (robotarm_student_2021a_Ipos_P.Conveyorspeedmms_Value >
        robotarm_student_2021a_Ipos_P.Saturation_UpperSat) {
      /* Saturate: '<S1>/Saturation ' */
      rtb_Saturation = robotarm_student_2021a_Ipos_P.Saturation_UpperSat;
    } else if (robotarm_student_2021a_Ipos_P.Conveyorspeedmms_Value <
               robotarm_student_2021a_Ipos_P.Saturation_LowerSat) {
      /* Saturate: '<S1>/Saturation ' */
      rtb_Saturation = robotarm_student_2021a_Ipos_P.Saturation_LowerSat;
    } else {
      /* Saturate: '<S1>/Saturation ' */
      rtb_Saturation = robotarm_student_2021a_Ipos_P.Conveyorspeedmms_Value;
    }

    /* End of Saturate: '<S1>/Saturation ' */

    /* Gain: '<S6>/Gain1' incorporates:
     *  Constant: '<S1>/Reference Vacuum [bar]'
     *  Sum: '<S1>/Sum9'
     */
    robotarm_student_2021a_Ipos_B.Gain1_o1 =
      (robotarm_student_2021a_Ipos_P.ReferenceVacuumbar_Value -
       robotarm_student_2021a_Ipos_B.Gain5) *
      robotarm_student_2021a_Ipos_P.Gain1_Gain_b;

    /* ManualSwitch: '<S1>/Manual Switch' */
    if (robotarm_student_2021a_Ipos_P.ManualSwitch_CurrentSetting == 1) {
      /* ManualSwitch: '<S1>/Manual Switch' incorporates:
       *  Constant: '<S1>/Suck'
       */
      robotarm_student_2021a_Ipos_B.Doubleclickswitch =
        robotarm_student_2021a_Ipos_P.Suck_Value;
    } else {
      /* ManualSwitch: '<S1>/Manual Switch' incorporates:
       *  Constant: '<S1>/ Blow'
       */
      robotarm_student_2021a_Ipos_B.Doubleclickswitch =
        robotarm_student_2021a_Ipos_P.Blow_Value;
    }

    /* End of ManualSwitch: '<S1>/Manual Switch' */

    /* ManualSwitch: '<S1>/Manual Switch1' incorporates:
     *  StringConstant: '<S1>/Color; set with string; black or white'
     *  StringConstant: '<S1>/Color; specified in 6 hex digits, rrggbb'
     */
    if (robotarm_student_2021a_Ipos_P.ManualSwitch1_CurrentSetting == 1) {
      strncpy(&robotarm_student_2021a_Ipos_B.ManualSwitch1[0],
              &robotarm_student_2021a_Ipos_P.Colorspecifiedin6hexdigitsrrggb[0],
              255U);
      robotarm_student_2021a_Ipos_B.ManualSwitch1[255] = '\x00';
    } else {
      strncpy(&robotarm_student_2021a_Ipos_B.ManualSwitch1[0],
              &robotarm_student_2021a_Ipos_P.Colorsetwithstringblackorwhite_[0],
              255U);
      robotarm_student_2021a_Ipos_B.ManualSwitch1[255] = '\x00';
    }

    /* End of ManualSwitch: '<S1>/Manual Switch1' */

    /* Constant: '<S1>/Object' */
    robotarm_student_2021a_Ipos_B.Object =
      robotarm_student_2021a_Ipos_P.Object_Value;

    /* Constant: '<S1>/Plot' */
    robotarm_student_2021a_Ipos_B.Plot =
      robotarm_student_2021a_Ipos_P.Plot_Value;

    /* Constant: '<S1>/Stop' */
    robotarm_student_2021a_Ipos_B.Stop =
      robotarm_student_2021a_Ipos_P.Stop_Value;
    srUpdateBC(robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */

  /* Switch: '<S18>/Homing Running Switch' incorporates:
   *  UnitDelay: '<S13>/Unit Delay1'
   */
  if (robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE >=
      robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_l) {
    /* Switch: '<S18>/Homing Running Switch1' incorporates:
     *  StringConstant: '<S13>/Homing Orange'
     *  Switch: '<S18>/Homing Running Switch'
     */
    if (robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE >=
        robotarm_student_2021a_Ipos_P.HomingRunningSwitch1_Threshold) {
      /* Switch: '<S18>/Homing Running Switch2' incorporates:
       *  StringConstant: '<S13>/Airbag Red'
       *  StringConstant: '<S13>/Ready Green'
       *  Switch: '<S18>/Homing Running Switch'
       */
      if (robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE >=
          robotarm_student_2021a_Ipos_P.HomingRunningSwitch2_Threshold) {
        strncpy(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
                &robotarm_student_2021a_Ipos_P.ReadyGreen_String[0], 255U);
        robotarm_student_2021a_Ipos_B.HomingRunningSwitch[255] = '\x00';
      } else {
        strncpy(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
                &robotarm_student_2021a_Ipos_P.AirbagRed_String[0], 255U);
        robotarm_student_2021a_Ipos_B.HomingRunningSwitch[255] = '\x00';
      }

      /* End of Switch: '<S18>/Homing Running Switch2' */
    } else {
      strncpy(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
              &robotarm_student_2021a_Ipos_P.HomingOrange_String[0], 255U);
      robotarm_student_2021a_Ipos_B.HomingRunningSwitch[255] = '\x00';
    }

    /* End of Switch: '<S18>/Homing Running Switch1' */
  } else {
    strncpy(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
            &robotarm_student_2021a_Ipos_B.ManualSwitch1[0], 255U);
    robotarm_student_2021a_Ipos_B.HomingRunningSwitch[255] = '\x00';
  }

  /* End of Switch: '<S18>/Homing Running Switch' */

  /* Outputs for Enabled SubSystem: '<S23>/Subsystem3' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  /* Logic: '<S24>/NOT' incorporates:
   *  Delay: '<S24>/Delay'
   *  StringCompare: '<S24>/String Compare'
   */
  if (strcmp(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
             &robotarm_student_2021a_Ipos_DW.Delay_DSTATE[0]) != 0) {
    /* If: '<S25>/If' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S27>/Constant'
     *  StringCompare: '<S25>/String Compare'
     *  StringConstant: '<S25>/String Constant4'
     */
    if (strcmp(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
               &robotarm_student_2021a_Ipos_P.StringConstant4_String[0]) == 0) {
      /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* StringToASCII: '<S26>/String to ASCII1' */
      strncpy(&robotarm_student_2021a_Ipos_B.cv[0],
              &robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0], 31U);
      for (i = 0; i < 31; i++) {
        robotarm_student_2021a_Ipos_B.MatrixConcatenate1[i] = (uint8_T)
          robotarm_student_2021a_Ipos_B.cv[i];
      }

      /* End of StringToASCII: '<S26>/String to ASCII1' */
      robotarm_student_2021a_Ipos_B.MatrixConcatenate1[31] =
        robotarm_student_2021a_Ipos_P.Constant1_Value_j;
      robotarm_student_2_SerialWrite1
        (robotarm_student_2021a_Ipos_B.MatrixConcatenate1,
         &robotarm_student_2021a_Ipos_DW.SerialWrite1);

      /* End of Outputs for SubSystem: '<S25>/If Action Subsystem' */

      /* Update for IfAction SubSystem: '<S25>/If Action Subsystem' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      /* Update for If: '<S25>/If' incorporates:
       *  Constant: '<S26>/Constant1'
       */
      srUpdateBC(robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC);

      /* End of Update for SubSystem: '<S25>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S27>/Action Port'
       */
      /* StringConcatenate: '<S27>/String Concatenate' incorporates:
       *  StringConstant: '<S27>/String Constant1'
       *  StringConstant: '<S27>/String Constant3'
       */
      robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0] = '\x00';
      strncat(&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0],
              &robotarm_student_2021a_Ipos_P.StringConstant3_String[0], 255U);
      i = (int32_T)strlen
        (&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0]);
      strncat(&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[i],
              &robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0], 255U - i);
      i += (int32_T)strlen
        (&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[i]);
      strncat(&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[i],
              &robotarm_student_2021a_Ipos_P.StringConstant1_String[0], 255U - i);

      /* StringToASCII: '<S27>/String to ASCII' incorporates:
       *  StringConcatenate: '<S27>/String Concatenate'
       */
      strncpy(&robotarm_student_2021a_Ipos_B.cv[0],
              &robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0], 31U);
      for (i = 0; i < 31; i++) {
        robotarm_student_2021a_Ipos_B.MatrixConcatenate[i] = (uint8_T)
          robotarm_student_2021a_Ipos_B.cv[i];
      }

      /* End of StringToASCII: '<S27>/String to ASCII' */
      robotarm_student_2021a_Ipos_B.MatrixConcatenate[31] =
        robotarm_student_2021a_Ipos_P.Constant_Value_d;
      robotarm_student_2_SerialWrite1
        (robotarm_student_2021a_Ipos_B.MatrixConcatenate,
         &robotarm_student_2021a_Ipos_DW.SerialWrite);

      /* End of Outputs for SubSystem: '<S25>/If Action Subsystem1' */

      /* Update for IfAction SubSystem: '<S25>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S27>/Action Port'
       */
      /* Update for If: '<S25>/If' incorporates:
       *  Constant: '<S27>/Constant'
       */
      srUpdateBC(robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC);

      /* End of Update for SubSystem: '<S25>/If Action Subsystem1' */
    }

    /* End of If: '<S25>/If' */
    srUpdateBC(robotarm_student_2021a_Ipos_DW.Subsystem3_SubsysRanBC);
  }

  /* End of Logic: '<S24>/NOT' */
  /* End of Outputs for SubSystem: '<S23>/Subsystem3' */

  /* S-Function (ec_IposResetEnc): '<S19>/Reset EncoderR' */

  /* Level2 S-Function Block: '<S19>/Reset EncoderR' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[9];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S28>/Gain' */
  robotarm_student_2021a_Ipos_B.Gain_h =
    robotarm_student_2021a_Ipos_P.Gain_Gain_h *
    robotarm_student_2021a_Ipos_B.Sum2;

  /* S-Function (dweakint): '<S28>/Dctintegrator' */

  /* Level2 S-Function Block: '<S28>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[10];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S28>/Dctleadlag' */

  /* Level2 S-Function Block: '<S28>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S28>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S28>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* Product: '<S19>/Product' */
  robotarm_student_2021a_Ipos_B.Product =
    robotarm_student_2021a_Ipos_B.Dct1lowpass *
    robotarm_student_2021a_Ipos_B.homeControllerEnabled_o;

  /* Gain: '<S29>/Gain' incorporates:
   *  Sum: '<S19>/Sum1'
   */
  robotarm_student_2021a_Ipos_B.Gain_p =
    (robotarm_student_2021a_Ipos_B.airBagRef_g -
     robotarm_student_2021a_Ipos_B.Gain) *
    robotarm_student_2021a_Ipos_P.Gain_Gain_c;

  /* S-Function (dleadlag): '<S29>/Dctleadlag' */

  /* Level2 S-Function Block: '<S29>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S29>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S29>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* Logic: '<S19>/Logical Operator1' */
  robotarm_student_2021a_Ipos_B.LogicalOperator1 =
    !(robotarm_student_2021a_Ipos_B.airBagEnabled_f != 0.0);

  /* Switch: '<S19>/AirbagSwitch' */
  if (robotarm_student_2021a_Ipos_B.LogicalOperator1) {
    /* Switch: '<S19>/Homing Running Switch' */
    if (robotarm_student_2021a_Ipos_B.homingBusy_l >=
        robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold) {
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_B.Product;
    } else {
      robotarm_student_2021a_Ipos_B.fy2_tmp = robotarm_student_2021a_Ipos_B.Sum4;
    }

    /* End of Switch: '<S19>/Homing Running Switch' */
  } else {
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.Dct1lowpass_i;
  }

  /* End of Switch: '<S19>/AirbagSwitch' */

  /* Gain: '<S19>/Gain1' incorporates:
   *  Product: '<S19>/Product1'
   */
  robotarm_student_2021a_Ipos_B.Saturation1 =
    robotarm_student_2021a_Ipos_B.fy2_tmp *
    robotarm_student_2021a_Ipos_B.controlEnabled_l *
    robotarm_student_2021a_Ipos_P.Gain1_Gain_m;

  /* Saturate: '<S19>/Saturation1' */
  if (robotarm_student_2021a_Ipos_B.Saturation1 >
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat) {
    /* Gain: '<S19>/Gain1' incorporates:
     *  Saturate: '<S19>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1 =
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat;
  } else if (robotarm_student_2021a_Ipos_B.Saturation1 <
             robotarm_student_2021a_Ipos_P.Saturation1_LowerSat) {
    /* Gain: '<S19>/Gain1' incorporates:
     *  Saturate: '<S19>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1 =
      robotarm_student_2021a_Ipos_P.Saturation1_LowerSat;
  }

  /* End of Saturate: '<S19>/Saturation1' */

  /* S-Function (ec_IposResetEnc): '<S20>/Reset EncoderR1' */

  /* Level2 S-Function Block: '<S20>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S35>/Gain1' */
  robotarm_student_2021a_Ipos_B.Gain1_p =
    robotarm_student_2021a_Ipos_P.Gain1_Gain_o *
    robotarm_student_2021a_Ipos_B.Sum2_a;

  /* S-Function (dweakint): '<S35>/Dctintegrator' */

  /* Level2 S-Function Block: '<S35>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S35>/Dctleadlag' */

  /* Level2 S-Function Block: '<S35>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S35>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S35>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S36>/Gain1' incorporates:
   *  Sum: '<S20>/Sum1'
   */
  robotarm_student_2021a_Ipos_B.Gain1_o =
    (robotarm_student_2021a_Ipos_B.airBagRef_a -
     robotarm_student_2021a_Ipos_B.Gain1) *
    robotarm_student_2021a_Ipos_P.Gain1_Gain_h;

  /* S-Function (dleadlag): '<S36>/Dctleadlag' */

  /* Level2 S-Function Block: '<S36>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S36>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S36>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S20>/AirbagSwitch' incorporates:
   *  Logic: '<S20>/Logical Operator1'
   */
  if (!(robotarm_student_2021a_Ipos_B.airBagEnabled_o != 0.0)) {
    /* Switch: '<S20>/Homing Running Switch' incorporates:
     *  Product: '<S20>/Product'
     */
    if (robotarm_student_2021a_Ipos_B.homingBusy_j >=
        robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_j) {
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_B.Dct1lowpass_k *
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_k;
    } else {
      robotarm_student_2021a_Ipos_B.fy2_tmp = robotarm_student_2021a_Ipos_B.Sum5;
    }

    /* End of Switch: '<S20>/Homing Running Switch' */
  } else {
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.Dct1lowpass_j;
  }

  /* End of Switch: '<S20>/AirbagSwitch' */

  /* Gain: '<S20>/Gain' incorporates:
   *  Product: '<S20>/Product1'
   */
  robotarm_student_2021a_Ipos_B.Saturation1_n =
    robotarm_student_2021a_Ipos_B.fy2_tmp *
    robotarm_student_2021a_Ipos_B.controlEnabled_a *
    robotarm_student_2021a_Ipos_P.Gain_Gain_cj;

  /* Saturate: '<S20>/Saturation1' */
  if (robotarm_student_2021a_Ipos_B.Saturation1_n >
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_e) {
    /* Gain: '<S20>/Gain' incorporates:
     *  Saturate: '<S20>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_n =
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_e;
  } else if (robotarm_student_2021a_Ipos_B.Saturation1_n <
             robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_p) {
    /* Gain: '<S20>/Gain' incorporates:
     *  Saturate: '<S20>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_n =
      robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_p;
  }

  /* End of Saturate: '<S20>/Saturation1' */

  /* S-Function (ec_IposResetEnc): '<S21>/Reset EncoderR1' */

  /* Level2 S-Function Block: '<S21>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S44>/Gain' */
  robotarm_student_2021a_Ipos_B.Gain_i =
    robotarm_student_2021a_Ipos_P.Gain_Gain_cr *
    robotarm_student_2021a_Ipos_B.Sum2_e;

  /* S-Function (dweakint): '<S44>/Dctintegrator' */

  /* Level2 S-Function Block: '<S44>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S44>/Dctleadlag' */

  /* Level2 S-Function Block: '<S44>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[23];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S44>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S44>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[24];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S45>/Gain' incorporates:
   *  Sum: '<S21>/Sum1'
   */
  robotarm_student_2021a_Ipos_B.Gain_f =
    (robotarm_student_2021a_Ipos_B.airBagRef -
     robotarm_student_2021a_Ipos_B.Gain2) *
    robotarm_student_2021a_Ipos_P.Gain_Gain_l;

  /* S-Function (dleadlag): '<S45>/Dctleadlag' */

  /* Level2 S-Function Block: '<S45>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S45>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S45>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S21>/AirbagSwitch' incorporates:
   *  Logic: '<S21>/Logical Operator1'
   */
  if (!(robotarm_student_2021a_Ipos_B.airBagEnabled != 0.0)) {
    /* Switch: '<S21>/Homing Running Switch' incorporates:
     *  Product: '<S21>/Product'
     */
    if (robotarm_student_2021a_Ipos_B.homingBusy_n >=
        robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_d) {
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_B.Dct1lowpass_p *
        robotarm_student_2021a_Ipos_B.homeControllerEnabled_b;
    } else {
      robotarm_student_2021a_Ipos_B.fy2_tmp = robotarm_student_2021a_Ipos_B.Sum6;
    }

    /* End of Switch: '<S21>/Homing Running Switch' */
  } else {
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.Dct1lowpass_a;
  }

  /* End of Switch: '<S21>/AirbagSwitch' */

  /* Gain: '<S21>/Gain' incorporates:
   *  Product: '<S21>/Product1'
   */
  robotarm_student_2021a_Ipos_B.Saturation1_a =
    robotarm_student_2021a_Ipos_B.fy2_tmp *
    robotarm_student_2021a_Ipos_B.controlEnabled *
    robotarm_student_2021a_Ipos_P.Gain_Gain_g;

  /* Saturate: '<S21>/Saturation1' */
  if (robotarm_student_2021a_Ipos_B.Saturation1_a >
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_i) {
    /* Gain: '<S21>/Gain' incorporates:
     *  Saturate: '<S21>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_a =
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_i;
  } else if (robotarm_student_2021a_Ipos_B.Saturation1_a <
             robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_n) {
    /* Gain: '<S21>/Gain' incorporates:
     *  Saturate: '<S21>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_a =
      robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_n;
  }

  /* End of Saturate: '<S21>/Saturation1' */

  /* S-Function (ec_IposResetEnc): '<S22>/Reset EncoderR1' */

  /* Level2 S-Function Block: '<S22>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[27];
    sfcnOutputs(rts,0);
  }

  /* DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_i =
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k;

  /* Gain: '<S54>/Gain1' incorporates:
   *  Sum: '<S22>/Sum1'
   */
  robotarm_student_2021a_Ipos_B.Gain1_a =
    (robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_i -
     robotarm_student_2021a_Ipos_B.Gain3) *
    robotarm_student_2021a_Ipos_P.Gain1_Gain_j;

  /* S-Function (dweakint): '<S54>/Dctintegrator3' */

  /* Level2 S-Function Block: '<S54>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[28];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S54>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S54>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[29];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S54>/Dctleadlag' */

  /* Level2 S-Function Block: '<S54>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[30];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S22>/Homing Running Switch' incorporates:
   *  Product: '<S22>/Product'
   */
  if (robotarm_student_2021a_Ipos_B.homingBusy >=
      robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshol_lq) {
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.Dctleadlag_k *
      robotarm_student_2021a_Ipos_B.homeControllerEnabled;
  } else {
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.Dctleadlag_d;
  }

  /* End of Switch: '<S22>/Homing Running Switch' */

  /* Gain: '<S22>/Gain' */
  robotarm_student_2021a_Ipos_B.Saturation1_d =
    robotarm_student_2021a_Ipos_P.Gain_Gain_j *
    robotarm_student_2021a_Ipos_B.fy2_tmp;

  /* Saturate: '<S22>/Saturation1' */
  if (robotarm_student_2021a_Ipos_B.Saturation1_d >
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_o) {
    /* Gain: '<S22>/Gain' incorporates:
     *  Saturate: '<S22>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_d =
      robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_o;
  } else if (robotarm_student_2021a_Ipos_B.Saturation1_d <
             robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_g) {
    /* Gain: '<S22>/Gain' incorporates:
     *  Saturate: '<S22>/Saturation1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_d =
      robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_g;
  }

  /* End of Saturate: '<S22>/Saturation1' */

  /* Sum: '<S13>/Add' */
  rtb_Add = ((robotarm_student_2021a_Ipos_B.Ready_a +
              robotarm_student_2021a_Ipos_B.Ready_i) +
             robotarm_student_2021a_Ipos_B.Ready_n) +
    robotarm_student_2021a_Ipos_B.Ready;

  /* Stop: '<S22>/Stop Simulation' */
  if (robotarm_student_2021a_Ipos_B.StopSim != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
  }

  /* End of Stop: '<S22>/Stop Simulation' */

  /* Stop: '<S21>/Stop Simulation' */
  if (robotarm_student_2021a_Ipos_B.StopSim_n != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
  }

  /* End of Stop: '<S21>/Stop Simulation' */

  /* Sum: '<S34>/Diff' incorporates:
   *  Sum: '<S47>/Sum'
   */
  robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
    robotarm_student_2021a_Ipos_B.toPoint
    + robotarm_student_2021a_Ipos_B.Constant1_f;

  /* RateLimiter: '<S47>/Limit Speed' */
  robotarm_student_2021a_Ipos_B.fy2_tmp =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
    robotarm_student_2021a_Ipos_DW.PrevY;
  if (robotarm_student_2021a_Ipos_B.fy2_tmp >
      robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim *
      robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
             robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim *
             robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY;
  }

  robotarm_student_2021a_Ipos_DW.PrevY =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S47>/Limit Speed' */

  /* SampleTimeMath: '<S53>/TSamp'
   *
   * About '<S53>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  robotarm_student_2021a_Ipos_B.TSamp =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h *
    robotarm_student_2021a_Ipos_P.TSamp_WtEt;

  /* Sum: '<S34>/Diff' incorporates:
   *  Sum: '<S53>/Diff'
   *  UnitDelay: '<S53>/UD'
   */
  robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
    robotarm_student_2021a_Ipos_B.TSamp -
    robotarm_student_2021a_Ipos_DW.UD_DSTATE;

  /* RateLimiter: '<S47>/Limit Acceleration' */
  robotarm_student_2021a_Ipos_B.fy2_tmp =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
    robotarm_student_2021a_Ipos_DW.PrevY_j;
  if (robotarm_student_2021a_Ipos_B.fy2_tmp >
      robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim *
      robotarm_student_2021a_I_period) {
    /* RateLimiter: '<S47>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_j;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
             robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim *
             robotarm_student_2021a_I_period) {
    /* RateLimiter: '<S47>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_j;
  } else {
    /* RateLimiter: '<S47>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h;
  }

  robotarm_student_2021a_Ipos_DW.PrevY_j =
    robotarm_student_2021a_Ipos_B.LimitAcceleration;

  /* End of RateLimiter: '<S47>/Limit Acceleration' */
  /* Stop: '<S20>/Stop Simulation' */
  if (robotarm_student_2021a_Ipos_B.StopSim_o != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
  }

  /* End of Stop: '<S20>/Stop Simulation' */

  /* Sum: '<S34>/Diff' incorporates:
   *  Sum: '<S37>/Sum'
   */
  robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
    robotarm_student_2021a_Ipos_B.toPoint_e +
    robotarm_student_2021a_Ipos_B.Constant1_e;

  /* RateLimiter: '<S37>/Limit Speed' */
  robotarm_student_2021a_Ipos_B.fy2_tmp =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
    robotarm_student_2021a_Ipos_DW.PrevY_d;
  if (robotarm_student_2021a_Ipos_B.fy2_tmp >
      robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_i *
      robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_i *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_d;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
             robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_k *
             robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_k *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_d;
  }

  robotarm_student_2021a_Ipos_DW.PrevY_d =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S37>/Limit Speed' */

  /* SampleTimeMath: '<S43>/TSamp'
   *
   * About '<S43>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  robotarm_student_2021a_Ipos_B.TSamp_d =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h *
    robotarm_student_2021a_Ipos_P.TSamp_WtEt_d;

  /* Sum: '<S34>/Diff' incorporates:
   *  Sum: '<S43>/Diff'
   *  UnitDelay: '<S43>/UD'
   */
  robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
    robotarm_student_2021a_Ipos_B.TSamp_d -
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_c;

  /* RateLimiter: '<S37>/Limit Acceleration' */
  robotarm_student_2021a_Ipos_B.fy2_tmp =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
    robotarm_student_2021a_Ipos_DW.PrevY_f;
  if (robotarm_student_2021a_Ipos_B.fy2_tmp >
      robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_k *
      robotarm_student_2021a_I_period) {
    /* RateLimiter: '<S37>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_b =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_k *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_f;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
             robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_m *
             robotarm_student_2021a_I_period) {
    /* RateLimiter: '<S37>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_b =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_m *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_f;
  } else {
    /* RateLimiter: '<S37>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_b =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h;
  }

  robotarm_student_2021a_Ipos_DW.PrevY_f =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_b;

  /* End of RateLimiter: '<S37>/Limit Acceleration' */
  /* Stop: '<S19>/Stop Simulation' */
  if (robotarm_student_2021a_Ipos_B.StopSim_j != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
  }

  /* End of Stop: '<S19>/Stop Simulation' */

  /* Sum: '<S34>/Diff' incorporates:
   *  Sum: '<S31>/Sum'
   */
  robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
    robotarm_student_2021a_Ipos_B.toPoint_b +
    robotarm_student_2021a_Ipos_B.Constant1;

  /* RateLimiter: '<S31>/Limit Speed' */
  robotarm_student_2021a_Ipos_B.fy2_tmp =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
    robotarm_student_2021a_Ipos_DW.PrevY_i;
  if (robotarm_student_2021a_Ipos_B.fy2_tmp >
      robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_iu *
      robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_iu *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_i;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
             robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_j *
             robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_j *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_i;
  }

  robotarm_student_2021a_Ipos_DW.PrevY_i =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S31>/Limit Speed' */

  /* SampleTimeMath: '<S34>/TSamp'
   *
   * About '<S34>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  robotarm_student_2021a_Ipos_B.TSamp_k =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h *
    robotarm_student_2021a_Ipos_P.TSamp_WtEt_g;

  /* Sum: '<S34>/Diff' incorporates:
   *  UnitDelay: '<S34>/UD'
   */
  robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
    robotarm_student_2021a_Ipos_B.TSamp_k -
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_cc;

  /* RateLimiter: '<S31>/Limit Acceleration' */
  robotarm_student_2021a_Ipos_B.fy2_tmp =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
    robotarm_student_2021a_Ipos_DW.PrevY_k;
  if (robotarm_student_2021a_Ipos_B.fy2_tmp >
      robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_m *
      robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' incorporates:
     *  RateLimiter: '<S31>/Limit Acceleration'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_m *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_k;
  } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
             robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_k *
             robotarm_student_2021a_I_period) {
    /* Sum: '<S34>/Diff' incorporates:
     *  RateLimiter: '<S31>/Limit Acceleration'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_k *
      robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_k;
  }

  robotarm_student_2021a_Ipos_DW.PrevY_k =
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S31>/Limit Acceleration' */

  /* Update for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE +=
    robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainval *
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

  /* Update for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g +=
    robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_i *
    robotarm_student_2021a_Ipos_B.jogSpeed_o;

  /* Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m +=
    robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_h *
    robotarm_student_2021a_Ipos_B.jogSpeed_c;

  /* Update for DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o +=
    robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_j *
    robotarm_student_2021a_Ipos_B.LimitAcceleration_b;

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a +=
    robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_o *
    robotarm_student_2021a_Ipos_B.jogSpeed_i;

  /* Update for DiscreteIntegrator: '<S47>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j +=
    robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_n *
    robotarm_student_2021a_Ipos_B.LimitAcceleration;

  /* Update for UnitDelay: '<S13>/Unit Delay' */
  robotarm_student_2021a_Ipos_DW.UnitDelay_DSTATE = rtb_Add;

  /* Update for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable '
   */
  if (robotarm_student_2021a_Ipos_DW.Controller_MODE) {
    /* Update for UnitDelay: '<S10>/Delay Input1' incorporates:
     *  Constant: '<S4>/Object detection matrix'
     */
    memcpy(&robotarm_student_2021a_Ipos_DW.DelayInput1_DSTATE[0],
           &robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[0], 12U *
           sizeof(real_T));

    /* Update for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    robotarm_student_2021a_Ipos_DW.Discreteintegrator_DSTATE +=
      robotarm_student_2021a_Ipos_P.Discreteintegrator_gainval * rtb_Saturation;
  }

  /* End of Update for SubSystem: '<Root>/Controller' */

  /* Update for UnitDelay: '<S13>/Unit Delay1' */
  robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE = rtb_Add2;

  /* Update for Delay: '<S24>/Delay' */
  strncpy(&robotarm_student_2021a_Ipos_DW.Delay_DSTATE[0],
          &robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0], 255U);
  robotarm_student_2021a_Ipos_DW.Delay_DSTATE[255] = '\x00';

  /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k +=
    robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_g *
    robotarm_student_2021a_Ipos_B.jogSpeed;

  /* Update for UnitDelay: '<S53>/UD' */
  robotarm_student_2021a_Ipos_DW.UD_DSTATE = robotarm_student_2021a_Ipos_B.TSamp;

  /* Update for UnitDelay: '<S43>/UD' */
  robotarm_student_2021a_Ipos_DW.UD_DSTATE_c =
    robotarm_student_2021a_Ipos_B.TSamp_d;

  /* Update for UnitDelay: '<S34>/UD' */
  robotarm_student_2021a_Ipos_DW.UD_DSTATE_cc =
    robotarm_student_2021a_Ipos_B.TSamp_k;

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)robotarm_student_2021a_Ipos_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.00048828125s, 0.0s] */
    rtExtModeUpload(1, (real_T)robotarm_student_2021a_Ipos_M->Timing.t[1]);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(robotarm_student_2021a_Ipos_M)!=-1) &&
        !((rtmGetTFinal(robotarm_student_2021a_Ipos_M)-
           robotarm_student_2021a_Ipos_M->Timing.t[0]) >
          robotarm_student_2021a_Ipos_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(robotarm_student_2021a_Ipos_M, "Simulation finished");
    }

    if (rtmGetStopRequested(robotarm_student_2021a_Ipos_M)) {
      rtmSetErrorStatus(robotarm_student_2021a_Ipos_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++robotarm_student_2021a_Ipos_M->Timing.clockTick0)) {
    ++robotarm_student_2021a_Ipos_M->Timing.clockTickH0;
  }

  robotarm_student_2021a_Ipos_M->Timing.t[0] =
    robotarm_student_2021a_Ipos_M->Timing.clockTick0 *
    robotarm_student_2021a_Ipos_M->Timing.stepSize0 +
    robotarm_student_2021a_Ipos_M->Timing.clockTickH0 *
    robotarm_student_2021a_Ipos_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.00048828125s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++robotarm_student_2021a_Ipos_M->Timing.clockTick1)) {
      ++robotarm_student_2021a_Ipos_M->Timing.clockTickH1;
    }

    robotarm_student_2021a_Ipos_M->Timing.t[1] =
      robotarm_student_2021a_Ipos_M->Timing.clockTick1 *
      robotarm_student_2021a_Ipos_M->Timing.stepSize1 +
      robotarm_student_2021a_Ipos_M->Timing.clockTickH1 *
      robotarm_student_2021a_Ipos_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void robotarm_student_2021a_Ipos_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)robotarm_student_2021a_Ipos_M, 0,
                sizeof(RT_MODEL_robotarm_student_2021a_Ipos_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&robotarm_student_2021a_Ipos_M->solverInfo,
                          &robotarm_student_2021a_Ipos_M->Timing.simTimeStep);
    rtsiSetTPtr(&robotarm_student_2021a_Ipos_M->solverInfo, &rtmGetTPtr
                (robotarm_student_2021a_Ipos_M));
    rtsiSetStepSizePtr(&robotarm_student_2021a_Ipos_M->solverInfo,
                       &robotarm_student_2021a_Ipos_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&robotarm_student_2021a_Ipos_M->solverInfo,
                          (&rtmGetErrorStatus(robotarm_student_2021a_Ipos_M)));
    rtsiSetRTModelPtr(&robotarm_student_2021a_Ipos_M->solverInfo,
                      robotarm_student_2021a_Ipos_M);
  }

  rtsiSetSimTimeStep(&robotarm_student_2021a_Ipos_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&robotarm_student_2021a_Ipos_M->solverInfo,
                    "FixedStepDiscrete");
  robotarm_student_2021a_Ipos_M->solverInfoPtr =
    (&robotarm_student_2021a_Ipos_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      robotarm_student_2021a_Ipos_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    robotarm_student_2021a_Ipos_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    robotarm_student_2021a_Ipos_M->Timing.sampleTimes =
      (&robotarm_student_2021a_Ipos_M->Timing.sampleTimesArray[0]);
    robotarm_student_2021a_Ipos_M->Timing.offsetTimes =
      (&robotarm_student_2021a_Ipos_M->Timing.offsetTimesArray[0]);

    /* task periods */
    robotarm_student_2021a_Ipos_M->Timing.sampleTimes[0] = (0.0);
    robotarm_student_2021a_Ipos_M->Timing.sampleTimes[1] = (0.00048828125);

    /* task offsets */
    robotarm_student_2021a_Ipos_M->Timing.offsetTimes[0] = (0.0);
    robotarm_student_2021a_Ipos_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(robotarm_student_2021a_Ipos_M,
             &robotarm_student_2021a_Ipos_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = robotarm_student_2021a_Ipos_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    robotarm_student_2021a_Ipos_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(robotarm_student_2021a_Ipos_M, -1);
  robotarm_student_2021a_Ipos_M->Timing.stepSize0 = 0.00048828125;
  robotarm_student_2021a_Ipos_M->Timing.stepSize1 = 0.00048828125;

  /* External mode info */
  robotarm_student_2021a_Ipos_M->Sizes.checksums[0] = (3197638456U);
  robotarm_student_2021a_Ipos_M->Sizes.checksums[1] = (1945319294U);
  robotarm_student_2021a_Ipos_M->Sizes.checksums[2] = (816361199U);
  robotarm_student_2021a_Ipos_M->Sizes.checksums[3] = (1611764293U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[25];
    robotarm_student_2021a_Ipos_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Stateflow_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Subsystem3_SubsysRanBC;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(robotarm_student_2021a_Ipos_M->extModeInfo,
      &robotarm_student_2021a_Ipos_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(robotarm_student_2021a_Ipos_M->extModeInfo,
                        robotarm_student_2021a_Ipos_M->Sizes.checksums);
    rteiSetTPtr(robotarm_student_2021a_Ipos_M->extModeInfo, rtmGetTPtr
                (robotarm_student_2021a_Ipos_M));
  }

  robotarm_student_2021a_Ipos_M->solverInfoPtr =
    (&robotarm_student_2021a_Ipos_M->solverInfo);
  robotarm_student_2021a_Ipos_M->Timing.stepSize = (0.00048828125);
  rtsiSetFixedStepSize(&robotarm_student_2021a_Ipos_M->solverInfo, 0.00048828125);
  rtsiSetSolverMode(&robotarm_student_2021a_Ipos_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &robotarm_student_2021a_Ipos_B), 0,
                sizeof(B_robotarm_student_2021a_Ipos_T));

  /* states (dwork) */
  (void) memset((void *)&robotarm_student_2021a_Ipos_DW, 0,
                sizeof(DW_robotarm_student_2021a_Ipos_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    robotarm_student_2021a_Ipos_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.sfcnInfo;
    robotarm_student_2021a_Ipos_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (robotarm_student_2021a_Ipos_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &robotarm_student_2021a_Ipos_M->Sizes.numSampTimes);
    robotarm_student_2021a_Ipos_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(robotarm_student_2021a_Ipos_M)[0]);
    robotarm_student_2021a_Ipos_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(robotarm_student_2021a_Ipos_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   robotarm_student_2021a_Ipos_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(robotarm_student_2021a_Ipos_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(robotarm_student_2021a_Ipos_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (robotarm_student_2021a_Ipos_M));
    rtssSetStepSizePtr(sfcnInfo, &robotarm_student_2021a_Ipos_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (robotarm_student_2021a_Ipos_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &robotarm_student_2021a_Ipos_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &robotarm_student_2021a_Ipos_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &robotarm_student_2021a_Ipos_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &robotarm_student_2021a_Ipos_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &robotarm_student_2021a_Ipos_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &robotarm_student_2021a_Ipos_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &robotarm_student_2021a_Ipos_M->solverInfoPtr);
  }

  robotarm_student_2021a_Ipos_M->Sizes.numSFcns = (31);

  /* register each child */
  {
    (void) memset((void *)
                  &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  31*sizeof(SimStruct));
    robotarm_student_2021a_Ipos_M->childSfunctions =
      (&robotarm_student_2021a_Ipos_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 31; i++) {
        robotarm_student_2021a_Ipos_M->childSfunctions[i] =
          (&robotarm_student_2021a_Ipos_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S9>/Dctpd2 (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_c;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctpd2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd2");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/controller_x_direction/Dctpd2");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S9>/Dctleadlag3 (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctpd2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/controller_x_direction/Dctleadlag3");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S8>/Dctpd2 (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctpd2_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd2");
      ssSetPath(rts, "robotarm_student_2021a_Ipos/Controller/controller/Dctpd2");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size_f);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_o
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_o[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S8>/Dctleadlag3 (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctpd2_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag3_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/controller/Dctleadlag3");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size_e);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_f[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S5>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctintegrator3_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_g[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S5>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator3_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_ab));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_c[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S5>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dct1lowpass_ab;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_gp[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_gp[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S3>/S-Function (ec_Supervisor) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "robotarm_student_2021a_Ipos/Supervisor2/S-Function");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.SFunction_P2_Size);
      }

      /* registration */
      ec_Supervisor(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S14>/ec_Ipos (Ipos360) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs1;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1_n;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs2;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs3;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1_d;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs4;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Doubleclickswitch;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs5;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_o1;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 5);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.ec_Ipos_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &robotarm_student_2021a_Ipos_B.ec_Ipos_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &robotarm_student_2021a_Ipos_B.ec_Ipos_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &robotarm_student_2021a_Ipos_B.ec_Ipos_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &robotarm_student_2021a_Ipos_B.ec_Ipos_o5));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ipos");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Subsystem/Ipos/ec_Ipos");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.ec_Ipos_P1_Size);
      }

      /* registration */
      Ipos360(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S19>/Reset EncoderR (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.resetEnc_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Reset EncoderR");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.ResetEncoderR_P1_Size);
      }

      /* registration */
      ec_IposResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S28>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn10.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctintegrator));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/ /Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S28>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn11.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/ /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_h);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S28>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn12.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/ /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S29>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn13.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/   /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_k);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_hn);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_k[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S29>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn14.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/   /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_l);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_a[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S20>/Reset EncoderR1 (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.resetEnc_c;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR1");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Reset EncoderR1");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_Size);
      }

      /* registration */
      ec_IposResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S35>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn16.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctintegrator_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator_P2_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK_m[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S35>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_g[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S35>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_m3);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_b);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_n[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S36>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_o;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn19.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_j[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S36>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_b;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn20.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_g);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_k[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S21>/Reset EncoderR1 (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.resetEnc_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR1");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Reset EncoderR1");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_Size_d);
      }

      /* registration */
      ec_IposResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S44>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn22.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctintegrator_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    /Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator_P2_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK_i[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ipos_DW.Dctintegrator_RWORK_i[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S44>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [23]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn23.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_ch);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_f);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_n[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S44>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [24]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn24.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_ni);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_a);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_g[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S45>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [25]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn25.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_by);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_oi);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_i[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_i[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S45>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [26]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn26.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_h[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S22>/Reset EncoderR1 (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [27]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[27]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [27]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.resetEnc;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR1");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Reset EncoderR1");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.ResetEncoderR1_P1_Size_b);
      }

      /* registration */
      ec_IposResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S54>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [28]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[28]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [28]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn28.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctintegrator3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size_b);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK
                   [0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S54>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [29]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[29]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [29]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn29.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_aj);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_ay[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_ay
                   [0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S54>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.blkInfo2
                         [30]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[30]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [30]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dct1lowpass_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn30.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag_P3_Size_d);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag_RWORK_o[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Start for S-Function (ec_Supervisor): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S31>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1 =
    robotarm_student_2021a_Ipos_P.Constant1_Value;

  /* Start for Constant: '<S37>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1_e =
    robotarm_student_2021a_Ipos_P.Constant1_Value_a;

  /* Start for Constant: '<S47>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1_f =
    robotarm_student_2021a_Ipos_P.Constant1_Value_e;

  /* Start for Constant: '<S13>/set_robot_calibration_r' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_r =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_r_Value;

  /* Start for Constant: '<S13>/set_robot_calibration_x' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_x =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_x_Value;

  /* Start for Constant: '<S13>/set_robot_calibration_z' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_z =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_z_Value;

  /* Start for Enabled SubSystem: '<Root>/Controller' */
  robotarm_student_2021a_Ipos_DW.Controller_MODE = false;

  /* Start for S-Function (dpd): '<S9>/Dctpd2' */
  /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S9>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S9>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S8>/Dctpd2' */
  /* Level2 S-Function Block: '<S8>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S8>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S8>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S5>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S5>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S5>/Dctleadlag' */
  /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<Root>/Controller' */

  /* Start for Enabled SubSystem: '<S23>/Subsystem3' */
  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem' */
  robotarm_stu_SerialWrite1_Start(&robotarm_student_2021a_Ipos_DW.SerialWrite1);

  /* End of Start for SubSystem: '<S25>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem1' */
  robotarm_stu_SerialWrite1_Start(&robotarm_student_2021a_Ipos_DW.SerialWrite);

  /* End of Start for SubSystem: '<S25>/If Action Subsystem1' */
  /* End of Start for SubSystem: '<S23>/Subsystem3' */

  /* Start for S-Function (dweakint): '<S28>/Dctintegrator' */
  /* Level2 S-Function Block: '<S28>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S28>/Dctleadlag' */
  /* Level2 S-Function Block: '<S28>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S28>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S28>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S29>/Dctleadlag' */
  /* Level2 S-Function Block: '<S29>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S29>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S29>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S35>/Dctintegrator' */
  /* Level2 S-Function Block: '<S35>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S35>/Dctleadlag' */
  /* Level2 S-Function Block: '<S35>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S35>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S35>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S36>/Dctleadlag' */
  /* Level2 S-Function Block: '<S36>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S36>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S36>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S44>/Dctintegrator' */
  /* Level2 S-Function Block: '<S44>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S44>/Dctleadlag' */
  /* Level2 S-Function Block: '<S44>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S44>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S44>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S45>/Dctleadlag' */
  /* Level2 S-Function Block: '<S45>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S45>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S45>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S54>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S54>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S54>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S54>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S54>/Dctleadlag' */
  /* Level2 S-Function Block: '<S54>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* ConstCode for Enabled SubSystem: '<Root>/Controller' */
  /* ConstCode for Chart: '<S1>/Stateflow ' */
  robotarm_student_2021a_Ipos_DW.x = 0.0;
  robotarm_student_2021a_Ipos_DW.z = 0.0;
  robotarm_student_2021a_Ipos_DW.y = 0.0;
  robotarm_student_2021a_Ipos_DW.Z_pos = 0.0;
  robotarm_student_2021a_Ipos_DW.X_pos = 0.0;
  robotarm_student_2021a_Ipos_DW.Y_pos = 0.0;
  robotarm_student_2021a_Ipos_DW.sfEvent_c = robotarm_student_202_CALL_EVENT;

  /* Chart: '<S1>/Stateflow ' */
  robotarm_student_2021a_Ipos_DW.is_active_c3_robotarm_student_2 = 1U;
  robotarm_student_2021a_Ipos_DW.is_active_Object_Detection = 1U;
  robotarm_student_2021a_Ipos_DW.is_Object_Detection =
    robotarm_student_202_IN_Seeking;
  robotarm_student_2021a_Ipos_DW.is_active_Robot_Arm = 1U;
  robotarm_student_2021a_Ipos_DW.is_Robot_Arm = robotarm_student_2_IN_Belt_Home;
  robotarm_student_2021a_Ipos_DW.is_active_Vacuum = 1U;
  robotarm_student_2021a_Ipos_DW.is_Vacuum = robotarm_student__IN_Start_Home;
  robotarm_student_2021a_Ipos_DW.is_active_Belt = 1U;
  robotarm_student_2021a_Ipos_DW.is_Belt = robotarm_student__IN_Vacuum_Off;

  /* End of ConstCode for SubSystem: '<Root>/Controller' */
  robotarm_student_2021a_Ipos_PrevZCX.Stateflow_Trig_ZCE = UNINITIALIZED_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE =
      robotarm_student_2021a_Ipos_B.Constant1;

    /* InitializeConditions for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S20>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_c;

    /* InitializeConditions for DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o =
      robotarm_student_2021a_Ipos_B.Constant1_e;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_o;

    /* InitializeConditions for DiscreteIntegrator: '<S47>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j =
      robotarm_student_2021a_Ipos_B.Constant1_f;

    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
    robotarm_student_2021a_Ipos_DW.UnitDelay_DSTATE =
      robotarm_student_2021a_Ipos_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay1' */
    robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE =
      robotarm_student_2021a_Ipos_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Delay: '<S24>/Delay' */
    strncpy(&robotarm_student_2021a_Ipos_DW.Delay_DSTATE[0],
            &robotarm_student_2021a_Ipos_P.Delay_InitialCondition[0], 255U);
    robotarm_student_2021a_Ipos_DW.Delay_DSTATE[255] = '\x00';

    /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_co;

    /* InitializeConditions for RateLimiter: '<S47>/Limit Speed' */
    robotarm_student_2021a_Ipos_DW.PrevY =
      robotarm_student_2021a_Ipos_P.LimitSpeed_IC;

    /* InitializeConditions for UnitDelay: '<S53>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE =
      robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for RateLimiter: '<S47>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_DW.PrevY_j =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_IC;

    /* InitializeConditions for RateLimiter: '<S37>/Limit Speed' */
    robotarm_student_2021a_Ipos_DW.PrevY_d =
      robotarm_student_2021a_Ipos_P.LimitSpeed_IC_a;

    /* InitializeConditions for UnitDelay: '<S43>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_c =
      robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScal_e;

    /* InitializeConditions for RateLimiter: '<S37>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_DW.PrevY_f =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_IC_k;

    /* InitializeConditions for RateLimiter: '<S31>/Limit Speed' */
    robotarm_student_2021a_Ipos_DW.PrevY_i =
      robotarm_student_2021a_Ipos_P.LimitSpeed_IC_e;

    /* InitializeConditions for UnitDelay: '<S34>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_cc =
      robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScal_h;

    /* InitializeConditions for RateLimiter: '<S31>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_DW.PrevY_k =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_IC_i;

    /* SystemInitialize for Chart: '<S19>/Supervisor' */
    robotarm_student_2021a_Ipos_DW.sfEvent_k = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_c = 0U;
    robotarm_student_2021a_Ipos_DW.is_active_c12_robotarm_student_ = 0U;
    robotarm_student_2021a_Ipos_DW.is_c12_robotarm_student_2021a_I = 0U;
    robotarm_student_2021a_Ipos_DW.currentcarPos_l = 0.0;
    robotarm_student_2021a_Ipos_B.jogSpeed_o = 0.0;
    robotarm_student_2021a_Ipos_B.toPoint_b = 0.0;
    robotarm_student_2021a_Ipos_B.homeControllerEnabled_o = 0.0;
    robotarm_student_2021a_Ipos_B.resetEnc_k = 0.0;
    robotarm_student_2021a_Ipos_B.freddy_k = 0.0;
    robotarm_student_2021a_Ipos_B.homingBusy_l = 1.0;
    robotarm_student_2021a_Ipos_B.airBagEnabled_f = 0.0;
    robotarm_student_2021a_Ipos_B.airBagRef_g = 0.0;
    robotarm_student_2021a_Ipos_B.controlEnabled_l = 1.0;
    robotarm_student_2021a_Ipos_B.Ready_a = 1.0;
    robotarm_student_2021a_Ipos_B.StopSim_j = 0.0;

    /* SystemInitialize for Chart: '<S20>/Supervisor2' */
    robotarm_student_2021a_Ipos_DW.sfEvent_h = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_me = 0U;
    robotarm_student_2021a_Ipos_DW.is_active_c16_robotarm_student_ = 0U;
    robotarm_student_2021a_Ipos_DW.is_c16_robotarm_student_2021a_I = 0U;
    robotarm_student_2021a_Ipos_DW.currentcarPos_d = 0.0;
    robotarm_student_2021a_Ipos_B.jogSpeed_c = 0.0;
    robotarm_student_2021a_Ipos_B.toPoint_e = 0.0;
    robotarm_student_2021a_Ipos_B.homeControllerEnabled_k = 0.0;
    robotarm_student_2021a_Ipos_B.resetEnc_c = 0.0;
    robotarm_student_2021a_Ipos_B.homingBusy_j = 1.0;
    robotarm_student_2021a_Ipos_B.airBagEnabled_o = 0.0;
    robotarm_student_2021a_Ipos_B.airBagRef_a = 0.0;
    robotarm_student_2021a_Ipos_B.controlEnabled_a = 1.0;
    robotarm_student_2021a_Ipos_B.Ready_i = 1.0;
    robotarm_student_2021a_Ipos_B.StopSim_o = 0.0;

    /* SystemInitialize for Chart: '<S21>/Supervisor' */
    robotarm_student_2021a_Ipos_DW.sfEvent_n = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m = 0U;
    robotarm_student_2021a_Ipos_DW.is_active_c18_robotarm_student_ = 0U;
    robotarm_student_2021a_Ipos_DW.is_c18_robotarm_student_2021a_I = 0U;
    robotarm_student_2021a_Ipos_DW.currentcarPos = 0.0;
    robotarm_student_2021a_Ipos_B.jogSpeed_i = 0.0;
    robotarm_student_2021a_Ipos_B.toPoint = 0.0;
    robotarm_student_2021a_Ipos_B.homeControllerEnabled_b = 0.0;
    robotarm_student_2021a_Ipos_B.resetEnc_g = 0.0;
    robotarm_student_2021a_Ipos_B.homingBusy_n = 1.0;
    robotarm_student_2021a_Ipos_B.airBagEnabled = 0.0;
    robotarm_student_2021a_Ipos_B.airBagRef = 0.0;
    robotarm_student_2021a_Ipos_B.controlEnabled = 1.0;
    robotarm_student_2021a_Ipos_B.Ready_n = 1.0;
    robotarm_student_2021a_Ipos_B.StopSim_n = 0.0;

    /* SystemInitialize for Chart: '<S22>/Supervisor' */
    robotarm_student_2021a_Ipos_DW.sfEvent = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1 = 0U;
    robotarm_student_2021a_Ipos_DW.is_active_c1_robotarm_student_2 = 0U;
    robotarm_student_2021a_Ipos_DW.is_c1_robotarm_student_2021a_Ip = 0U;
    robotarm_student_2021a_Ipos_B.jogSpeed = 0.0;
    robotarm_student_2021a_Ipos_B.homeControllerEnabled = 0.0;
    robotarm_student_2021a_Ipos_B.resetEnc = 0.0;
    robotarm_student_2021a_Ipos_B.homingBusy = 1.0;
    robotarm_student_2021a_Ipos_B.Ready = 1.0;
    robotarm_student_2021a_Ipos_B.StopSim = 0.0;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Controller' */
    /* InitializeConditions for UnitDelay: '<S10>/Delay Input1' */
    for (i = 0; i < 12; i++) {
      robotarm_student_2021a_Ipos_DW.DelayInput1_DSTATE[i] =
        robotarm_student_2021a_Ipos_P.DetectChange_vinit;
    }

    /* End of InitializeConditions for UnitDelay: '<S10>/Delay Input1' */

    /* InitializeConditions for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    robotarm_student_2021a_Ipos_DW.Discreteintegrator_DSTATE =
      robotarm_student_2021a_Ipos_P.Discreteintegrator_IC;

    /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
    /* SystemInitialize for Outport: '<S11>/Delay [s]' incorporates:
     *  Inport: '<S11>/In1'
     */
    robotarm_student_2021a_Ipos_B.In1 = robotarm_student_2021a_Ipos_P.Delays_Y0;

    /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */

    /* SystemInitialize for Sum: '<S1>/Sum4' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    robotarm_student_2021a_Ipos_B.Sum4 = robotarm_student_2021a_Ipos_P.RobotV_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum5' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    robotarm_student_2021a_Ipos_B.Sum5 = robotarm_student_2021a_Ipos_P.RobotV_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum6' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    robotarm_student_2021a_Ipos_B.Sum6 = robotarm_student_2021a_Ipos_P.RobotV_Y0;

    /* SystemInitialize for S-Function (dleadlag): '<S5>/Dctleadlag' incorporates:
     *  Outport: '<S1>/Conveyor [V] '
     */
    robotarm_student_2021a_Ipos_B.Dctleadlag_d =
      robotarm_student_2021a_Ipos_P.ConveyorV_Y0;

    /* SystemInitialize for Gain: '<S6>/Gain1' incorporates:
     *  Outport: '<S1>/Vacuum [V] '
     */
    robotarm_student_2021a_Ipos_B.Gain1_o1 =
      robotarm_student_2021a_Ipos_P.VacuumV_Y0;

    /* SystemInitialize for ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Outport: '<S1>/Blow//suck [-]'
     */
    robotarm_student_2021a_Ipos_B.Doubleclickswitch =
      robotarm_student_2021a_Ipos_P.Blowsuck_Y0;

    /* SystemInitialize for ManualSwitch: '<S1>/Manual Switch1' incorporates:
     *  Outport: '<S1>/LED Ring [-]'
     */
    strncpy(&robotarm_student_2021a_Ipos_B.ManualSwitch1[0],
            &robotarm_student_2021a_Ipos_P.LEDRing_Y0[0], 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Controller' */
    robotarm_student_2021a_Ipos_B.ManualSwitch1[255] = '\x00';
  }
}

/* Model terminate function */
void robotarm_student_2021a_Ipos_terminate(void)
{
  /* Terminate for S-Function (ec_Supervisor): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (Ipos360): '<S14>/ec_Ipos' */
  /* Level2 S-Function Block: '<S14>/ec_Ipos' (Ipos360) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */
  /* Terminate for S-Function (dpd): '<S9>/Dctpd2' */
  /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S9>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S9>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S8>/Dctpd2' */
  /* Level2 S-Function Block: '<S8>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S8>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S8>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S5>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S5>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S5>/Dctleadlag' */
  /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */

  /* Terminate for Enabled SubSystem: '<S23>/Subsystem3' */
  /* Terminate for IfAction SubSystem: '<S25>/If Action Subsystem' */
  robotarm_stud_SerialWrite1_Term(&robotarm_student_2021a_Ipos_DW.SerialWrite1);

  /* End of Terminate for SubSystem: '<S25>/If Action Subsystem' */

  /* Terminate for IfAction SubSystem: '<S25>/If Action Subsystem1' */
  robotarm_stud_SerialWrite1_Term(&robotarm_student_2021a_Ipos_DW.SerialWrite);

  /* End of Terminate for SubSystem: '<S25>/If Action Subsystem1' */
  /* End of Terminate for SubSystem: '<S23>/Subsystem3' */

  /* Terminate for S-Function (ec_IposResetEnc): '<S19>/Reset EncoderR' */
  /* Level2 S-Function Block: '<S19>/Reset EncoderR' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S28>/Dctintegrator' */
  /* Level2 S-Function Block: '<S28>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S28>/Dctleadlag' */
  /* Level2 S-Function Block: '<S28>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S28>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S28>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S29>/Dctleadlag' */
  /* Level2 S-Function Block: '<S29>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S29>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S29>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S20>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S20>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S35>/Dctintegrator' */
  /* Level2 S-Function Block: '<S35>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S35>/Dctleadlag' */
  /* Level2 S-Function Block: '<S35>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S35>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S35>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S36>/Dctleadlag' */
  /* Level2 S-Function Block: '<S36>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S36>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S36>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S21>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S21>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S44>/Dctintegrator' */
  /* Level2 S-Function Block: '<S44>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S44>/Dctleadlag' */
  /* Level2 S-Function Block: '<S44>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S44>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S44>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S45>/Dctleadlag' */
  /* Level2 S-Function Block: '<S45>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S45>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S45>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S22>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S22>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S54>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S54>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S54>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S54>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S54>/Dctleadlag' */
  /* Level2 S-Function Block: '<S54>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[30];
    sfcnTerminate(rts);
  }
}

/*
 * robotarm_student_2021a_Ipos_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ipos".
 *
 * Model version              : 2.185
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 28 10:13:42 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "robotarm_student_2021a_Ipos.h"
#include "robotarm_student_2021a_Ipos_private.h"

/* Block parameters (default storage) */
P_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_P = {
  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S61>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
   * Referenced by: '<S51>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
   * Referenced by: '<S42>/UD'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S23>/Constant'
   */
  4.0,

  /* Mask Parameter: DetectChange_vinit
   * Referenced by: '<S18>/Delay Input1'
   */
  0.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S24>/Constant'
   */
  3U,

  /* Computed Parameter: Delays_Y0
   * Referenced by: '<S19>/Delay [s]'
   */
  0.0,

  /* Computed Parameter: RobotV_Y0
   * Referenced by: '<S1>/Robot [V]'
   */
  0.0,

  /* Computed Parameter: ConveyorV_Y0
   * Referenced by: '<S1>/Conveyor [V] '
   */
  0.0,

  /* Computed Parameter: VacuumV_Y0
   * Referenced by: '<S1>/Vacuum [V] '
   */
  0.0,

  /* Expression: [0                    0                    0      1641839818.3053;0  0  0  0;0  0  0  0]
   * Referenced by: '<S4>/Object detection matrix'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.6418398183053E+9, 0.0, 0.0 },

  /* Expression: 1
   * Referenced by: '<S1>/Constant'
   */
  1.0,

  /* Expression: 10
   * Referenced by: '<S1>/Conveyor speed [mm//s]'
   */
  10.0,

  /* Expression: 25
   * Referenced by: '<S12>/Gain1'
   */
  25.0,

  /* Computed Parameter: Discreteintegrator_gainval
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.0,

  /* Expression: 0.05
   * Referenced by: '<S5>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size
   * Referenced by: '<S5>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S5>/Dctintegrator3'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P2_Size
   * Referenced by: '<S5>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S5>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size
   * Referenced by: '<S5>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S5>/Dct1lowpass'
   */
  40.0,

  /* Computed Parameter: Dct1lowpass_P2_Size
   * Referenced by: '<S5>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S5>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S5>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S5>/Dctleadlag'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P3_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S5>/Dctleadlag'
   */
  0.001,

  /* Expression: 25
   * Referenced by: '<S17>/Gain1'
   */
  25.0,

  /* Computed Parameter: Dctleadlag2_P1_Size
   * Referenced by: '<S17>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S17>/Dctleadlag2'
   */
  5.0,

  /* Computed Parameter: Dctleadlag2_P2_Size
   * Referenced by: '<S17>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S17>/Dctleadlag2'
   */
  50.0,

  /* Computed Parameter: Dctleadlag2_P3_Size
   * Referenced by: '<S17>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S17>/Dctleadlag2'
   */
  0.001,

  /* Computed Parameter: Dctintegrator3_P1_Size_h
   * Referenced by: '<S17>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S17>/Dctintegrator3'
   */
  2.0,

  /* Computed Parameter: Dctintegrator3_P2_Size_f
   * Referenced by: '<S17>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S17>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dctintegrator_P1_Size
   * Referenced by: '<S12>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S12>/Dctintegrator'
   */
  1.2,

  /* Computed Parameter: Dctintegrator_P2_Size
   * Referenced by: '<S12>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S12>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag2_P1_Size_l
   * Referenced by: '<S12>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S12>/Dctleadlag2'
   */
  8.0,

  /* Computed Parameter: Dctleadlag2_P2_Size_e
   * Referenced by: '<S12>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S12>/Dctleadlag2'
   */
  50.0,

  /* Computed Parameter: Dctleadlag2_P3_Size_p
   * Referenced by: '<S12>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S12>/Dctleadlag2'
   */
  0.001,

  /* Expression: 30
   * Referenced by: '<S10>/Gain1'
   */
  30.0,

  /* Computed Parameter: Dctleadlag2_P1_Size_d
   * Referenced by: '<S10>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S10>/Dctleadlag2'
   */
  8.0,

  /* Computed Parameter: Dctleadlag2_P2_Size_ec
   * Referenced by: '<S10>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S10>/Dctleadlag2'
   */
  50.0,

  /* Computed Parameter: Dctleadlag2_P3_Size_c
   * Referenced by: '<S10>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S10>/Dctleadlag2'
   */
  0.001,

  /* Computed Parameter: Dctintegrator_P1_Size_c
   * Referenced by: '<S10>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S10>/Dctintegrator'
   */
  1.5,

  /* Computed Parameter: Dctintegrator_P2_Size_c
   * Referenced by: '<S10>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S10>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_g
   * Referenced by: '<S17>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S17>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p
   * Referenced by: '<S17>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S17>/Dct1lowpass'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S9>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctpd2_P1_Size
   * Referenced by: '<S9>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S9>/Dctpd2'
   */
  100.0,

  /* Computed Parameter: Dctpd2_P2_Size
   * Referenced by: '<S9>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S9>/Dctpd2'
   */
  0.08,

  /* Computed Parameter: Dctpd2_P3_Size
   * Referenced by: '<S9>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S9>/Dctpd2'
   */
  0.001,

  /* Computed Parameter: Dctleadlag3_P1_Size
   * Referenced by: '<S9>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S9>/Dctleadlag3'
   */
  20.0,

  /* Computed Parameter: Dctleadlag3_P2_Size
   * Referenced by: '<S9>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S9>/Dctleadlag3'
   */
  -5.0,

  /* Computed Parameter: Dctleadlag3_P3_Size
   * Referenced by: '<S9>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S9>/Dctleadlag3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S8>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctpd2_P1_Size_k
   * Referenced by: '<S8>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S8>/Dctpd2'
   */
  100.0,

  /* Computed Parameter: Dctpd2_P2_Size_l
   * Referenced by: '<S8>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S8>/Dctpd2'
   */
  0.08,

  /* Computed Parameter: Dctpd2_P3_Size_e
   * Referenced by: '<S8>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S8>/Dctpd2'
   */
  0.001,

  /* Computed Parameter: Dctleadlag3_P1_Size_f
   * Referenced by: '<S8>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S8>/Dctleadlag3'
   */
  20.0,

  /* Computed Parameter: Dctleadlag3_P2_Size_n
   * Referenced by: '<S8>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S8>/Dctleadlag3'
   */
  -5.0,

  /* Computed Parameter: Dctleadlag3_P3_Size_j
   * Referenced by: '<S8>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S8>/Dctleadlag3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S11>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctpd2_P1_Size_l
   * Referenced by: '<S11>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S11>/Dctpd2'
   */
  100.0,

  /* Computed Parameter: Dctpd2_P2_Size_n
   * Referenced by: '<S11>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S11>/Dctpd2'
   */
  0.08,

  /* Computed Parameter: Dctpd2_P3_Size_o
   * Referenced by: '<S11>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S11>/Dctpd2'
   */
  0.001,

  /* Computed Parameter: Dctleadlag3_P1_Size_g
   * Referenced by: '<S11>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S11>/Dctleadlag3'
   */
  20.0,

  /* Computed Parameter: Dctleadlag3_P2_Size_d
   * Referenced by: '<S11>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S11>/Dctleadlag3'
   */
  -2.5,

  /* Computed Parameter: Dctleadlag3_P3_Size_f
   * Referenced by: '<S11>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S11>/Dctleadlag3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S16>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctleadlag2_P1_Size_i
   * Referenced by: '<S16>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S16>/Dctleadlag2'
   */
  -200.0,

  /* Computed Parameter: Dctleadlag2_P2_Size_l
   * Referenced by: '<S16>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S16>/Dctleadlag2'
   */
  -1.0,

  /* Computed Parameter: Dctleadlag2_P3_Size_g
   * Referenced by: '<S16>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S16>/Dctleadlag2'
   */
  0.001,

  /* Computed Parameter: Dctintegrator3_P1_Size_b
   * Referenced by: '<S16>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S16>/Dctintegrator3'
   */
  3.1,

  /* Computed Parameter: Dctintegrator3_P2_Size_c
   * Referenced by: '<S16>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S16>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dctnotch4_P1_Size
   * Referenced by: '<S16>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S16>/Dctnotch4'
   */
  4.0,

  /* Computed Parameter: Dctnotch4_P2_Size
   * Referenced by: '<S16>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: b_num
   * Referenced by: '<S16>/Dctnotch4'
   */
  22.0,

  /* Computed Parameter: Dctnotch4_P3_Size
   * Referenced by: '<S16>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S16>/Dctnotch4'
   */
  4.0,

  /* Computed Parameter: Dctnotch4_P4_Size
   * Referenced by: '<S16>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: b_den
   * Referenced by: '<S16>/Dctnotch4'
   */
  350.0,

  /* Computed Parameter: Dctnotch4_P5_Size
   * Referenced by: '<S16>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S16>/Dctnotch4'
   */
  0.001,

  /* Computed Parameter: Dctpd5_P1_Size
   * Referenced by: '<S16>/Dctpd5'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S16>/Dctpd5'
   */
  1000.0,

  /* Computed Parameter: Dctpd5_P2_Size
   * Referenced by: '<S16>/Dctpd5'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S16>/Dctpd5'
   */
  0.09,

  /* Computed Parameter: Dctpd5_P3_Size
   * Referenced by: '<S16>/Dctpd5'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S16>/Dctpd5'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S1>/Plot'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Stop'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S1>/Saturation '
   */
  100.0,

  /* Expression: -100
   * Referenced by: '<S1>/Saturation '
   */
  -100.0,

  /* Expression: 0.2
   * Referenced by: '<S1>/Reference Vacuum [bar]'
   */
  0.2,

  /* Expression: -100
   * Referenced by: '<S6>/Gain1'
   */
  -100.0,

  /* Expression: 1
   * Referenced by: '<S1>/Switch'
   */
  1.0,

  /* Expression: 50
   * Referenced by: '<S26>/Homing Running Switch2'
   */
  50.0,

  /* Expression: 2.5
   * Referenced by: '<S26>/Homing Running Switch1'
   */
  2.5,

  /* Expression: 0.5
   * Referenced by: '<S27>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S28>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S29>/Homing Running Switch'
   */
  0.5,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: portid
   * Referenced by: '<S3>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: ectimeout
   * Referenced by: '<S3>/S-Function'
   */
  500.0,

  /* Computed Parameter: ec_Ipos_P1_Size
   * Referenced by: '<S22>/ec_Ipos'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S22>/ec_Ipos'
   */
  1.0,

  /* Expression: 1/16000*9/150*2*pi
   * Referenced by: '<S20>/Gain'
   */
  2.3561944901923453E-5,

  /* Expression: 0
   * Referenced by: '<S39>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S39>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
   * Referenced by: '<S27>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S27>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: -0.05
   * Referenced by: '<S27>/Constant'
   */
  -0.05,

  /* Expression: 1/16000*9/100*2*pi
   * Referenced by: '<S20>/Gain1'
   */
  3.5342917352885178E-5,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
   * Referenced by: '<S28>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S28>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S45>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
   * Referenced by: '<S45>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S28>/Constant'
   */
  -0.1,

  /* Expression: 1/16000*9/100*2*pi
   * Referenced by: '<S20>/Gain2'
   */
  3.5342917352885178E-5,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
   * Referenced by: '<S29>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S29>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S55>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
   * Referenced by: '<S55>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0.05
   * Referenced by: '<S29>/Constant'
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S21>/Unit Delay'
   */
  0.0,

  /* Expression: 1.2259
   * Referenced by: '<S21>/set_robot_calibration_r'
   */
  1.2259,

  /* Expression: 0.6022
   * Referenced by: '<S21>/set_robot_calibration_x'
   */
  0.6022,

  /* Expression: -0.3331
   * Referenced by: '<S21>/set_robot_calibration_z'
   */
  -0.3331,

  /* Expression: 3
   * Referenced by: '<S21>/Gain'
   */
  3.0,

  /* Expression: 1
   * Referenced by: '<S25>/Constant'
   */
  1.0,

  /* Expression: 1/16000*2*pi*2.05*10
   * Referenced by: '<S20>/Gain3'
   */
  0.0080503311748238437,

  /* Expression: 1/65535
   * Referenced by: '<S20>/Gain4'
   */
  1.5259021896696422E-5,

  /* Expression: 1/2
   * Referenced by: '<S20>/Gain5'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S21>/Unit Delay1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S26>/Homing Running Switch'
   */
  0.5,

  /* Computed Parameter: ResetEncoderR_P1_Size
   * Referenced by: '<S27>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S27>/Reset EncoderR'
   */
  3.0,

  /* Expression: 25
   * Referenced by: '<S36>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size_n
   * Referenced by: '<S36>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S36>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_o
   * Referenced by: '<S36>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S36>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_m
   * Referenced by: '<S36>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S36>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_p
   * Referenced by: '<S36>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S36>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_h
   * Referenced by: '<S36>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S36>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m
   * Referenced by: '<S36>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S36>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_o
   * Referenced by: '<S36>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S36>/Dct1lowpass'
   */
  0.001,

  /* Expression: 25
   * Referenced by: '<S37>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctleadlag_P1_Size_c
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S37>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_k
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S37>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_hn
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S37>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_a
   * Referenced by: '<S37>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S37>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_l
   * Referenced by: '<S37>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S37>/Dct1lowpass'
   */
  0.001,

  /* Expression: 32
   * Referenced by: '<S27>/Gain1'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S27>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S27>/Saturation1'
   */
  -127.0,

  /* Computed Parameter: ResetEncoderR1_P1_Size
   * Referenced by: '<S28>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S28>/Reset EncoderR1'
   */
  1.0,

  /* Expression: 20
   * Referenced by: '<S43>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_i
   * Referenced by: '<S43>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S43>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_p
   * Referenced by: '<S43>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S43>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_d
   * Referenced by: '<S43>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S43>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_g
   * Referenced by: '<S43>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S43>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_o
   * Referenced by: '<S43>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S43>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m3
   * Referenced by: '<S43>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S43>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_b
   * Referenced by: '<S43>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S43>/Dct1lowpass'
   */
  0.001,

  /* Expression: 20
   * Referenced by: '<S44>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P1_Size_b
   * Referenced by: '<S44>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S44>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_m
   * Referenced by: '<S44>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S44>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_p
   * Referenced by: '<S44>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S44>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_n
   * Referenced by: '<S44>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S44>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_g
   * Referenced by: '<S44>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S44>/Dct1lowpass'
   */
  0.001,

  /* Expression: 32
   * Referenced by: '<S28>/Gain'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S28>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S28>/Saturation1'
   */
  -127.0,

  /* Computed Parameter: ResetEncoderR1_P1_Size_d
   * Referenced by: '<S29>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S29>/Reset EncoderR1'
   */
  2.0,

  /* Expression: 20
   * Referenced by: '<S52>/Gain'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_p
   * Referenced by: '<S52>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S52>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_o4
   * Referenced by: '<S52>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S52>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_ch
   * Referenced by: '<S52>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S52>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_h
   * Referenced by: '<S52>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S52>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_f
   * Referenced by: '<S52>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S52>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_ni
   * Referenced by: '<S52>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S52>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_a
   * Referenced by: '<S52>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S52>/Dct1lowpass'
   */
  0.001,

  /* Expression: 30
   * Referenced by: '<S53>/Gain'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P1_Size_by
   * Referenced by: '<S53>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S53>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_j
   * Referenced by: '<S53>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S53>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_oi
   * Referenced by: '<S53>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S53>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_p
   * Referenced by: '<S53>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S53>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_j
   * Referenced by: '<S53>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S53>/Dct1lowpass'
   */
  0.001,

  /* Expression: 32
   * Referenced by: '<S29>/Gain'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S29>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S29>/Saturation1'
   */
  -127.0,

  /* Computed Parameter: ResetEncoderR1_P1_Size_b
   * Referenced by: '<S30>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S30>/Reset EncoderR1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
   * Referenced by: '<S30>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S30>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S62>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size_m
   * Referenced by: '<S62>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S62>/Dctintegrator3'
   */
  0.01,

  /* Computed Parameter: Dctintegrator3_P2_Size_b
   * Referenced by: '<S62>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S62>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_j
   * Referenced by: '<S62>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S62>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_aj
   * Referenced by: '<S62>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S62>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_l
   * Referenced by: '<S62>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S62>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size_n
   * Referenced by: '<S62>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S62>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size_d
   * Referenced by: '<S62>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S62>/Dctleadlag'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<S30>/Homing Running Switch'
   */
  0.5,

  /* Expression: 32
   * Referenced by: '<S30>/Gain'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S30>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S30>/Saturation1'
   */
  -127.0,

  /* Expression: 0.2
   * Referenced by: '<S55>/Limit Speed'
   */
  0.2,

  /* Expression: -0.2
   * Referenced by: '<S55>/Limit Speed'
   */
  -0.2,

  /* Expression: 0
   * Referenced by: '<S55>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S61>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S55>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S55>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S55>/Limit Acceleration'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S45>/Limit Speed'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S45>/Limit Speed'
   */
  -0.4,

  /* Expression: 0
   * Referenced by: '<S45>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_d
   * Referenced by: '<S51>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S45>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S45>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S45>/Limit Acceleration'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<S39>/Limit Speed'
   */
  0.6,

  /* Expression: -0.6
   * Referenced by: '<S39>/Limit Speed'
   */
  -0.6,

  /* Expression: 0
   * Referenced by: '<S39>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_g
   * Referenced by: '<S42>/TSamp'
   */
  2048.0,

  /* Expression: 0.8
   * Referenced by: '<S39>/Limit Acceleration'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S39>/Limit Acceleration'
   */
  -0.8,

  /* Expression: 0
   * Referenced by: '<S39>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: LEDRing_Y0
   * Referenced by: '<S1>/LED Ring [-]'
   */
  "",

  /* Computed Parameter: Colorsetwithstringblackorwhite_
   * Referenced by: '<S1>/Color; set with string; black or white'
   */
  "black",

  /* Computed Parameter: Colorspecifiedin6hexdigitsrrggb
   * Referenced by: '<S1>/Color; specified in 6 hex digits, rrggbb'
   */
  "0072bd",

  /* Computed Parameter: StringConstant3_String
   * Referenced by: '<S35>/String Constant3'
   */
  "color ",

  /* Computed Parameter: StringConstant1_String
   * Referenced by: '<S35>/String Constant1'
   */
  " 0 16",

  /* Computed Parameter: StringConstant4_String
   * Referenced by: '<S33>/String Constant4'
   */
  "white",

  /* Computed Parameter: ReadyGreen_String
   * Referenced by: '<S21>/Ready Green'
   */
  "0000FF00",

  /* Computed Parameter: AirbagRed_String
   * Referenced by: '<S21>/Airbag Red'
   */
  "00FF0000",

  /* Computed Parameter: HomingOrange_String
   * Referenced by: '<S21>/Homing Orange'
   */
  "00FF3900",

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S32>/Delay'
   */
  "",

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S1>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S34>/Constant1'
   */
  13U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S35>/Constant'
   */
  13U
};

/*
 * robotarm_student_2021a_Ipos_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ipos".
 *
 * Model version              : 2.169
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Mar 26 10:43:16 2025
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
   * Referenced by: '<S62>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
   * Referenced by: '<S52>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
   * Referenced by: '<S43>/UD'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S24>/Constant'
   */
  4.0,

  /* Mask Parameter: DetectChange_vinit
   * Referenced by: '<S19>/Delay Input1'
   */
  0.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S25>/Constant'
   */
  3U,

  /* Computed Parameter: Delays_Y0
   * Referenced by: '<S20>/Delay [s]'
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

  /* Expression: [0                    0                    0      1737816296.1653;0  0  0  0;0  0  0  0]
   * Referenced by: '<S4>/Object detection matrix'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.7378162961653E+9, 0.0, 0.0 },

  /* Expression: 2
   * Referenced by: '<S1>/Constant'
   */
  2.0,

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

  /* Expression: 10
   * Referenced by: '<S1>/Conveyor speed [mm//s]'
   */
  10.0,

  /* Expression: 8
   * Referenced by: '<S13>/Gain1'
   */
  8.0,

  /* Expression: 25
   * Referenced by: '<S18>/Gain1'
   */
  25.0,

  /* Computed Parameter: Dctleadlag2_P1_Size
   * Referenced by: '<S18>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S18>/Dctleadlag2'
   */
  5.0,

  /* Computed Parameter: Dctleadlag2_P2_Size
   * Referenced by: '<S18>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S18>/Dctleadlag2'
   */
  50.0,

  /* Computed Parameter: Dctleadlag2_P3_Size
   * Referenced by: '<S18>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S18>/Dctleadlag2'
   */
  0.001,

  /* Computed Parameter: Dctintegrator3_P1_Size_h
   * Referenced by: '<S18>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S18>/Dctintegrator3'
   */
  2.0,

  /* Computed Parameter: Dctintegrator3_P2_Size_f
   * Referenced by: '<S18>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S18>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dctleadlag2_P1_Size_l
   * Referenced by: '<S13>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S13>/Dctleadlag2'
   */
  3.33,

  /* Computed Parameter: Dctleadlag2_P2_Size_e
   * Referenced by: '<S13>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S13>/Dctleadlag2'
   */
  30.0,

  /* Computed Parameter: Dctleadlag2_P3_Size_p
   * Referenced by: '<S13>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S13>/Dctleadlag2'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass3_P1_Size
   * Referenced by: '<S13>/Dct1lowpass3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S13>/Dct1lowpass3'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass3_P2_Size
   * Referenced by: '<S13>/Dct1lowpass3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S13>/Dct1lowpass3'
   */
  0.001,

  /* Expression: 9.5
   * Referenced by: '<S11>/Gain1'
   */
  9.5,

  /* Computed Parameter: Dctleadlag2_P1_Size_d
   * Referenced by: '<S11>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S11>/Dctleadlag2'
   */
  3.5,

  /* Computed Parameter: Dctleadlag2_P2_Size_ec
   * Referenced by: '<S11>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S11>/Dctleadlag2'
   */
  25.0,

  /* Computed Parameter: Dctleadlag2_P3_Size_c
   * Referenced by: '<S11>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S11>/Dctleadlag2'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass3_P1_Size_p
   * Referenced by: '<S11>/Dct1lowpass3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S11>/Dct1lowpass3'
   */
  120.0,

  /* Computed Parameter: Dct1lowpass3_P2_Size_l
   * Referenced by: '<S11>/Dct1lowpass3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S11>/Dct1lowpass3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_g
   * Referenced by: '<S18>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S18>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p
   * Referenced by: '<S18>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S18>/Dct1lowpass'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S10>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctpd2_P1_Size
   * Referenced by: '<S10>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S10>/Dctpd2'
   */
  100.0,

  /* Computed Parameter: Dctpd2_P2_Size
   * Referenced by: '<S10>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S10>/Dctpd2'
   */
  0.08,

  /* Computed Parameter: Dctpd2_P3_Size
   * Referenced by: '<S10>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S10>/Dctpd2'
   */
  0.001,

  /* Computed Parameter: Dctleadlag3_P1_Size
   * Referenced by: '<S10>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S10>/Dctleadlag3'
   */
  20.0,

  /* Computed Parameter: Dctleadlag3_P2_Size
   * Referenced by: '<S10>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S10>/Dctleadlag3'
   */
  -5.0,

  /* Computed Parameter: Dctleadlag3_P3_Size
   * Referenced by: '<S10>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S10>/Dctleadlag3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S9>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctpd2_P1_Size_k
   * Referenced by: '<S9>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S9>/Dctpd2'
   */
  100.0,

  /* Computed Parameter: Dctpd2_P2_Size_l
   * Referenced by: '<S9>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S9>/Dctpd2'
   */
  0.08,

  /* Computed Parameter: Dctpd2_P3_Size_e
   * Referenced by: '<S9>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S9>/Dctpd2'
   */
  0.001,

  /* Computed Parameter: Dctleadlag3_P1_Size_f
   * Referenced by: '<S9>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S9>/Dctleadlag3'
   */
  20.0,

  /* Computed Parameter: Dctleadlag3_P2_Size_n
   * Referenced by: '<S9>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S9>/Dctleadlag3'
   */
  -5.0,

  /* Computed Parameter: Dctleadlag3_P3_Size_j
   * Referenced by: '<S9>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S9>/Dctleadlag3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S12>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctpd2_P1_Size_l
   * Referenced by: '<S12>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S12>/Dctpd2'
   */
  100.0,

  /* Computed Parameter: Dctpd2_P2_Size_n
   * Referenced by: '<S12>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S12>/Dctpd2'
   */
  0.08,

  /* Computed Parameter: Dctpd2_P3_Size_o
   * Referenced by: '<S12>/Dctpd2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S12>/Dctpd2'
   */
  0.001,

  /* Computed Parameter: Dctleadlag3_P1_Size_g
   * Referenced by: '<S12>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S12>/Dctleadlag3'
   */
  20.0,

  /* Computed Parameter: Dctleadlag3_P2_Size_d
   * Referenced by: '<S12>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S12>/Dctleadlag3'
   */
  -2.5,

  /* Computed Parameter: Dctleadlag3_P3_Size_f
   * Referenced by: '<S12>/Dctleadlag3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S12>/Dctleadlag3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S17>/Gain1'
   */
  1.0,

  /* Computed Parameter: Dctleadlag2_P1_Size_i
   * Referenced by: '<S17>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S17>/Dctleadlag2'
   */
  -200.0,

  /* Computed Parameter: Dctleadlag2_P2_Size_l
   * Referenced by: '<S17>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S17>/Dctleadlag2'
   */
  -1.0,

  /* Computed Parameter: Dctleadlag2_P3_Size_g
   * Referenced by: '<S17>/Dctleadlag2'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S17>/Dctleadlag2'
   */
  0.001,

  /* Computed Parameter: Dctintegrator3_P1_Size_b
   * Referenced by: '<S17>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S17>/Dctintegrator3'
   */
  3.1,

  /* Computed Parameter: Dctintegrator3_P2_Size_c
   * Referenced by: '<S17>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S17>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dctnotch4_P1_Size
   * Referenced by: '<S17>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S17>/Dctnotch4'
   */
  4.0,

  /* Computed Parameter: Dctnotch4_P2_Size
   * Referenced by: '<S17>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: b_num
   * Referenced by: '<S17>/Dctnotch4'
   */
  22.0,

  /* Computed Parameter: Dctnotch4_P3_Size
   * Referenced by: '<S17>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S17>/Dctnotch4'
   */
  4.0,

  /* Computed Parameter: Dctnotch4_P4_Size
   * Referenced by: '<S17>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: b_den
   * Referenced by: '<S17>/Dctnotch4'
   */
  350.0,

  /* Computed Parameter: Dctnotch4_P5_Size
   * Referenced by: '<S17>/Dctnotch4'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S17>/Dctnotch4'
   */
  0.001,

  /* Computed Parameter: Dctpd5_P1_Size
   * Referenced by: '<S17>/Dctpd5'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S17>/Dctpd5'
   */
  1000.0,

  /* Computed Parameter: Dctpd5_P2_Size
   * Referenced by: '<S17>/Dctpd5'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S17>/Dctpd5'
   */
  0.09,

  /* Computed Parameter: Dctpd5_P3_Size
   * Referenced by: '<S17>/Dctpd5'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S17>/Dctpd5'
   */
  0.001,

  /* Expression: 100
   * Referenced by: '<S1>/Saturation '
   */
  100.0,

  /* Expression: -100
   * Referenced by: '<S1>/Saturation '
   */
  -100.0,

  /* Expression: 1
   * Referenced by: '<S1>/Object'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Plot'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Stop'
   */
  0.0,

  /* Expression: 0.2
   * Referenced by: '<S1>/Reference Vacuum [bar]'
   */
  0.2,

  /* Expression: -100
   * Referenced by: '<S6>/Gain1'
   */
  -100.0,

  /* Expression: 50
   * Referenced by: '<S27>/Homing Running Switch2'
   */
  50.0,

  /* Expression: 2.5
   * Referenced by: '<S27>/Homing Running Switch1'
   */
  2.5,

  /* Expression: 0.5
   * Referenced by: '<S28>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S29>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S30>/Homing Running Switch'
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
   * Referenced by: '<S23>/ec_Ipos'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S23>/ec_Ipos'
   */
  1.0,

  /* Expression: 1/16000*9/150*2*pi
   * Referenced by: '<S21>/Gain'
   */
  2.3561944901923453E-5,

  /* Expression: 0
   * Referenced by: '<S40>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S40>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
   * Referenced by: '<S28>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S28>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: -0.05
   * Referenced by: '<S28>/Constant'
   */
  -0.05,

  /* Expression: 1/16000*9/100*2*pi
   * Referenced by: '<S21>/Gain1'
   */
  3.5342917352885178E-5,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
   * Referenced by: '<S29>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S29>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S46>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
   * Referenced by: '<S46>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S29>/Constant'
   */
  -0.1,

  /* Expression: 1/16000*9/100*2*pi
   * Referenced by: '<S21>/Gain2'
   */
  3.5342917352885178E-5,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
   * Referenced by: '<S30>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S30>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S56>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
   * Referenced by: '<S56>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0.05
   * Referenced by: '<S30>/Constant'
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S22>/Unit Delay'
   */
  0.0,

  /* Expression: 1.2259
   * Referenced by: '<S22>/set_robot_calibration_r'
   */
  1.2259,

  /* Expression: 0.6022
   * Referenced by: '<S22>/set_robot_calibration_x'
   */
  0.6022,

  /* Expression: -0.3331
   * Referenced by: '<S22>/set_robot_calibration_z'
   */
  -0.3331,

  /* Expression: 3
   * Referenced by: '<S22>/Gain'
   */
  3.0,

  /* Expression: 1
   * Referenced by: '<S26>/Constant'
   */
  1.0,

  /* Expression: 1/16000*2*pi*2.05*10
   * Referenced by: '<S21>/Gain3'
   */
  0.0080503311748238437,

  /* Expression: 1/65535
   * Referenced by: '<S21>/Gain4'
   */
  1.5259021896696422E-5,

  /* Expression: 1/2
   * Referenced by: '<S21>/Gain5'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S22>/Unit Delay1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S27>/Homing Running Switch'
   */
  0.5,

  /* Computed Parameter: ResetEncoderR_P1_Size
   * Referenced by: '<S28>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S28>/Reset EncoderR'
   */
  3.0,

  /* Expression: 25
   * Referenced by: '<S37>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size
   * Referenced by: '<S37>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S37>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size
   * Referenced by: '<S37>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S37>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_m
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S37>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_p
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S37>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_h
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S37>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m
   * Referenced by: '<S37>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S37>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_o
   * Referenced by: '<S37>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S37>/Dct1lowpass'
   */
  0.001,

  /* Expression: 25
   * Referenced by: '<S38>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctleadlag_P1_Size_c
   * Referenced by: '<S38>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S38>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_k
   * Referenced by: '<S38>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S38>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_hn
   * Referenced by: '<S38>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S38>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_a
   * Referenced by: '<S38>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S38>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_l
   * Referenced by: '<S38>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S38>/Dct1lowpass'
   */
  0.001,

  /* Expression: 32
   * Referenced by: '<S28>/Gain1'
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

  /* Computed Parameter: ResetEncoderR1_P1_Size
   * Referenced by: '<S29>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S29>/Reset EncoderR1'
   */
  1.0,

  /* Expression: 20
   * Referenced by: '<S44>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_i
   * Referenced by: '<S44>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S44>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_p
   * Referenced by: '<S44>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S44>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_d
   * Referenced by: '<S44>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S44>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_g
   * Referenced by: '<S44>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S44>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_o
   * Referenced by: '<S44>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S44>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m3
   * Referenced by: '<S44>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S44>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_b
   * Referenced by: '<S44>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S44>/Dct1lowpass'
   */
  0.001,

  /* Expression: 20
   * Referenced by: '<S45>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P1_Size_b
   * Referenced by: '<S45>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S45>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_m
   * Referenced by: '<S45>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S45>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_p
   * Referenced by: '<S45>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S45>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_n
   * Referenced by: '<S45>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S45>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_g
   * Referenced by: '<S45>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S45>/Dct1lowpass'
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

  /* Computed Parameter: ResetEncoderR1_P1_Size_d
   * Referenced by: '<S30>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S30>/Reset EncoderR1'
   */
  2.0,

  /* Expression: 20
   * Referenced by: '<S53>/Gain'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_p
   * Referenced by: '<S53>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S53>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_o
   * Referenced by: '<S53>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S53>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_ch
   * Referenced by: '<S53>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S53>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_h
   * Referenced by: '<S53>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S53>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_f
   * Referenced by: '<S53>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S53>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_ni
   * Referenced by: '<S53>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S53>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_a
   * Referenced by: '<S53>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S53>/Dct1lowpass'
   */
  0.001,

  /* Expression: 30
   * Referenced by: '<S54>/Gain'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P1_Size_by
   * Referenced by: '<S54>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S54>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_j
   * Referenced by: '<S54>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S54>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_oi
   * Referenced by: '<S54>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S54>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_p
   * Referenced by: '<S54>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S54>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_j
   * Referenced by: '<S54>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S54>/Dct1lowpass'
   */
  0.001,

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

  /* Computed Parameter: ResetEncoderR1_P1_Size_b
   * Referenced by: '<S31>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S31>/Reset EncoderR1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
   * Referenced by: '<S31>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S31>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S63>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size_m
   * Referenced by: '<S63>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S63>/Dctintegrator3'
   */
  0.01,

  /* Computed Parameter: Dctintegrator3_P2_Size_b
   * Referenced by: '<S63>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S63>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_j
   * Referenced by: '<S63>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S63>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_aj
   * Referenced by: '<S63>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S63>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_l
   * Referenced by: '<S63>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S63>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size_n
   * Referenced by: '<S63>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S63>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size_d
   * Referenced by: '<S63>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S63>/Dctleadlag'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<S31>/Homing Running Switch'
   */
  0.5,

  /* Expression: 32
   * Referenced by: '<S31>/Gain'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S31>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S31>/Saturation1'
   */
  -127.0,

  /* Expression: 0.2
   * Referenced by: '<S56>/Limit Speed'
   */
  0.2,

  /* Expression: -0.2
   * Referenced by: '<S56>/Limit Speed'
   */
  -0.2,

  /* Expression: 0
   * Referenced by: '<S56>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S62>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S56>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S56>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S56>/Limit Acceleration'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S46>/Limit Speed'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S46>/Limit Speed'
   */
  -0.4,

  /* Expression: 0
   * Referenced by: '<S46>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_d
   * Referenced by: '<S52>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S46>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S46>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S46>/Limit Acceleration'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<S40>/Limit Speed'
   */
  0.6,

  /* Expression: -0.6
   * Referenced by: '<S40>/Limit Speed'
   */
  -0.6,

  /* Expression: 0
   * Referenced by: '<S40>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_g
   * Referenced by: '<S43>/TSamp'
   */
  2048.0,

  /* Expression: 0.8
   * Referenced by: '<S40>/Limit Acceleration'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S40>/Limit Acceleration'
   */
  -0.8,

  /* Expression: 0
   * Referenced by: '<S40>/Limit Acceleration'
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
   * Referenced by: '<S36>/String Constant3'
   */
  "color ",

  /* Computed Parameter: StringConstant1_String
   * Referenced by: '<S36>/String Constant1'
   */
  " 0 16",

  /* Computed Parameter: StringConstant4_String
   * Referenced by: '<S34>/String Constant4'
   */
  "white",

  /* Computed Parameter: ReadyGreen_String
   * Referenced by: '<S22>/Ready Green'
   */
  "0000FF00",

  /* Computed Parameter: AirbagRed_String
   * Referenced by: '<S22>/Airbag Red'
   */
  "00FF0000",

  /* Computed Parameter: HomingOrange_String
   * Referenced by: '<S22>/Homing Orange'
   */
  "00FF3900",

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S33>/Delay'
   */
  "",

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S1>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S35>/Constant1'
   */
  13U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S36>/Constant'
   */
  13U
};

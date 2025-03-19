/*
 * robotarm_student_2021a_Ipos.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ipos".
 *
 * Model version              : 2.150
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Mar 19 15:18:32 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_robotarm_student_2021a_Ipos_h_
#define RTW_HEADER_robotarm_student_2021a_Ipos_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
#ifndef robotarm_student_2021a_Ipos_COMMON_INCLUDES_
#define robotarm_student_2021a_Ipos_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_SCI.h"
#endif                        /* robotarm_student_2021a_Ipos_COMMON_INCLUDES_ */

#include "robotarm_student_2021a_Ipos_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals for system '<S1>/quintic trajectory time' */
typedef struct {
  real_T A[36];
  real_T B[6];
  real_T path;                         /* '<S1>/quintic trajectory time' */
  real_T smax;
  real_T ndbl;
  real_T cdiff;
  real_T B_m;
  real_T B_c;
  real_T B_k;
  real_T d;
  real_T d1;
  int8_T ipiv[6];
  int32_T j;
  int32_T kAcol;
  int32_T ix;
  int32_T c_k;
} B_quintictrajectorytime_robot_T;

/* Block states (default storage) for system '<S1>/quintic trajectory time' */
typedef struct {
  real_T previous_value_reference_start;/* '<S1>/quintic trajectory time' */
  real_T previous_value_reference_end; /* '<S1>/quintic trajectory time' */
  real_T index;                        /* '<S1>/quintic trajectory time' */
  emxArray_real_T_robotarm_stud_T* path_array;/* '<S1>/quintic trajectory time' */
  boolean_T path_array_not_empty;      /* '<S1>/quintic trajectory time' */
} DW_quintictrajectorytime_robo_T;

/* Block states (default storage) for system '<S30>/Serial Write1' */
typedef struct {
  codertarget_raspi_internal_SC_T obj; /* '<S30>/Serial Write1' */
  boolean_T objisempty;                /* '<S30>/Serial Write1' */
} DW_SerialWrite1_robotarm_stud_T;

/* Block signals (default storage) */
typedef struct {
  char_T rtb_StringConcatenate_m[256];
  char_T HomingRunningSwitch[256];     /* '<S22>/Homing Running Switch' */
  uint8_T MatrixConcatenate1[32];      /* '<S30>/Matrix Concatenate1' */
  uint8_T MatrixConcatenate[32];       /* '<S31>/Matrix Concatenate' */
  char_T cv[31];
  boolean_T FixPtRelationalOperator[12];/* '<S14>/FixPt Relational Operator' */
  char_T ManualSwitch1[256];           /* '<S1>/Manual Switch1' */
  real_T SFunction;                    /* '<S3>/S-Function' */
  real_T ec_Ipos_o1;                   /* '<S18>/ec_Ipos' */
  real_T ec_Ipos_o2;                   /* '<S18>/ec_Ipos' */
  real_T ec_Ipos_o3;                   /* '<S18>/ec_Ipos' */
  real_T ec_Ipos_o4;                   /* '<S18>/ec_Ipos' */
  real_T ec_Ipos_o5;                   /* '<S18>/ec_Ipos' */
  real_T Gain;                         /* '<S16>/Gain' */
  real_T Constant1;                    /* '<S35>/Constant1' */
  real_T DiscreteTimeIntegrator;       /* '<S35>/Discrete-Time Integrator' */
  real_T Sum2;                         /* '<S23>/Sum2' */
  real_T Gain1;                        /* '<S16>/Gain1' */
  real_T Constant1_e;                  /* '<S41>/Constant1' */
  real_T DiscreteTimeIntegrator_e;     /* '<S41>/Discrete-Time Integrator' */
  real_T Sum2_a;                       /* '<S24>/Sum2' */
  real_T Gain2;                        /* '<S16>/Gain2' */
  real_T Constant1_f;                  /* '<S51>/Constant1' */
  real_T DiscreteTimeIntegrator_p;     /* '<S51>/Discrete-Time Integrator' */
  real_T Sum2_e;                       /* '<S25>/Sum2' */
  real_T set_robot_calibration_r;      /* '<S17>/set_robot_calibration_r' */
  real_T set_robot_calibration_x;      /* '<S17>/set_robot_calibration_x' */
  real_T set_robot_calibration_z;      /* '<S17>/set_robot_calibration_z' */
  real_T Gain3;                        /* '<S16>/Gain3' */
  real_T Gain5;                        /* '<S16>/Gain5' */
  real_T Gain_h;                       /* '<S32>/Gain' */
  real_T Dctintegrator;                /* '<S32>/Dctintegrator' */
  real_T Dctleadlag;                   /* '<S32>/Dctleadlag' */
  real_T Dct1lowpass;                  /* '<S32>/Dct1lowpass' */
  real_T Gain_p;                       /* '<S33>/Gain' */
  real_T Dctleadlag_l;                 /* '<S33>/Dctleadlag' */
  real_T Dct1lowpass_i;                /* '<S33>/Dct1lowpass' */
  real_T Saturation1;                  /* '<S23>/Saturation1' */
  real_T Gain1_p;                      /* '<S39>/Gain1' */
  real_T Dctintegrator_g;              /* '<S39>/Dctintegrator' */
  real_T Dctleadlag_h;                 /* '<S39>/Dctleadlag' */
  real_T Dct1lowpass_k;                /* '<S39>/Dct1lowpass' */
  real_T Gain1_o;                      /* '<S40>/Gain1' */
  real_T Dctleadlag_b;                 /* '<S40>/Dctleadlag' */
  real_T Dct1lowpass_j;                /* '<S40>/Dct1lowpass' */
  real_T Saturation1_n;                /* '<S24>/Saturation1' */
  real_T Gain_i;                       /* '<S48>/Gain' */
  real_T Dctintegrator_i;              /* '<S48>/Dctintegrator' */
  real_T Dctleadlag_m;                 /* '<S48>/Dctleadlag' */
  real_T Dct1lowpass_p;                /* '<S48>/Dct1lowpass' */
  real_T Gain_f;                       /* '<S49>/Gain' */
  real_T Dctleadlag_e;                 /* '<S49>/Dctleadlag' */
  real_T Dct1lowpass_a;                /* '<S49>/Dct1lowpass' */
  real_T Saturation1_a;                /* '<S25>/Saturation1' */
  real_T Gain1_a;                      /* '<S58>/Gain1' */
  real_T Dctintegrator3;               /* '<S58>/Dctintegrator3' */
  real_T Dct1lowpass_g;                /* '<S58>/Dct1lowpass' */
  real_T Dctleadlag_k;                 /* '<S58>/Dctleadlag' */
  real_T Saturation1_d;                /* '<S26>/Saturation1' */
  real_T jogSpeed;                     /* '<S26>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S26>/Supervisor' */
  real_T resetEnc;                     /* '<S26>/Supervisor' */
  real_T homingBusy;                   /* '<S26>/Supervisor' */
  real_T Ready;                        /* '<S26>/Supervisor' */
  real_T StopSim;                      /* '<S26>/Supervisor' */
  real_T jogSpeed_i;                   /* '<S25>/Supervisor' */
  real_T toPoint;                      /* '<S25>/Supervisor' */
  real_T homeControllerEnabled_b;      /* '<S25>/Supervisor' */
  real_T resetEnc_g;                   /* '<S25>/Supervisor' */
  real_T homingBusy_n;                 /* '<S25>/Supervisor' */
  real_T airBagEnabled;                /* '<S25>/Supervisor' */
  real_T airBagRef;                    /* '<S25>/Supervisor' */
  real_T controlEnabled;               /* '<S25>/Supervisor' */
  real_T Ready_n;                      /* '<S25>/Supervisor' */
  real_T StopSim_n;                    /* '<S25>/Supervisor' */
  real_T y;                            /* '<S25>/Angle2Z' */
  real_T jogSpeed_c;                   /* '<S24>/Supervisor2' */
  real_T toPoint_e;                    /* '<S24>/Supervisor2' */
  real_T homeControllerEnabled_k;      /* '<S24>/Supervisor2' */
  real_T resetEnc_c;                   /* '<S24>/Supervisor2' */
  real_T homingBusy_j;                 /* '<S24>/Supervisor2' */
  real_T airBagEnabled_o;              /* '<S24>/Supervisor2' */
  real_T airBagRef_a;                  /* '<S24>/Supervisor2' */
  real_T controlEnabled_a;             /* '<S24>/Supervisor2' */
  real_T Ready_i;                      /* '<S24>/Supervisor2' */
  real_T StopSim_o;                    /* '<S24>/Supervisor2' */
  real_T jogSpeed_o;                   /* '<S23>/Supervisor' */
  real_T toPoint_b;                    /* '<S23>/Supervisor' */
  real_T homeControllerEnabled_o;      /* '<S23>/Supervisor' */
  real_T resetEnc_k;                   /* '<S23>/Supervisor' */
  real_T freddy_k;                     /* '<S23>/Supervisor' */
  real_T homingBusy_l;                 /* '<S23>/Supervisor' */
  real_T airBagEnabled_f;              /* '<S23>/Supervisor' */
  real_T airBagRef_g;                  /* '<S23>/Supervisor' */
  real_T controlEnabled_l;             /* '<S23>/Supervisor' */
  real_T Ready_a;                      /* '<S23>/Supervisor' */
  real_T StopSim_j;                    /* '<S23>/Supervisor' */
  real_T y_b;                          /* '<S23>/Angle2Z' */
  real_T Selector2[9];                 /* '<S4>/Selector2' */
  real_T Selector[3];                  /* '<S4>/Selector' */
  real_T Selector_g;                   /* '<S1>/Selector' */
  real_T SFunctionBuilder;             /* '<S4>/S-Function Builder' */
  real_T Selector1;                    /* '<S1>/Selector1' */
  real_T Object;                       /* '<S1>/Object' */
  real_T SignalConversion1;            /* '<S1>/Signal Conversion1' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T SignalConversion2;            /* '<S1>/Signal Conversion2' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T SignalConversion;             /* '<S1>/Signal Conversion' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T Gain1_g;                      /* '<S5>/Gain1' */
  real_T Dctintegrator3_n;             /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_ab;               /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_d;                 /* '<S5>/Dctleadlag' */
  real_T Gain1_pg;                     /* '<S8>/Gain1' */
  real_T Dctpd2;                       /* '<S8>/Dctpd2' */
  real_T Dctleadlag3;                  /* '<S8>/Dctleadlag3' */
  real_T Gain1_oc;                     /* '<S9>/Gain1' */
  real_T Dctpd2_j;                     /* '<S9>/Dctpd2' */
  real_T Dctleadlag3_f;                /* '<S9>/Dctleadlag3' */
  real_T Gain1_oz;                     /* '<S13>/Gain1' */
  real_T Dctleadlag2;                  /* '<S13>/Dctleadlag2' */
  real_T Dctintegrator3_l;             /* '<S13>/Dctintegrator3' */
  real_T Dctnotch4;                    /* '<S13>/Dctnotch4' */
  real_T Dctpd5;                       /* '<S13>/Dctpd5' */
  real_T Plot;                         /* '<S1>/Plot' */
  real_T Stop;                         /* '<S1>/Stop' */
  real_T Sum;                          /* '<S4>/Sum' */
  real_T Selector2_i;                  /* '<S1>/Selector2' */
  real_T Selector3;                    /* '<S1>/Selector3' */
  real_T Selector4;                    /* '<S1>/Selector4' */
  real_T Selector5;                    /* '<S1>/Selector5' */
  real_T Selector6;                    /* '<S1>/Selector6' */
  real_T Selector7;                    /* '<S1>/Selector7' */
  real_T Selector8;                    /* '<S1>/Selector8' */
  real_T Gain1_o1;                     /* '<S6>/Gain1' */
  real_T R_rad;                        /* '<S1>/Stateflow 1' */
  real_T X_rad;                        /* '<S1>/Stateflow 1' */
  real_T Z_rad;                        /* '<S1>/Stateflow 1' */
  real_T Blow_suck;                    /* '<S1>/Stateflow 1' */
  real_T In1;                          /* '<S15>/In1' */
  real_T d12;
  real_T Add1;                         /* '<S21>/Add1' */
  real_T rtb_Gain_idx_0;
  real_T rtb_Gain_idx_1;
  real_T rtb_Gain_idx_2;
  real_T d13_tmp;
  real_T LimitAcceleration_h;          /* '<S35>/Limit Acceleration' */
  real_T TSamp;                        /* '<S57>/TSamp' */
  real_T TSamp_d;                      /* '<S47>/TSamp' */
  real_T TSamp_k;                      /* '<S38>/TSamp' */
  real_T LimitAcceleration;            /* '<S51>/Limit Acceleration' */
  real_T LimitAcceleration_b;          /* '<S41>/Limit Acceleration' */
  real_T Add2;                         /* '<S17>/Add2' */
  real_T Add;                          /* '<S17>/Add' */
  real_T Y;
  real_T X;
  real_T R;
  real_T L_DB;
  real_T H_CDB;
  real_T L_DF;
  real_T a;
  int32_T i;
  int32_T Selector2_tmp;
  int32_T u0;
  int32_T u1;
  boolean_T RelationalOperator;        /* '<S23>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S24>/Relational Operator' */
  boolean_T RelationalOperator_k;      /* '<S25>/Relational Operator' */
  boolean_T Compare;                   /* '<S20>/Compare' */
  boolean_T Compare_j;                 /* '<S19>/Compare' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime2;/* '<S1>/quintic trajectory time2' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime1;/* '<S1>/quintic trajectory time1' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime;/* '<S1>/quintic trajectory time' */
} B_robotarm_student_2021a_Ipos_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S35>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_g;/* '<S23>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S24>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S41>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_a;/* '<S25>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S51>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S17>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S17>/Unit Delay1' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S26>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S57>/UD' */
  real_T UD_DSTATE_c;                  /* '<S47>/UD' */
  real_T UD_DSTATE_cc;                 /* '<S38>/UD' */
  real_T DelayInput1_DSTATE[12];       /* '<S14>/Delay Input1' */
  real_T Discreteintegrator_DSTATE;    /* '<S1>/Discrete  integrator' */
  char_T Delay_DSTATE[256];            /* '<S28>/Delay' */
  real_T PrevY;                        /* '<S51>/Limit Speed' */
  real_T PrevY_j;                      /* '<S51>/Limit Acceleration' */
  real_T PrevY_d;                      /* '<S41>/Limit Speed' */
  real_T PrevY_f;                      /* '<S41>/Limit Acceleration' */
  real_T PrevY_i;                      /* '<S35>/Limit Speed' */
  real_T PrevY_k;                      /* '<S35>/Limit Acceleration' */
  real_T currentcarPos;                /* '<S25>/Supervisor' */
  real_T currentcarPos_d;              /* '<S24>/Supervisor2' */
  real_T currentcarPos_l;              /* '<S23>/Supervisor' */
  real_T treshold;                     /* '<S1>/Stateflow 1' */
  real_T x;                            /* '<S1>/Stateflow 1' */
  real_T y;                            /* '<S1>/Stateflow 1' */
  real_T z;                            /* '<S1>/Stateflow 1' */
  real_T X_pos;                        /* '<S1>/Stateflow 1' */
  real_T Y_pos;                        /* '<S1>/Stateflow 1' */
  real_T Z_pos;                        /* '<S1>/Stateflow 1' */
  real_T elapTime;                     /* '<S1>/Stateflow 1' */
  real_T yTracked;                     /* '<S1>/Stateflow 1' */
  real_T track;                        /* '<S1>/Stateflow 1' */
  real_T ObjectType;                   /* '<S1>/Stateflow 1' */
  real_T reachability;                 /* '<S1>/Stateflow 1' */
  real_T action;                       /* '<S1>/Stateflow 1' */
  real_T EndTime;                      /* '<S1>/Stateflow 1' */
  real_T velocity;                     /* '<S1>/Stateflow 1' */
  real_T Dctintegrator_RWORK[2];       /* '<S32>/Dctintegrator' */
  real_T Dctleadlag_RWORK[2];          /* '<S32>/Dctleadlag' */
  real_T Dct1lowpass_RWORK[2];         /* '<S32>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_k[2];        /* '<S33>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_a[2];       /* '<S33>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_m[2];     /* '<S39>/Dctintegrator' */
  real_T Dctleadlag_RWORK_g[2];        /* '<S39>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_n[2];       /* '<S39>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_j[2];        /* '<S40>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_k[2];       /* '<S40>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_i[2];     /* '<S48>/Dctintegrator' */
  real_T Dctleadlag_RWORK_n[2];        /* '<S48>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_g[2];       /* '<S48>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_i[2];        /* '<S49>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_h[2];       /* '<S49>/Dct1lowpass' */
  real_T Dctintegrator3_RWORK[2];      /* '<S58>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_ay[2];      /* '<S58>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_o[2];        /* '<S58>/Dctleadlag' */
  real_T Dctintegrator3_RWORK_g[2];    /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_c[2];       /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_gp[2];       /* '<S5>/Dctleadlag' */
  real_T Dctpd2_RWORK[2];              /* '<S8>/Dctpd2' */
  real_T Dctleadlag3_RWORK[2];         /* '<S8>/Dctleadlag3' */
  real_T Dctpd2_RWORK_j[2];            /* '<S9>/Dctpd2' */
  real_T Dctleadlag3_RWORK_c[2];       /* '<S9>/Dctleadlag3' */
  real_T Dctleadlag2_RWORK[2];         /* '<S13>/Dctleadlag2' */
  real_T Dctintegrator3_RWORK_gh[2];   /* '<S13>/Dctintegrator3' */
  real_T Dctnotch4_RWORK[4];           /* '<S13>/Dctnotch4' */
  real_T Dctpd5_RWORK[2];              /* '<S13>/Dctpd5' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S36>/Scope' */

  struct {
    void *LoggedData;
  } Scope_PWORK_b;                     /* '<S25>/Scope' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S23>/Scope9' */

  int32_T sfEvent;                     /* '<S26>/Supervisor' */
  int32_T sfEvent_n;                   /* '<S25>/Supervisor' */
  int32_T sfEvent_h;                   /* '<S24>/Supervisor2' */
  int32_T sfEvent_k;                   /* '<S23>/Supervisor' */
  int32_T sfEvent_e;                   /* '<S1>/Stateflow 1' */
  uint32_T is_c1_robotarm_student_2021a_Ip;/* '<S26>/Supervisor' */
  uint32_T is_c18_robotarm_student_2021a_I;/* '<S25>/Supervisor' */
  uint32_T is_c16_robotarm_student_2021a_I;/* '<S24>/Supervisor2' */
  uint32_T is_c12_robotarm_student_2021a_I;/* '<S23>/Supervisor' */
  uint32_T is_Object_Detection;        /* '<S1>/Stateflow 1' */
  uint32_T is_Belt;                    /* '<S1>/Stateflow 1' */
  uint32_T is_Identification;          /* '<S1>/Stateflow 1' */
  uint32_T is_Vacuum;                  /* '<S1>/Stateflow 1' */
  uint32_T is_Object_picked;           /* '<S1>/Stateflow 1' */
  uint32_T is_ActionDone;              /* '<S1>/Stateflow 1' */
  uint32_T is_Robot_Arm;               /* '<S1>/Stateflow 1' */
  uint32_T is_Object_tracking;         /* '<S1>/Stateflow 1' */
  uint32_T temporalCounter_i2;         /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i1;         /* '<S26>/Supervisor' */
  uint16_T temporalCounter_i1_m;       /* '<S25>/Supervisor' */
  uint16_T temporalCounter_i1_me;      /* '<S24>/Supervisor2' */
  uint16_T temporalCounter_i1_c;       /* '<S23>/Supervisor' */
  uint16_T temporalCounter_i1_m0;      /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i3;         /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i4;         /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i5;         /* '<S1>/Stateflow 1' */
  int8_T Subsystem3_SubsysRanBC;       /* '<S27>/Subsystem3' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S29>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S29>/If Action Subsystem' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S4>/Enabled Subsystem' */
  uint8_T is_active_c1_robotarm_student_2;/* '<S26>/Supervisor' */
  uint8_T is_active_c18_robotarm_student_;/* '<S25>/Supervisor' */
  uint8_T is_active_c16_robotarm_student_;/* '<S24>/Supervisor2' */
  uint8_T is_active_c12_robotarm_student_;/* '<S23>/Supervisor' */
  uint8_T is_active_c4_robotarm_student_2;/* '<S1>/Stateflow 1' */
  uint8_T is_active_Object_Detection;  /* '<S1>/Stateflow 1' */
  uint8_T is_active_Belt;              /* '<S1>/Stateflow 1' */
  uint8_T is_active_Identification;    /* '<S1>/Stateflow 1' */
  uint8_T is_active_Vacuum;            /* '<S1>/Stateflow 1' */
  uint8_T is_active_Object_picked;     /* '<S1>/Stateflow 1' */
  uint8_T is_active_ActionDone;        /* '<S1>/Stateflow 1' */
  uint8_T is_active_Robot_Arm;         /* '<S1>/Stateflow 1' */
  uint8_T is_active_Object_tracking;   /* '<S1>/Stateflow 1' */
  boolean_T doneDoubleBufferReInit;    /* '<S1>/Stateflow 1' */
  boolean_T isNotInit;                 /* '<S1>/Stateflow 1' */
  boolean_T Controller_MODE;           /* '<Root>/Controller' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite;/* '<S30>/Serial Write1' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite1;/* '<S30>/Serial Write1' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime2;/* '<S1>/quintic trajectory time2' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime1;/* '<S1>/quintic trajectory time1' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime;/* '<S1>/quintic trajectory time' */
} DW_robotarm_student_2021a_Ipos_T;

/* Parameters (default storage) */
struct P_robotarm_student_2021a_Ipos_T_ {
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S57>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_e;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                               * Referenced by: '<S47>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_h;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
                               * Referenced by: '<S38>/UD'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S19>/Constant'
                                       */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S14>/Delay Input1'
                                        */
  uint8_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S20>/Constant'
                                      */
  real_T Delays_Y0;                    /* Computed Parameter: Delays_Y0
                                        * Referenced by: '<S15>/Delay [s]'
                                        */
  real_T RobotV_Y0;                    /* Computed Parameter: RobotV_Y0
                                        * Referenced by: '<S1>/Robot [V]'
                                        */
  real_T ConveyorV_Y0;                 /* Computed Parameter: ConveyorV_Y0
                                        * Referenced by: '<S1>/Conveyor [V] '
                                        */
  real_T VacuumV_Y0;                   /* Computed Parameter: VacuumV_Y0
                                        * Referenced by: '<S1>/Vacuum [V] '
                                        */
  real_T Objectdetectionmatrix_Value[12];
  /* Expression: [0                    0                    0      1641446893.1573;0  0  0  0;0  0  0  0]
   * Referenced by: '<S4>/Object detection matrix'
   */
  real_T Object_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/Object'
                                        */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T FeedfowardXV_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward X [V]'
                                        */
  real_T FeedfowardRV_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward R [V]'
                                        */
  real_T FeedfowardZV_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward Z [V]'
                                        */
  real_T Discreteintegrator_gainval;
                               /* Computed Parameter: Discreteintegrator_gainval
                                * Referenced by: '<S1>/Discrete  integrator'
                                */
  real_T Discreteintegrator_IC;        /* Expression: 0
                                        * Referenced by: '<S1>/Discrete  integrator'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size[2];/* Computed Parameter: Dctintegrator3_P1_Size
                                    * Referenced by: '<S5>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P1;            /* Expression: f_num
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size[2];/* Computed Parameter: Dctintegrator3_P2_Size
                                    * Referenced by: '<S5>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P2;            /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size[2];      /* Computed Parameter: Dct1lowpass_P1_Size
                                       * Referenced by: '<S5>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P1;               /* Expression: f_den
                                        * Referenced by: '<S5>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size[2];      /* Computed Parameter: Dct1lowpass_P2_Size
                                       * Referenced by: '<S5>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P2;               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size[2];        /* Computed Parameter: Dctleadlag_P1_Size
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P1;                /* Expression: f_num
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size[2];        /* Computed Parameter: Dctleadlag_P2_Size
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2;                /* Expression: f_den
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size[2];        /* Computed Parameter: Dctleadlag_P3_Size
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3;                /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 1
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T Dctpd2_P1_Size[2];            /* Computed Parameter: Dctpd2_P1_Size
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P1;                    /* Expression: kp
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size[2];            /* Computed Parameter: Dctpd2_P2_Size
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P2;                    /* Expression: kv
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size[2];            /* Computed Parameter: Dctpd2_P3_Size
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P3;                    /* Expression: 0.001
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size[2];      /* Computed Parameter: Dctleadlag3_P1_Size
                                       * Referenced by: '<S8>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P1;               /* Expression: f_num
                                        * Referenced by: '<S8>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size[2];      /* Computed Parameter: Dctleadlag3_P2_Size
                                       * Referenced by: '<S8>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P2;               /* Expression: f_den
                                        * Referenced by: '<S8>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size[2];      /* Computed Parameter: Dctleadlag3_P3_Size
                                       * Referenced by: '<S8>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P3;               /* Expression: 0.001
                                        * Referenced by: '<S8>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T Dctpd2_P1_Size_l[2];          /* Computed Parameter: Dctpd2_P1_Size_l
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P1_a;                  /* Expression: kp
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size_n[2];          /* Computed Parameter: Dctpd2_P2_Size_n
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P2_g;                  /* Expression: kv
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size_o[2];          /* Computed Parameter: Dctpd2_P3_Size_o
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P3_c;                  /* Expression: 0.001
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size_g[2];  /* Computed Parameter: Dctleadlag3_P1_Size_g
                                     * Referenced by: '<S9>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P1_b;             /* Expression: f_num
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size_d[2];  /* Computed Parameter: Dctleadlag3_P2_Size_d
                                     * Referenced by: '<S9>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P2_k;             /* Expression: f_den
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size_f[2];  /* Computed Parameter: Dctleadlag3_P3_Size_f
                                     * Referenced by: '<S9>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P3_j;             /* Expression: 0.001
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 1
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size[2];      /* Computed Parameter: Dctleadlag2_P1_Size
                                       * Referenced by: '<S13>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P1;               /* Expression: f_num
                                        * Referenced by: '<S13>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size[2];      /* Computed Parameter: Dctleadlag2_P2_Size
                                       * Referenced by: '<S13>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P2;               /* Expression: f_den
                                        * Referenced by: '<S13>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size[2];      /* Computed Parameter: Dctleadlag2_P3_Size
                                       * Referenced by: '<S13>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P3;               /* Expression: 0.001
                                        * Referenced by: '<S13>/Dctleadlag2'
                                        */
  real_T Dctintegrator3_P1_Size_b[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_b
                                  * Referenced by: '<S13>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_j;          /* Expression: f_num
                                        * Referenced by: '<S13>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_c[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_c
                                  * Referenced by: '<S13>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_b;          /* Expression: 0.001
                                        * Referenced by: '<S13>/Dctintegrator3'
                                        */
  real_T Dctnotch4_P1_Size[2];         /* Computed Parameter: Dctnotch4_P1_Size
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P1;                 /* Expression: f_num
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P2_Size[2];         /* Computed Parameter: Dctnotch4_P2_Size
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P2;                 /* Expression: b_num
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P3_Size[2];         /* Computed Parameter: Dctnotch4_P3_Size
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P3;                 /* Expression: f_den
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P4_Size[2];         /* Computed Parameter: Dctnotch4_P4_Size
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P4;                 /* Expression: b_den
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P5_Size[2];         /* Computed Parameter: Dctnotch4_P5_Size
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctnotch4_P5;                 /* Expression: 0.001
                                        * Referenced by: '<S13>/Dctnotch4'
                                        */
  real_T Dctpd5_P1_Size[2];            /* Computed Parameter: Dctpd5_P1_Size
                                        * Referenced by: '<S13>/Dctpd5'
                                        */
  real_T Dctpd5_P1;                    /* Expression: kp
                                        * Referenced by: '<S13>/Dctpd5'
                                        */
  real_T Dctpd5_P2_Size[2];            /* Computed Parameter: Dctpd5_P2_Size
                                        * Referenced by: '<S13>/Dctpd5'
                                        */
  real_T Dctpd5_P2;                    /* Expression: kv
                                        * Referenced by: '<S13>/Dctpd5'
                                        */
  real_T Dctpd5_P3_Size[2];            /* Computed Parameter: Dctpd5_P3_Size
                                        * Referenced by: '<S13>/Dctpd5'
                                        */
  real_T Dctpd5_P3;                    /* Expression: 0.001
                                        * Referenced by: '<S13>/Dctpd5'
                                        */
  real_T Plot_Value;                   /* Expression: 1
                                        * Referenced by: '<S1>/Plot'
                                        */
  real_T Stop_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Stop'
                                        */
  real_T ReferenceVacuumbar_Value;     /* Expression: 0.2
                                        * Referenced by: '<S1>/Reference Vacuum [bar]'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: -100
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Conveyorspeedmms_Value;       /* Expression: 10
                                        * Referenced by: '<S1>/Conveyor speed [mm//s]'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T Saturation_LowerSat;          /* Expression: -100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T HomingRunningSwitch2_Threshold;/* Expression: 50
                                         * Referenced by: '<S22>/Homing Running Switch2'
                                         */
  real_T HomingRunningSwitch1_Threshold;/* Expression: 2.5
                                         * Referenced by: '<S22>/Homing Running Switch1'
                                         */
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S23>/Homing Running Switch'
                                        */
  real_T HomingRunningSwitch_Threshold_j;/* Expression: 0.5
                                          * Referenced by: '<S24>/Homing Running Switch'
                                          */
  real_T HomingRunningSwitch_Threshold_d;/* Expression: 0.5
                                          * Referenced by: '<S25>/Homing Running Switch'
                                          */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: portid
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction_P2;                 /* Expression: ectimeout
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T ec_Ipos_P1_Size[2];           /* Computed Parameter: ec_Ipos_P1_Size
                                        * Referenced by: '<S18>/ec_Ipos'
                                        */
  real_T ec_Ipos_P1;                   /* Expression: link_id
                                        * Referenced by: '<S18>/ec_Ipos'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/16000*9/150*2*pi
                                        * Referenced by: '<S16>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S35>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S35>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_gainva_i;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                           * Referenced by: '<S23>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S23>/Discrete-Time Integrator'
                                        */
  real_T Constant_Value_i;             /* Expression: -0.05
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S16>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_h;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
                           * Referenced by: '<S24>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_c;  /* Expression: 0
                                        * Referenced by: '<S24>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_j;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                           * Referenced by: '<S41>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_f;             /* Expression: -0.1
                                        * Referenced by: '<S24>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S16>/Gain2'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                           * Referenced by: '<S25>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_o;  /* Expression: 0
                                        * Referenced by: '<S25>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S51>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                           * Referenced by: '<S51>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_o;             /* Expression: 0.05
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S17>/Unit Delay'
                                        */
  real_T set_robot_calibration_r_Value;/* Expression: 1.2299
                                        * Referenced by: '<S17>/set_robot_calibration_r'
                                        */
  real_T set_robot_calibration_x_Value;/* Expression: 0.63386
                                        * Referenced by: '<S17>/set_robot_calibration_x'
                                        */
  real_T set_robot_calibration_z_Value;/* Expression: -0.34972
                                        * Referenced by: '<S17>/set_robot_calibration_z'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 3
                                        * Referenced by: '<S17>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/16000*2*pi*2.05*10
                                        * Referenced by: '<S16>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/65535
                                        * Referenced by: '<S16>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1/2
                                        * Referenced by: '<S16>/Gain5'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S17>/Unit Delay1'
                                        */
  real_T HomingRunningSwitch_Threshold_l;/* Expression: 0.5
                                          * Referenced by: '<S22>/Homing Running Switch'
                                          */
  real_T ResetEncoderR_P1_Size[2];  /* Computed Parameter: ResetEncoderR_P1_Size
                                     * Referenced by: '<S23>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P1;             /* Expression: ipos_id
                                        * Referenced by: '<S23>/Reset EncoderR'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 25
                                        * Referenced by: '<S32>/Gain'
                                        */
  real_T Dctintegrator_P1_Size[2];  /* Computed Parameter: Dctintegrator_P1_Size
                                     * Referenced by: '<S32>/Dctintegrator'
                                     */
  real_T Dctintegrator_P1;             /* Expression: f_num
                                        * Referenced by: '<S32>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size[2];  /* Computed Parameter: Dctintegrator_P2_Size
                                     * Referenced by: '<S32>/Dctintegrator'
                                     */
  real_T Dctintegrator_P2;             /* Expression: 0.001
                                        * Referenced by: '<S32>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_m[2];    /* Computed Parameter: Dctleadlag_P1_Size_m
                                      * Referenced by: '<S32>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_g;              /* Expression: f_num
                                        * Referenced by: '<S32>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_p[2];    /* Computed Parameter: Dctleadlag_P2_Size_p
                                      * Referenced by: '<S32>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_g;              /* Expression: f_den
                                        * Referenced by: '<S32>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_h[2];    /* Computed Parameter: Dctleadlag_P3_Size_h
                                      * Referenced by: '<S32>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_e;              /* Expression: 0.001
                                        * Referenced by: '<S32>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m[2];  /* Computed Parameter: Dct1lowpass_P1_Size_m
                                     * Referenced by: '<S32>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_e;             /* Expression: f_den
                                        * Referenced by: '<S32>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_o[2];  /* Computed Parameter: Dct1lowpass_P2_Size_o
                                     * Referenced by: '<S32>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_a;             /* Expression: 0.001
                                        * Referenced by: '<S32>/Dct1lowpass'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 25
                                        * Referenced by: '<S33>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_c[2];    /* Computed Parameter: Dctleadlag_P1_Size_c
                                      * Referenced by: '<S33>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_e;              /* Expression: f_num
                                        * Referenced by: '<S33>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_k[2];    /* Computed Parameter: Dctleadlag_P2_Size_k
                                      * Referenced by: '<S33>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_b;              /* Expression: f_den
                                        * Referenced by: '<S33>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_hn[2];  /* Computed Parameter: Dctleadlag_P3_Size_hn
                                     * Referenced by: '<S33>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_g;              /* Expression: 0.001
                                        * Referenced by: '<S33>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_a[2];  /* Computed Parameter: Dct1lowpass_P1_Size_a
                                     * Referenced by: '<S33>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_g;             /* Expression: f_den
                                        * Referenced by: '<S33>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_l[2];  /* Computed Parameter: Dct1lowpass_P2_Size_l
                                     * Referenced by: '<S33>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_i;             /* Expression: 0.001
                                        * Referenced by: '<S33>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 32
                                        * Referenced by: '<S23>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 127
                                        * Referenced by: '<S23>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -127
                                        * Referenced by: '<S23>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size[2];/* Computed Parameter: ResetEncoderR1_P1_Size
                                    * Referenced by: '<S24>/Reset EncoderR1'
                                    */
  real_T ResetEncoderR1_P1;            /* Expression: ipos_id
                                        * Referenced by: '<S24>/Reset EncoderR1'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 20
                                        * Referenced by: '<S39>/Gain1'
                                        */
  real_T Dctintegrator_P1_Size_i[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_i
                                   * Referenced by: '<S39>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_j;           /* Expression: f_num
                                        * Referenced by: '<S39>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_p
                                   * Referenced by: '<S39>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_n;           /* Expression: 0.001
                                        * Referenced by: '<S39>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_d[2];    /* Computed Parameter: Dctleadlag_P1_Size_d
                                      * Referenced by: '<S39>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m;              /* Expression: f_num
                                        * Referenced by: '<S39>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_g[2];    /* Computed Parameter: Dctleadlag_P2_Size_g
                                      * Referenced by: '<S39>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_p;              /* Expression: f_den
                                        * Referenced by: '<S39>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_o[2];    /* Computed Parameter: Dctleadlag_P3_Size_o
                                      * Referenced by: '<S39>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_ge;             /* Expression: 0.001
                                        * Referenced by: '<S39>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m3[2];/* Computed Parameter: Dct1lowpass_P1_Size_m3
                                    * Referenced by: '<S39>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_f;             /* Expression: f_den
                                        * Referenced by: '<S39>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_b[2];  /* Computed Parameter: Dct1lowpass_P2_Size_b
                                     * Referenced by: '<S39>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_k;             /* Expression: 0.001
                                        * Referenced by: '<S39>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 20
                                        * Referenced by: '<S40>/Gain1'
                                        */
  real_T Dctleadlag_P1_Size_b[2];    /* Computed Parameter: Dctleadlag_P1_Size_b
                                      * Referenced by: '<S40>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_p;              /* Expression: f_num
                                        * Referenced by: '<S40>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_m[2];    /* Computed Parameter: Dctleadlag_P2_Size_m
                                      * Referenced by: '<S40>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_a;              /* Expression: f_den
                                        * Referenced by: '<S40>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_p[2];    /* Computed Parameter: Dctleadlag_P3_Size_p
                                      * Referenced by: '<S40>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_c;              /* Expression: 0.001
                                        * Referenced by: '<S40>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_n[2];  /* Computed Parameter: Dct1lowpass_P1_Size_n
                                     * Referenced by: '<S40>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_h;             /* Expression: f_den
                                        * Referenced by: '<S40>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_g[2];  /* Computed Parameter: Dct1lowpass_P2_Size_g
                                     * Referenced by: '<S40>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_b;             /* Expression: 0.001
                                        * Referenced by: '<S40>/Dct1lowpass'
                                        */
  real_T Gain_Gain_cj;                 /* Expression: 32
                                        * Referenced by: '<S24>/Gain'
                                        */
  real_T Saturation1_UpperSat_e;       /* Expression: 127
                                        * Referenced by: '<S24>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_p;       /* Expression: -127
                                        * Referenced by: '<S24>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_d[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_d
                                  * Referenced by: '<S25>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_d;          /* Expression: ipos_id
                                        * Referenced by: '<S25>/Reset EncoderR1'
                                        */
  real_T Gain_Gain_cr;                 /* Expression: 20
                                        * Referenced by: '<S48>/Gain'
                                        */
  real_T Dctintegrator_P1_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_p
                                   * Referenced by: '<S48>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_k;           /* Expression: f_num
                                        * Referenced by: '<S48>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_o[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_o
                                   * Referenced by: '<S48>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_m;           /* Expression: 0.001
                                        * Referenced by: '<S48>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_ch[2];  /* Computed Parameter: Dctleadlag_P1_Size_ch
                                     * Referenced by: '<S48>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_h;              /* Expression: f_num
                                        * Referenced by: '<S48>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_h[2];    /* Computed Parameter: Dctleadlag_P2_Size_h
                                      * Referenced by: '<S48>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_l;              /* Expression: f_den
                                        * Referenced by: '<S48>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_f[2];    /* Computed Parameter: Dctleadlag_P3_Size_f
                                      * Referenced by: '<S48>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_a;              /* Expression: 0.001
                                        * Referenced by: '<S48>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_ni[2];/* Computed Parameter: Dct1lowpass_P1_Size_ni
                                    * Referenced by: '<S48>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_j;             /* Expression: f_den
                                        * Referenced by: '<S48>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_a[2];  /* Computed Parameter: Dct1lowpass_P2_Size_a
                                     * Referenced by: '<S48>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_j;             /* Expression: 0.001
                                        * Referenced by: '<S48>/Dct1lowpass'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 30
                                        * Referenced by: '<S49>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_by[2];  /* Computed Parameter: Dctleadlag_P1_Size_by
                                     * Referenced by: '<S49>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_i;              /* Expression: f_num
                                        * Referenced by: '<S49>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_j[2];    /* Computed Parameter: Dctleadlag_P2_Size_j
                                      * Referenced by: '<S49>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_o;              /* Expression: f_den
                                        * Referenced by: '<S49>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_oi[2];  /* Computed Parameter: Dctleadlag_P3_Size_oi
                                     * Referenced by: '<S49>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_aa;             /* Expression: 0.001
                                        * Referenced by: '<S49>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_p[2];  /* Computed Parameter: Dct1lowpass_P1_Size_p
                                     * Referenced by: '<S49>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_j3;            /* Expression: f_den
                                        * Referenced by: '<S49>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_j[2];  /* Computed Parameter: Dct1lowpass_P2_Size_j
                                     * Referenced by: '<S49>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_c;             /* Expression: 0.001
                                        * Referenced by: '<S49>/Dct1lowpass'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 32
                                        * Referenced by: '<S25>/Gain'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 127
                                        * Referenced by: '<S25>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: -127
                                        * Referenced by: '<S25>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_b[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_b
                                  * Referenced by: '<S26>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_l;          /* Expression: ipos_id
                                        * Referenced by: '<S26>/Reset EncoderR1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                           * Referenced by: '<S26>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_co; /* Expression: 0
                                        * Referenced by: '<S26>/Discrete-Time Integrator'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 10*2.5/500
                                        * Referenced by: '<S58>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size_m[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_m
                                  * Referenced by: '<S58>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_ji;         /* Expression: f_num
                                        * Referenced by: '<S58>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_b[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_b
                                  * Referenced by: '<S58>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_j;          /* Expression: 0.001
                                        * Referenced by: '<S58>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size_j[2];  /* Computed Parameter: Dct1lowpass_P1_Size_j
                                     * Referenced by: '<S58>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_ez;            /* Expression: f_den
                                        * Referenced by: '<S58>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_aj[2];/* Computed Parameter: Dct1lowpass_P2_Size_aj
                                    * Referenced by: '<S58>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_n;             /* Expression: 0.001
                                        * Referenced by: '<S58>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size_l[2];    /* Computed Parameter: Dctleadlag_P1_Size_l
                                      * Referenced by: '<S58>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m0;             /* Expression: f_num
                                        * Referenced by: '<S58>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_n[2];    /* Computed Parameter: Dctleadlag_P2_Size_n
                                      * Referenced by: '<S58>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_f;              /* Expression: f_den
                                        * Referenced by: '<S58>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_d[2];    /* Computed Parameter: Dctleadlag_P3_Size_d
                                      * Referenced by: '<S58>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_i;              /* Expression: 0.001
                                        * Referenced by: '<S58>/Dctleadlag'
                                        */
  real_T HomingRunningSwitch_Threshol_lq;/* Expression: 0.5
                                          * Referenced by: '<S26>/Homing Running Switch'
                                          */
  real_T Gain_Gain_j;                  /* Expression: 32
                                        * Referenced by: '<S26>/Gain'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 127
                                        * Referenced by: '<S26>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_g;       /* Expression: -127
                                        * Referenced by: '<S26>/Saturation1'
                                        */
  real_T LimitSpeed_RisingLim;         /* Expression: 0.2
                                        * Referenced by: '<S51>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Expression: -0.2
                                        * Referenced by: '<S51>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S51>/Limit Speed'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S57>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Expression: 0.5
                                        * Referenced by: '<S51>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Expression: -0.5
                                        * Referenced by: '<S51>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S51>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_i;       /* Expression: 0.4
                                        * Referenced by: '<S41>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_k;      /* Expression: -0.4
                                        * Referenced by: '<S41>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_a;              /* Expression: 0
                                        * Referenced by: '<S41>/Limit Speed'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S47>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_k;/* Expression: 0.5
                                        * Referenced by: '<S41>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_m;/* Expression: -0.5
                                         * Referenced by: '<S41>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_k;       /* Expression: 0
                                        * Referenced by: '<S41>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_iu;      /* Expression: 0.6
                                        * Referenced by: '<S35>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_j;      /* Expression: -0.6
                                        * Referenced by: '<S35>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_e;              /* Expression: 0
                                        * Referenced by: '<S35>/Limit Speed'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S38>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_m;/* Expression: 0.8
                                        * Referenced by: '<S35>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_k;/* Expression: -0.8
                                         * Referenced by: '<S35>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_i;       /* Expression: 0
                                        * Referenced by: '<S35>/Limit Acceleration'
                                        */
  char_T LEDRing_Y0[256];              /* Computed Parameter: LEDRing_Y0
                                        * Referenced by: '<S1>/LED Ring [-]'
                                        */
  char_T Colorsetwithstringblackorwhite_[256];
                          /* Computed Parameter: Colorsetwithstringblackorwhite_
                           * Referenced by: '<S1>/Color; set with string; black or white'
                           */
  char_T Colorspecifiedin6hexdigitsrrggb[256];
                          /* Computed Parameter: Colorspecifiedin6hexdigitsrrggb
                           * Referenced by: '<S1>/Color; specified in 6 hex digits, rrggbb'
                           */
  char_T StringConstant3_String[256];
                                   /* Computed Parameter: StringConstant3_String
                                    * Referenced by: '<S31>/String Constant3'
                                    */
  char_T StringConstant1_String[256];
                                   /* Computed Parameter: StringConstant1_String
                                    * Referenced by: '<S31>/String Constant1'
                                    */
  char_T StringConstant4_String[256];
                                   /* Computed Parameter: StringConstant4_String
                                    * Referenced by: '<S29>/String Constant4'
                                    */
  char_T ReadyGreen_String[256];       /* Computed Parameter: ReadyGreen_String
                                        * Referenced by: '<S17>/Ready Green'
                                        */
  char_T AirbagRed_String[256];        /* Computed Parameter: AirbagRed_String
                                        * Referenced by: '<S17>/Airbag Red'
                                        */
  char_T HomingOrange_String[256];    /* Computed Parameter: HomingOrange_String
                                       * Referenced by: '<S17>/Homing Orange'
                                       */
  char_T Delay_InitialCondition[256];
                                   /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S28>/Delay'
                                    */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch1'
                              */
  uint8_T Constant1_Value_j;           /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S30>/Constant1'
                                        */
  uint8_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S31>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_robotarm_student_2021a_Ipos_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[35];
    SimStruct *childSFunctionPtrs[35];
    struct _ssBlkInfo2 blkInfo2[35];
    struct _ssSFcnModelMethods2 methods2[35];
    struct _ssSFcnModelMethods3 methods3[35];
    struct _ssSFcnModelMethods4 methods4[35];
    struct _ssStatesInfo2 statesInfo2[35];
    ssPeriodicStatesInfo periodicStatesInfo[35];
    struct _ssPortInfo2 inputOutputPortInfo2[35];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      real_T const *UPtrs3[1];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[1];
      struct _ssPortOutputs outputPortInfo[5];
      struct _ssOutPortUnit outputPortUnits[5];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[5];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn34;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_P;

/* Block signals (default storage) */
extern B_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_B;

/* Block states (default storage) */
extern DW_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_DW;

/* Model entry point functions */
extern void robotarm_student_2021a_Ipos_initialize(void);
extern void robotarm_student_2021a_Ipos_step(void);
extern void robotarm_student_2021a_Ipos_terminate(void);

/* Real-time Model object */
extern RT_MODEL_robotarm_student_2021a_Ipos_T *const
  robotarm_student_2021a_Ipos_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/ Blow' : Unused code path elimination
 * Block '<S1>/Manual Switch' : Unused code path elimination
 * Block '<S1>/Suck' : Unused code path elimination
 * Block '<S18>/Saturation' : Unused code path elimination
 * Block '<S38>/Data Type Duplicate' : Unused code path elimination
 * Block '<S47>/Data Type Duplicate' : Unused code path elimination
 * Block '<S57>/Data Type Duplicate' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'robotarm_student_2021a_Ipos'
 * '<S1>'   : 'robotarm_student_2021a_Ipos/Controller'
 * '<S2>'   : 'robotarm_student_2021a_Ipos/RobotArm'
 * '<S3>'   : 'robotarm_student_2021a_Ipos/Supervisor2'
 * '<S4>'   : 'robotarm_student_2021a_Ipos/Controller/Camera'
 * '<S5>'   : 'robotarm_student_2021a_Ipos/Controller/Controller Conveyor'
 * '<S6>'   : 'robotarm_student_2021a_Ipos/Controller/Controller Vacuum'
 * '<S7>'   : 'robotarm_student_2021a_Ipos/Controller/Stateflow 1'
 * '<S8>'   : 'robotarm_student_2021a_Ipos/Controller/controller'
 * '<S9>'   : 'robotarm_student_2021a_Ipos/Controller/controller_x_direction'
 * '<S10>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time'
 * '<S11>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time1'
 * '<S12>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time2'
 * '<S13>'  : 'robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator'
 * '<S14>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Detect Change'
 * '<S15>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Enabled Subsystem'
 * '<S16>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem'
 * '<S17>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor'
 * '<S18>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem/Ipos'
 * '<S19>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant'
 * '<S20>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant1'
 * '<S21>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/HomingBusyCheck'
 * '<S22>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem'
 * '<S23>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R'
 * '<S24>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X'
 * '<S25>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z'
 * '<S26>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1'
 * '<S27>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring'
 * '<S28>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem'
 * '<S29>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3'
 * '<S30>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem'
 * '<S31>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem1'
 * '<S32>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/ '
 * '<S33>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/   '
 * '<S34>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Angle2Z'
 * '<S35>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S36>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Selector1'
 * '<S37>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S38>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S39>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1'
 * '<S40>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2'
 * '<S41>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S42>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector'
 * '<S43>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector1'
 * '<S44>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector2'
 * '<S45>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector3'
 * '<S46>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Supervisor2'
 * '<S47>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S48>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    '
 * '<S49>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     '
 * '<S50>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S51>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S52>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector'
 * '<S53>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S54>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S55>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S56>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S57>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 * '<S58>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor'
 * '<S59>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Supervisor'
 */
#endif                           /* RTW_HEADER_robotarm_student_2021a_Ipos_h_ */

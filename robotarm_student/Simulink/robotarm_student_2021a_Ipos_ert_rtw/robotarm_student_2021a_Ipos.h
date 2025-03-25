/*
 * robotarm_student_2021a_Ipos.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ipos".
 *
 * Model version              : 2.166
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Mar 25 17:07:42 2025
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

/* Block states (default storage) for system '<S34>/Serial Write1' */
typedef struct {
  codertarget_raspi_internal_SC_T obj; /* '<S34>/Serial Write1' */
  boolean_T objisempty;                /* '<S34>/Serial Write1' */
} DW_SerialWrite1_robotarm_stud_T;

/* Block signals (default storage) */
typedef struct {
  char_T rtb_StringConcatenate_m[256];
  char_T HomingRunningSwitch[256];     /* '<S26>/Homing Running Switch' */
  uint8_T MatrixConcatenate1[32];      /* '<S34>/Matrix Concatenate1' */
  uint8_T MatrixConcatenate[32];       /* '<S35>/Matrix Concatenate' */
  char_T cv[31];
  boolean_T FixPtRelationalOperator[12];/* '<S18>/FixPt Relational Operator' */
  char_T ManualSwitch1[256];           /* '<S1>/Manual Switch1' */
  real_T SFunction;                    /* '<S3>/S-Function' */
  real_T ec_Ipos_o1;                   /* '<S22>/ec_Ipos' */
  real_T ec_Ipos_o2;                   /* '<S22>/ec_Ipos' */
  real_T ec_Ipos_o3;                   /* '<S22>/ec_Ipos' */
  real_T ec_Ipos_o4;                   /* '<S22>/ec_Ipos' */
  real_T ec_Ipos_o5;                   /* '<S22>/ec_Ipos' */
  real_T Gain;                         /* '<S20>/Gain' */
  real_T Constant1;                    /* '<S39>/Constant1' */
  real_T DiscreteTimeIntegrator;       /* '<S39>/Discrete-Time Integrator' */
  real_T Sum;                          /* '<S27>/Sum' */
  real_T Sum2;                         /* '<S27>/Sum2' */
  real_T Gain1;                        /* '<S20>/Gain1' */
  real_T Constant1_e;                  /* '<S45>/Constant1' */
  real_T DiscreteTimeIntegrator_e;     /* '<S45>/Discrete-Time Integrator' */
  real_T Sum_p;                        /* '<S28>/Sum' */
  real_T Sum2_a;                       /* '<S28>/Sum2' */
  real_T Gain2;                        /* '<S20>/Gain2' */
  real_T Constant1_f;                  /* '<S55>/Constant1' */
  real_T DiscreteTimeIntegrator_p;     /* '<S55>/Discrete-Time Integrator' */
  real_T Sum_o;                        /* '<S29>/Sum' */
  real_T Sum2_e;                       /* '<S29>/Sum2' */
  real_T set_robot_calibration_r;      /* '<S21>/set_robot_calibration_r' */
  real_T set_robot_calibration_x;      /* '<S21>/set_robot_calibration_x' */
  real_T set_robot_calibration_z;      /* '<S21>/set_robot_calibration_z' */
  real_T Add1;                         /* '<S25>/Add1' */
  real_T Gain3;                        /* '<S20>/Gain3' */
  real_T Gain5;                        /* '<S20>/Gain5' */
  real_T Gain_h;                       /* '<S36>/Gain' */
  real_T Dctintegrator;                /* '<S36>/Dctintegrator' */
  real_T Dctleadlag;                   /* '<S36>/Dctleadlag' */
  real_T Dct1lowpass;                  /* '<S36>/Dct1lowpass' */
  real_T Gain_p;                       /* '<S37>/Gain' */
  real_T Dctleadlag_l;                 /* '<S37>/Dctleadlag' */
  real_T Dct1lowpass_i;                /* '<S37>/Dct1lowpass' */
  real_T Saturation1;                  /* '<S27>/Saturation1' */
  real_T Gain1_p;                      /* '<S43>/Gain1' */
  real_T Dctintegrator_g;              /* '<S43>/Dctintegrator' */
  real_T Dctleadlag_h;                 /* '<S43>/Dctleadlag' */
  real_T Dct1lowpass_k;                /* '<S43>/Dct1lowpass' */
  real_T Product;                      /* '<S28>/Product' */
  real_T Gain1_o;                      /* '<S44>/Gain1' */
  real_T Dctleadlag_b;                 /* '<S44>/Dctleadlag' */
  real_T Dct1lowpass_j;                /* '<S44>/Dct1lowpass' */
  real_T Saturation1_n;                /* '<S28>/Saturation1' */
  real_T Gain_i;                       /* '<S52>/Gain' */
  real_T Dctintegrator_i;              /* '<S52>/Dctintegrator' */
  real_T Dctleadlag_m;                 /* '<S52>/Dctleadlag' */
  real_T Dct1lowpass_p;                /* '<S52>/Dct1lowpass' */
  real_T Product_n;                    /* '<S29>/Product' */
  real_T Gain_f;                       /* '<S53>/Gain' */
  real_T Dctleadlag_e;                 /* '<S53>/Dctleadlag' */
  real_T Dct1lowpass_a;                /* '<S53>/Dct1lowpass' */
  real_T Saturation1_a;                /* '<S29>/Saturation1' */
  real_T DiscreteTimeIntegrator_i;     /* '<S30>/Discrete-Time Integrator' */
  real_T Gain1_a;                      /* '<S62>/Gain1' */
  real_T Dctintegrator3;               /* '<S62>/Dctintegrator3' */
  real_T Dct1lowpass_g;                /* '<S62>/Dct1lowpass' */
  real_T Dctleadlag_k;                 /* '<S62>/Dctleadlag' */
  real_T Saturation1_d;                /* '<S30>/Saturation1' */
  real_T jogSpeed;                     /* '<S30>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S30>/Supervisor' */
  real_T resetEnc;                     /* '<S30>/Supervisor' */
  real_T homingBusy;                   /* '<S30>/Supervisor' */
  real_T Ready;                        /* '<S30>/Supervisor' */
  real_T StopSim;                      /* '<S30>/Supervisor' */
  real_T jogSpeed_i;                   /* '<S29>/Supervisor' */
  real_T toPoint;                      /* '<S29>/Supervisor' */
  real_T homeControllerEnabled_b;      /* '<S29>/Supervisor' */
  real_T resetEnc_g;                   /* '<S29>/Supervisor' */
  real_T homingBusy_n;                 /* '<S29>/Supervisor' */
  real_T airBagEnabled;                /* '<S29>/Supervisor' */
  real_T airBagRef;                    /* '<S29>/Supervisor' */
  real_T controlEnabled;               /* '<S29>/Supervisor' */
  real_T Ready_n;                      /* '<S29>/Supervisor' */
  real_T StopSim_n;                    /* '<S29>/Supervisor' */
  real_T y;                            /* '<S29>/Angle2Z' */
  real_T jogSpeed_c;                   /* '<S28>/Supervisor2' */
  real_T toPoint_e;                    /* '<S28>/Supervisor2' */
  real_T homeControllerEnabled_k;      /* '<S28>/Supervisor2' */
  real_T resetEnc_c;                   /* '<S28>/Supervisor2' */
  real_T homingBusy_j;                 /* '<S28>/Supervisor2' */
  real_T airBagEnabled_o;              /* '<S28>/Supervisor2' */
  real_T airBagRef_a;                  /* '<S28>/Supervisor2' */
  real_T controlEnabled_a;             /* '<S28>/Supervisor2' */
  real_T Ready_i;                      /* '<S28>/Supervisor2' */
  real_T StopSim_o;                    /* '<S28>/Supervisor2' */
  real_T jogSpeed_o;                   /* '<S27>/Supervisor' */
  real_T toPoint_b;                    /* '<S27>/Supervisor' */
  real_T homeControllerEnabled_o;      /* '<S27>/Supervisor' */
  real_T resetEnc_k;                   /* '<S27>/Supervisor' */
  real_T freddy_k;                     /* '<S27>/Supervisor' */
  real_T homingBusy_l;                 /* '<S27>/Supervisor' */
  real_T airBagEnabled_f;              /* '<S27>/Supervisor' */
  real_T airBagRef_g;                  /* '<S27>/Supervisor' */
  real_T controlEnabled_l;             /* '<S27>/Supervisor' */
  real_T Ready_a;                      /* '<S27>/Supervisor' */
  real_T StopSim_j;                    /* '<S27>/Supervisor' */
  real_T y_b;                          /* '<S27>/Angle2Z' */
  real_T Selector2[9];                 /* '<S4>/Selector2' */
  real_T Selector[3];                  /* '<S4>/Selector' */
  real_T Selector_g;                   /* '<S1>/Selector' */
  real_T SFunctionBuilder;             /* '<S4>/S-Function Builder' */
  real_T Selector1;                    /* '<S1>/Selector1' */
  real_T Object;                       /* '<S1>/Object' */
  real_T SignalConversion2;            /* '<S1>/Signal Conversion2' */
  real_T Gain1_c;                      /* '<S17>/Gain1' */
  real_T Dctleadlag2;                  /* '<S17>/Dctleadlag2' */
  real_T Dctintegrator3_c;             /* '<S17>/Dctintegrator3' */
  real_T SignalConversion1;            /* '<S1>/Signal Conversion1' */
  real_T SineWave;                     /* '<S1>/Sine Wave' */
  real_T Gain1_b;                      /* '<S12>/Gain1' */
  real_T Dctleadlag2_g;                /* '<S12>/Dctleadlag2' */
  real_T Dct1lowpass3;                 /* '<S12>/Dct1lowpass3' */
  real_T Derivative;                   /* '<S1>/Derivative' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T SignalConversion;             /* '<S1>/Signal Conversion' */
  real_T Gain1_cy;                     /* '<S10>/Gain1' */
  real_T Dctleadlag2_p;                /* '<S10>/Dctleadlag2' */
  real_T Dct1lowpass3_h;               /* '<S10>/Dct1lowpass3' */
  real_T Derivative2;                  /* '<S1>/Derivative2' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T Dct1lowpass_b;                /* '<S17>/Dct1lowpass' */
  real_T Conveyorreferencemm;          /* '<S1>/Discrete  integrator' */
  real_T Gain1_g;                      /* '<S5>/Gain1' */
  real_T Dctintegrator3_n;             /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_ab;               /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_d;                 /* '<S5>/Dctleadlag' */
  real_T Gain1_l;                      /* '<S9>/Gain1' */
  real_T Dctpd2;                       /* '<S9>/Dctpd2' */
  real_T Dctleadlag3;                  /* '<S9>/Dctleadlag3' */
  real_T Gain1_pg;                     /* '<S8>/Gain1' */
  real_T Dctpd2_a;                     /* '<S8>/Dctpd2' */
  real_T Dctleadlag3_i;                /* '<S8>/Dctleadlag3' */
  real_T Gain1_oc;                     /* '<S11>/Gain1' */
  real_T Dctpd2_j;                     /* '<S11>/Dctpd2' */
  real_T Dctleadlag3_f;                /* '<S11>/Dctleadlag3' */
  real_T Gain1_oz;                     /* '<S16>/Gain1' */
  real_T Dctleadlag2_l;                /* '<S16>/Dctleadlag2' */
  real_T Dctintegrator3_l;             /* '<S16>/Dctintegrator3' */
  real_T Dctnotch4;                    /* '<S16>/Dctnotch4' */
  real_T Dctpd5;                       /* '<S16>/Dctpd5' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T Plot;                         /* '<S1>/Plot' */
  real_T Stop;                         /* '<S1>/Stop' */
  real_T Sum_m;                        /* '<S4>/Sum' */
  real_T Selector2_i;                  /* '<S1>/Selector2' */
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
  real_T In1;                          /* '<S19>/In1' */
  real_T d12;
  real_T Gain_m;                       /* '<S29>/Gain' */
  real_T fy1_tmp;
  real_T fy2_tmp;
  real_T d12_tmp;
  real_T d13_tmp;
  real_T LimitAcceleration_h;          /* '<S39>/Limit Acceleration' */
  real_T TSamp;                        /* '<S61>/TSamp' */
  real_T TSamp_d;                      /* '<S51>/TSamp' */
  real_T TSamp_k;                      /* '<S42>/TSamp' */
  real_T LimitAcceleration;            /* '<S55>/Limit Acceleration' */
  real_T LimitAcceleration_b;          /* '<S45>/Limit Acceleration' */
  real_T Add2;                         /* '<S21>/Add2' */
  real_T Add;                          /* '<S21>/Add' */
  real_T Saturation;                   /* '<S1>/Saturation ' */
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
  boolean_T RelationalOperator;        /* '<S27>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S28>/Relational Operator' */
  boolean_T RelationalOperator_k;      /* '<S29>/Relational Operator' */
  boolean_T Compare;                   /* '<S24>/Compare' */
  boolean_T Compare_j;                 /* '<S23>/Compare' */
  boolean_T LogicalOperator1;          /* '<S28>/Logical Operator1' */
  boolean_T LogicalOperator1_i;        /* '<S29>/Logical Operator1' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime2;/* '<S1>/quintic trajectory time2' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime1;/* '<S1>/quintic trajectory time1' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime;/* '<S1>/quintic trajectory time' */
} B_robotarm_student_2021a_Ipos_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S39>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_g;/* '<S27>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S28>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S45>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_a;/* '<S29>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S55>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S21>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S21>/Unit Delay1' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S30>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S61>/UD' */
  real_T UD_DSTATE_c;                  /* '<S51>/UD' */
  real_T UD_DSTATE_cc;                 /* '<S42>/UD' */
  real_T DelayInput1_DSTATE[12];       /* '<S18>/Delay Input1' */
  real_T Discreteintegrator_DSTATE;    /* '<S1>/Discrete  integrator' */
  char_T Delay_DSTATE[256];            /* '<S32>/Delay' */
  real_T PrevY;                        /* '<S55>/Limit Speed' */
  real_T PrevY_j;                      /* '<S55>/Limit Acceleration' */
  real_T PrevY_d;                      /* '<S45>/Limit Speed' */
  real_T PrevY_f;                      /* '<S45>/Limit Acceleration' */
  real_T PrevY_i;                      /* '<S39>/Limit Speed' */
  real_T PrevY_k;                      /* '<S39>/Limit Acceleration' */
  real_T currentcarPos;                /* '<S29>/Supervisor' */
  real_T currentcarPos_d;              /* '<S28>/Supervisor2' */
  real_T currentcarPos_l;              /* '<S27>/Supervisor' */
  real_T TimeStampA;                   /* '<S1>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S1>/Derivative' */
  real_T TimeStampB;                   /* '<S1>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S1>/Derivative' */
  real_T TimeStampA_o;                 /* '<S1>/Derivative1' */
  real_T LastUAtTimeA_g;               /* '<S1>/Derivative1' */
  real_T TimeStampB_i;                 /* '<S1>/Derivative1' */
  real_T LastUAtTimeB_b;               /* '<S1>/Derivative1' */
  real_T TimeStampA_p;                 /* '<S1>/Derivative2' */
  real_T LastUAtTimeA_gt;              /* '<S1>/Derivative2' */
  real_T TimeStampB_o;                 /* '<S1>/Derivative2' */
  real_T LastUAtTimeB_k;               /* '<S1>/Derivative2' */
  real_T TimeStampA_pg;                /* '<S1>/Derivative3' */
  real_T LastUAtTimeA_j;               /* '<S1>/Derivative3' */
  real_T TimeStampB_k;                 /* '<S1>/Derivative3' */
  real_T LastUAtTimeB_d;               /* '<S1>/Derivative3' */
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
  real_T Dctintegrator_RWORK[2];       /* '<S36>/Dctintegrator' */
  real_T Dctleadlag_RWORK[2];          /* '<S36>/Dctleadlag' */
  real_T Dct1lowpass_RWORK[2];         /* '<S36>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_k[2];        /* '<S37>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_a[2];       /* '<S37>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_m[2];     /* '<S43>/Dctintegrator' */
  real_T Dctleadlag_RWORK_g[2];        /* '<S43>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_n[2];       /* '<S43>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_j[2];        /* '<S44>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_k[2];       /* '<S44>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_i[2];     /* '<S52>/Dctintegrator' */
  real_T Dctleadlag_RWORK_n[2];        /* '<S52>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_g[2];       /* '<S52>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_i[2];        /* '<S53>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_h[2];       /* '<S53>/Dct1lowpass' */
  real_T Dctintegrator3_RWORK[2];      /* '<S62>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_ay[2];      /* '<S62>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_o[2];        /* '<S62>/Dctleadlag' */
  real_T Dctleadlag2_RWORK[2];         /* '<S17>/Dctleadlag2' */
  real_T Dctintegrator3_RWORK_e[2];    /* '<S17>/Dctintegrator3' */
  real_T Dctleadlag2_RWORK_d[2];       /* '<S12>/Dctleadlag2' */
  real_T Dct1lowpass3_RWORK[2];        /* '<S12>/Dct1lowpass3' */
  real_T Dctleadlag2_RWORK_h[2];       /* '<S10>/Dctleadlag2' */
  real_T Dct1lowpass3_RWORK_a[2];      /* '<S10>/Dct1lowpass3' */
  real_T Dct1lowpass_RWORK_m[2];       /* '<S17>/Dct1lowpass' */
  real_T Dctintegrator3_RWORK_g[2];    /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_c[2];       /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_gp[2];       /* '<S5>/Dctleadlag' */
  real_T Dctpd2_RWORK[2];              /* '<S9>/Dctpd2' */
  real_T Dctleadlag3_RWORK[2];         /* '<S9>/Dctleadlag3' */
  real_T Dctpd2_RWORK_d[2];            /* '<S8>/Dctpd2' */
  real_T Dctleadlag3_RWORK_c[2];       /* '<S8>/Dctleadlag3' */
  real_T Dctpd2_RWORK_j[2];            /* '<S11>/Dctpd2' */
  real_T Dctleadlag3_RWORK_cb[2];      /* '<S11>/Dctleadlag3' */
  real_T Dctleadlag2_RWORK_j[2];       /* '<S16>/Dctleadlag2' */
  real_T Dctintegrator3_RWORK_gh[2];   /* '<S16>/Dctintegrator3' */
  real_T Dctnotch4_RWORK[4];           /* '<S16>/Dctnotch4' */
  real_T Dctpd5_RWORK[2];              /* '<S16>/Dctpd5' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S29>/Scope' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S27>/Scope9' */

  struct {
    void *LoggedData;
  } Scope_PWORK_p;                     /* '<S40>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_b;                     /* '<S1>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<S1>/Scope1' */

  struct {
    void *LoggedData[2];
  } Scope2_PWORK;                      /* '<S1>/Scope2' */

  int32_T sfEvent;                     /* '<S30>/Supervisor' */
  int32_T sfEvent_n;                   /* '<S29>/Supervisor' */
  int32_T sfEvent_h;                   /* '<S28>/Supervisor2' */
  int32_T sfEvent_k;                   /* '<S27>/Supervisor' */
  int32_T sfEvent_e;                   /* '<S1>/Stateflow 1' */
  uint32_T is_c1_robotarm_student_2021a_Ip;/* '<S30>/Supervisor' */
  uint32_T is_c18_robotarm_student_2021a_I;/* '<S29>/Supervisor' */
  uint32_T is_c16_robotarm_student_2021a_I;/* '<S28>/Supervisor2' */
  uint32_T is_c12_robotarm_student_2021a_I;/* '<S27>/Supervisor' */
  uint32_T is_Object_Detection;        /* '<S1>/Stateflow 1' */
  uint32_T is_Belt;                    /* '<S1>/Stateflow 1' */
  uint32_T is_Identification;          /* '<S1>/Stateflow 1' */
  uint32_T is_Vacuum;                  /* '<S1>/Stateflow 1' */
  uint32_T is_Object_picked;           /* '<S1>/Stateflow 1' */
  uint32_T is_ActionDone;              /* '<S1>/Stateflow 1' */
  uint32_T is_Robot_Arm;               /* '<S1>/Stateflow 1' */
  uint32_T is_Object_tracking;         /* '<S1>/Stateflow 1' */
  uint32_T temporalCounter_i2;         /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i1;         /* '<S30>/Supervisor' */
  uint16_T temporalCounter_i1_m;       /* '<S29>/Supervisor' */
  uint16_T temporalCounter_i1_me;      /* '<S28>/Supervisor2' */
  uint16_T temporalCounter_i1_c;       /* '<S27>/Supervisor' */
  uint16_T temporalCounter_i1_m0;      /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i3;         /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i4;         /* '<S1>/Stateflow 1' */
  uint16_T temporalCounter_i5;         /* '<S1>/Stateflow 1' */
  int8_T Subsystem3_SubsysRanBC;       /* '<S31>/Subsystem3' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S33>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S33>/If Action Subsystem' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S4>/Enabled Subsystem' */
  uint8_T is_active_c1_robotarm_student_2;/* '<S30>/Supervisor' */
  uint8_T is_active_c18_robotarm_student_;/* '<S29>/Supervisor' */
  uint8_T is_active_c16_robotarm_student_;/* '<S28>/Supervisor2' */
  uint8_T is_active_c12_robotarm_student_;/* '<S27>/Supervisor' */
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
  DW_SerialWrite1_robotarm_stud_T SerialWrite;/* '<S34>/Serial Write1' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite1;/* '<S34>/Serial Write1' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime2;/* '<S1>/quintic trajectory time2' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime1;/* '<S1>/quintic trajectory time1' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime;/* '<S1>/quintic trajectory time' */
} DW_robotarm_student_2021a_Ipos_T;

/* Parameters (default storage) */
struct P_robotarm_student_2021a_Ipos_T_ {
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S61>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_e;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                               * Referenced by: '<S51>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_h;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
                               * Referenced by: '<S42>/UD'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S23>/Constant'
                                       */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S18>/Delay Input1'
                                        */
  uint8_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S24>/Constant'
                                      */
  real_T Delays_Y0;                    /* Computed Parameter: Delays_Y0
                                        * Referenced by: '<S19>/Delay [s]'
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
  /* Expression: [0                    0                    0      1737814705.7963;0  0  0  0;0  0  0  0]
   * Referenced by: '<S4>/Object detection matrix'
   */
  real_T Object_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/Object'
                                        */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 25
                                        * Referenced by: '<S17>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size[2];      /* Computed Parameter: Dctleadlag2_P1_Size
                                       * Referenced by: '<S17>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P1;               /* Expression: f_num
                                        * Referenced by: '<S17>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size[2];      /* Computed Parameter: Dctleadlag2_P2_Size
                                       * Referenced by: '<S17>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P2;               /* Expression: f_den
                                        * Referenced by: '<S17>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size[2];      /* Computed Parameter: Dctleadlag2_P3_Size
                                       * Referenced by: '<S17>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P3;               /* Expression: 0.001
                                        * Referenced by: '<S17>/Dctleadlag2'
                                        */
  real_T Dctintegrator3_P1_Size[2];/* Computed Parameter: Dctintegrator3_P1_Size
                                    * Referenced by: '<S17>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P1;            /* Expression: f_num
                                        * Referenced by: '<S17>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size[2];/* Computed Parameter: Dctintegrator3_P2_Size
                                    * Referenced by: '<S17>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P2;            /* Expression: 0.001
                                        * Referenced by: '<S17>/Dctintegrator3'
                                        */
  real_T SineWave_Amp;                 /* Expression: 0.25
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 1
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 8
                                        * Referenced by: '<S12>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size_l[2];  /* Computed Parameter: Dctleadlag2_P1_Size_l
                                     * Referenced by: '<S12>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P1_p;             /* Expression: f_num
                                        * Referenced by: '<S12>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size_e[2];  /* Computed Parameter: Dctleadlag2_P2_Size_e
                                     * Referenced by: '<S12>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P2_d;             /* Expression: f_den
                                        * Referenced by: '<S12>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size_p[2];  /* Computed Parameter: Dctleadlag2_P3_Size_p
                                     * Referenced by: '<S12>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P3_l;             /* Expression: 0.001
                                        * Referenced by: '<S12>/Dctleadlag2'
                                        */
  real_T Dct1lowpass3_P1_Size[2];    /* Computed Parameter: Dct1lowpass3_P1_Size
                                      * Referenced by: '<S12>/Dct1lowpass3'
                                      */
  real_T Dct1lowpass3_P1;              /* Expression: f_den
                                        * Referenced by: '<S12>/Dct1lowpass3'
                                        */
  real_T Dct1lowpass3_P2_Size[2];    /* Computed Parameter: Dct1lowpass3_P2_Size
                                      * Referenced by: '<S12>/Dct1lowpass3'
                                      */
  real_T Dct1lowpass3_P2;              /* Expression: 0.001
                                        * Referenced by: '<S12>/Dct1lowpass3'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.2
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 1
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Gain7_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S1>/Gain7'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 9.5
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size_d[2];  /* Computed Parameter: Dctleadlag2_P1_Size_d
                                     * Referenced by: '<S10>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P1_m;             /* Expression: f_num
                                        * Referenced by: '<S10>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size_ec[2];/* Computed Parameter: Dctleadlag2_P2_Size_ec
                                    * Referenced by: '<S10>/Dctleadlag2'
                                    */
  real_T Dctleadlag2_P2_a;             /* Expression: f_den
                                        * Referenced by: '<S10>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size_c[2];  /* Computed Parameter: Dctleadlag2_P3_Size_c
                                     * Referenced by: '<S10>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P3_k;             /* Expression: 0.001
                                        * Referenced by: '<S10>/Dctleadlag2'
                                        */
  real_T Dct1lowpass3_P1_Size_p[2];/* Computed Parameter: Dct1lowpass3_P1_Size_p
                                    * Referenced by: '<S10>/Dct1lowpass3'
                                    */
  real_T Dct1lowpass3_P1_g;            /* Expression: f_den
                                        * Referenced by: '<S10>/Dct1lowpass3'
                                        */
  real_T Dct1lowpass3_P2_Size_l[2];/* Computed Parameter: Dct1lowpass3_P2_Size_l
                                    * Referenced by: '<S10>/Dct1lowpass3'
                                    */
  real_T Dct1lowpass3_P2_l;            /* Expression: 0.001
                                        * Referenced by: '<S10>/Dct1lowpass3'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.25
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.9
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T Gain6_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real_T Dct1lowpass_P1_Size[2];      /* Computed Parameter: Dct1lowpass_P1_Size
                                       * Referenced by: '<S17>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P1;               /* Expression: f_den
                                        * Referenced by: '<S17>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size[2];      /* Computed Parameter: Dct1lowpass_P2_Size
                                       * Referenced by: '<S17>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P2;               /* Expression: 0.001
                                        * Referenced by: '<S17>/Dct1lowpass'
                                        */
  real_T Discreteintegrator_gainval;
                               /* Computed Parameter: Discreteintegrator_gainval
                                * Referenced by: '<S1>/Discrete  integrator'
                                */
  real_T Discreteintegrator_IC;        /* Expression: 0
                                        * Referenced by: '<S1>/Discrete  integrator'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 0.05
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size_d[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_d
                                  * Referenced by: '<S5>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_k;          /* Expression: f_num
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_c[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_c
                                  * Referenced by: '<S5>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_g;          /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size_l[2];  /* Computed Parameter: Dct1lowpass_P1_Size_l
                                     * Referenced by: '<S5>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_o;             /* Expression: f_den
                                        * Referenced by: '<S5>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_o[2];  /* Computed Parameter: Dct1lowpass_P2_Size_o
                                     * Referenced by: '<S5>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_d;             /* Expression: 0.001
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
  real_T Gain1_Gain_pl;                /* Expression: 1
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T Dctpd2_P1_Size[2];            /* Computed Parameter: Dctpd2_P1_Size
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P1;                    /* Expression: kp
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size[2];            /* Computed Parameter: Dctpd2_P2_Size
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P2;                    /* Expression: kv
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size[2];            /* Computed Parameter: Dctpd2_P3_Size
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P3;                    /* Expression: 0.001
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size[2];      /* Computed Parameter: Dctleadlag3_P1_Size
                                       * Referenced by: '<S9>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P1;               /* Expression: f_num
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size[2];      /* Computed Parameter: Dctleadlag3_P2_Size
                                       * Referenced by: '<S9>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P2;               /* Expression: f_den
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size[2];      /* Computed Parameter: Dctleadlag3_P3_Size
                                       * Referenced by: '<S9>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P3;               /* Expression: 0.001
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 1
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T Dctpd2_P1_Size_k[2];          /* Computed Parameter: Dctpd2_P1_Size_k
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P1_e;                  /* Expression: kp
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size_l[2];          /* Computed Parameter: Dctpd2_P2_Size_l
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P2_c;                  /* Expression: kv
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size_e[2];          /* Computed Parameter: Dctpd2_P3_Size_e
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctpd2_P3_l;                  /* Expression: 0.001
                                        * Referenced by: '<S8>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size_f[2];  /* Computed Parameter: Dctleadlag3_P1_Size_f
                                     * Referenced by: '<S8>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P1_p;             /* Expression: f_num
                                        * Referenced by: '<S8>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size_n[2];  /* Computed Parameter: Dctleadlag3_P2_Size_n
                                     * Referenced by: '<S8>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P2_g;             /* Expression: f_den
                                        * Referenced by: '<S8>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size_j[2];  /* Computed Parameter: Dctleadlag3_P3_Size_j
                                     * Referenced by: '<S8>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P3_f;             /* Expression: 0.001
                                        * Referenced by: '<S8>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1
                                        * Referenced by: '<S11>/Gain1'
                                        */
  real_T Dctpd2_P1_Size_l[2];          /* Computed Parameter: Dctpd2_P1_Size_l
                                        * Referenced by: '<S11>/Dctpd2'
                                        */
  real_T Dctpd2_P1_a;                  /* Expression: kp
                                        * Referenced by: '<S11>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size_n[2];          /* Computed Parameter: Dctpd2_P2_Size_n
                                        * Referenced by: '<S11>/Dctpd2'
                                        */
  real_T Dctpd2_P2_g;                  /* Expression: kv
                                        * Referenced by: '<S11>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size_o[2];          /* Computed Parameter: Dctpd2_P3_Size_o
                                        * Referenced by: '<S11>/Dctpd2'
                                        */
  real_T Dctpd2_P3_c;                  /* Expression: 0.001
                                        * Referenced by: '<S11>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size_g[2];  /* Computed Parameter: Dctleadlag3_P1_Size_g
                                     * Referenced by: '<S11>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P1_b;             /* Expression: f_num
                                        * Referenced by: '<S11>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size_d[2];  /* Computed Parameter: Dctleadlag3_P2_Size_d
                                     * Referenced by: '<S11>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P2_k;             /* Expression: f_den
                                        * Referenced by: '<S11>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size_f[2];  /* Computed Parameter: Dctleadlag3_P3_Size_f
                                     * Referenced by: '<S11>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P3_j;             /* Expression: 0.001
                                        * Referenced by: '<S11>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 1
                                        * Referenced by: '<S16>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size_i[2];  /* Computed Parameter: Dctleadlag2_P1_Size_i
                                     * Referenced by: '<S16>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P1_b;             /* Expression: f_num
                                        * Referenced by: '<S16>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size_l[2];  /* Computed Parameter: Dctleadlag2_P2_Size_l
                                     * Referenced by: '<S16>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P2_l;             /* Expression: f_den
                                        * Referenced by: '<S16>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size_g[2];  /* Computed Parameter: Dctleadlag2_P3_Size_g
                                     * Referenced by: '<S16>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P3_h;             /* Expression: 0.001
                                        * Referenced by: '<S16>/Dctleadlag2'
                                        */
  real_T Dctintegrator3_P1_Size_b[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_b
                                  * Referenced by: '<S16>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_j;          /* Expression: f_num
                                        * Referenced by: '<S16>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_c3[2];
                                /* Computed Parameter: Dctintegrator3_P2_Size_c3
                                 * Referenced by: '<S16>/Dctintegrator3'
                                 */
  real_T Dctintegrator3_P2_b;          /* Expression: 0.001
                                        * Referenced by: '<S16>/Dctintegrator3'
                                        */
  real_T Dctnotch4_P1_Size[2];         /* Computed Parameter: Dctnotch4_P1_Size
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P1;                 /* Expression: f_num
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P2_Size[2];         /* Computed Parameter: Dctnotch4_P2_Size
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P2;                 /* Expression: b_num
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P3_Size[2];         /* Computed Parameter: Dctnotch4_P3_Size
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P3;                 /* Expression: f_den
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P4_Size[2];         /* Computed Parameter: Dctnotch4_P4_Size
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P4;                 /* Expression: b_den
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P5_Size[2];         /* Computed Parameter: Dctnotch4_P5_Size
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctnotch4_P5;                 /* Expression: 0.001
                                        * Referenced by: '<S16>/Dctnotch4'
                                        */
  real_T Dctpd5_P1_Size[2];            /* Computed Parameter: Dctpd5_P1_Size
                                        * Referenced by: '<S16>/Dctpd5'
                                        */
  real_T Dctpd5_P1;                    /* Expression: kp
                                        * Referenced by: '<S16>/Dctpd5'
                                        */
  real_T Dctpd5_P2_Size[2];            /* Computed Parameter: Dctpd5_P2_Size
                                        * Referenced by: '<S16>/Dctpd5'
                                        */
  real_T Dctpd5_P2;                    /* Expression: kv
                                        * Referenced by: '<S16>/Dctpd5'
                                        */
  real_T Dctpd5_P3_Size[2];            /* Computed Parameter: Dctpd5_P3_Size
                                        * Referenced by: '<S16>/Dctpd5'
                                        */
  real_T Dctpd5_P3;                    /* Expression: 0.001
                                        * Referenced by: '<S16>/Dctpd5'
                                        */
  real_T Plot_Value;                   /* Expression: 0
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
                                         * Referenced by: '<S26>/Homing Running Switch2'
                                         */
  real_T HomingRunningSwitch1_Threshold;/* Expression: 2.5
                                         * Referenced by: '<S26>/Homing Running Switch1'
                                         */
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S27>/Homing Running Switch'
                                        */
  real_T HomingRunningSwitch_Threshold_j;/* Expression: 0.5
                                          * Referenced by: '<S28>/Homing Running Switch'
                                          */
  real_T HomingRunningSwitch_Threshold_d;/* Expression: 0.5
                                          * Referenced by: '<S29>/Homing Running Switch'
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
                                        * Referenced by: '<S22>/ec_Ipos'
                                        */
  real_T ec_Ipos_P1;                   /* Expression: link_id
                                        * Referenced by: '<S22>/ec_Ipos'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 1/16000*9/150*2*pi
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S39>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_gainva_i;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                           * Referenced by: '<S27>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S27>/Discrete-Time Integrator'
                                        */
  real_T Constant_Value_i;             /* Expression: -0.05
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Gain1_Gain_g2;                /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S20>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_h;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
                           * Referenced by: '<S28>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_c;  /* Expression: 0
                                        * Referenced by: '<S28>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S45>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_j;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                           * Referenced by: '<S45>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_f;             /* Expression: -0.1
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S20>/Gain2'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                           * Referenced by: '<S29>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_o;  /* Expression: 0
                                        * Referenced by: '<S29>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S55>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                           * Referenced by: '<S55>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_o;             /* Expression: 0.05
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S21>/Unit Delay'
                                        */
  real_T set_robot_calibration_r_Value;/* Expression: 1.3164
                                        * Referenced by: '<S21>/set_robot_calibration_r'
                                        */
  real_T set_robot_calibration_x_Value;/* Expression: 0.65129
                                        * Referenced by: '<S21>/set_robot_calibration_x'
                                        */
  real_T set_robot_calibration_z_Value;/* Expression: -0.34788
                                        * Referenced by: '<S21>/set_robot_calibration_z'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 3
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Gain3_Gain_n;                 /* Expression: 1/16000*2*pi*2.05*10
                                        * Referenced by: '<S20>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/65535
                                        * Referenced by: '<S20>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1/2
                                        * Referenced by: '<S20>/Gain5'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S21>/Unit Delay1'
                                        */
  real_T HomingRunningSwitch_Threshold_l;/* Expression: 0.5
                                          * Referenced by: '<S26>/Homing Running Switch'
                                          */
  real_T ResetEncoderR_P1_Size[2];  /* Computed Parameter: ResetEncoderR_P1_Size
                                     * Referenced by: '<S27>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P1;             /* Expression: ipos_id
                                        * Referenced by: '<S27>/Reset EncoderR'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 25
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T Dctintegrator_P1_Size[2];  /* Computed Parameter: Dctintegrator_P1_Size
                                     * Referenced by: '<S36>/Dctintegrator'
                                     */
  real_T Dctintegrator_P1;             /* Expression: f_num
                                        * Referenced by: '<S36>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size[2];  /* Computed Parameter: Dctintegrator_P2_Size
                                     * Referenced by: '<S36>/Dctintegrator'
                                     */
  real_T Dctintegrator_P2;             /* Expression: 0.001
                                        * Referenced by: '<S36>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_m[2];    /* Computed Parameter: Dctleadlag_P1_Size_m
                                      * Referenced by: '<S36>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_g;              /* Expression: f_num
                                        * Referenced by: '<S36>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_p[2];    /* Computed Parameter: Dctleadlag_P2_Size_p
                                      * Referenced by: '<S36>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_g;              /* Expression: f_den
                                        * Referenced by: '<S36>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_h[2];    /* Computed Parameter: Dctleadlag_P3_Size_h
                                      * Referenced by: '<S36>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_e;              /* Expression: 0.001
                                        * Referenced by: '<S36>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m[2];  /* Computed Parameter: Dct1lowpass_P1_Size_m
                                     * Referenced by: '<S36>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_e;             /* Expression: f_den
                                        * Referenced by: '<S36>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_os[2];/* Computed Parameter: Dct1lowpass_P2_Size_os
                                    * Referenced by: '<S36>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_a;             /* Expression: 0.001
                                        * Referenced by: '<S36>/Dct1lowpass'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 25
                                        * Referenced by: '<S37>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_c[2];    /* Computed Parameter: Dctleadlag_P1_Size_c
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_e;              /* Expression: f_num
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_k[2];    /* Computed Parameter: Dctleadlag_P2_Size_k
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_b;              /* Expression: f_den
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_hn[2];  /* Computed Parameter: Dctleadlag_P3_Size_hn
                                     * Referenced by: '<S37>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_g;              /* Expression: 0.001
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_a[2];  /* Computed Parameter: Dct1lowpass_P1_Size_a
                                     * Referenced by: '<S37>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_g;             /* Expression: f_den
                                        * Referenced by: '<S37>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_l[2];  /* Computed Parameter: Dct1lowpass_P2_Size_l
                                     * Referenced by: '<S37>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_i;             /* Expression: 0.001
                                        * Referenced by: '<S37>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 32
                                        * Referenced by: '<S27>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 127
                                        * Referenced by: '<S27>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -127
                                        * Referenced by: '<S27>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size[2];/* Computed Parameter: ResetEncoderR1_P1_Size
                                    * Referenced by: '<S28>/Reset EncoderR1'
                                    */
  real_T ResetEncoderR1_P1;            /* Expression: ipos_id
                                        * Referenced by: '<S28>/Reset EncoderR1'
                                        */
  real_T Gain1_Gain_ov;                /* Expression: 20
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real_T Dctintegrator_P1_Size_i[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_i
                                   * Referenced by: '<S43>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_j;           /* Expression: f_num
                                        * Referenced by: '<S43>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_p
                                   * Referenced by: '<S43>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_n;           /* Expression: 0.001
                                        * Referenced by: '<S43>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_d[2];    /* Computed Parameter: Dctleadlag_P1_Size_d
                                      * Referenced by: '<S43>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m;              /* Expression: f_num
                                        * Referenced by: '<S43>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_g[2];    /* Computed Parameter: Dctleadlag_P2_Size_g
                                      * Referenced by: '<S43>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_p;              /* Expression: f_den
                                        * Referenced by: '<S43>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_o[2];    /* Computed Parameter: Dctleadlag_P3_Size_o
                                      * Referenced by: '<S43>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_ge;             /* Expression: 0.001
                                        * Referenced by: '<S43>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m3[2];/* Computed Parameter: Dct1lowpass_P1_Size_m3
                                    * Referenced by: '<S43>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_f;             /* Expression: f_den
                                        * Referenced by: '<S43>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_b[2];  /* Computed Parameter: Dct1lowpass_P2_Size_b
                                     * Referenced by: '<S43>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_k;             /* Expression: 0.001
                                        * Referenced by: '<S43>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_hw;                /* Expression: 20
                                        * Referenced by: '<S44>/Gain1'
                                        */
  real_T Dctleadlag_P1_Size_b[2];    /* Computed Parameter: Dctleadlag_P1_Size_b
                                      * Referenced by: '<S44>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_p;              /* Expression: f_num
                                        * Referenced by: '<S44>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_m[2];    /* Computed Parameter: Dctleadlag_P2_Size_m
                                      * Referenced by: '<S44>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_a;              /* Expression: f_den
                                        * Referenced by: '<S44>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_p[2];    /* Computed Parameter: Dctleadlag_P3_Size_p
                                      * Referenced by: '<S44>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_c;              /* Expression: 0.001
                                        * Referenced by: '<S44>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_n[2];  /* Computed Parameter: Dct1lowpass_P1_Size_n
                                     * Referenced by: '<S44>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_h;             /* Expression: f_den
                                        * Referenced by: '<S44>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_g[2];  /* Computed Parameter: Dct1lowpass_P2_Size_g
                                     * Referenced by: '<S44>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_b;             /* Expression: 0.001
                                        * Referenced by: '<S44>/Dct1lowpass'
                                        */
  real_T Gain_Gain_cj;                 /* Expression: 32
                                        * Referenced by: '<S28>/Gain'
                                        */
  real_T Saturation1_UpperSat_e;       /* Expression: 127
                                        * Referenced by: '<S28>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_p;       /* Expression: -127
                                        * Referenced by: '<S28>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_d[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_d
                                  * Referenced by: '<S29>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_d;          /* Expression: ipos_id
                                        * Referenced by: '<S29>/Reset EncoderR1'
                                        */
  real_T Gain_Gain_cr;                 /* Expression: 20
                                        * Referenced by: '<S52>/Gain'
                                        */
  real_T Dctintegrator_P1_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_p
                                   * Referenced by: '<S52>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_k;           /* Expression: f_num
                                        * Referenced by: '<S52>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_o[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_o
                                   * Referenced by: '<S52>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_m;           /* Expression: 0.001
                                        * Referenced by: '<S52>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_ch[2];  /* Computed Parameter: Dctleadlag_P1_Size_ch
                                     * Referenced by: '<S52>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_h;              /* Expression: f_num
                                        * Referenced by: '<S52>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_h[2];    /* Computed Parameter: Dctleadlag_P2_Size_h
                                      * Referenced by: '<S52>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_l;              /* Expression: f_den
                                        * Referenced by: '<S52>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_f[2];    /* Computed Parameter: Dctleadlag_P3_Size_f
                                      * Referenced by: '<S52>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_a;              /* Expression: 0.001
                                        * Referenced by: '<S52>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_ni[2];/* Computed Parameter: Dct1lowpass_P1_Size_ni
                                    * Referenced by: '<S52>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_j;             /* Expression: f_den
                                        * Referenced by: '<S52>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_a[2];  /* Computed Parameter: Dct1lowpass_P2_Size_a
                                     * Referenced by: '<S52>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_j;             /* Expression: 0.001
                                        * Referenced by: '<S52>/Dct1lowpass'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 30
                                        * Referenced by: '<S53>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_by[2];  /* Computed Parameter: Dctleadlag_P1_Size_by
                                     * Referenced by: '<S53>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_i;              /* Expression: f_num
                                        * Referenced by: '<S53>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_j[2];    /* Computed Parameter: Dctleadlag_P2_Size_j
                                      * Referenced by: '<S53>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_o;              /* Expression: f_den
                                        * Referenced by: '<S53>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_oi[2];  /* Computed Parameter: Dctleadlag_P3_Size_oi
                                     * Referenced by: '<S53>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_aa;             /* Expression: 0.001
                                        * Referenced by: '<S53>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_p[2];  /* Computed Parameter: Dct1lowpass_P1_Size_p
                                     * Referenced by: '<S53>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_j3;            /* Expression: f_den
                                        * Referenced by: '<S53>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_j[2];  /* Computed Parameter: Dct1lowpass_P2_Size_j
                                     * Referenced by: '<S53>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_c;             /* Expression: 0.001
                                        * Referenced by: '<S53>/Dct1lowpass'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 32
                                        * Referenced by: '<S29>/Gain'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 127
                                        * Referenced by: '<S29>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: -127
                                        * Referenced by: '<S29>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_b[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_b
                                  * Referenced by: '<S30>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_l;          /* Expression: ipos_id
                                        * Referenced by: '<S30>/Reset EncoderR1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                           * Referenced by: '<S30>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_co; /* Expression: 0
                                        * Referenced by: '<S30>/Discrete-Time Integrator'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 10*2.5/500
                                        * Referenced by: '<S62>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size_m[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_m
                                  * Referenced by: '<S62>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_ji;         /* Expression: f_num
                                        * Referenced by: '<S62>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_b[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_b
                                  * Referenced by: '<S62>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_j;          /* Expression: 0.001
                                        * Referenced by: '<S62>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size_j[2];  /* Computed Parameter: Dct1lowpass_P1_Size_j
                                     * Referenced by: '<S62>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_ez;            /* Expression: f_den
                                        * Referenced by: '<S62>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_aj[2];/* Computed Parameter: Dct1lowpass_P2_Size_aj
                                    * Referenced by: '<S62>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_n;             /* Expression: 0.001
                                        * Referenced by: '<S62>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size_l[2];    /* Computed Parameter: Dctleadlag_P1_Size_l
                                      * Referenced by: '<S62>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m0;             /* Expression: f_num
                                        * Referenced by: '<S62>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_n[2];    /* Computed Parameter: Dctleadlag_P2_Size_n
                                      * Referenced by: '<S62>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_f;              /* Expression: f_den
                                        * Referenced by: '<S62>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_d[2];    /* Computed Parameter: Dctleadlag_P3_Size_d
                                      * Referenced by: '<S62>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_i;              /* Expression: 0.001
                                        * Referenced by: '<S62>/Dctleadlag'
                                        */
  real_T HomingRunningSwitch_Threshol_lq;/* Expression: 0.5
                                          * Referenced by: '<S30>/Homing Running Switch'
                                          */
  real_T Gain_Gain_j;                  /* Expression: 32
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 127
                                        * Referenced by: '<S30>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_g;       /* Expression: -127
                                        * Referenced by: '<S30>/Saturation1'
                                        */
  real_T LimitSpeed_RisingLim;         /* Expression: 0.2
                                        * Referenced by: '<S55>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Expression: -0.2
                                        * Referenced by: '<S55>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S55>/Limit Speed'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S61>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Expression: 0.5
                                        * Referenced by: '<S55>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Expression: -0.5
                                        * Referenced by: '<S55>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S55>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_i;       /* Expression: 0.4
                                        * Referenced by: '<S45>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_k;      /* Expression: -0.4
                                        * Referenced by: '<S45>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_a;              /* Expression: 0
                                        * Referenced by: '<S45>/Limit Speed'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S51>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_k;/* Expression: 0.5
                                        * Referenced by: '<S45>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_m;/* Expression: -0.5
                                         * Referenced by: '<S45>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_k;       /* Expression: 0
                                        * Referenced by: '<S45>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_iu;      /* Expression: 0.6
                                        * Referenced by: '<S39>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_j;      /* Expression: -0.6
                                        * Referenced by: '<S39>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_e;              /* Expression: 0
                                        * Referenced by: '<S39>/Limit Speed'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S42>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_m;/* Expression: 0.8
                                        * Referenced by: '<S39>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_k;/* Expression: -0.8
                                         * Referenced by: '<S39>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_i;       /* Expression: 0
                                        * Referenced by: '<S39>/Limit Acceleration'
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
                                    * Referenced by: '<S35>/String Constant3'
                                    */
  char_T StringConstant1_String[256];
                                   /* Computed Parameter: StringConstant1_String
                                    * Referenced by: '<S35>/String Constant1'
                                    */
  char_T StringConstant4_String[256];
                                   /* Computed Parameter: StringConstant4_String
                                    * Referenced by: '<S33>/String Constant4'
                                    */
  char_T ReadyGreen_String[256];       /* Computed Parameter: ReadyGreen_String
                                        * Referenced by: '<S21>/Ready Green'
                                        */
  char_T AirbagRed_String[256];        /* Computed Parameter: AirbagRed_String
                                        * Referenced by: '<S21>/Airbag Red'
                                        */
  char_T HomingOrange_String[256];    /* Computed Parameter: HomingOrange_String
                                       * Referenced by: '<S21>/Homing Orange'
                                       */
  char_T Delay_InitialCondition[256];
                                   /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S32>/Delay'
                                    */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch1'
                              */
  uint8_T Constant1_Value_j;           /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S34>/Constant1'
                                        */
  uint8_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S35>/Constant'
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
    SimStruct childSFunctions[44];
    SimStruct *childSFunctionPtrs[44];
    struct _ssBlkInfo2 blkInfo2[44];
    struct _ssSFcnModelMethods2 methods2[44];
    struct _ssSFcnModelMethods3 methods3[44];
    struct _ssSFcnModelMethods4 methods4[44];
    struct _ssStatesInfo2 statesInfo2[44];
    ssPeriodicStatesInfo periodicStatesInfo[44];
    struct _ssPortInfo2 inputOutputPortInfo2[44];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[3];
      mxArray *params[3];
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
    } Sfcn11;

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
    } Sfcn12;

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
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[5];
      mxArray *params[5];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn20;

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
    } Sfcn21;

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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[1];
      mxArray *params[1];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn34;

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
    } Sfcn35;

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
    } Sfcn36;

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
    } Sfcn37;

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
    } Sfcn38;

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
    } Sfcn39;

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
    } Sfcn40;

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
    } Sfcn41;

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
    } Sfcn42;

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
    } Sfcn43;
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

/* External data declarations for dependent source files */
extern const real_T robotarm_student_2021a_Ipos_RGND;/* real_T ground */

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
 * Block '<S1>/Derivative4' : Unused code path elimination
 * Block '<S1>/Derivative5' : Unused code path elimination
 * Block '<S1>/Gain4' : Unused code path elimination
 * Block '<S1>/Gain5' : Unused code path elimination
 * Block '<S1>/Gain8' : Unused code path elimination
 * Block '<S1>/Manual Switch' : Unused code path elimination
 * Block '<S1>/Sign2' : Unused code path elimination
 * Block '<S1>/Suck' : Unused code path elimination
 * Block '<S1>/Sum10' : Unused code path elimination
 * Block '<S22>/Saturation' : Unused code path elimination
 * Block '<S42>/Data Type Duplicate' : Unused code path elimination
 * Block '<S51>/Data Type Duplicate' : Unused code path elimination
 * Block '<S61>/Data Type Duplicate' : Unused code path elimination
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
 * '<S9>'   : 'robotarm_student_2021a_Ipos/Controller/controller1'
 * '<S10>'  : 'robotarm_student_2021a_Ipos/Controller/controller_Z'
 * '<S11>'  : 'robotarm_student_2021a_Ipos/Controller/controller_x_direction'
 * '<S12>'  : 'robotarm_student_2021a_Ipos/Controller/controller_x_direction1'
 * '<S13>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time'
 * '<S14>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time1'
 * '<S15>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time2'
 * '<S16>'  : 'robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator'
 * '<S17>'  : 'robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator1'
 * '<S18>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Detect Change'
 * '<S19>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Enabled Subsystem'
 * '<S20>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem'
 * '<S21>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor'
 * '<S22>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem/Ipos'
 * '<S23>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant'
 * '<S24>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant1'
 * '<S25>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/HomingBusyCheck'
 * '<S26>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem'
 * '<S27>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R'
 * '<S28>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X'
 * '<S29>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z'
 * '<S30>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1'
 * '<S31>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring'
 * '<S32>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem'
 * '<S33>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3'
 * '<S34>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem'
 * '<S35>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem1'
 * '<S36>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/ '
 * '<S37>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/   '
 * '<S38>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Angle2Z'
 * '<S39>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S40>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Selector1'
 * '<S41>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S42>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S43>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1'
 * '<S44>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2'
 * '<S45>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S46>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector'
 * '<S47>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector1'
 * '<S48>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector2'
 * '<S49>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector3'
 * '<S50>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Supervisor2'
 * '<S51>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S52>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    '
 * '<S53>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     '
 * '<S54>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S55>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S56>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector'
 * '<S57>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S58>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S59>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S60>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S61>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 * '<S62>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor'
 * '<S63>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Supervisor'
 */
#endif                           /* RTW_HEADER_robotarm_student_2021a_Ipos_h_ */

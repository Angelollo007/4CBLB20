/*
 * robotarm_student_2021a_Ipos.h
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

/* Block states (default storage) for system '<S35>/Serial Write1' */
typedef struct {
  codertarget_raspi_internal_SC_T obj; /* '<S35>/Serial Write1' */
  boolean_T objisempty;                /* '<S35>/Serial Write1' */
} DW_SerialWrite1_robotarm_stud_T;

/* Block signals (default storage) */
typedef struct {
  char_T rtb_StringConcatenate_m[256];
  char_T HomingRunningSwitch[256];     /* '<S27>/Homing Running Switch' */
  uint8_T MatrixConcatenate1[32];      /* '<S35>/Matrix Concatenate1' */
  uint8_T MatrixConcatenate[32];       /* '<S36>/Matrix Concatenate' */
  char_T cv[31];
  real_T Gain_c[3];                    /* '<S22>/Gain' */
  boolean_T FixPtRelationalOperator[12];/* '<S19>/FixPt Relational Operator' */
  char_T ManualSwitch1[256];           /* '<S1>/Manual Switch1' */
  real_T SFunction;                    /* '<S3>/S-Function' */
  real_T ec_Ipos_o1;                   /* '<S23>/ec_Ipos' */
  real_T ec_Ipos_o2;                   /* '<S23>/ec_Ipos' */
  real_T ec_Ipos_o3;                   /* '<S23>/ec_Ipos' */
  real_T ec_Ipos_o4;                   /* '<S23>/ec_Ipos' */
  real_T ec_Ipos_o5;                   /* '<S23>/ec_Ipos' */
  real_T Gain;                         /* '<S21>/Gain' */
  real_T Constant1;                    /* '<S40>/Constant1' */
  real_T DiscreteTimeIntegrator;       /* '<S40>/Discrete-Time Integrator' */
  real_T Sum2;                         /* '<S28>/Sum2' */
  real_T Gain1;                        /* '<S21>/Gain1' */
  real_T Constant1_e;                  /* '<S46>/Constant1' */
  real_T DiscreteTimeIntegrator_e;     /* '<S46>/Discrete-Time Integrator' */
  real_T Sum2_a;                       /* '<S29>/Sum2' */
  real_T Gain2;                        /* '<S21>/Gain2' */
  real_T Constant1_f;                  /* '<S56>/Constant1' */
  real_T DiscreteTimeIntegrator_p;     /* '<S56>/Discrete-Time Integrator' */
  real_T Sum2_e;                       /* '<S30>/Sum2' */
  real_T set_robot_calibration_r;      /* '<S22>/set_robot_calibration_r' */
  real_T set_robot_calibration_x;      /* '<S22>/set_robot_calibration_x' */
  real_T set_robot_calibration_z;      /* '<S22>/set_robot_calibration_z' */
  real_T Add1;                         /* '<S26>/Add1' */
  real_T Gain3;                        /* '<S21>/Gain3' */
  real_T Gain5;                        /* '<S21>/Gain5' */
  real_T Gain_h;                       /* '<S37>/Gain' */
  real_T Dctintegrator;                /* '<S37>/Dctintegrator' */
  real_T Dctleadlag;                   /* '<S37>/Dctleadlag' */
  real_T Dct1lowpass;                  /* '<S37>/Dct1lowpass' */
  real_T Gain_p;                       /* '<S38>/Gain' */
  real_T Dctleadlag_l;                 /* '<S38>/Dctleadlag' */
  real_T Dct1lowpass_i;                /* '<S38>/Dct1lowpass' */
  real_T Saturation1;                  /* '<S28>/Saturation1' */
  real_T Gain1_p;                      /* '<S44>/Gain1' */
  real_T Dctintegrator_g;              /* '<S44>/Dctintegrator' */
  real_T Dctleadlag_h;                 /* '<S44>/Dctleadlag' */
  real_T Dct1lowpass_k;                /* '<S44>/Dct1lowpass' */
  real_T Gain1_o;                      /* '<S45>/Gain1' */
  real_T Dctleadlag_b;                 /* '<S45>/Dctleadlag' */
  real_T Dct1lowpass_j;                /* '<S45>/Dct1lowpass' */
  real_T Saturation1_n;                /* '<S29>/Saturation1' */
  real_T Gain_i;                       /* '<S53>/Gain' */
  real_T Dctintegrator_i;              /* '<S53>/Dctintegrator' */
  real_T Dctleadlag_m;                 /* '<S53>/Dctleadlag' */
  real_T Dct1lowpass_p;                /* '<S53>/Dct1lowpass' */
  real_T Gain_f;                       /* '<S54>/Gain' */
  real_T Dctleadlag_e;                 /* '<S54>/Dctleadlag' */
  real_T Dct1lowpass_a;                /* '<S54>/Dct1lowpass' */
  real_T Saturation1_a;                /* '<S30>/Saturation1' */
  real_T Gain1_a;                      /* '<S63>/Gain1' */
  real_T Dctintegrator3;               /* '<S63>/Dctintegrator3' */
  real_T Dct1lowpass_g;                /* '<S63>/Dct1lowpass' */
  real_T Dctleadlag_k;                 /* '<S63>/Dctleadlag' */
  real_T Saturation1_d;                /* '<S31>/Saturation1' */
  real_T jogSpeed;                     /* '<S31>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S31>/Supervisor' */
  real_T resetEnc;                     /* '<S31>/Supervisor' */
  real_T homingBusy;                   /* '<S31>/Supervisor' */
  real_T Ready;                        /* '<S31>/Supervisor' */
  real_T StopSim;                      /* '<S31>/Supervisor' */
  real_T jogSpeed_i;                   /* '<S30>/Supervisor' */
  real_T toPoint;                      /* '<S30>/Supervisor' */
  real_T homeControllerEnabled_b;      /* '<S30>/Supervisor' */
  real_T resetEnc_g;                   /* '<S30>/Supervisor' */
  real_T homingBusy_n;                 /* '<S30>/Supervisor' */
  real_T airBagEnabled;                /* '<S30>/Supervisor' */
  real_T airBagRef;                    /* '<S30>/Supervisor' */
  real_T controlEnabled;               /* '<S30>/Supervisor' */
  real_T Ready_n;                      /* '<S30>/Supervisor' */
  real_T StopSim_n;                    /* '<S30>/Supervisor' */
  real_T y;                            /* '<S30>/Angle2Z' */
  real_T jogSpeed_c;                   /* '<S29>/Supervisor2' */
  real_T toPoint_e;                    /* '<S29>/Supervisor2' */
  real_T homeControllerEnabled_k;      /* '<S29>/Supervisor2' */
  real_T resetEnc_c;                   /* '<S29>/Supervisor2' */
  real_T homingBusy_j;                 /* '<S29>/Supervisor2' */
  real_T airBagEnabled_o;              /* '<S29>/Supervisor2' */
  real_T airBagRef_a;                  /* '<S29>/Supervisor2' */
  real_T controlEnabled_a;             /* '<S29>/Supervisor2' */
  real_T Ready_i;                      /* '<S29>/Supervisor2' */
  real_T StopSim_o;                    /* '<S29>/Supervisor2' */
  real_T jogSpeed_o;                   /* '<S28>/Supervisor' */
  real_T toPoint_b;                    /* '<S28>/Supervisor' */
  real_T homeControllerEnabled_o;      /* '<S28>/Supervisor' */
  real_T resetEnc_k;                   /* '<S28>/Supervisor' */
  real_T freddy_k;                     /* '<S28>/Supervisor' */
  real_T homingBusy_l;                 /* '<S28>/Supervisor' */
  real_T airBagEnabled_f;              /* '<S28>/Supervisor' */
  real_T airBagRef_g;                  /* '<S28>/Supervisor' */
  real_T controlEnabled_l;             /* '<S28>/Supervisor' */
  real_T Ready_a;                      /* '<S28>/Supervisor' */
  real_T StopSim_j;                    /* '<S28>/Supervisor' */
  real_T y_b;                          /* '<S28>/Angle2Z' */
  real_T Selector2[9];                 /* '<S4>/Selector2' */
  real_T Selector[3];                  /* '<S4>/Selector' */
  real_T Selector_g;                   /* '<S1>/Selector' */
  real_T Selector1;                    /* '<S1>/Selector1' */
  real_T Selector3;                    /* '<S1>/Selector3' */
  real_T Selector4;                    /* '<S1>/Selector4' */
  real_T Selector6;                    /* '<S1>/Selector6' */
  real_T Selector7;                    /* '<S1>/Selector7' */
  real_T Constant;                     /* '<S1>/Constant' */
  real_T SFunctionBuilder;             /* '<S4>/S-Function Builder' */
  real_T Gain1_g;                      /* '<S5>/Gain1' */
  real_T Dctintegrator3_n;             /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_ab;               /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_d;                 /* '<S5>/Dctleadlag' */
  real_T Conveyorspeedmms;             /* '<S1>/Conveyor speed [mm//s]' */
  real_T SignalConversion1;            /* '<S1>/Signal Conversion1' */
  real_T Gain1_b;                      /* '<S13>/Gain1' */
  real_T SignalConversion2;            /* '<S1>/Signal Conversion2' */
  real_T Gain1_c;                      /* '<S18>/Gain1' */
  real_T Dctleadlag2;                  /* '<S18>/Dctleadlag2' */
  real_T Dctintegrator3_c;             /* '<S18>/Dctintegrator3' */
  real_T Dctleadlag2_g;                /* '<S13>/Dctleadlag2' */
  real_T Dct1lowpass3;                 /* '<S13>/Dct1lowpass3' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T SignalConversion;             /* '<S1>/Signal Conversion' */
  real_T Gain1_cy;                     /* '<S11>/Gain1' */
  real_T Dctleadlag2_p;                /* '<S11>/Dctleadlag2' */
  real_T Dct1lowpass3_h;               /* '<S11>/Dct1lowpass3' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T Dct1lowpass_b;                /* '<S18>/Dct1lowpass' */
  real_T Gain1_l;                      /* '<S10>/Gain1' */
  real_T Dctpd2;                       /* '<S10>/Dctpd2' */
  real_T Dctleadlag3;                  /* '<S10>/Dctleadlag3' */
  real_T Gain1_pg;                     /* '<S9>/Gain1' */
  real_T Dctpd2_a;                     /* '<S9>/Dctpd2' */
  real_T Dctleadlag3_i;                /* '<S9>/Dctleadlag3' */
  real_T Gain1_oc;                     /* '<S12>/Gain1' */
  real_T Dctpd2_j;                     /* '<S12>/Dctpd2' */
  real_T Dctleadlag3_f;                /* '<S12>/Dctleadlag3' */
  real_T Gain1_oz;                     /* '<S17>/Gain1' */
  real_T Dctleadlag2_l;                /* '<S17>/Dctleadlag2' */
  real_T Dctintegrator3_l;             /* '<S17>/Dctintegrator3' */
  real_T Dctnotch4;                    /* '<S17>/Dctnotch4' */
  real_T Dctpd5;                       /* '<S17>/Dctpd5' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T Sum;                          /* '<S4>/Sum' */
  real_T Selector2_l;                  /* '<S1>/Selector2' */
  real_T Selector5;                    /* '<S1>/Selector5' */
  real_T Selector8;                    /* '<S1>/Selector8' */
  real_T Object;                       /* '<S1>/Object' */
  real_T Plot;                         /* '<S1>/Plot' */
  real_T Stop;                         /* '<S1>/Stop' */
  real_T Gain1_o1;                     /* '<S6>/Gain1' */
  real_T R_rad;                        /* '<S1>/Stateflow 2' */
  real_T X_rad;                        /* '<S1>/Stateflow 2' */
  real_T Z_rad;                        /* '<S1>/Stateflow 2' */
  real_T Blow_suck;                    /* '<S1>/Stateflow 2' */
  real_T maskNo;                       /* '<S1>/Stateflow 2' */
  real_T x;                            /* '<S1>/MATLAB Function' */
  real_T ymax;                         /* '<S1>/MATLAB Function' */
  real_T In1;                          /* '<S20>/In1' */
  real_T d12;
  real_T fx1_tmp;
  real_T fy1_tmp;
  real_T fy2_tmp;
  real_T d12_tmp;
  real_T d13_tmp;
  real_T LimitAcceleration_h;          /* '<S40>/Limit Acceleration' */
  real_T TSamp;                        /* '<S62>/TSamp' */
  real_T TSamp_d;                      /* '<S52>/TSamp' */
  real_T TSamp_k;                      /* '<S43>/TSamp' */
  real_T LimitAcceleration;            /* '<S56>/Limit Acceleration' */
  real_T LimitAcceleration_b;          /* '<S46>/Limit Acceleration' */
  real_T Add2;                         /* '<S22>/Add2' */
  real_T Add;                          /* '<S22>/Add' */
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
  boolean_T RelationalOperator;        /* '<S28>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S29>/Relational Operator' */
  boolean_T RelationalOperator_k;      /* '<S30>/Relational Operator' */
  boolean_T Compare;                   /* '<S25>/Compare' */
  boolean_T Compare_j;                 /* '<S24>/Compare' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime2;/* '<S1>/quintic trajectory time2' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime1;/* '<S1>/quintic trajectory time1' */
  B_quintictrajectorytime_robot_T sf_quintictrajectorytime;/* '<S1>/quintic trajectory time' */
} B_robotarm_student_2021a_Ipos_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S40>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_g;/* '<S28>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S29>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S46>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_a;/* '<S30>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S56>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S22>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S22>/Unit Delay1' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S31>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S62>/UD' */
  real_T UD_DSTATE_c;                  /* '<S52>/UD' */
  real_T UD_DSTATE_cc;                 /* '<S43>/UD' */
  real_T DelayInput1_DSTATE[12];       /* '<S19>/Delay Input1' */
  real_T Discreteintegrator_DSTATE;    /* '<S1>/Discrete  integrator' */
  char_T Delay_DSTATE[256];            /* '<S33>/Delay' */
  real_T PrevY;                        /* '<S56>/Limit Speed' */
  real_T PrevY_j;                      /* '<S56>/Limit Acceleration' */
  real_T PrevY_d;                      /* '<S46>/Limit Speed' */
  real_T PrevY_f;                      /* '<S46>/Limit Acceleration' */
  real_T PrevY_i;                      /* '<S40>/Limit Speed' */
  real_T PrevY_k;                      /* '<S40>/Limit Acceleration' */
  real_T currentcarPos;                /* '<S30>/Supervisor' */
  real_T currentcarPos_d;              /* '<S29>/Supervisor2' */
  real_T currentcarPos_l;              /* '<S28>/Supervisor' */
  real_T treshold;                     /* '<S1>/Stateflow 2' */
  real_T x;                            /* '<S1>/Stateflow 2' */
  real_T y;                            /* '<S1>/Stateflow 2' */
  real_T z;                            /* '<S1>/Stateflow 2' */
  real_T X_pos;                        /* '<S1>/Stateflow 2' */
  real_T Y_pos;                        /* '<S1>/Stateflow 2' */
  real_T Z_pos;                        /* '<S1>/Stateflow 2' */
  real_T elapTime;                     /* '<S1>/Stateflow 2' */
  real_T yTracked;                     /* '<S1>/Stateflow 2' */
  real_T track;                        /* '<S1>/Stateflow 2' */
  real_T reachability;                 /* '<S1>/Stateflow 2' */
  real_T action;                       /* '<S1>/Stateflow 2' */
  real_T Y1m1;                         /* '<S1>/Stateflow 2' */
  real_T Y1m2;                         /* '<S1>/Stateflow 2' */
  real_T Y2m1;                         /* '<S1>/Stateflow 2' */
  real_T Y2m2;                         /* '<S1>/Stateflow 2' */
  real_T Y3m1;                         /* '<S1>/Stateflow 2' */
  real_T Y3m2;                         /* '<S1>/Stateflow 2' */
  real_T Ymax;                         /* '<S1>/Stateflow 2' */
  real_T ObjectType;                   /* '<S1>/Stateflow 2' */
  real_T temp;                         /* '<S1>/Stateflow 2' */
  real_T Dctintegrator_RWORK[2];       /* '<S37>/Dctintegrator' */
  real_T Dctleadlag_RWORK[2];          /* '<S37>/Dctleadlag' */
  real_T Dct1lowpass_RWORK[2];         /* '<S37>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_k[2];        /* '<S38>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_a[2];       /* '<S38>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_m[2];     /* '<S44>/Dctintegrator' */
  real_T Dctleadlag_RWORK_g[2];        /* '<S44>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_n[2];       /* '<S44>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_j[2];        /* '<S45>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_k[2];       /* '<S45>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_i[2];     /* '<S53>/Dctintegrator' */
  real_T Dctleadlag_RWORK_n[2];        /* '<S53>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_g[2];       /* '<S53>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_i[2];        /* '<S54>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_h[2];       /* '<S54>/Dct1lowpass' */
  real_T Dctintegrator3_RWORK[2];      /* '<S63>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_ay[2];      /* '<S63>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_o[2];        /* '<S63>/Dctleadlag' */
  real_T Dctintegrator3_RWORK_g[2];    /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_c[2];       /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_gp[2];       /* '<S5>/Dctleadlag' */
  real_T Dctleadlag2_RWORK[2];         /* '<S18>/Dctleadlag2' */
  real_T Dctintegrator3_RWORK_e[2];    /* '<S18>/Dctintegrator3' */
  real_T Dctleadlag2_RWORK_d[2];       /* '<S13>/Dctleadlag2' */
  real_T Dct1lowpass3_RWORK[2];        /* '<S13>/Dct1lowpass3' */
  real_T Dctleadlag2_RWORK_h[2];       /* '<S11>/Dctleadlag2' */
  real_T Dct1lowpass3_RWORK_a[2];      /* '<S11>/Dct1lowpass3' */
  real_T Dct1lowpass_RWORK_m[2];       /* '<S18>/Dct1lowpass' */
  real_T Dctpd2_RWORK[2];              /* '<S10>/Dctpd2' */
  real_T Dctleadlag3_RWORK[2];         /* '<S10>/Dctleadlag3' */
  real_T Dctpd2_RWORK_d[2];            /* '<S9>/Dctpd2' */
  real_T Dctleadlag3_RWORK_c[2];       /* '<S9>/Dctleadlag3' */
  real_T Dctpd2_RWORK_j[2];            /* '<S12>/Dctpd2' */
  real_T Dctleadlag3_RWORK_cb[2];      /* '<S12>/Dctleadlag3' */
  real_T Dctleadlag2_RWORK_j[2];       /* '<S17>/Dctleadlag2' */
  real_T Dctintegrator3_RWORK_gh[2];   /* '<S17>/Dctintegrator3' */
  real_T Dctnotch4_RWORK[4];           /* '<S17>/Dctnotch4' */
  real_T Dctpd5_RWORK[2];              /* '<S17>/Dctpd5' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S30>/Scope' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S28>/Scope9' */

  struct {
    void *LoggedData;
  } Scope_PWORK_p;                     /* '<S41>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_b;                     /* '<S1>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope2_PWORK;                      /* '<S1>/Scope2' */

  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<S1>/Scope1' */

  int32_T sfEvent;                     /* '<S31>/Supervisor' */
  int32_T sfEvent_n;                   /* '<S30>/Supervisor' */
  int32_T sfEvent_h;                   /* '<S29>/Supervisor2' */
  int32_T sfEvent_k;                   /* '<S28>/Supervisor' */
  int32_T sfEvent_g;                   /* '<S1>/Stateflow 2' */
  uint32_T is_c1_robotarm_student_2021a_Ip;/* '<S31>/Supervisor' */
  uint32_T is_c18_robotarm_student_2021a_I;/* '<S30>/Supervisor' */
  uint32_T is_c16_robotarm_student_2021a_I;/* '<S29>/Supervisor2' */
  uint32_T is_c12_robotarm_student_2021a_I;/* '<S28>/Supervisor' */
  uint32_T is_Vacuum;                  /* '<S1>/Stateflow 2' */
  uint32_T is_Object_picked;           /* '<S1>/Stateflow 2' */
  uint32_T is_ActionDone;              /* '<S1>/Stateflow 2' */
  uint32_T is_Robot_Arm;               /* '<S1>/Stateflow 2' */
  uint32_T is_Object_tracking;         /* '<S1>/Stateflow 2' */
  uint32_T is_Mask_identit;            /* '<S1>/Stateflow 2' */
  uint32_T temporalCounter_i1;         /* '<S1>/Stateflow 2' */
  uint16_T temporalCounter_i1_i;       /* '<S31>/Supervisor' */
  uint16_T temporalCounter_i1_m;       /* '<S30>/Supervisor' */
  uint16_T temporalCounter_i1_me;      /* '<S29>/Supervisor2' */
  uint16_T temporalCounter_i1_c;       /* '<S28>/Supervisor' */
  uint16_T temporalCounter_i2;         /* '<S1>/Stateflow 2' */
  uint16_T temporalCounter_i3;         /* '<S1>/Stateflow 2' */
  uint16_T temporalCounter_i4;         /* '<S1>/Stateflow 2' */
  int8_T Subsystem3_SubsysRanBC;       /* '<S32>/Subsystem3' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S34>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S34>/If Action Subsystem' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S4>/Enabled Subsystem' */
  uint8_T is_active_c1_robotarm_student_2;/* '<S31>/Supervisor' */
  uint8_T is_active_c18_robotarm_student_;/* '<S30>/Supervisor' */
  uint8_T is_active_c16_robotarm_student_;/* '<S29>/Supervisor2' */
  uint8_T is_active_c12_robotarm_student_;/* '<S28>/Supervisor' */
  uint8_T is_active_c3_robotarm_student_2;/* '<S1>/Stateflow 2' */
  uint8_T is_active_Vacuum;            /* '<S1>/Stateflow 2' */
  uint8_T is_active_Object_picked;     /* '<S1>/Stateflow 2' */
  uint8_T is_active_ActionDone;        /* '<S1>/Stateflow 2' */
  uint8_T is_active_Robot_Arm;         /* '<S1>/Stateflow 2' */
  uint8_T is_active_Object_tracking;   /* '<S1>/Stateflow 2' */
  uint8_T is_active_temp;              /* '<S1>/Stateflow 2' */
  uint8_T is_active_Mask_identit;      /* '<S1>/Stateflow 2' */
  boolean_T doneDoubleBufferReInit;    /* '<S1>/Stateflow 2' */
  boolean_T isNotInit;                 /* '<S1>/Stateflow 2' */
  boolean_T Controller_MODE;           /* '<Root>/Controller' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite;/* '<S35>/Serial Write1' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite1;/* '<S35>/Serial Write1' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime2;/* '<S1>/quintic trajectory time2' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime1;/* '<S1>/quintic trajectory time1' */
  DW_quintictrajectorytime_robo_T sf_quintictrajectorytime;/* '<S1>/quintic trajectory time' */
} DW_robotarm_student_2021a_Ipos_T;

/* Parameters (default storage) */
struct P_robotarm_student_2021a_Ipos_T_ {
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S62>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_e;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                               * Referenced by: '<S52>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_h;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
                               * Referenced by: '<S43>/UD'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S24>/Constant'
                                       */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S19>/Delay Input1'
                                        */
  uint8_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S25>/Constant'
                                      */
  real_T Delays_Y0;                    /* Computed Parameter: Delays_Y0
                                        * Referenced by: '<S20>/Delay [s]'
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
  /* Expression: [0                    0                    0      1737816296.1653;0  0  0  0;0  0  0  0]
   * Referenced by: '<S4>/Object detection matrix'
   */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<S1>/Constant'
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
  real_T Conveyorspeedmms_Value;       /* Expression: 10
                                        * Referenced by: '<S1>/Conveyor speed [mm//s]'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 8
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 25
                                        * Referenced by: '<S18>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size[2];      /* Computed Parameter: Dctleadlag2_P1_Size
                                       * Referenced by: '<S18>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P1;               /* Expression: f_num
                                        * Referenced by: '<S18>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size[2];      /* Computed Parameter: Dctleadlag2_P2_Size
                                       * Referenced by: '<S18>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P2;               /* Expression: f_den
                                        * Referenced by: '<S18>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size[2];      /* Computed Parameter: Dctleadlag2_P3_Size
                                       * Referenced by: '<S18>/Dctleadlag2'
                                       */
  real_T Dctleadlag2_P3;               /* Expression: 0.001
                                        * Referenced by: '<S18>/Dctleadlag2'
                                        */
  real_T Dctintegrator3_P1_Size_h[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_h
                                  * Referenced by: '<S18>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_h;          /* Expression: f_num
                                        * Referenced by: '<S18>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_f[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_f
                                  * Referenced by: '<S18>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_e;          /* Expression: 0.001
                                        * Referenced by: '<S18>/Dctintegrator3'
                                        */
  real_T Dctleadlag2_P1_Size_l[2];  /* Computed Parameter: Dctleadlag2_P1_Size_l
                                     * Referenced by: '<S13>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P1_p;             /* Expression: f_num
                                        * Referenced by: '<S13>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size_e[2];  /* Computed Parameter: Dctleadlag2_P2_Size_e
                                     * Referenced by: '<S13>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P2_d;             /* Expression: f_den
                                        * Referenced by: '<S13>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size_p[2];  /* Computed Parameter: Dctleadlag2_P3_Size_p
                                     * Referenced by: '<S13>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P3_l;             /* Expression: 0.001
                                        * Referenced by: '<S13>/Dctleadlag2'
                                        */
  real_T Dct1lowpass3_P1_Size[2];    /* Computed Parameter: Dct1lowpass3_P1_Size
                                      * Referenced by: '<S13>/Dct1lowpass3'
                                      */
  real_T Dct1lowpass3_P1;              /* Expression: f_den
                                        * Referenced by: '<S13>/Dct1lowpass3'
                                        */
  real_T Dct1lowpass3_P2_Size[2];    /* Computed Parameter: Dct1lowpass3_P2_Size
                                      * Referenced by: '<S13>/Dct1lowpass3'
                                      */
  real_T Dct1lowpass3_P2;              /* Expression: 0.001
                                        * Referenced by: '<S13>/Dct1lowpass3'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 9.5
                                        * Referenced by: '<S11>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size_d[2];  /* Computed Parameter: Dctleadlag2_P1_Size_d
                                     * Referenced by: '<S11>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P1_m;             /* Expression: f_num
                                        * Referenced by: '<S11>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size_ec[2];/* Computed Parameter: Dctleadlag2_P2_Size_ec
                                    * Referenced by: '<S11>/Dctleadlag2'
                                    */
  real_T Dctleadlag2_P2_a;             /* Expression: f_den
                                        * Referenced by: '<S11>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size_c[2];  /* Computed Parameter: Dctleadlag2_P3_Size_c
                                     * Referenced by: '<S11>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P3_k;             /* Expression: 0.001
                                        * Referenced by: '<S11>/Dctleadlag2'
                                        */
  real_T Dct1lowpass3_P1_Size_p[2];/* Computed Parameter: Dct1lowpass3_P1_Size_p
                                    * Referenced by: '<S11>/Dct1lowpass3'
                                    */
  real_T Dct1lowpass3_P1_g;            /* Expression: f_den
                                        * Referenced by: '<S11>/Dct1lowpass3'
                                        */
  real_T Dct1lowpass3_P2_Size_l[2];/* Computed Parameter: Dct1lowpass3_P2_Size_l
                                    * Referenced by: '<S11>/Dct1lowpass3'
                                    */
  real_T Dct1lowpass3_P2_l;            /* Expression: 0.001
                                        * Referenced by: '<S11>/Dct1lowpass3'
                                        */
  real_T Dct1lowpass_P1_Size_g[2];  /* Computed Parameter: Dct1lowpass_P1_Size_g
                                     * Referenced by: '<S18>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_l;             /* Expression: f_den
                                        * Referenced by: '<S18>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_p[2];  /* Computed Parameter: Dct1lowpass_P2_Size_p
                                     * Referenced by: '<S18>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_b;             /* Expression: 0.001
                                        * Referenced by: '<S18>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 1
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real_T Dctpd2_P1_Size[2];            /* Computed Parameter: Dctpd2_P1_Size
                                        * Referenced by: '<S10>/Dctpd2'
                                        */
  real_T Dctpd2_P1;                    /* Expression: kp
                                        * Referenced by: '<S10>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size[2];            /* Computed Parameter: Dctpd2_P2_Size
                                        * Referenced by: '<S10>/Dctpd2'
                                        */
  real_T Dctpd2_P2;                    /* Expression: kv
                                        * Referenced by: '<S10>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size[2];            /* Computed Parameter: Dctpd2_P3_Size
                                        * Referenced by: '<S10>/Dctpd2'
                                        */
  real_T Dctpd2_P3;                    /* Expression: 0.001
                                        * Referenced by: '<S10>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size[2];      /* Computed Parameter: Dctleadlag3_P1_Size
                                       * Referenced by: '<S10>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P1;               /* Expression: f_num
                                        * Referenced by: '<S10>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size[2];      /* Computed Parameter: Dctleadlag3_P2_Size
                                       * Referenced by: '<S10>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P2;               /* Expression: f_den
                                        * Referenced by: '<S10>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size[2];      /* Computed Parameter: Dctleadlag3_P3_Size
                                       * Referenced by: '<S10>/Dctleadlag3'
                                       */
  real_T Dctleadlag3_P3;               /* Expression: 0.001
                                        * Referenced by: '<S10>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 1
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T Dctpd2_P1_Size_k[2];          /* Computed Parameter: Dctpd2_P1_Size_k
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P1_e;                  /* Expression: kp
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size_l[2];          /* Computed Parameter: Dctpd2_P2_Size_l
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P2_c;                  /* Expression: kv
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size_e[2];          /* Computed Parameter: Dctpd2_P3_Size_e
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctpd2_P3_l;                  /* Expression: 0.001
                                        * Referenced by: '<S9>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size_f[2];  /* Computed Parameter: Dctleadlag3_P1_Size_f
                                     * Referenced by: '<S9>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P1_p;             /* Expression: f_num
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size_n[2];  /* Computed Parameter: Dctleadlag3_P2_Size_n
                                     * Referenced by: '<S9>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P2_g;             /* Expression: f_den
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size_j[2];  /* Computed Parameter: Dctleadlag3_P3_Size_j
                                     * Referenced by: '<S9>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P3_f;             /* Expression: 0.001
                                        * Referenced by: '<S9>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1
                                        * Referenced by: '<S12>/Gain1'
                                        */
  real_T Dctpd2_P1_Size_l[2];          /* Computed Parameter: Dctpd2_P1_Size_l
                                        * Referenced by: '<S12>/Dctpd2'
                                        */
  real_T Dctpd2_P1_a;                  /* Expression: kp
                                        * Referenced by: '<S12>/Dctpd2'
                                        */
  real_T Dctpd2_P2_Size_n[2];          /* Computed Parameter: Dctpd2_P2_Size_n
                                        * Referenced by: '<S12>/Dctpd2'
                                        */
  real_T Dctpd2_P2_g;                  /* Expression: kv
                                        * Referenced by: '<S12>/Dctpd2'
                                        */
  real_T Dctpd2_P3_Size_o[2];          /* Computed Parameter: Dctpd2_P3_Size_o
                                        * Referenced by: '<S12>/Dctpd2'
                                        */
  real_T Dctpd2_P3_c;                  /* Expression: 0.001
                                        * Referenced by: '<S12>/Dctpd2'
                                        */
  real_T Dctleadlag3_P1_Size_g[2];  /* Computed Parameter: Dctleadlag3_P1_Size_g
                                     * Referenced by: '<S12>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P1_b;             /* Expression: f_num
                                        * Referenced by: '<S12>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P2_Size_d[2];  /* Computed Parameter: Dctleadlag3_P2_Size_d
                                     * Referenced by: '<S12>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P2_k;             /* Expression: f_den
                                        * Referenced by: '<S12>/Dctleadlag3'
                                        */
  real_T Dctleadlag3_P3_Size_f[2];  /* Computed Parameter: Dctleadlag3_P3_Size_f
                                     * Referenced by: '<S12>/Dctleadlag3'
                                     */
  real_T Dctleadlag3_P3_j;             /* Expression: 0.001
                                        * Referenced by: '<S12>/Dctleadlag3'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 1
                                        * Referenced by: '<S17>/Gain1'
                                        */
  real_T Dctleadlag2_P1_Size_i[2];  /* Computed Parameter: Dctleadlag2_P1_Size_i
                                     * Referenced by: '<S17>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P1_b;             /* Expression: f_num
                                        * Referenced by: '<S17>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P2_Size_l[2];  /* Computed Parameter: Dctleadlag2_P2_Size_l
                                     * Referenced by: '<S17>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P2_l;             /* Expression: f_den
                                        * Referenced by: '<S17>/Dctleadlag2'
                                        */
  real_T Dctleadlag2_P3_Size_g[2];  /* Computed Parameter: Dctleadlag2_P3_Size_g
                                     * Referenced by: '<S17>/Dctleadlag2'
                                     */
  real_T Dctleadlag2_P3_h;             /* Expression: 0.001
                                        * Referenced by: '<S17>/Dctleadlag2'
                                        */
  real_T Dctintegrator3_P1_Size_b[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_b
                                  * Referenced by: '<S17>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_j;          /* Expression: f_num
                                        * Referenced by: '<S17>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_c[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_c
                                  * Referenced by: '<S17>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_b;          /* Expression: 0.001
                                        * Referenced by: '<S17>/Dctintegrator3'
                                        */
  real_T Dctnotch4_P1_Size[2];         /* Computed Parameter: Dctnotch4_P1_Size
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P1;                 /* Expression: f_num
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P2_Size[2];         /* Computed Parameter: Dctnotch4_P2_Size
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P2;                 /* Expression: b_num
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P3_Size[2];         /* Computed Parameter: Dctnotch4_P3_Size
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P3;                 /* Expression: f_den
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P4_Size[2];         /* Computed Parameter: Dctnotch4_P4_Size
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P4;                 /* Expression: b_den
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P5_Size[2];         /* Computed Parameter: Dctnotch4_P5_Size
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctnotch4_P5;                 /* Expression: 0.001
                                        * Referenced by: '<S17>/Dctnotch4'
                                        */
  real_T Dctpd5_P1_Size[2];            /* Computed Parameter: Dctpd5_P1_Size
                                        * Referenced by: '<S17>/Dctpd5'
                                        */
  real_T Dctpd5_P1;                    /* Expression: kp
                                        * Referenced by: '<S17>/Dctpd5'
                                        */
  real_T Dctpd5_P2_Size[2];            /* Computed Parameter: Dctpd5_P2_Size
                                        * Referenced by: '<S17>/Dctpd5'
                                        */
  real_T Dctpd5_P2;                    /* Expression: kv
                                        * Referenced by: '<S17>/Dctpd5'
                                        */
  real_T Dctpd5_P3_Size[2];            /* Computed Parameter: Dctpd5_P3_Size
                                        * Referenced by: '<S17>/Dctpd5'
                                        */
  real_T Dctpd5_P3;                    /* Expression: 0.001
                                        * Referenced by: '<S17>/Dctpd5'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T Saturation_LowerSat;          /* Expression: -100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T Object_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/Object'
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
  real_T HomingRunningSwitch2_Threshold;/* Expression: 50
                                         * Referenced by: '<S27>/Homing Running Switch2'
                                         */
  real_T HomingRunningSwitch1_Threshold;/* Expression: 2.5
                                         * Referenced by: '<S27>/Homing Running Switch1'
                                         */
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S28>/Homing Running Switch'
                                        */
  real_T HomingRunningSwitch_Threshold_j;/* Expression: 0.5
                                          * Referenced by: '<S29>/Homing Running Switch'
                                          */
  real_T HomingRunningSwitch_Threshold_d;/* Expression: 0.5
                                          * Referenced by: '<S30>/Homing Running Switch'
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
                                        * Referenced by: '<S23>/ec_Ipos'
                                        */
  real_T ec_Ipos_P1;                   /* Expression: link_id
                                        * Referenced by: '<S23>/ec_Ipos'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/16000*9/150*2*pi
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S40>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S40>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_gainva_i;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                           * Referenced by: '<S28>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S28>/Discrete-Time Integrator'
                                        */
  real_T Constant_Value_i;             /* Expression: -0.05
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Gain1_Gain_g2;                /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S21>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_h;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
                           * Referenced by: '<S29>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_c;  /* Expression: 0
                                        * Referenced by: '<S29>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S46>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_j;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                           * Referenced by: '<S46>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_f;             /* Expression: -0.1
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S21>/Gain2'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                           * Referenced by: '<S30>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_o;  /* Expression: 0
                                        * Referenced by: '<S30>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S56>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                           * Referenced by: '<S56>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_o;             /* Expression: 0.05
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S22>/Unit Delay'
                                        */
  real_T set_robot_calibration_r_Value;/* Expression: 1.2259
                                        * Referenced by: '<S22>/set_robot_calibration_r'
                                        */
  real_T set_robot_calibration_x_Value;/* Expression: 0.6022
                                        * Referenced by: '<S22>/set_robot_calibration_x'
                                        */
  real_T set_robot_calibration_z_Value;/* Expression: -0.3331
                                        * Referenced by: '<S22>/set_robot_calibration_z'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 3
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/16000*2*pi*2.05*10
                                        * Referenced by: '<S21>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/65535
                                        * Referenced by: '<S21>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1/2
                                        * Referenced by: '<S21>/Gain5'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S22>/Unit Delay1'
                                        */
  real_T HomingRunningSwitch_Threshold_l;/* Expression: 0.5
                                          * Referenced by: '<S27>/Homing Running Switch'
                                          */
  real_T ResetEncoderR_P1_Size[2];  /* Computed Parameter: ResetEncoderR_P1_Size
                                     * Referenced by: '<S28>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P1;             /* Expression: ipos_id
                                        * Referenced by: '<S28>/Reset EncoderR'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 25
                                        * Referenced by: '<S37>/Gain'
                                        */
  real_T Dctintegrator_P1_Size[2];  /* Computed Parameter: Dctintegrator_P1_Size
                                     * Referenced by: '<S37>/Dctintegrator'
                                     */
  real_T Dctintegrator_P1;             /* Expression: f_num
                                        * Referenced by: '<S37>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size[2];  /* Computed Parameter: Dctintegrator_P2_Size
                                     * Referenced by: '<S37>/Dctintegrator'
                                     */
  real_T Dctintegrator_P2;             /* Expression: 0.001
                                        * Referenced by: '<S37>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_m[2];    /* Computed Parameter: Dctleadlag_P1_Size_m
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_g;              /* Expression: f_num
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_p[2];    /* Computed Parameter: Dctleadlag_P2_Size_p
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_g;              /* Expression: f_den
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_h[2];    /* Computed Parameter: Dctleadlag_P3_Size_h
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_e;              /* Expression: 0.001
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m[2];  /* Computed Parameter: Dct1lowpass_P1_Size_m
                                     * Referenced by: '<S37>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_e;             /* Expression: f_den
                                        * Referenced by: '<S37>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_o[2];  /* Computed Parameter: Dct1lowpass_P2_Size_o
                                     * Referenced by: '<S37>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_a;             /* Expression: 0.001
                                        * Referenced by: '<S37>/Dct1lowpass'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 25
                                        * Referenced by: '<S38>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_c[2];    /* Computed Parameter: Dctleadlag_P1_Size_c
                                      * Referenced by: '<S38>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_e;              /* Expression: f_num
                                        * Referenced by: '<S38>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_k[2];    /* Computed Parameter: Dctleadlag_P2_Size_k
                                      * Referenced by: '<S38>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_b;              /* Expression: f_den
                                        * Referenced by: '<S38>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_hn[2];  /* Computed Parameter: Dctleadlag_P3_Size_hn
                                     * Referenced by: '<S38>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_g;              /* Expression: 0.001
                                        * Referenced by: '<S38>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_a[2];  /* Computed Parameter: Dct1lowpass_P1_Size_a
                                     * Referenced by: '<S38>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_g;             /* Expression: f_den
                                        * Referenced by: '<S38>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_l[2];  /* Computed Parameter: Dct1lowpass_P2_Size_l
                                     * Referenced by: '<S38>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_i;             /* Expression: 0.001
                                        * Referenced by: '<S38>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 32
                                        * Referenced by: '<S28>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 127
                                        * Referenced by: '<S28>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -127
                                        * Referenced by: '<S28>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size[2];/* Computed Parameter: ResetEncoderR1_P1_Size
                                    * Referenced by: '<S29>/Reset EncoderR1'
                                    */
  real_T ResetEncoderR1_P1;            /* Expression: ipos_id
                                        * Referenced by: '<S29>/Reset EncoderR1'
                                        */
  real_T Gain1_Gain_ov;                /* Expression: 20
                                        * Referenced by: '<S44>/Gain1'
                                        */
  real_T Dctintegrator_P1_Size_i[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_i
                                   * Referenced by: '<S44>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_j;           /* Expression: f_num
                                        * Referenced by: '<S44>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_p
                                   * Referenced by: '<S44>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_n;           /* Expression: 0.001
                                        * Referenced by: '<S44>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_d[2];    /* Computed Parameter: Dctleadlag_P1_Size_d
                                      * Referenced by: '<S44>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m;              /* Expression: f_num
                                        * Referenced by: '<S44>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_g[2];    /* Computed Parameter: Dctleadlag_P2_Size_g
                                      * Referenced by: '<S44>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_p;              /* Expression: f_den
                                        * Referenced by: '<S44>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_o[2];    /* Computed Parameter: Dctleadlag_P3_Size_o
                                      * Referenced by: '<S44>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_ge;             /* Expression: 0.001
                                        * Referenced by: '<S44>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m3[2];/* Computed Parameter: Dct1lowpass_P1_Size_m3
                                    * Referenced by: '<S44>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_f;             /* Expression: f_den
                                        * Referenced by: '<S44>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_b[2];  /* Computed Parameter: Dct1lowpass_P2_Size_b
                                     * Referenced by: '<S44>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_k;             /* Expression: 0.001
                                        * Referenced by: '<S44>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_hw;                /* Expression: 20
                                        * Referenced by: '<S45>/Gain1'
                                        */
  real_T Dctleadlag_P1_Size_b[2];    /* Computed Parameter: Dctleadlag_P1_Size_b
                                      * Referenced by: '<S45>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_p;              /* Expression: f_num
                                        * Referenced by: '<S45>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_m[2];    /* Computed Parameter: Dctleadlag_P2_Size_m
                                      * Referenced by: '<S45>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_a;              /* Expression: f_den
                                        * Referenced by: '<S45>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_p[2];    /* Computed Parameter: Dctleadlag_P3_Size_p
                                      * Referenced by: '<S45>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_c;              /* Expression: 0.001
                                        * Referenced by: '<S45>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_n[2];  /* Computed Parameter: Dct1lowpass_P1_Size_n
                                     * Referenced by: '<S45>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_h;             /* Expression: f_den
                                        * Referenced by: '<S45>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_g[2];  /* Computed Parameter: Dct1lowpass_P2_Size_g
                                     * Referenced by: '<S45>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_bm;            /* Expression: 0.001
                                        * Referenced by: '<S45>/Dct1lowpass'
                                        */
  real_T Gain_Gain_cj;                 /* Expression: 32
                                        * Referenced by: '<S29>/Gain'
                                        */
  real_T Saturation1_UpperSat_e;       /* Expression: 127
                                        * Referenced by: '<S29>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_p;       /* Expression: -127
                                        * Referenced by: '<S29>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_d[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_d
                                  * Referenced by: '<S30>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_d;          /* Expression: ipos_id
                                        * Referenced by: '<S30>/Reset EncoderR1'
                                        */
  real_T Gain_Gain_cr;                 /* Expression: 20
                                        * Referenced by: '<S53>/Gain'
                                        */
  real_T Dctintegrator_P1_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_p
                                   * Referenced by: '<S53>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_k;           /* Expression: f_num
                                        * Referenced by: '<S53>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_o[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_o
                                   * Referenced by: '<S53>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_m;           /* Expression: 0.001
                                        * Referenced by: '<S53>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_ch[2];  /* Computed Parameter: Dctleadlag_P1_Size_ch
                                     * Referenced by: '<S53>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_h;              /* Expression: f_num
                                        * Referenced by: '<S53>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_h[2];    /* Computed Parameter: Dctleadlag_P2_Size_h
                                      * Referenced by: '<S53>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_l;              /* Expression: f_den
                                        * Referenced by: '<S53>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_f[2];    /* Computed Parameter: Dctleadlag_P3_Size_f
                                      * Referenced by: '<S53>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_a;              /* Expression: 0.001
                                        * Referenced by: '<S53>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_ni[2];/* Computed Parameter: Dct1lowpass_P1_Size_ni
                                    * Referenced by: '<S53>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_j;             /* Expression: f_den
                                        * Referenced by: '<S53>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_a[2];  /* Computed Parameter: Dct1lowpass_P2_Size_a
                                     * Referenced by: '<S53>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_j;             /* Expression: 0.001
                                        * Referenced by: '<S53>/Dct1lowpass'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 30
                                        * Referenced by: '<S54>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_by[2];  /* Computed Parameter: Dctleadlag_P1_Size_by
                                     * Referenced by: '<S54>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_i;              /* Expression: f_num
                                        * Referenced by: '<S54>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_j[2];    /* Computed Parameter: Dctleadlag_P2_Size_j
                                      * Referenced by: '<S54>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_o;              /* Expression: f_den
                                        * Referenced by: '<S54>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_oi[2];  /* Computed Parameter: Dctleadlag_P3_Size_oi
                                     * Referenced by: '<S54>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_aa;             /* Expression: 0.001
                                        * Referenced by: '<S54>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_p[2];  /* Computed Parameter: Dct1lowpass_P1_Size_p
                                     * Referenced by: '<S54>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_j3;            /* Expression: f_den
                                        * Referenced by: '<S54>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_j[2];  /* Computed Parameter: Dct1lowpass_P2_Size_j
                                     * Referenced by: '<S54>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_c;             /* Expression: 0.001
                                        * Referenced by: '<S54>/Dct1lowpass'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 32
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 127
                                        * Referenced by: '<S30>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: -127
                                        * Referenced by: '<S30>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_b[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_b
                                  * Referenced by: '<S31>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_l;          /* Expression: ipos_id
                                        * Referenced by: '<S31>/Reset EncoderR1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                           * Referenced by: '<S31>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_co; /* Expression: 0
                                        * Referenced by: '<S31>/Discrete-Time Integrator'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 10*2.5/500
                                        * Referenced by: '<S63>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size_m[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_m
                                  * Referenced by: '<S63>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_ji;         /* Expression: f_num
                                        * Referenced by: '<S63>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_b[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_b
                                  * Referenced by: '<S63>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_j;          /* Expression: 0.001
                                        * Referenced by: '<S63>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size_j[2];  /* Computed Parameter: Dct1lowpass_P1_Size_j
                                     * Referenced by: '<S63>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_ez;            /* Expression: f_den
                                        * Referenced by: '<S63>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_aj[2];/* Computed Parameter: Dct1lowpass_P2_Size_aj
                                    * Referenced by: '<S63>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_n;             /* Expression: 0.001
                                        * Referenced by: '<S63>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size_l[2];    /* Computed Parameter: Dctleadlag_P1_Size_l
                                      * Referenced by: '<S63>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m0;             /* Expression: f_num
                                        * Referenced by: '<S63>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_n[2];    /* Computed Parameter: Dctleadlag_P2_Size_n
                                      * Referenced by: '<S63>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_f;              /* Expression: f_den
                                        * Referenced by: '<S63>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_d[2];    /* Computed Parameter: Dctleadlag_P3_Size_d
                                      * Referenced by: '<S63>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_i;              /* Expression: 0.001
                                        * Referenced by: '<S63>/Dctleadlag'
                                        */
  real_T HomingRunningSwitch_Threshol_lq;/* Expression: 0.5
                                          * Referenced by: '<S31>/Homing Running Switch'
                                          */
  real_T Gain_Gain_j;                  /* Expression: 32
                                        * Referenced by: '<S31>/Gain'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 127
                                        * Referenced by: '<S31>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_g;       /* Expression: -127
                                        * Referenced by: '<S31>/Saturation1'
                                        */
  real_T LimitSpeed_RisingLim;         /* Expression: 0.2
                                        * Referenced by: '<S56>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Expression: -0.2
                                        * Referenced by: '<S56>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S56>/Limit Speed'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S62>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Expression: 0.5
                                        * Referenced by: '<S56>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Expression: -0.5
                                        * Referenced by: '<S56>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S56>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_i;       /* Expression: 0.4
                                        * Referenced by: '<S46>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_k;      /* Expression: -0.4
                                        * Referenced by: '<S46>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_a;              /* Expression: 0
                                        * Referenced by: '<S46>/Limit Speed'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S52>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_k;/* Expression: 0.5
                                        * Referenced by: '<S46>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_m;/* Expression: -0.5
                                         * Referenced by: '<S46>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_k;       /* Expression: 0
                                        * Referenced by: '<S46>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_iu;      /* Expression: 0.6
                                        * Referenced by: '<S40>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_j;      /* Expression: -0.6
                                        * Referenced by: '<S40>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_e;              /* Expression: 0
                                        * Referenced by: '<S40>/Limit Speed'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S43>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_m;/* Expression: 0.8
                                        * Referenced by: '<S40>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_k;/* Expression: -0.8
                                         * Referenced by: '<S40>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_i;       /* Expression: 0
                                        * Referenced by: '<S40>/Limit Acceleration'
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
                                    * Referenced by: '<S36>/String Constant3'
                                    */
  char_T StringConstant1_String[256];
                                   /* Computed Parameter: StringConstant1_String
                                    * Referenced by: '<S36>/String Constant1'
                                    */
  char_T StringConstant4_String[256];
                                   /* Computed Parameter: StringConstant4_String
                                    * Referenced by: '<S34>/String Constant4'
                                    */
  char_T ReadyGreen_String[256];       /* Computed Parameter: ReadyGreen_String
                                        * Referenced by: '<S22>/Ready Green'
                                        */
  char_T AirbagRed_String[256];        /* Computed Parameter: AirbagRed_String
                                        * Referenced by: '<S22>/Airbag Red'
                                        */
  char_T HomingOrange_String[256];    /* Computed Parameter: HomingOrange_String
                                       * Referenced by: '<S22>/Homing Orange'
                                       */
  char_T Delay_InitialCondition[256];
                                   /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S33>/Delay'
                                    */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch1'
                              */
  uint8_T Constant1_Value_j;           /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S35>/Constant1'
                                        */
  uint8_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S36>/Constant'
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[2];
      mxArray *params[2];
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
 * Block '<S1>/Constant1' : Unused code path elimination
 * Block '<S1>/Derivative' : Unused code path elimination
 * Block '<S1>/Derivative1' : Unused code path elimination
 * Block '<S1>/Derivative2' : Unused code path elimination
 * Block '<S1>/Derivative3' : Unused code path elimination
 * Block '<S1>/Derivative4' : Unused code path elimination
 * Block '<S1>/Derivative5' : Unused code path elimination
 * Block '<S1>/Gain' : Unused code path elimination
 * Block '<S1>/Gain1' : Unused code path elimination
 * Block '<S1>/Gain2' : Unused code path elimination
 * Block '<S1>/Gain3' : Unused code path elimination
 * Block '<S1>/Gain4' : Unused code path elimination
 * Block '<S1>/Gain5' : Unused code path elimination
 * Block '<S1>/Gain6' : Unused code path elimination
 * Block '<S1>/Gain7' : Unused code path elimination
 * Block '<S1>/Gain8' : Unused code path elimination
 * Block '<S1>/Manual Switch' : Unused code path elimination
 * Block '<S1>/Sign' : Unused code path elimination
 * Block '<S1>/Sign1' : Unused code path elimination
 * Block '<S1>/Sign2' : Unused code path elimination
 * Block '<S1>/Suck' : Unused code path elimination
 * Block '<S1>/Sum' : Unused code path elimination
 * Block '<S1>/Sum10' : Unused code path elimination
 * Block '<S1>/Sum8' : Unused code path elimination
 * Block '<S1>/Switch' : Unused code path elimination
 * Block '<S23>/Saturation' : Unused code path elimination
 * Block '<S43>/Data Type Duplicate' : Unused code path elimination
 * Block '<S52>/Data Type Duplicate' : Unused code path elimination
 * Block '<S62>/Data Type Duplicate' : Unused code path elimination
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
 * '<S7>'   : 'robotarm_student_2021a_Ipos/Controller/MATLAB Function'
 * '<S8>'   : 'robotarm_student_2021a_Ipos/Controller/Stateflow 2'
 * '<S9>'   : 'robotarm_student_2021a_Ipos/Controller/controller'
 * '<S10>'  : 'robotarm_student_2021a_Ipos/Controller/controller1'
 * '<S11>'  : 'robotarm_student_2021a_Ipos/Controller/controller_Z'
 * '<S12>'  : 'robotarm_student_2021a_Ipos/Controller/controller_x_direction'
 * '<S13>'  : 'robotarm_student_2021a_Ipos/Controller/controller_x_direction1'
 * '<S14>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time'
 * '<S15>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time1'
 * '<S16>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time2'
 * '<S17>'  : 'robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator'
 * '<S18>'  : 'robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator1'
 * '<S19>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Detect Change'
 * '<S20>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Enabled Subsystem'
 * '<S21>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem'
 * '<S22>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor'
 * '<S23>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem/Ipos'
 * '<S24>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant'
 * '<S25>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant1'
 * '<S26>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/HomingBusyCheck'
 * '<S27>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem'
 * '<S28>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R'
 * '<S29>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X'
 * '<S30>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z'
 * '<S31>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1'
 * '<S32>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring'
 * '<S33>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem'
 * '<S34>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3'
 * '<S35>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem'
 * '<S36>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem1'
 * '<S37>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/ '
 * '<S38>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/   '
 * '<S39>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Angle2Z'
 * '<S40>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S41>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Selector1'
 * '<S42>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S43>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S44>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1'
 * '<S45>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2'
 * '<S46>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S47>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector'
 * '<S48>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector1'
 * '<S49>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector2'
 * '<S50>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector3'
 * '<S51>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Supervisor2'
 * '<S52>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S53>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    '
 * '<S54>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     '
 * '<S55>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S56>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S57>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector'
 * '<S58>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S59>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S60>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S61>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S62>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 * '<S63>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor'
 * '<S64>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Supervisor'
 */
#endif                           /* RTW_HEADER_robotarm_student_2021a_Ipos_h_ */

/*
 * robotarm_student_2021a_Ipos.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ipos".
 *
 * Model version              : 2.167
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Mar 26 16:44:50 2025
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

/* Named constants for Chart: '<S1>/Stateflow 1' */
#define robotarm_st_IN_On_Conveyor_pos1 (2U)
#define robotarm_st_IN_On_Conveyor_pos2 (3U)
#define robotarm_st_event_StackComplete (6)
#define robotarm_stud_event_ActionEvent (1)
#define robotarm_stud_event_TrackObject (7)
#define robotarm_stude_IN_Object_placed (2U)
#define robotarm_stude_event_ActionDone (0)
#define robotarm_stude_event_GetProduct (3)
#define robotarm_studen_IN_Off_Conveyor (1U)
#define robotarm_studen_event_ScanAgain (5)
#define robotarm_studen_event_VacuumOff (8)
#define robotarm_student_2021_IN_Action (1U)
#define robotarm_student_2021_IN_Picked (2U)
#define robotarm_student_2021a_IN_Timer (3U)
#define robotarm_student_202_CALL_EVENT (-1)
#define robotarm_student_202_IN_Seeking (1U)
#define robotarm_student_20_IN_Object_1 (2U)
#define robotarm_student_20_IN_Object_2 (3U)
#define robotarm_student_20_IN_Reaching (4U)
#define robotarm_student_2_IN_Belt_Home (1U)
#define robotarm_student_2_IN_No_Object (1U)
#define robotarm_student_2_IN_No_action (2U)
#define robotarm_student_2_IN_No_object (1U)
#define robotarm_student_2_IN_Tranition (6U)
#define robotarm_student_2_IN_Vacuum_On (2U)
#define robotarm_student_IN_WaitSeeking (3U)
#define robotarm_student__IN_Not_Picked (1U)
#define robotarm_student__IN_Start_Home (5U)
#define robotarm_student__IN_Transition (2U)
#define robotarm_student__IN_Vacuum_Off (1U)
#define robotarm_student_event_Detected (2)
#define robotarm_student_event_VacuumOn (9)

/* Named constants for Chart: '<S25>/Supervisor' */
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

/* Named constants for Chart: '<S26>/Supervisor2' */
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

/* Named constants for Chart: '<S27>/Supervisor' */
#define robotarm_stude_IN_WaitForRest_m (9U)
#define robotarm_student_2_IN_AirbagTop (3U)
#define robotarm_student_2_IN_Waiting_l (10U)
#define robotarm_student__IN_AirbagDrop (2U)
#define robotarm_student__IN_Waiting1_m (11U)

/* Named constants for Chart: '<S28>/Supervisor' */
#define robotar_IN_EnableRunAndSafety_n (2U)
#define robotarm_st_IN_CheckRobotIsON_k (1U)
#define robotarm_stude_IN_WaitForRest_g (6U)
#define robotarm_student_20_IN_Homing_n (3U)
#define robotarm_student_2_IN_Waiting_n (7U)
#define robotarm_student__IN_MovetoX0_d (4U)
#define robotarm_student__IN_ResetEnc_h (5U)
#define robotarm_student_2021a_I_period (0.00048828125)

const real_T robotarm_student_2021a_Ipos_RGND = 0.0;/* real_T ground */

/* Block signals (default storage) */
B_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_B;

/* Block states (default storage) */
DW_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_DW;

/* Real-time model */
static RT_MODEL_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_M_;
RT_MODEL_robotarm_student_2021a_Ipos_T *const robotarm_student_2021a_Ipos_M =
  &robotarm_student_2021a_Ipos_M_;

/* Forward declaration for local functions */
static void robotarm_student_emxInit_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray, int32_T numDimensions);
static real_T robotarm_student_20_rt_powd_snf(real_T u0, real_T u1,
  B_quintictrajectorytime_robot_T *localB);
static void robota_emxEnsureCapacity_real_T(emxArray_real_T_robotarm_stud_T
  *emxArray, int32_T oldNumel);
static void robotarm_student_emxFree_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray);

/* Forward declaration for local functions */
static void robotarm_stude_SystemCore_setup(codertarget_raspi_internal_SC_T *obj);

/* Forward declaration for local functions */
static void robotarm_stu_broadcast_Detected(void);
static real_T robotarm_student__rt_atan2d_snf(real_T u0, real_T u1);
static void robotarm_student_2021a_I_invkin(real_T x, real_T y, real_T z, real_T
  *Psi, real_T *Phi, real_T *Theta);
static void robotarm_student_2021_Robot_Arm(void);
static void c4_robotarm_student_2021a_Ipos(void);
static void robotar_enter_atomic_Start_Home(void);
static void robotarm_student_emxInit_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_robotarm_stud_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_robotarm_stud_T *)malloc(sizeof
    (emxArray_real_T_robotarm_stud_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static real_T robotarm_student_20_rt_powd_snf(real_T u0, real_T u1,
  B_quintictrajectorytime_robot_T *localB)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    localB->d = fabs(u0);
    localB->d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (localB->d == 1.0) {
        y = 1.0;
      } else if (localB->d > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (localB->d1 == 0.0) {
      y = 1.0;
    } else if (localB->d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

static void robota_emxEnsureCapacity_real_T(emxArray_real_T_robotarm_stud_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void robotarm_student_emxFree_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_robotarm_stud_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_robotarm_stud_T *)NULL;
  }
}

/*
 * System initialize for atomic system:
 *    '<S1>/quintic trajectory time'
 *    '<S1>/quintic trajectory time1'
 *    '<S1>/quintic trajectory time2'
 */
void robo_quintictrajectorytime_Init(DW_quintictrajectorytime_robo_T *localDW)
{
  localDW->path_array_not_empty = false;
  robotarm_student_emxInit_real_T(&localDW->path_array, 2);
  localDW->previous_value_reference_start = 0.0;
  localDW->previous_value_reference_end = 0.0;
  localDW->index = 1.0;
}

/*
 * Output and update for atomic system:
 *    '<S1>/quintic trajectory time'
 *    '<S1>/quintic trajectory time1'
 *    '<S1>/quintic trajectory time2'
 */
void robotarm__quintictrajectorytime(real_T rtu_reference_end, real_T
  rtu_end_time, real_T rtu_measured_position, B_quintictrajectorytime_robot_T
  *localB, DW_quintictrajectorytime_robo_T *localDW)
{
  emxArray_real_T_robotarm_stud_T *b_y;
  emxArray_real_T_robotarm_stud_T *c_y;
  emxArray_real_T_robotarm_stud_T *d_y;
  emxArray_real_T_robotarm_stud_T *e_y;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T jA;
  static const int8_T f[6] = { 1, 0, 0, 0, 0, 0 };

  static const int8_T g[6] = { 0, 1, 0, 0, 0, 0 };

  static const int8_T h[6] = { 0, 0, 2, 0, 0, 0 };

  if (!localDW->path_array_not_empty) {
    jA = localDW->path_array->size[0] * localDW->path_array->size[1];
    localDW->path_array->size[0] = 1;
    localDW->path_array->size[1] = 1;
    robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
    localDW->path_array->data[0] = 0.0;
    localDW->path_array_not_empty = true;
  }

  if (localDW->previous_value_reference_end != rtu_reference_end) {
    localB->smax = robotarm_student_20_rt_powd_snf(rtu_end_time, 3.0, localB);
    localB->ndbl = robotarm_student_20_rt_powd_snf(rtu_end_time, 4.0, localB);
    localB->A[3] = 1.0;
    localB->A[9] = rtu_end_time;
    localB->cdiff = rtu_end_time * rtu_end_time;
    localB->A[15] = localB->cdiff;
    localB->A[21] = localB->smax;
    localB->A[27] = localB->ndbl;
    localB->A[33] = robotarm_student_20_rt_powd_snf(rtu_end_time, 5.0, localB);
    localB->A[4] = 0.0;
    localB->A[10] = 1.0;
    localB->A[16] = 2.0 * rtu_end_time;
    localB->A[22] = localB->cdiff * 3.0;
    localB->A[28] = 4.0 * localB->smax;
    localB->A[34] = 5.0 * localB->ndbl;
    localB->A[5] = 0.0;
    localB->A[11] = 0.0;
    localB->A[17] = 2.0;
    localB->A[23] = 6.0 * rtu_end_time;
    localB->A[29] = localB->cdiff * 12.0;
    localB->A[35] = 20.0 * localB->smax;
    for (localB->j = 0; localB->j < 6; localB->j++) {
      localB->A[6 * localB->j] = f[localB->j];
      localB->A[6 * localB->j + 1] = g[localB->j];
      localB->A[6 * localB->j + 2] = h[localB->j];
      localB->ipiv[localB->j] = (int8_T)(localB->j + 1);
    }

    localB->B[0] = localDW->previous_value_reference_start;
    localB->B[1] = 0.0;
    localB->B[2] = 0.0;
    localB->B[3] = rtu_reference_end;
    localB->B[4] = 0.0;
    localB->B[5] = 0.0;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->kAcol = localB->j * 7;
      jA = 0;
      localB->ix = localB->kAcol;
      localB->smax = fabs(localB->A[localB->kAcol]);
      localB->c_k = 2;
      while (localB->c_k <= 6 - localB->j) {
        localB->ix++;
        localB->ndbl = fabs(localB->A[localB->ix]);
        if (localB->ndbl > localB->smax) {
          jA = localB->c_k - 1;
          localB->smax = localB->ndbl;
        }

        localB->c_k++;
      }

      if (localB->A[localB->kAcol + jA] != 0.0) {
        if (jA != 0) {
          localB->ix = localB->j + jA;
          localB->ipiv[localB->j] = (int8_T)(localB->ix + 1);
          for (jA = 0; jA < 6; jA++) {
            localB->c_k = jA * 6 + localB->j;
            localB->smax = localB->A[localB->c_k];
            c_ix = jA * 6 + localB->ix;
            localB->A[localB->c_k] = localB->A[c_ix];
            localB->A[c_ix] = localB->smax;
          }
        }

        jA = (localB->kAcol - localB->j) + 6;
        localB->ix = localB->kAcol + 1;
        while (localB->ix + 1 <= jA) {
          localB->A[localB->ix] /= localB->A[localB->kAcol];
          localB->ix++;
        }
      }

      jA = localB->kAcol;
      localB->ix = localB->kAcol + 6;
      localB->c_k = 0;
      while (localB->c_k <= 4 - localB->j) {
        localB->smax = localB->A[localB->ix];
        if (localB->A[localB->ix] != 0.0) {
          c_ix = localB->kAcol + 1;
          d = (jA - localB->j) + 12;
          for (ijA = jA + 7; ijA < d; ijA++) {
            localB->A[ijA] += localB->A[c_ix] * -localB->smax;
            c_ix++;
          }
        }

        localB->ix += 6;
        jA += 6;
        localB->c_k++;
      }

      if (localB->j + 1 != localB->ipiv[localB->j]) {
        localB->smax = localB->B[localB->j];
        localB->kAcol = localB->ipiv[localB->j] - 1;
        localB->B[localB->j] = localB->B[localB->kAcol];
        localB->B[localB->kAcol] = localB->smax;
      }
    }

    for (localB->j = 0; localB->j < 6; localB->j++) {
      localB->kAcol = 6 * localB->j;
      if (localB->B[localB->j] != 0.0) {
        for (jA = localB->j + 1; jA + 1 < 7; jA++) {
          localB->B[jA] -= localB->A[jA + localB->kAcol] * localB->B[localB->j];
        }
      }
    }

    for (localB->j = 5; localB->j >= 0; localB->j--) {
      localB->kAcol = 6 * localB->j;
      if (localB->B[localB->j] != 0.0) {
        localB->B[localB->j] /= localB->A[localB->j + localB->kAcol];
        for (jA = 0; jA < localB->j; jA++) {
          localB->B[jA] -= localB->A[jA + localB->kAcol] * localB->B[localB->j];
        }
      }
    }

    if (rtIsNaN(rtu_end_time)) {
      jA = localDW->path_array->size[0] * localDW->path_array->size[1];
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 1;
      robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
      localDW->path_array->data[0] = (rtNaN);
    } else if (rtu_end_time < 0.0) {
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 0;
    } else if (rtIsInf(rtu_end_time) && (0.0 == rtu_end_time)) {
      jA = localDW->path_array->size[0] * localDW->path_array->size[1];
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 1;
      robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
      localDW->path_array->data[0] = (rtNaN);
    } else {
      localB->ndbl = floor(rtu_end_time / 0.00048828125 + 0.5);
      localB->smax = localB->ndbl * 0.00048828125;
      localB->cdiff = localB->smax - rtu_end_time;
      if (fabs(localB->cdiff) < 4.4408920985006262E-16 * rtu_end_time) {
        localB->ndbl++;
        localB->smax = rtu_end_time;
      } else if (localB->cdiff > 0.0) {
        localB->smax = (localB->ndbl - 1.0) * 0.00048828125;
      } else {
        localB->ndbl++;
      }

      if (localB->ndbl >= 0.0) {
        localB->j = (int32_T)localB->ndbl - 1;
      } else {
        localB->j = -1;
      }

      jA = localDW->path_array->size[0] * localDW->path_array->size[1];
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = localB->j + 1;
      robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
      if (localB->j + 1 > 0) {
        localDW->path_array->data[0] = 0.0;
        if (localB->j + 1 > 1) {
          localDW->path_array->data[localB->j] = localB->smax;
          localB->kAcol = localB->j / 2;
          for (jA = 1; jA - 1 <= localB->kAcol - 2; jA++) {
            localB->ndbl = (real_T)jA * 0.00048828125;
            localDW->path_array->data[jA] = localB->ndbl;
            localDW->path_array->data[localB->j - jA] = localB->smax -
              localB->ndbl;
          }

          if (localB->kAcol << 1 == localB->j) {
            localDW->path_array->data[localB->kAcol] = localB->smax / 2.0;
          } else {
            localB->ndbl = (real_T)localB->kAcol * 0.00048828125;
            localDW->path_array->data[localB->kAcol] = localB->ndbl;
            localDW->path_array->data[localB->kAcol + 1] = localB->smax -
              localB->ndbl;
          }
        }
      }
    }

    robotarm_student_emxInit_real_T(&b_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(b_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      b_y->data[jA] = localDW->path_array->data[jA] * localDW->path_array->
        data[jA];
      localB->kAcol++;
    }

    robotarm_student_emxInit_real_T(&c_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(c_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      c_y->data[jA] = robotarm_student_20_rt_powd_snf(localDW->path_array->
        data[jA], 3.0, localB);
      localB->kAcol++;
    }

    robotarm_student_emxInit_real_T(&d_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(d_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      d_y->data[jA] = robotarm_student_20_rt_powd_snf(localDW->path_array->
        data[jA], 4.0, localB);
      localB->kAcol++;
    }

    robotarm_student_emxInit_real_T(&e_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = e_y->size[0] * e_y->size[1];
    e_y->size[0] = 1;
    e_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(e_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      e_y->data[jA] = robotarm_student_20_rt_powd_snf(localDW->path_array->
        data[jA], 5.0, localB);
      localB->kAcol++;
    }

    jA = localDW->path_array->size[0] * localDW->path_array->size[1];
    localDW->path_array->size[0] = 1;
    robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
    localB->smax = localB->B[0];
    localB->ndbl = localB->B[1];
    localB->cdiff = localB->B[2];
    localB->B_m = localB->B[3];
    localB->B_c = localB->B[4];
    localB->B_k = localB->B[5];
    localB->kAcol = localDW->path_array->size[1] - 1;
    for (localB->j = 0; localB->j <= localB->kAcol; localB->j++) {
      jA = localB->j;
      localDW->path_array->data[jA] = ((((localB->ndbl * localDW->
        path_array->data[jA] + localB->smax) + localB->cdiff * b_y->data[jA]) +
        localB->B_m * c_y->data[jA]) + localB->B_c * d_y->data[jA]) +
        localB->B_k * e_y->data[jA];
    }

    robotarm_student_emxFree_real_T(&e_y);
    robotarm_student_emxFree_real_T(&d_y);
    robotarm_student_emxFree_real_T(&c_y);
    robotarm_student_emxFree_real_T(&b_y);
    localDW->path_array_not_empty = (localDW->path_array->size[1] != 0);
    localDW->index = 1.0;
    localB->path = localDW->path_array->data[0];
  } else {
    if (localDW->index < localDW->path_array->size[1]) {
      localDW->index++;
    }

    localB->path = localDW->path_array->data[(int32_T)localDW->index - 1];
  }

  localDW->previous_value_reference_end = rtu_reference_end;
  localDW->previous_value_reference_start = rtu_measured_position;
}

/*
 * CleanupRuntimeResources for atomic system:
 *    '<S1>/quintic trajectory time'
 *    '<S1>/quintic trajectory time1'
 *    '<S1>/quintic trajectory time2'
 */
void quintictrajectorytim_CleanupRTR(DW_quintictrajectorytime_robo_T *localDW)
{
  robotarm_student_emxFree_real_T(&localDW->path_array);
}

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
  /* Start for MATLABSystem: '<S32>/Serial Write1' */
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

  /* MATLABSystem: '<S32>/Serial Write1' */
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
  /* Terminate for MATLABSystem: '<S32>/Serial Write1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_SCI_Close(localDW->obj.MW_SCIHANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S32>/Serial Write1' */
}

/* Function for Chart: '<S1>/Stateflow 1' */
static void robotarm_stu_broadcast_Detected(void)
{
  int32_T b_previousEvent;
  b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
  robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_student_event_Detected;

  /* Chart: '<S1>/Stateflow 1' */
  c4_robotarm_student_2021a_Ipos();
  robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
}

static real_T robotarm_student__rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      robotarm_student_2021a_Ipos_B.u0 = 1;
    } else {
      robotarm_student_2021a_Ipos_B.u0 = -1;
    }

    if (u1 > 0.0) {
      robotarm_student_2021a_Ipos_B.u1 = 1;
    } else {
      robotarm_student_2021a_Ipos_B.u1 = -1;
    }

    y = atan2(robotarm_student_2021a_Ipos_B.u0, robotarm_student_2021a_Ipos_B.u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for Chart: '<S1>/Stateflow 1' */
static void robotarm_student_2021a_I_invkin(real_T x, real_T y, real_T z, real_T
  *Psi, real_T *Phi, real_T *Theta)
{
  robotarm_student_2021a_Ipos_B.Y = y * 0.001;
  robotarm_student_2021a_Ipos_B.X = x * 0.001;
  robotarm_student_2021a_Ipos_B.R = sqrt(robotarm_student_2021a_Ipos_B.X *
    robotarm_student_2021a_Ipos_B.X + robotarm_student_2021a_Ipos_B.Y *
    robotarm_student_2021a_Ipos_B.Y);
  robotarm_student_2021a_Ipos_B.a = 0.246 - (z * 0.001 + 0.045);
  robotarm_student_2021a_Ipos_B.L_DB = sqrt(robotarm_student_2021a_Ipos_B.R *
    robotarm_student_2021a_Ipos_B.R + robotarm_student_2021a_Ipos_B.a *
    robotarm_student_2021a_Ipos_B.a);
  robotarm_student_2021a_Ipos_B.a = robotarm_student_2021a_Ipos_B.L_DB *
    robotarm_student_2021a_Ipos_B.L_DB;
  robotarm_student_2021a_Ipos_B.H_CDB = acos(((robotarm_student_2021a_Ipos_B.a +
    0.016900000000000002) - 0.034225) / (0.26 *
    robotarm_student_2021a_Ipos_B.L_DB));
  robotarm_student_2021a_Ipos_B.L_DF = sqrt(0.0313 - cos((3.1415926535897931 -
    robotarm_student_2021a_Ipos_B.H_CDB) - acos
    (((robotarm_student_2021a_Ipos_B.a + 0.034225) - 0.016900000000000002) /
     (0.37 * robotarm_student_2021a_Ipos_B.L_DB))) * 0.0312);
  robotarm_student_2021a_Ipos_B.a = robotarm_student_2021a_Ipos_B.L_DF *
    robotarm_student_2021a_Ipos_B.L_DF;
  robotarm_student_2021a_Ipos_B.R = robotarm_student_2021a_Ipos_B.H_CDB + asin
    (robotarm_student_2021a_Ipos_B.R / robotarm_student_2021a_Ipos_B.L_DB);
  robotarm_student_2021a_Ipos_B.L_DB = sqrt((robotarm_student_2021a_Ipos_B.a +
    0.027225000000000003) - cos(robotarm_student_2021a_Ipos_B.R - acos
    (((robotarm_student_2021a_Ipos_B.a + 0.016900000000000002) - 0.0144) / (0.26
    * robotarm_student_2021a_Ipos_B.L_DF))) * (2.0 *
    robotarm_student_2021a_Ipos_B.L_DF * 0.165));
  *Psi = robotarm_student__rt_atan2d_snf(robotarm_student_2021a_Ipos_B.Y,
    robotarm_student_2021a_Ipos_B.X);
  robotarm_student_2021a_Ipos_B.Y = robotarm_student_2021a_Ipos_B.L_DB *
    robotarm_student_2021a_Ipos_B.L_DB;
  *Phi = (1.5707963267948966 - ((1.5707963267948966 - acos
            (((robotarm_student_2021a_Ipos_B.Y + 0.027225000000000003) -
              robotarm_student_2021a_Ipos_B.a) / (2.0 *
              robotarm_student_2021a_Ipos_B.L_DB * 0.165))) + acos
           (((robotarm_student_2021a_Ipos_B.Y + 0.0064) - 0.016900000000000002) /
            (0.16 * robotarm_student_2021a_Ipos_B.L_DB)))) + -0.2551;
  *Theta = (robotarm_student_2021a_Ipos_B.R - 1.5707963267948966) + -0.615;
}

/* Function for Chart: '<S1>/Stateflow 1' */
static void robotarm_student_2021_Robot_Arm(void)
{
  int32_T b_previousEvent;
  switch (robotarm_student_2021a_Ipos_DW.is_Robot_Arm) {
   case robotarm_studen_IN_Off_Conveyor:
    if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
        robotarm_stude_event_ActionDone) {
      robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
        robotarm_student__IN_Start_Home;
      robotar_enter_atomic_Start_Home();
    }
    break;

   case robotarm_st_IN_On_Conveyor_pos1:
    if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
        robotarm_stude_event_ActionDone) {
      b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
      robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_stud_event_TrackObject;

      /* Chart: '<S1>/Stateflow 1' */
      c4_robotarm_student_2021a_Ipos();
      robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
      if (robotarm_student_2021a_Ipos_DW.is_Robot_Arm ==
          robotarm_st_IN_On_Conveyor_pos1) {
        robotarm_student_2021a_Ipos_DW.is_Robot_Arm = 0U;
      }

      if ((robotarm_student_2021a_Ipos_DW.is_Robot_Arm == 0U) &&
          (robotarm_student_2021a_Ipos_DW.is_active_Robot_Arm != 0U)) {
        robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
          robotarm_student__IN_Start_Home;
        robotar_enter_atomic_Start_Home();
      }
    }
    break;

   case robotarm_st_IN_On_Conveyor_pos2:
    if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
        robotarm_stude_event_ActionDone) {
      b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
      robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_st_event_StackComplete;

      /* Chart: '<S1>/Stateflow 1' */
      c4_robotarm_student_2021a_Ipos();
      robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
      if (robotarm_student_2021a_Ipos_DW.is_Robot_Arm ==
          robotarm_st_IN_On_Conveyor_pos2) {
        robotarm_student_2021a_Ipos_DW.is_Robot_Arm = 0U;
      }

      if ((robotarm_student_2021a_Ipos_DW.is_Robot_Arm == 0U) &&
          (robotarm_student_2021a_Ipos_DW.is_active_Robot_Arm != 0U)) {
        robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
          robotarm_student__IN_Start_Home;
        robotar_enter_atomic_Start_Home();
      }
    }
    break;

   case robotarm_student_20_IN_Reaching:
    if ((robotarm_student_2021a_Ipos_DW.sfEvent_e ==
         robotarm_stud_event_ActionEvent) &&
        (robotarm_student_2021a_Ipos_DW.ObjectType == 1.0)) {
      robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
        robotarm_studen_IN_Off_Conveyor;
      robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m0 = 0U;
      robotarm_student_2021a_Ipos_DW.action = 1.0;
      robotarm_student_2021a_Ipos_DW.Z_pos = 200.0;
      robotarm_student_2021a_Ipos_DW.X_pos = 50.0;
      robotarm_student_2021a_Ipos_DW.Y_pos = 100.0;
      robotarm_student_2021a_I_invkin(robotarm_student_2021a_Ipos_DW.X_pos,
        robotarm_student_2021a_Ipos_DW.Y_pos,
        robotarm_student_2021a_Ipos_DW.Z_pos,
        &robotarm_student_2021a_Ipos_B.R_rad,
        &robotarm_student_2021a_Ipos_B.X_rad,
        &robotarm_student_2021a_Ipos_B.Z_rad);
    } else if ((robotarm_student_2021a_Ipos_DW.sfEvent_e ==
                robotarm_stud_event_ActionEvent) &&
               (robotarm_student_2021a_Ipos_DW.ObjectType == 2.0) &&
               (robotarm_student_2021a_Ipos_DW.track == 0.0)) {
      robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
        robotarm_st_IN_On_Conveyor_pos1;
      robotarm_student_2021a_Ipos_DW.action = 1.0;
      robotarm_student_2021a_Ipos_DW.X_pos = 190.0;
      robotarm_student_2021a_Ipos_DW.Y_pos = -40.0;
      robotarm_student_2021a_Ipos_DW.Z_pos = 75.0;
      robotarm_student_2021a_I_invkin(robotarm_student_2021a_Ipos_DW.X_pos,
        robotarm_student_2021a_Ipos_DW.Y_pos,
        robotarm_student_2021a_Ipos_DW.Z_pos,
        &robotarm_student_2021a_Ipos_B.R_rad,
        &robotarm_student_2021a_Ipos_B.X_rad,
        &robotarm_student_2021a_Ipos_B.Z_rad);
    } else if ((robotarm_student_2021a_Ipos_DW.sfEvent_e ==
                robotarm_stud_event_ActionEvent) &&
               (robotarm_student_2021a_Ipos_DW.ObjectType == 2.0) &&
               (robotarm_student_2021a_Ipos_DW.track == 1.0)) {
      robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
        robotarm_st_IN_On_Conveyor_pos2;
      robotarm_student_2021a_Ipos_DW.action = 1.0;
      robotarm_student_2021a_Ipos_DW.X_pos = 130.0;
      robotarm_student_2021a_Ipos_DW.Y_pos =
        robotarm_student_2021a_Ipos_DW.velocity *
        robotarm_student_2021a_Ipos_DW.EndTime +
        robotarm_student_2021a_Ipos_DW.yTracked;
      robotarm_student_2021a_Ipos_DW.Z_pos = 75.0;
      robotarm_student_2021a_I_invkin(robotarm_student_2021a_Ipos_DW.X_pos,
        robotarm_student_2021a_Ipos_DW.Y_pos,
        robotarm_student_2021a_Ipos_DW.Z_pos,
        &robotarm_student_2021a_Ipos_B.R_rad,
        &robotarm_student_2021a_Ipos_B.X_rad,
        &robotarm_student_2021a_Ipos_B.Z_rad);
    }
    break;

   case robotarm_student__IN_Start_Home:
    if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
        robotarm_stude_event_GetProduct) {
      robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
        robotarm_student_2_IN_Tranition;
      robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m0 = 0U;
    }
    break;

   case robotarm_student_2_IN_Tranition:
    if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m0 >= 10240U) {
      robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
        robotarm_student_20_IN_Reaching;
      b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
      robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_student_event_VacuumOn;

      /* Chart: '<S1>/Stateflow 1' */
      c4_robotarm_student_2021a_Ipos();
      robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
      if (robotarm_student_2021a_Ipos_DW.is_Robot_Arm ==
          robotarm_student_20_IN_Reaching) {
        robotarm_student_2021a_Ipos_DW.X_pos =
          robotarm_student_2021a_Ipos_B.Selector_g;
        robotarm_student_2021a_Ipos_DW.Y_pos =
          robotarm_student_2021a_Ipos_DW.velocity *
          robotarm_student_2021a_Ipos_DW.EndTime +
          robotarm_student_2021a_Ipos_B.Selector1;
        robotarm_student_2021a_Ipos_DW.Z_pos = 99.0;
        robotarm_student_2021a_I_invkin(robotarm_student_2021a_Ipos_DW.X_pos,
          robotarm_student_2021a_Ipos_DW.Y_pos,
          robotarm_student_2021a_Ipos_DW.Z_pos,
          &robotarm_student_2021a_Ipos_B.R_rad,
          &robotarm_student_2021a_Ipos_B.X_rad,
          &robotarm_student_2021a_Ipos_B.Z_rad);
      }
    }
    break;

   default:
    /* Unreachable state, for coverage only */
    robotarm_student_2021a_Ipos_DW.is_Robot_Arm = 0U;
    break;
  }
}

/* Function for Chart: '<S1>/Stateflow 1' */
static void c4_robotarm_student_2021a_Ipos(void)
{
  int32_T b_previousEvent;
  if (robotarm_student_2021a_Ipos_DW.is_active_Object_Detection != 0U) {
    switch (robotarm_student_2021a_Ipos_DW.is_Object_Detection) {
     case robotarm_student_202_IN_Seeking:
      if (robotarm_student_2021a_Ipos_B.Selector_g > 0.0) {
        robotarm_student_2021a_Ipos_DW.is_Object_Detection =
          robotarm_student__IN_Transition;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i3 = 0U;
        robotarm_stu_broadcast_Detected();
      }
      break;

     case robotarm_student__IN_Transition:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i3 >= 4096U) {
        robotarm_student_2021a_Ipos_DW.is_Object_Detection =
          robotarm_student_IN_WaitSeeking;
        b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
        robotarm_student_2021a_Ipos_DW.sfEvent_e =
          robotarm_stude_event_GetProduct;

        /* Chart: '<S1>/Stateflow 1' */
        c4_robotarm_student_2021a_Ipos();
        robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
        if (robotarm_student_2021a_Ipos_DW.is_Object_Detection ==
            robotarm_student_IN_WaitSeeking) {
          robotarm_stu_broadcast_Detected();
        }
      }
      break;

     case robotarm_student_IN_WaitSeeking:
      if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
          robotarm_studen_event_ScanAgain) {
        robotarm_student_2021a_Ipos_DW.is_Object_Detection =
          robotarm_student_202_IN_Seeking;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ipos_DW.is_Object_Detection = 0U;
      break;
    }
  }

  if (robotarm_student_2021a_Ipos_DW.is_active_Identification != 0U) {
    switch (robotarm_student_2021a_Ipos_DW.is_Identification) {
     case robotarm_student_2_IN_No_Object:
      if (robotarm_student_2021a_Ipos_B.Object == 1.0) {
        robotarm_student_2021a_Ipos_DW.is_Identification =
          robotarm_student_20_IN_Object_1;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i4 = 0U;
        robotarm_student_2021a_Ipos_DW.ObjectType = 1.0;
      } else if (robotarm_student_2021a_Ipos_B.Object == 2.0) {
        robotarm_student_2021a_Ipos_DW.is_Identification =
          robotarm_student_20_IN_Object_2;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i4 = 0U;
        robotarm_student_2021a_Ipos_DW.ObjectType = 2.0;
      }
      break;

     case robotarm_student_20_IN_Object_1:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i4 >= 10240U) {
        robotarm_student_2021a_Ipos_DW.is_Identification =
          robotarm_student_2_IN_No_Object;
        robotarm_student_2021a_Ipos_DW.ObjectType = 0.0;
      }
      break;

     case robotarm_student_20_IN_Object_2:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i4 >= 10240U) {
        robotarm_student_2021a_Ipos_DW.is_Identification =
          robotarm_student_2_IN_No_Object;
        robotarm_student_2021a_Ipos_DW.ObjectType = 0.0;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ipos_DW.is_Identification = 0U;
      break;
    }
  }

  if (robotarm_student_2021a_Ipos_DW.is_active_Robot_Arm != 0U) {
    robotarm_student_2021_Robot_Arm();
  }

  if (robotarm_student_2021a_Ipos_DW.is_active_Vacuum != 0U) {
    switch (robotarm_student_2021a_Ipos_DW.is_Vacuum) {
     case robotarm_student__IN_Vacuum_Off:
      robotarm_student_2021a_Ipos_B.Blow_suck = 1.0;
      if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
          robotarm_student_event_VacuumOn) {
        robotarm_student_2021a_Ipos_DW.is_Vacuum =
          robotarm_student_2_IN_Vacuum_On;
        robotarm_student_2021a_Ipos_B.Blow_suck = 0.0;
      }
      break;

     case robotarm_student_2_IN_Vacuum_On:
      robotarm_student_2021a_Ipos_B.Blow_suck = 0.0;
      if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
          robotarm_studen_event_VacuumOff) {
        robotarm_student_2021a_Ipos_DW.is_Vacuum =
          robotarm_student__IN_Vacuum_Off;
        robotarm_student_2021a_Ipos_B.Blow_suck = 1.0;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ipos_DW.is_Vacuum = 0U;
      break;
    }
  }

  if (robotarm_student_2021a_Ipos_DW.is_active_Object_picked != 0U) {
    switch (robotarm_student_2021a_Ipos_DW.is_Object_picked) {
     case robotarm_student__IN_Not_Picked:
      if (robotarm_student_2021a_Ipos_B.Gain5 > 0.2) {
        robotarm_student_2021a_Ipos_DW.is_Object_picked =
          robotarm_student_2021_IN_Picked;
        b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
        robotarm_student_2021a_Ipos_DW.sfEvent_e =
          robotarm_stud_event_ActionEvent;

        /* Chart: '<S1>/Stateflow 1' */
        c4_robotarm_student_2021a_Ipos();
        robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
      }
      break;

     case robotarm_student_2021_IN_Picked:
      if (robotarm_student_2021a_Ipos_B.Gain5 < 0.2) {
        robotarm_student_2021a_Ipos_DW.is_Object_picked =
          robotarm_student__IN_Not_Picked;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ipos_DW.is_Object_picked = 0U;
      break;
    }
  }

  if (robotarm_student_2021a_Ipos_DW.is_active_Object_tracking != 0U) {
    switch (robotarm_student_2021a_Ipos_DW.is_Object_tracking) {
     case robotarm_student_2_IN_No_object:
      if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
          robotarm_stud_event_TrackObject) {
        robotarm_student_2021a_Ipos_DW.is_Object_tracking =
          robotarm_stude_IN_Object_placed;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i2 = 0U;
        robotarm_student_2021a_Ipos_DW.elapTime = (real_T)
          robotarm_student_2021a_Ipos_DW.temporalCounter_i2 * 0.00048828125;
        robotarm_student_2021a_Ipos_DW.yTracked =
          robotarm_student_2021a_Ipos_DW.velocity *
          robotarm_student_2021a_Ipos_DW.elapTime + -40.0;
        robotarm_student_2021a_Ipos_DW.track = 1.0;
      }
      break;

     case robotarm_stude_IN_Object_placed:
      if (robotarm_student_2021a_Ipos_DW.sfEvent_e ==
          robotarm_st_event_StackComplete) {
        robotarm_student_2021a_Ipos_DW.is_Object_tracking =
          robotarm_student_2_IN_No_object;
        robotarm_student_2021a_Ipos_DW.track = 0.0;
      } else {
        robotarm_student_2021a_Ipos_DW.elapTime = (real_T)
          robotarm_student_2021a_Ipos_DW.temporalCounter_i2 * 0.00048828125;
        robotarm_student_2021a_Ipos_DW.yTracked =
          robotarm_student_2021a_Ipos_DW.velocity *
          robotarm_student_2021a_Ipos_DW.elapTime + -40.0;
        robotarm_student_2021a_Ipos_DW.track = 1.0;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ipos_DW.is_Object_tracking = 0U;
      break;
    }
  }

  if (robotarm_student_2021a_Ipos_DW.is_active_ActionDone != 0U) {
    switch (robotarm_student_2021a_Ipos_DW.is_ActionDone) {
     case robotarm_student_2021_IN_Action:
      if (robotarm_student_2021a_Ipos_DW.temporalCounter_i5 >= 4096U) {
        robotarm_student_2021a_Ipos_DW.is_ActionDone =
          robotarm_student_2021a_IN_Timer;
        b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
        robotarm_student_2021a_Ipos_DW.sfEvent_e =
          robotarm_stude_event_ActionDone;

        /* Chart: '<S1>/Stateflow 1' */
        c4_robotarm_student_2021a_Ipos();
        robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
      }
      break;

     case robotarm_student_2_IN_No_action:
      if (robotarm_student_2021a_Ipos_DW.action == 1.0) {
        robotarm_student_2021a_Ipos_DW.is_ActionDone =
          robotarm_student_2021_IN_Action;
        robotarm_student_2021a_Ipos_DW.temporalCounter_i5 = 0U;
      }
      break;

     case robotarm_student_2021a_IN_Timer:
      robotarm_student_2021a_Ipos_DW.is_ActionDone =
        robotarm_student_2_IN_No_action;
      robotarm_student_2021a_Ipos_DW.action = 0.0;
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ipos_DW.is_ActionDone = 0U;
      break;
    }
  }
}

/* Function for Chart: '<S1>/Stateflow 1' */
static void robotar_enter_atomic_Start_Home(void)
{
  int32_T b_previousEvent;
  b_previousEvent = robotarm_student_2021a_Ipos_DW.sfEvent_e;
  robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_studen_event_VacuumOff;

  /* Chart: '<S1>/Stateflow 1' */
  c4_robotarm_student_2021a_Ipos();
  robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
  if (robotarm_student_2021a_Ipos_DW.is_Robot_Arm ==
      robotarm_student__IN_Start_Home) {
    robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_studen_event_ScanAgain;

    /* Chart: '<S1>/Stateflow 1' */
    c4_robotarm_student_2021a_Ipos();
    robotarm_student_2021a_Ipos_DW.sfEvent_e = b_previousEvent;
    if (robotarm_student_2021a_Ipos_DW.is_Robot_Arm ==
        robotarm_student__IN_Start_Home) {
      robotarm_student_2021a_Ipos_DW.X_pos = 160.0;
      robotarm_student_2021a_Ipos_DW.Y_pos = 0.0;
      robotarm_student_2021a_Ipos_DW.Z_pos = 99.0;
      robotarm_student_2021a_I_invkin(robotarm_student_2021a_Ipos_DW.X_pos,
        robotarm_student_2021a_Ipos_DW.Y_pos,
        robotarm_student_2021a_Ipos_DW.Z_pos,
        &robotarm_student_2021a_Ipos_B.R_rad,
        &robotarm_student_2021a_Ipos_B.X_rad,
        &robotarm_student_2021a_Ipos_B.Z_rad);
    }
  }
}

/* Model step function */
void robotarm_student_2021a_Ipos_step(void)
{
  {
    real_T *lastU;

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
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[16];
      sfcnOutputs(rts,0);
    }

    /* S-Function (Ipos360): '<S20>/ec_Ipos' */

    /* Level2 S-Function Block: '<S20>/ec_Ipos' (Ipos360) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[17];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S18>/Gain' */
    robotarm_student_2021a_Ipos_B.Gain =
      robotarm_student_2021a_Ipos_P.Gain_Gain_n *
      robotarm_student_2021a_Ipos_B.ec_Ipos_o4;

    /* Constant: '<S37>/Constant1' */
    robotarm_student_2021a_Ipos_B.Constant1 =
      robotarm_student_2021a_Ipos_P.Constant1_Value;

    /* DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator =
      robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE;

    /* Sum: '<S25>/Sum' incorporates:
     *  DiscreteIntegrator: '<S25>/Discrete-Time Integrator'
     */
    robotarm_student_2021a_Ipos_B.Sum =
      robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g +
      robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator;

    /* Sum: '<S25>/Sum2' */
    robotarm_student_2021a_Ipos_B.Sum2 = robotarm_student_2021a_Ipos_B.Sum -
      robotarm_student_2021a_Ipos_B.Gain;

    /* RelationalOperator: '<S25>/Relational Operator' incorporates:
     *  Constant: '<S25>/Constant'
     */
    robotarm_student_2021a_Ipos_B.RelationalOperator =
      (robotarm_student_2021a_Ipos_B.Sum2 <=
       robotarm_student_2021a_Ipos_P.Constant_Value_i);

    /* Gain: '<S18>/Gain1' */
    robotarm_student_2021a_Ipos_B.Gain1 =
      robotarm_student_2021a_Ipos_P.Gain1_Gain_g2 *
      robotarm_student_2021a_Ipos_B.ec_Ipos_o3;

    /* Constant: '<S43>/Constant1' */
    robotarm_student_2021a_Ipos_B.Constant1_e =
      robotarm_student_2021a_Ipos_P.Constant1_Value_a;

    /* DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_e =
      robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o;

    /* Sum: '<S26>/Sum' incorporates:
     *  DiscreteIntegrator: '<S26>/Discrete-Time Integrator'
     */
    robotarm_student_2021a_Ipos_B.Sum_p =
      robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m +
      robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_e;

    /* Sum: '<S26>/Sum2' */
    robotarm_student_2021a_Ipos_B.Sum2_a = robotarm_student_2021a_Ipos_B.Sum_p -
      robotarm_student_2021a_Ipos_B.Gain1;

    /* RelationalOperator: '<S26>/Relational Operator' incorporates:
     *  Constant: '<S26>/Constant'
     */
    robotarm_student_2021a_Ipos_B.RelationalOperator_f =
      (robotarm_student_2021a_Ipos_B.Sum2_a <=
       robotarm_student_2021a_Ipos_P.Constant_Value_f);

    /* Gain: '<S18>/Gain2' */
    robotarm_student_2021a_Ipos_B.Gain2 =
      robotarm_student_2021a_Ipos_P.Gain2_Gain_d *
      robotarm_student_2021a_Ipos_B.ec_Ipos_o2;

    /* Constant: '<S53>/Constant1' */
    robotarm_student_2021a_Ipos_B.Constant1_f =
      robotarm_student_2021a_Ipos_P.Constant1_Value_e;

    /* DiscreteIntegrator: '<S53>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_p =
      robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j;

    /* Sum: '<S27>/Sum' incorporates:
     *  DiscreteIntegrator: '<S27>/Discrete-Time Integrator'
     */
    robotarm_student_2021a_Ipos_B.Sum_o =
      robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a +
      robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_p;

    /* Sum: '<S27>/Sum2' */
    robotarm_student_2021a_Ipos_B.Sum2_e = robotarm_student_2021a_Ipos_B.Sum_o -
      robotarm_student_2021a_Ipos_B.Gain2;

    /* RelationalOperator: '<S27>/Relational Operator' incorporates:
     *  Constant: '<S27>/Constant'
     */
    robotarm_student_2021a_Ipos_B.RelationalOperator_k =
      (robotarm_student_2021a_Ipos_B.Sum2_e >=
       robotarm_student_2021a_Ipos_P.Constant_Value_o);

    /* RelationalOperator: '<S22>/Compare' incorporates:
     *  Constant: '<S22>/Constant'
     *  Sum: '<S19>/Add1'
     */
    robotarm_student_2021a_Ipos_B.Compare = ((int32_T)(((uint32_T)
      robotarm_student_2021a_Ipos_B.RelationalOperator +
      robotarm_student_2021a_Ipos_B.RelationalOperator_f) +
      robotarm_student_2021a_Ipos_B.RelationalOperator_k) ==
      robotarm_student_2021a_Ipos_P.CompareToConstant1_const);

    /* RelationalOperator: '<S21>/Compare' incorporates:
     *  Constant: '<S21>/Constant'
     *  UnitDelay: '<S19>/Unit Delay'
     */
    robotarm_student_2021a_Ipos_B.Compare_j =
      (robotarm_student_2021a_Ipos_DW.UnitDelay_DSTATE ==
       robotarm_student_2021a_Ipos_P.CompareToConstant_const);

    /* MATLAB Function: '<S25>/Angle2Z' incorporates:
     *  MATLAB Function: '<S27>/Angle2Z'
     *  SignalConversion generated from: '<S36>/ SFunction '
     */
    robotarm_student_2021a_Ipos_B.Gain_m = cos
      (-robotarm_student_2021a_Ipos_B.Gain1 + 1.3157007486526573) * 0.08;
    robotarm_student_2021a_Ipos_B.fy1_tmp = sin
      (-robotarm_student_2021a_Ipos_B.Gain1 + 1.3157007486526573) * 0.08;
    robotarm_student_2021a_Ipos_B.fy2_tmp = sin
      (robotarm_student_2021a_Ipos_B.Gain2 + 0.615) * 0.13 + 0.165;
    robotarm_student_2021a_Ipos_B.d12_tmp = cos
      (robotarm_student_2021a_Ipos_B.Gain2 + 0.615) * 0.13 -
      robotarm_student_2021a_Ipos_B.Gain_m;
    robotarm_student_2021a_Ipos_B.d13_tmp =
      robotarm_student_2021a_Ipos_B.fy2_tmp -
      robotarm_student_2021a_Ipos_B.fy1_tmp;
    robotarm_student_2021a_Ipos_B.d12 = sqrt
      (robotarm_student_2021a_Ipos_B.d12_tmp *
       robotarm_student_2021a_Ipos_B.d12_tmp +
       robotarm_student_2021a_Ipos_B.d13_tmp *
       robotarm_student_2021a_Ipos_B.d13_tmp);
    robotarm_student_2021a_Ipos_B.fy1_tmp = sqrt((0.165 -
      robotarm_student_2021a_Ipos_B.fy1_tmp) * (0.165 -
      robotarm_student_2021a_Ipos_B.fy1_tmp) +
      robotarm_student_2021a_Ipos_B.Gain_m *
      robotarm_student_2021a_Ipos_B.Gain_m);
    robotarm_student_2021a_Ipos_B.Gain_m = robotarm_student_2021a_Ipos_B.d12 *
      robotarm_student_2021a_Ipos_B.d12;
    robotarm_student_2021a_Ipos_B.y_b = ((robotarm_student_2021a_Ipos_B.fy2_tmp
      - sin(((3.1415926535897931 - acos(((robotarm_student_2021a_Ipos_B.Gain_m +
      0.016900000000000002) - robotarm_student_2021a_Ipos_B.fy1_tmp *
      robotarm_student_2021a_Ipos_B.fy1_tmp) / (2.0 *
      robotarm_student_2021a_Ipos_B.d12 * 0.13))) - acos
             (((robotarm_student_2021a_Ipos_B.Gain_m + 0.0144) -
               0.016900000000000002) / (2.0 * robotarm_student_2021a_Ipos_B.d12 *
      0.12))) - (robotarm_student_2021a_Ipos_B.Gain2 + 0.615)) * 0.185) - 0.045)
      + 0.081;

    /* Constant: '<S19>/set_robot_calibration_r' */
    robotarm_student_2021a_Ipos_B.set_robot_calibration_r =
      robotarm_student_2021a_Ipos_P.set_robot_calibration_r_Value;

    /* Chart: '<S25>/Supervisor' */
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

    /* End of Chart: '<S25>/Supervisor' */

    /* Constant: '<S19>/set_robot_calibration_x' */
    robotarm_student_2021a_Ipos_B.set_robot_calibration_x =
      robotarm_student_2021a_Ipos_P.set_robot_calibration_x_Value;

    /* Chart: '<S26>/Supervisor2' */
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

    /* End of Chart: '<S26>/Supervisor2' */

    /* MATLAB Function: '<S27>/Angle2Z' incorporates:
     *  MATLAB Function: '<S25>/Angle2Z'
     *  SignalConversion generated from: '<S36>/ SFunction '
     */
    robotarm_student_2021a_Ipos_B.d12 = sqrt
      (robotarm_student_2021a_Ipos_B.d12_tmp *
       robotarm_student_2021a_Ipos_B.d12_tmp +
       robotarm_student_2021a_Ipos_B.d13_tmp *
       robotarm_student_2021a_Ipos_B.d13_tmp);
    robotarm_student_2021a_Ipos_B.Gain_m = robotarm_student_2021a_Ipos_B.d12 *
      robotarm_student_2021a_Ipos_B.d12;
    robotarm_student_2021a_Ipos_B.y = ((robotarm_student_2021a_Ipos_B.fy2_tmp -
      sin(((3.1415926535897931 - acos(((robotarm_student_2021a_Ipos_B.Gain_m +
      0.016900000000000002) - robotarm_student_2021a_Ipos_B.fy1_tmp *
      robotarm_student_2021a_Ipos_B.fy1_tmp) / (2.0 *
      robotarm_student_2021a_Ipos_B.d12 * 0.13))) - acos
           (((robotarm_student_2021a_Ipos_B.Gain_m + 0.0144) -
             0.016900000000000002) / (2.0 * robotarm_student_2021a_Ipos_B.d12 *
      0.12))) - (robotarm_student_2021a_Ipos_B.Gain2 + 0.615)) * 0.185) - 0.045)
      + 0.081;

    /* Constant: '<S19>/set_robot_calibration_z' */
    robotarm_student_2021a_Ipos_B.set_robot_calibration_z =
      robotarm_student_2021a_Ipos_P.set_robot_calibration_z_Value;

    /* Chart: '<S27>/Supervisor' */
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

    /* End of Chart: '<S27>/Supervisor' */

    /* Chart: '<S28>/Supervisor' */
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

    /* End of Chart: '<S28>/Supervisor' */

    /* Sum: '<S23>/Add' */
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      ((robotarm_student_2021a_Ipos_B.homingBusy_l +
        robotarm_student_2021a_Ipos_B.homingBusy_j) +
       robotarm_student_2021a_Ipos_B.homingBusy_n) +
      robotarm_student_2021a_Ipos_B.homingBusy;

    /* Signum: '<S23>/Sign' */
    if (robotarm_student_2021a_Ipos_B.fy2_tmp < 0.0) {
      robotarm_student_2021a_Ipos_B.fy2_tmp = -1.0;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp > 0.0) {
      robotarm_student_2021a_Ipos_B.fy2_tmp = 1.0;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp == 0.0) {
      robotarm_student_2021a_Ipos_B.fy2_tmp = 0.0;
    } else {
      robotarm_student_2021a_Ipos_B.fy2_tmp = (rtNaN);
    }

    /* End of Signum: '<S23>/Sign' */

    /* Sum: '<S23>/Add1' incorporates:
     *  Constant: '<S23>/Constant'
     */
    robotarm_student_2021a_Ipos_B.Add1 =
      robotarm_student_2021a_Ipos_P.Constant_Value_m -
      robotarm_student_2021a_Ipos_B.fy2_tmp;

    /* Sum: '<S19>/Add2' incorporates:
     *  Gain: '<S19>/Gain'
     *  Logic: '<S19>/NOT'
     */
    robotarm_student_2021a_Ipos_B.Add2 =
      (((robotarm_student_2021a_Ipos_P.Gain_Gain_m *
         robotarm_student_2021a_Ipos_B.airBagEnabled_f +
         robotarm_student_2021a_Ipos_P.Gain_Gain_m *
         robotarm_student_2021a_Ipos_B.airBagEnabled_o) +
        robotarm_student_2021a_Ipos_P.Gain_Gain_m *
        robotarm_student_2021a_Ipos_B.airBagEnabled) + (real_T)
       !(robotarm_student_2021a_Ipos_B.Add1 != 0.0)) +
      robotarm_student_2021a_Ipos_B.homingBusy_l;

    /* Gain: '<S18>/Gain3' */
    robotarm_student_2021a_Ipos_B.Gain3 =
      robotarm_student_2021a_Ipos_P.Gain3_Gain_n *
      robotarm_student_2021a_Ipos_B.ec_Ipos_o5;

    /* Gain: '<S18>/Gain5' incorporates:
     *  Gain: '<S18>/Gain4'
     */
    robotarm_student_2021a_Ipos_B.Gain5 =
      robotarm_student_2021a_Ipos_P.Gain4_Gain_e *
      robotarm_student_2021a_Ipos_B.ec_Ipos_o1 *
      robotarm_student_2021a_Ipos_P.Gain5_Gain_a;

    /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
     *  EnablePort: '<S1>/Enable '
     */
    robotarm_student_2021a_Ipos_DW.Controller_MODE =
      (robotarm_student_2021a_Ipos_B.Add1 > 0.0);
    if (robotarm_student_2021a_Ipos_DW.Controller_MODE) {
      /* RelationalOperator: '<S16>/FixPt Relational Operator' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       *  UnitDelay: '<S16>/Delay Input1'
       */
      for (robotarm_student_2021a_Ipos_B.i = 0; robotarm_student_2021a_Ipos_B.i <
           12; robotarm_student_2021a_Ipos_B.i++) {
        robotarm_student_2021a_Ipos_B.FixPtRelationalOperator[robotarm_student_2021a_Ipos_B.i]
          =
          (robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[robotarm_student_2021a_Ipos_B.i]
           !=
           robotarm_student_2021a_Ipos_DW.DelayInput1_DSTATE[robotarm_student_2021a_Ipos_B.i]);
      }

      /* End of RelationalOperator: '<S16>/FixPt Relational Operator' */
      for (robotarm_student_2021a_Ipos_B.i = 0; robotarm_student_2021a_Ipos_B.i <
           3; robotarm_student_2021a_Ipos_B.i++) {
        /* Selector: '<S4>/Selector2' incorporates:
         *  Constant: '<S4>/Object detection matrix'
         */
        robotarm_student_2021a_Ipos_B.Selector2[3 *
          robotarm_student_2021a_Ipos_B.i] =
          robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[3 *
          robotarm_student_2021a_Ipos_B.i];

        /* Selector: '<S4>/Selector2' incorporates:
         *  Constant: '<S4>/Object detection matrix'
         */
        robotarm_student_2021a_Ipos_B.Selector2_tmp = 3 *
          robotarm_student_2021a_Ipos_B.i + 1;

        /* Selector: '<S4>/Selector2' incorporates:
         *  Constant: '<S4>/Object detection matrix'
         */
        robotarm_student_2021a_Ipos_B.Selector2[robotarm_student_2021a_Ipos_B.Selector2_tmp]
          =
          robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[robotarm_student_2021a_Ipos_B.Selector2_tmp];

        /* Selector: '<S4>/Selector2' incorporates:
         *  Constant: '<S4>/Object detection matrix'
         *  Selector: '<S4>/Selector'
         */
        robotarm_student_2021a_Ipos_B.Selector2_tmp = 3 *
          robotarm_student_2021a_Ipos_B.i + 2;
        robotarm_student_2021a_Ipos_B.fy2_tmp =
          robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[robotarm_student_2021a_Ipos_B.Selector2_tmp];

        /* Selector: '<S4>/Selector2' incorporates:
         *  Constant: '<S4>/Object detection matrix'
         */
        robotarm_student_2021a_Ipos_B.Selector2[robotarm_student_2021a_Ipos_B.Selector2_tmp]
          = robotarm_student_2021a_Ipos_B.fy2_tmp;

        /* Selector: '<S4>/Selector' */
        robotarm_student_2021a_Ipos_B.Selector[robotarm_student_2021a_Ipos_B.i] =
          robotarm_student_2021a_Ipos_B.fy2_tmp;
      }

      /* Selector: '<S1>/Selector' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector_g =
        robotarm_student_2021a_Ipos_B.Selector2[0];

      /* S-Function (getSystemClockTimeval): '<S4>/S-Function Builder' */
      getSystemClockTimeval_Outputs_wrapper
        (&robotarm_student_2021a_Ipos_B.SFunctionBuilder);

      /* Selector: '<S1>/Selector1' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector1 =
        robotarm_student_2021a_Ipos_B.Selector2[1];

      /* Constant: '<S1>/Object' */
      robotarm_student_2021a_Ipos_B.Object =
        robotarm_student_2021a_Ipos_P.Object_Value;

      /* Chart: '<S1>/Stateflow 1' */
      if (robotarm_student_2021a_Ipos_DW.isNotInit) {
        if (robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m0 < 16383U) {
          robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m0++;
        }

        if (robotarm_student_2021a_Ipos_DW.temporalCounter_i2 < MAX_uint32_T) {
          robotarm_student_2021a_Ipos_DW.temporalCounter_i2++;
        }

        if (robotarm_student_2021a_Ipos_DW.temporalCounter_i3 < 8191U) {
          robotarm_student_2021a_Ipos_DW.temporalCounter_i3++;
        }

        if (robotarm_student_2021a_Ipos_DW.temporalCounter_i4 < 16383U) {
          robotarm_student_2021a_Ipos_DW.temporalCounter_i4++;
        }

        if (robotarm_student_2021a_Ipos_DW.temporalCounter_i5 < 8191U) {
          robotarm_student_2021a_Ipos_DW.temporalCounter_i5++;
        }
      }

      robotarm_student_2021a_Ipos_DW.isNotInit = true;
      robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_student_202_CALL_EVENT;
      c4_robotarm_student_2021a_Ipos();

      /* End of Chart: '<S1>/Stateflow 1' */

      /* SignalConversion: '<S1>/Signal Conversion1' */
      robotarm_student_2021a_Ipos_B.SignalConversion1 =
        robotarm_student_2021a_Ipos_B.Gain1;

      /* MATLAB Function: '<S1>/quintic trajectory time1' incorporates:
       *  Constant: '<S1>/Constant'
       */
      robotarm__quintictrajectorytime(robotarm_student_2021a_Ipos_B.X_rad,
        robotarm_student_2021a_Ipos_P.Constant_Value,
        robotarm_student_2021a_Ipos_B.SignalConversion1,
        &robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime1,
        &robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1);

      /* Derivative: '<S1>/Derivative' incorporates:
       *  Derivative: '<S1>/Derivative1'
       *  Derivative: '<S1>/Derivative2'
       *  Derivative: '<S1>/Derivative3'
       *  Derivative: '<S1>/Derivative4'
       *  Derivative: '<S1>/Derivative5'
       */
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_M->Timing.t[0];
      if ((robotarm_student_2021a_Ipos_DW.TimeStampA >=
           robotarm_student_2021a_Ipos_B.fy2_tmp) &&
          (robotarm_student_2021a_Ipos_DW.TimeStampB >=
           robotarm_student_2021a_Ipos_B.fy2_tmp)) {
        /* Derivative: '<S1>/Derivative' */
        robotarm_student_2021a_Ipos_B.Derivative = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.Gain_m =
          robotarm_student_2021a_Ipos_DW.TimeStampA;
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA;
        if (robotarm_student_2021a_Ipos_DW.TimeStampA <
            robotarm_student_2021a_Ipos_DW.TimeStampB) {
          if (robotarm_student_2021a_Ipos_DW.TimeStampB <
              robotarm_student_2021a_Ipos_B.fy2_tmp) {
            robotarm_student_2021a_Ipos_B.Gain_m =
              robotarm_student_2021a_Ipos_DW.TimeStampB;
            lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB;
          }
        } else if (robotarm_student_2021a_Ipos_DW.TimeStampA >=
                   robotarm_student_2021a_Ipos_B.fy2_tmp) {
          robotarm_student_2021a_Ipos_B.Gain_m =
            robotarm_student_2021a_Ipos_DW.TimeStampB;
          lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB;
        }

        /* Derivative: '<S1>/Derivative' */
        robotarm_student_2021a_Ipos_B.Derivative =
          (robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime1.path - *lastU)
          / (robotarm_student_2021a_Ipos_B.fy2_tmp -
             robotarm_student_2021a_Ipos_B.Gain_m);
      }

      /* End of Derivative: '<S1>/Derivative' */

      /* Derivative: '<S1>/Derivative1' */
      if ((robotarm_student_2021a_Ipos_DW.TimeStampA_o >=
           robotarm_student_2021a_Ipos_B.fy2_tmp) &&
          (robotarm_student_2021a_Ipos_DW.TimeStampB_i >=
           robotarm_student_2021a_Ipos_B.fy2_tmp)) {
        robotarm_student_2021a_Ipos_B.Gain_m = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.Gain_m =
          robotarm_student_2021a_Ipos_DW.TimeStampA_o;
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_g;
        if (robotarm_student_2021a_Ipos_DW.TimeStampA_o <
            robotarm_student_2021a_Ipos_DW.TimeStampB_i) {
          if (robotarm_student_2021a_Ipos_DW.TimeStampB_i <
              robotarm_student_2021a_Ipos_B.fy2_tmp) {
            robotarm_student_2021a_Ipos_B.Gain_m =
              robotarm_student_2021a_Ipos_DW.TimeStampB_i;
            lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_b;
          }
        } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_o >=
                   robotarm_student_2021a_Ipos_B.fy2_tmp) {
          robotarm_student_2021a_Ipos_B.Gain_m =
            robotarm_student_2021a_Ipos_DW.TimeStampB_i;
          lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_b;
        }

        robotarm_student_2021a_Ipos_B.Gain_m =
          (robotarm_student_2021a_Ipos_B.Derivative - *lastU) /
          (robotarm_student_2021a_Ipos_B.fy2_tmp -
           robotarm_student_2021a_Ipos_B.Gain_m);
      }

      /* Signum: '<S1>/Sign' */
      if (robotarm_student_2021a_Ipos_B.Derivative < 0.0) {
        robotarm_student_2021a_Ipos_B.fy1_tmp = -1.0;
      } else if (robotarm_student_2021a_Ipos_B.Derivative > 0.0) {
        robotarm_student_2021a_Ipos_B.fy1_tmp = 1.0;
      } else if (robotarm_student_2021a_Ipos_B.Derivative == 0.0) {
        robotarm_student_2021a_Ipos_B.fy1_tmp = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.fy1_tmp = (rtNaN);
      }

      /* End of Signum: '<S1>/Sign' */

      /* Sum: '<S1>/Sum5' incorporates:
       *  Gain: '<S1>/Gain'
       *  Gain: '<S1>/Gain1'
       *  Gain: '<S1>/Gain7'
       *  Sum: '<S1>/Sum'
       *  Sum: '<S1>/Sum1'
       */
      robotarm_student_2021a_Ipos_B.Sum5 =
        ((robotarm_student_2021a_Ipos_P.Gain1_Gain *
          robotarm_student_2021a_Ipos_B.Gain_m -
          robotarm_student_2021a_Ipos_P.Gain7_Gain *
          robotarm_student_2021a_Ipos_B.fy1_tmp) -
         robotarm_student_2021a_Ipos_P.Gain_Gain *
         robotarm_student_2021a_Ipos_B.Derivative) +
        (robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime1.path -
         robotarm_student_2021a_Ipos_B.SignalConversion1);

      /* SignalConversion: '<S1>/Signal Conversion' */
      robotarm_student_2021a_Ipos_B.SignalConversion =
        robotarm_student_2021a_Ipos_B.Gain2;

      /* MATLAB Function: '<S1>/quintic trajectory time2' incorporates:
       *  Constant: '<S1>/Constant'
       */
      robotarm__quintictrajectorytime(robotarm_student_2021a_Ipos_B.Z_rad,
        robotarm_student_2021a_Ipos_P.Constant_Value,
        robotarm_student_2021a_Ipos_B.SignalConversion,
        &robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime2,
        &robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2);

      /* Derivative: '<S1>/Derivative2' */
      if ((robotarm_student_2021a_Ipos_DW.TimeStampA_p >=
           robotarm_student_2021a_Ipos_B.fy2_tmp) &&
          (robotarm_student_2021a_Ipos_DW.TimeStampB_o >=
           robotarm_student_2021a_Ipos_B.fy2_tmp)) {
        /* Derivative: '<S1>/Derivative2' */
        robotarm_student_2021a_Ipos_B.Derivative2 = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.Gain_m =
          robotarm_student_2021a_Ipos_DW.TimeStampA_p;
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_gt;
        if (robotarm_student_2021a_Ipos_DW.TimeStampA_p <
            robotarm_student_2021a_Ipos_DW.TimeStampB_o) {
          if (robotarm_student_2021a_Ipos_DW.TimeStampB_o <
              robotarm_student_2021a_Ipos_B.fy2_tmp) {
            robotarm_student_2021a_Ipos_B.Gain_m =
              robotarm_student_2021a_Ipos_DW.TimeStampB_o;
            lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_k;
          }
        } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_p >=
                   robotarm_student_2021a_Ipos_B.fy2_tmp) {
          robotarm_student_2021a_Ipos_B.Gain_m =
            robotarm_student_2021a_Ipos_DW.TimeStampB_o;
          lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_k;
        }

        /* Derivative: '<S1>/Derivative2' */
        robotarm_student_2021a_Ipos_B.Derivative2 =
          (robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime2.path - *lastU)
          / (robotarm_student_2021a_Ipos_B.fy2_tmp -
             robotarm_student_2021a_Ipos_B.Gain_m);
      }

      /* Derivative: '<S1>/Derivative3' */
      if ((robotarm_student_2021a_Ipos_DW.TimeStampA_pg >=
           robotarm_student_2021a_Ipos_B.fy2_tmp) &&
          (robotarm_student_2021a_Ipos_DW.TimeStampB_k >=
           robotarm_student_2021a_Ipos_B.fy2_tmp)) {
        robotarm_student_2021a_Ipos_B.Gain_m = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.Gain_m =
          robotarm_student_2021a_Ipos_DW.TimeStampA_pg;
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_j;
        if (robotarm_student_2021a_Ipos_DW.TimeStampA_pg <
            robotarm_student_2021a_Ipos_DW.TimeStampB_k) {
          if (robotarm_student_2021a_Ipos_DW.TimeStampB_k <
              robotarm_student_2021a_Ipos_B.fy2_tmp) {
            robotarm_student_2021a_Ipos_B.Gain_m =
              robotarm_student_2021a_Ipos_DW.TimeStampB_k;
            lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_d;
          }
        } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_pg >=
                   robotarm_student_2021a_Ipos_B.fy2_tmp) {
          robotarm_student_2021a_Ipos_B.Gain_m =
            robotarm_student_2021a_Ipos_DW.TimeStampB_k;
          lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_d;
        }

        robotarm_student_2021a_Ipos_B.Gain_m =
          (robotarm_student_2021a_Ipos_B.Derivative2 - *lastU) /
          (robotarm_student_2021a_Ipos_B.fy2_tmp -
           robotarm_student_2021a_Ipos_B.Gain_m);
      }

      /* Signum: '<S1>/Sign1' */
      if (robotarm_student_2021a_Ipos_B.Derivative2 < 0.0) {
        robotarm_student_2021a_Ipos_B.fy1_tmp = -1.0;
      } else if (robotarm_student_2021a_Ipos_B.Derivative2 > 0.0) {
        robotarm_student_2021a_Ipos_B.fy1_tmp = 1.0;
      } else if (robotarm_student_2021a_Ipos_B.Derivative2 == 0.0) {
        robotarm_student_2021a_Ipos_B.fy1_tmp = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.fy1_tmp = (rtNaN);
      }

      /* End of Signum: '<S1>/Sign1' */

      /* Sum: '<S1>/Sum6' incorporates:
       *  Gain: '<S1>/Gain2'
       *  Gain: '<S1>/Gain3'
       *  Gain: '<S1>/Gain6'
       *  Sum: '<S1>/Sum7'
       *  Sum: '<S1>/Sum8'
       */
      robotarm_student_2021a_Ipos_B.Sum6 =
        ((robotarm_student_2021a_Ipos_P.Gain3_Gain *
          robotarm_student_2021a_Ipos_B.Gain_m -
          robotarm_student_2021a_Ipos_P.Gain6_Gain *
          robotarm_student_2021a_Ipos_B.fy1_tmp) -
         robotarm_student_2021a_Ipos_P.Gain2_Gain *
         robotarm_student_2021a_Ipos_B.Derivative2) +
        (robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime2.path -
         robotarm_student_2021a_Ipos_B.SignalConversion);

      /* SignalConversion: '<S1>/Signal Conversion2' */
      robotarm_student_2021a_Ipos_B.SignalConversion2 =
        robotarm_student_2021a_Ipos_B.Gain;

      /* MATLAB Function: '<S1>/quintic trajectory time' incorporates:
       *  Constant: '<S1>/Constant'
       */
      robotarm__quintictrajectorytime(robotarm_student_2021a_Ipos_B.R_rad,
        robotarm_student_2021a_Ipos_P.Constant_Value,
        robotarm_student_2021a_Ipos_B.SignalConversion2,
        &robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime,
        &robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime);

      /* Gain: '<S15>/Gain1' incorporates:
       *  Sum: '<S1>/Sum2'
       */
      robotarm_student_2021a_Ipos_B.Gain1_c =
        (robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime.path -
         robotarm_student_2021a_Ipos_B.SignalConversion2) *
        robotarm_student_2021a_Ipos_P.Gain1_Gain_g;

      /* S-Function (dleadlag): '<S15>/Dctleadlag2' */

      /* Level2 S-Function Block: '<S15>/Dctleadlag2' (dleadlag) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[0];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dweakint): '<S15>/Dctintegrator3' */

      /* Level2 S-Function Block: '<S15>/Dctintegrator3' (dweakint) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[1];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dlowpass1): '<S15>/Dct1lowpass' */

      /* Level2 S-Function Block: '<S15>/Dct1lowpass' (dlowpass1) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[2];
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
        robotarm_student_2021a_Ipos_P.Gain1_Gain_gq;

      /* S-Function (dweakint): '<S5>/Dctintegrator3' */

      /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[3];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dlowpass1): '<S5>/Dct1lowpass' */

      /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[4];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dleadlag): '<S5>/Dctleadlag' */

      /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[5];
        sfcnOutputs(rts,0);
      }

      /* Gain: '<S9>/Gain1' */
      robotarm_student_2021a_Ipos_B.Gain1_l =
        robotarm_student_2021a_Ipos_P.Gain1_Gain_p * 0.0;

      /* S-Function (dpd): '<S9>/Dctpd2' */

      /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[6];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dleadlag): '<S9>/Dctleadlag3' */

      /* Level2 S-Function Block: '<S9>/Dctleadlag3' (dleadlag) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[7];
        sfcnOutputs(rts,0);
      }

      /* Gain: '<S8>/Gain1' */
      robotarm_student_2021a_Ipos_B.Gain1_pg =
        robotarm_student_2021a_Ipos_P.Gain1_Gain_a * 0.0;

      /* S-Function (dpd): '<S8>/Dctpd2' */

      /* Level2 S-Function Block: '<S8>/Dctpd2' (dpd) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[8];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dleadlag): '<S8>/Dctleadlag3' */

      /* Level2 S-Function Block: '<S8>/Dctleadlag3' (dleadlag) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[9];
        sfcnOutputs(rts,0);
      }

      /* Gain: '<S10>/Gain1' */
      robotarm_student_2021a_Ipos_B.Gain1_oc =
        robotarm_student_2021a_Ipos_P.Gain1_Gain_i * 0.0;

      /* S-Function (dpd): '<S10>/Dctpd2' */

      /* Level2 S-Function Block: '<S10>/Dctpd2' (dpd) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[10];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dleadlag): '<S10>/Dctleadlag3' */

      /* Level2 S-Function Block: '<S10>/Dctleadlag3' (dleadlag) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[11];
        sfcnOutputs(rts,0);
      }

      /* Gain: '<S14>/Gain1' */
      robotarm_student_2021a_Ipos_B.Gain1_oz =
        robotarm_student_2021a_Ipos_P.Gain1_Gain_e * 0.0;

      /* S-Function (dleadlag): '<S14>/Dctleadlag2' */

      /* Level2 S-Function Block: '<S14>/Dctleadlag2' (dleadlag) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[12];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dweakint): '<S14>/Dctintegrator3' */

      /* Level2 S-Function Block: '<S14>/Dctintegrator3' (dweakint) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[13];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dnotch): '<S14>/Dctnotch4' */

      /* Level2 S-Function Block: '<S14>/Dctnotch4' (dnotch) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[14];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dpd): '<S14>/Dctpd5' */

      /* Level2 S-Function Block: '<S14>/Dctpd5' (dpd) */
      {
        SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[15];
        sfcnOutputs(rts,0);
      }

      /* Derivative: '<S1>/Derivative4' */
      if ((robotarm_student_2021a_Ipos_DW.TimeStampA_c >=
           robotarm_student_2021a_Ipos_B.fy2_tmp) &&
          (robotarm_student_2021a_Ipos_DW.TimeStampB_p >=
           robotarm_student_2021a_Ipos_B.fy2_tmp)) {
        /* Derivative: '<S1>/Derivative4' */
        robotarm_student_2021a_Ipos_B.Derivative4 = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.Gain_m =
          robotarm_student_2021a_Ipos_DW.TimeStampA_c;
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_f;
        if (robotarm_student_2021a_Ipos_DW.TimeStampA_c <
            robotarm_student_2021a_Ipos_DW.TimeStampB_p) {
          if (robotarm_student_2021a_Ipos_DW.TimeStampB_p <
              robotarm_student_2021a_Ipos_B.fy2_tmp) {
            robotarm_student_2021a_Ipos_B.Gain_m =
              robotarm_student_2021a_Ipos_DW.TimeStampB_p;
            lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_c;
          }
        } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_c >=
                   robotarm_student_2021a_Ipos_B.fy2_tmp) {
          robotarm_student_2021a_Ipos_B.Gain_m =
            robotarm_student_2021a_Ipos_DW.TimeStampB_p;
          lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_c;
        }

        /* Derivative: '<S1>/Derivative4' */
        robotarm_student_2021a_Ipos_B.Derivative4 =
          (robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime.path - *lastU)
          / (robotarm_student_2021a_Ipos_B.fy2_tmp -
             robotarm_student_2021a_Ipos_B.Gain_m);
      }

      /* Derivative: '<S1>/Derivative5' */
      if ((robotarm_student_2021a_Ipos_DW.TimeStampA_h >=
           robotarm_student_2021a_Ipos_B.fy2_tmp) &&
          (robotarm_student_2021a_Ipos_DW.TimeStampB_a >=
           robotarm_student_2021a_Ipos_B.fy2_tmp)) {
        robotarm_student_2021a_Ipos_B.Gain_m = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.Gain_m =
          robotarm_student_2021a_Ipos_DW.TimeStampA_h;
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_k;
        if (robotarm_student_2021a_Ipos_DW.TimeStampA_h <
            robotarm_student_2021a_Ipos_DW.TimeStampB_a) {
          if (robotarm_student_2021a_Ipos_DW.TimeStampB_a <
              robotarm_student_2021a_Ipos_B.fy2_tmp) {
            robotarm_student_2021a_Ipos_B.Gain_m =
              robotarm_student_2021a_Ipos_DW.TimeStampB_a;
            lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_n;
          }
        } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_h >=
                   robotarm_student_2021a_Ipos_B.fy2_tmp) {
          robotarm_student_2021a_Ipos_B.Gain_m =
            robotarm_student_2021a_Ipos_DW.TimeStampB_a;
          lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_n;
        }

        robotarm_student_2021a_Ipos_B.Gain_m =
          (robotarm_student_2021a_Ipos_B.Derivative4 - *lastU) /
          (robotarm_student_2021a_Ipos_B.fy2_tmp -
           robotarm_student_2021a_Ipos_B.Gain_m);
      }

      /* Signum: '<S1>/Sign2' */
      if (robotarm_student_2021a_Ipos_B.Derivative4 < 0.0) {
        robotarm_student_2021a_Ipos_B.fy2_tmp = -1.0;
      } else if (robotarm_student_2021a_Ipos_B.Derivative4 > 0.0) {
        robotarm_student_2021a_Ipos_B.fy2_tmp = 1.0;
      } else if (robotarm_student_2021a_Ipos_B.Derivative4 == 0.0) {
        robotarm_student_2021a_Ipos_B.fy2_tmp = 0.0;
      } else {
        robotarm_student_2021a_Ipos_B.fy2_tmp = (rtNaN);
      }

      /* End of Signum: '<S1>/Sign2' */

      /* Sum: '<S1>/Sum4' incorporates:
       *  Gain: '<S1>/Gain4'
       *  Gain: '<S1>/Gain5'
       *  Gain: '<S1>/Gain8'
       *  Sum: '<S1>/Sum10'
       */
      robotarm_student_2021a_Ipos_B.Sum4 =
        ((robotarm_student_2021a_Ipos_P.Gain8_Gain *
          robotarm_student_2021a_Ipos_B.fy2_tmp +
          robotarm_student_2021a_Ipos_P.Gain4_Gain *
          robotarm_student_2021a_Ipos_B.Derivative4) +
         robotarm_student_2021a_Ipos_P.Gain5_Gain *
         robotarm_student_2021a_Ipos_B.Gain_m) +
        robotarm_student_2021a_Ipos_B.Dctintegrator3_c;

      /* Constant: '<S1>/Plot' */
      robotarm_student_2021a_Ipos_B.Plot =
        robotarm_student_2021a_Ipos_P.Plot_Value;

      /* Constant: '<S1>/Stop' */
      robotarm_student_2021a_Ipos_B.Stop =
        robotarm_student_2021a_Ipos_P.Stop_Value;

      /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S17>/Enable'
       */
      /* RelationalOperator: '<S16>/FixPt Relational Operator' incorporates:
       *  Inport: '<S17>/In1'
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

      /* Selector: '<S1>/Selector2' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector2_i =
        robotarm_student_2021a_Ipos_B.Selector2[2];

      /* Selector: '<S1>/Selector4' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector4 =
        robotarm_student_2021a_Ipos_B.Selector2[4];

      /* Selector: '<S1>/Selector5' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector5 =
        robotarm_student_2021a_Ipos_B.Selector2[5];

      /* Selector: '<S1>/Selector6' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector6 =
        robotarm_student_2021a_Ipos_B.Selector2[6];

      /* Selector: '<S1>/Selector7' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector7 =
        robotarm_student_2021a_Ipos_B.Selector2[7];

      /* Selector: '<S1>/Selector8' incorporates:
       *  Selector: '<S4>/Selector2'
       */
      robotarm_student_2021a_Ipos_B.Selector8 =
        robotarm_student_2021a_Ipos_B.Selector2[5];

      /* Gain: '<S6>/Gain1' incorporates:
       *  Constant: '<S1>/Reference Vacuum [bar]'
       *  Sum: '<S1>/Sum9'
       */
      robotarm_student_2021a_Ipos_B.Gain1_o1 =
        (robotarm_student_2021a_Ipos_P.ReferenceVacuumbar_Value -
         robotarm_student_2021a_Ipos_B.Gain5) *
        robotarm_student_2021a_Ipos_P.Gain1_Gain_b;

      /* Saturate: '<S1>/Saturation ' incorporates:
       *  Constant: '<S1>/Conveyor speed [mm//s]'
       */
      if (robotarm_student_2021a_Ipos_P.Conveyorspeedmms_Value >
          robotarm_student_2021a_Ipos_P.Saturation_UpperSat) {
        /* Saturate: '<S1>/Saturation ' */
        robotarm_student_2021a_Ipos_B.Saturation =
          robotarm_student_2021a_Ipos_P.Saturation_UpperSat;
      } else if (robotarm_student_2021a_Ipos_P.Conveyorspeedmms_Value <
                 robotarm_student_2021a_Ipos_P.Saturation_LowerSat) {
        /* Saturate: '<S1>/Saturation ' */
        robotarm_student_2021a_Ipos_B.Saturation =
          robotarm_student_2021a_Ipos_P.Saturation_LowerSat;
      } else {
        /* Saturate: '<S1>/Saturation ' */
        robotarm_student_2021a_Ipos_B.Saturation =
          robotarm_student_2021a_Ipos_P.Conveyorspeedmms_Value;
      }

      /* End of Saturate: '<S1>/Saturation ' */

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
      srUpdateBC(robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<Root>/Controller' */

    /* Switch: '<S24>/Homing Running Switch' incorporates:
     *  UnitDelay: '<S19>/Unit Delay1'
     */
    if (robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE >=
        robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_l) {
      /* Switch: '<S24>/Homing Running Switch1' incorporates:
       *  StringConstant: '<S19>/Homing Orange'
       *  Switch: '<S24>/Homing Running Switch'
       */
      if (robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE >=
          robotarm_student_2021a_Ipos_P.HomingRunningSwitch1_Threshold) {
        /* Switch: '<S24>/Homing Running Switch2' incorporates:
         *  StringConstant: '<S19>/Airbag Red'
         *  StringConstant: '<S19>/Ready Green'
         *  Switch: '<S24>/Homing Running Switch'
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

        /* End of Switch: '<S24>/Homing Running Switch2' */
      } else {
        strncpy(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
                &robotarm_student_2021a_Ipos_P.HomingOrange_String[0], 255U);
        robotarm_student_2021a_Ipos_B.HomingRunningSwitch[255] = '\x00';
      }

      /* End of Switch: '<S24>/Homing Running Switch1' */
    } else {
      strncpy(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
              &robotarm_student_2021a_Ipos_B.ManualSwitch1[0], 255U);
      robotarm_student_2021a_Ipos_B.HomingRunningSwitch[255] = '\x00';
    }

    /* End of Switch: '<S24>/Homing Running Switch' */

    /* Outputs for Enabled SubSystem: '<S29>/Subsystem3' incorporates:
     *  EnablePort: '<S31>/Enable'
     */
    /* Logic: '<S30>/NOT' incorporates:
     *  Delay: '<S30>/Delay'
     *  StringCompare: '<S30>/String Compare'
     */
    if (strcmp(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
               &robotarm_student_2021a_Ipos_DW.Delay_DSTATE[0]) != 0) {
      /* If: '<S31>/If' incorporates:
       *  Constant: '<S32>/Constant1'
       *  Constant: '<S33>/Constant'
       *  StringCompare: '<S31>/String Compare'
       *  StringConstant: '<S31>/String Constant4'
       */
      if (strcmp(&robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0],
                 &robotarm_student_2021a_Ipos_P.StringConstant4_String[0]) == 0)
      {
        /* Outputs for IfAction SubSystem: '<S31>/If Action Subsystem' incorporates:
         *  ActionPort: '<S32>/Action Port'
         */
        /* StringToASCII: '<S32>/String to ASCII1' */
        strncpy(&robotarm_student_2021a_Ipos_B.cv[0],
                &robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0], 31U);
        for (robotarm_student_2021a_Ipos_B.i = 0;
             robotarm_student_2021a_Ipos_B.i < 31;
             robotarm_student_2021a_Ipos_B.i++) {
          robotarm_student_2021a_Ipos_B.MatrixConcatenate1[robotarm_student_2021a_Ipos_B.i]
            = (uint8_T)
            robotarm_student_2021a_Ipos_B.cv[robotarm_student_2021a_Ipos_B.i];
        }

        /* End of StringToASCII: '<S32>/String to ASCII1' */
        robotarm_student_2021a_Ipos_B.MatrixConcatenate1[31] =
          robotarm_student_2021a_Ipos_P.Constant1_Value_j;
        robotarm_student_2_SerialWrite1
          (robotarm_student_2021a_Ipos_B.MatrixConcatenate1,
           &robotarm_student_2021a_Ipos_DW.SerialWrite1);

        /* End of Outputs for SubSystem: '<S31>/If Action Subsystem' */

        /* Update for IfAction SubSystem: '<S31>/If Action Subsystem' incorporates:
         *  ActionPort: '<S32>/Action Port'
         */
        /* Update for If: '<S31>/If' incorporates:
         *  Constant: '<S32>/Constant1'
         */
        srUpdateBC(robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC);

        /* End of Update for SubSystem: '<S31>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S31>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S33>/Action Port'
         */
        /* StringConcatenate: '<S33>/String Concatenate' incorporates:
         *  StringConstant: '<S33>/String Constant1'
         *  StringConstant: '<S33>/String Constant3'
         */
        robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0] = '\x00';
        strncat(&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0],
                &robotarm_student_2021a_Ipos_P.StringConstant3_String[0], 255U);
        robotarm_student_2021a_Ipos_B.i = (int32_T)strlen
          (&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0]);
        strncat
          (&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[robotarm_student_2021a_Ipos_B.i],
           &robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0], 255U -
           robotarm_student_2021a_Ipos_B.i);
        robotarm_student_2021a_Ipos_B.i += (int32_T)strlen
          (&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[robotarm_student_2021a_Ipos_B.i]);
        strncat
          (&robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[robotarm_student_2021a_Ipos_B.i],
           &robotarm_student_2021a_Ipos_P.StringConstant1_String[0], 255U -
           robotarm_student_2021a_Ipos_B.i);

        /* StringToASCII: '<S33>/String to ASCII' incorporates:
         *  StringConcatenate: '<S33>/String Concatenate'
         */
        strncpy(&robotarm_student_2021a_Ipos_B.cv[0],
                &robotarm_student_2021a_Ipos_B.rtb_StringConcatenate_m[0], 31U);
        for (robotarm_student_2021a_Ipos_B.i = 0;
             robotarm_student_2021a_Ipos_B.i < 31;
             robotarm_student_2021a_Ipos_B.i++) {
          robotarm_student_2021a_Ipos_B.MatrixConcatenate[robotarm_student_2021a_Ipos_B.i]
            = (uint8_T)
            robotarm_student_2021a_Ipos_B.cv[robotarm_student_2021a_Ipos_B.i];
        }

        /* End of StringToASCII: '<S33>/String to ASCII' */
        robotarm_student_2021a_Ipos_B.MatrixConcatenate[31] =
          robotarm_student_2021a_Ipos_P.Constant_Value_d;
        robotarm_student_2_SerialWrite1
          (robotarm_student_2021a_Ipos_B.MatrixConcatenate,
           &robotarm_student_2021a_Ipos_DW.SerialWrite);

        /* End of Outputs for SubSystem: '<S31>/If Action Subsystem1' */

        /* Update for IfAction SubSystem: '<S31>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S33>/Action Port'
         */
        /* Update for If: '<S31>/If' incorporates:
         *  Constant: '<S33>/Constant'
         */
        srUpdateBC(robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC);

        /* End of Update for SubSystem: '<S31>/If Action Subsystem1' */
      }

      /* End of If: '<S31>/If' */
      srUpdateBC(robotarm_student_2021a_Ipos_DW.Subsystem3_SubsysRanBC);
    }

    /* End of Logic: '<S30>/NOT' */
    /* End of Outputs for SubSystem: '<S29>/Subsystem3' */

    /* S-Function (ec_IposResetEnc): '<S25>/Reset EncoderR' */

    /* Level2 S-Function Block: '<S25>/Reset EncoderR' (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[18];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S34>/Gain' */
    robotarm_student_2021a_Ipos_B.Gain_h =
      robotarm_student_2021a_Ipos_P.Gain_Gain_h *
      robotarm_student_2021a_Ipos_B.Sum2;

    /* S-Function (dweakint): '<S34>/Dctintegrator' */

    /* Level2 S-Function Block: '<S34>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[19];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S34>/Dctleadlag' */

    /* Level2 S-Function Block: '<S34>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[20];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S34>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S34>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[21];
      sfcnOutputs(rts,0);
    }

    /* Product: '<S25>/Product' */
    robotarm_student_2021a_Ipos_B.Product =
      robotarm_student_2021a_Ipos_B.Dct1lowpass *
      robotarm_student_2021a_Ipos_B.homeControllerEnabled_o;

    /* Gain: '<S35>/Gain' incorporates:
     *  Sum: '<S25>/Sum1'
     */
    robotarm_student_2021a_Ipos_B.Gain_p =
      (robotarm_student_2021a_Ipos_B.airBagRef_g -
       robotarm_student_2021a_Ipos_B.Gain) *
      robotarm_student_2021a_Ipos_P.Gain_Gain_c;

    /* S-Function (dleadlag): '<S35>/Dctleadlag' */

    /* Level2 S-Function Block: '<S35>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[22];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S35>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S35>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[23];
      sfcnOutputs(rts,0);
    }

    /* Logic: '<S25>/Logical Operator1' */
    robotarm_student_2021a_Ipos_B.LogicalOperator1 =
      !(robotarm_student_2021a_Ipos_B.airBagEnabled_f != 0.0);

    /* Switch: '<S25>/AirbagSwitch' */
    if (robotarm_student_2021a_Ipos_B.LogicalOperator1) {
      /* Switch: '<S25>/Homing Running Switch' */
      if (robotarm_student_2021a_Ipos_B.homingBusy_l >=
          robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold) {
        robotarm_student_2021a_Ipos_B.fy2_tmp =
          robotarm_student_2021a_Ipos_B.Product;
      } else {
        robotarm_student_2021a_Ipos_B.fy2_tmp =
          robotarm_student_2021a_Ipos_B.Sum4;
      }

      /* End of Switch: '<S25>/Homing Running Switch' */
    } else {
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_B.Dct1lowpass_i;
    }

    /* End of Switch: '<S25>/AirbagSwitch' */

    /* Gain: '<S25>/Gain1' incorporates:
     *  Product: '<S25>/Product1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1 =
      robotarm_student_2021a_Ipos_B.fy2_tmp *
      robotarm_student_2021a_Ipos_B.controlEnabled_l *
      robotarm_student_2021a_Ipos_P.Gain1_Gain_m;

    /* Saturate: '<S25>/Saturation1' */
    if (robotarm_student_2021a_Ipos_B.Saturation1 >
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat) {
      /* Gain: '<S25>/Gain1' incorporates:
       *  Saturate: '<S25>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1 =
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat;
    } else if (robotarm_student_2021a_Ipos_B.Saturation1 <
               robotarm_student_2021a_Ipos_P.Saturation1_LowerSat) {
      /* Gain: '<S25>/Gain1' incorporates:
       *  Saturate: '<S25>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1 =
        robotarm_student_2021a_Ipos_P.Saturation1_LowerSat;
    }

    /* End of Saturate: '<S25>/Saturation1' */

    /* S-Function (ec_IposResetEnc): '<S26>/Reset EncoderR1' */

    /* Level2 S-Function Block: '<S26>/Reset EncoderR1' (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[24];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S41>/Gain1' */
    robotarm_student_2021a_Ipos_B.Gain1_p =
      robotarm_student_2021a_Ipos_P.Gain1_Gain_o *
      robotarm_student_2021a_Ipos_B.Sum2_a;

    /* S-Function (dweakint): '<S41>/Dctintegrator' */

    /* Level2 S-Function Block: '<S41>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[25];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S41>/Dctleadlag' */

    /* Level2 S-Function Block: '<S41>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[26];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S41>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S41>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[27];
      sfcnOutputs(rts,0);
    }

    /* Product: '<S26>/Product' */
    robotarm_student_2021a_Ipos_B.Product_e =
      robotarm_student_2021a_Ipos_B.Dct1lowpass_k *
      robotarm_student_2021a_Ipos_B.homeControllerEnabled_k;

    /* Logic: '<S26>/Logical Operator1' */
    robotarm_student_2021a_Ipos_B.LogicalOperator1_p =
      !(robotarm_student_2021a_Ipos_B.airBagEnabled_o != 0.0);

    /* Gain: '<S42>/Gain1' incorporates:
     *  Sum: '<S26>/Sum1'
     */
    robotarm_student_2021a_Ipos_B.Gain1_o =
      (robotarm_student_2021a_Ipos_B.airBagRef_a -
       robotarm_student_2021a_Ipos_B.Gain1) *
      robotarm_student_2021a_Ipos_P.Gain1_Gain_h;

    /* S-Function (dleadlag): '<S42>/Dctleadlag' */

    /* Level2 S-Function Block: '<S42>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[28];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S42>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S42>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[29];
      sfcnOutputs(rts,0);
    }

    /* Switch: '<S26>/AirbagSwitch' */
    if (robotarm_student_2021a_Ipos_B.LogicalOperator1_p) {
      /* Switch: '<S26>/Homing Running Switch' */
      if (robotarm_student_2021a_Ipos_B.homingBusy_j >=
          robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_j) {
        robotarm_student_2021a_Ipos_B.fy2_tmp =
          robotarm_student_2021a_Ipos_B.Product_e;
      } else {
        robotarm_student_2021a_Ipos_B.fy2_tmp =
          robotarm_student_2021a_Ipos_B.Sum5;
      }

      /* End of Switch: '<S26>/Homing Running Switch' */
    } else {
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_B.Dct1lowpass_j;
    }

    /* End of Switch: '<S26>/AirbagSwitch' */

    /* Gain: '<S26>/Gain' incorporates:
     *  Product: '<S26>/Product1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_n =
      robotarm_student_2021a_Ipos_B.fy2_tmp *
      robotarm_student_2021a_Ipos_B.controlEnabled_a *
      robotarm_student_2021a_Ipos_P.Gain_Gain_cj;

    /* Saturate: '<S26>/Saturation1' */
    if (robotarm_student_2021a_Ipos_B.Saturation1_n >
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_e) {
      /* Gain: '<S26>/Gain' incorporates:
       *  Saturate: '<S26>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1_n =
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_e;
    } else if (robotarm_student_2021a_Ipos_B.Saturation1_n <
               robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_p) {
      /* Gain: '<S26>/Gain' incorporates:
       *  Saturate: '<S26>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1_n =
        robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_p;
    }

    /* End of Saturate: '<S26>/Saturation1' */

    /* S-Function (ec_IposResetEnc): '<S27>/Reset EncoderR1' */

    /* Level2 S-Function Block: '<S27>/Reset EncoderR1' (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[30];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S50>/Gain' */
    robotarm_student_2021a_Ipos_B.Gain_i =
      robotarm_student_2021a_Ipos_P.Gain_Gain_cr *
      robotarm_student_2021a_Ipos_B.Sum2_e;

    /* S-Function (dweakint): '<S50>/Dctintegrator' */

    /* Level2 S-Function Block: '<S50>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[31];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S50>/Dctleadlag' */

    /* Level2 S-Function Block: '<S50>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[32];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S50>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S50>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[33];
      sfcnOutputs(rts,0);
    }

    /* Product: '<S27>/Product' */
    robotarm_student_2021a_Ipos_B.Product_n =
      robotarm_student_2021a_Ipos_B.Dct1lowpass_p *
      robotarm_student_2021a_Ipos_B.homeControllerEnabled_b;

    /* Gain: '<S51>/Gain' incorporates:
     *  Sum: '<S27>/Sum1'
     */
    robotarm_student_2021a_Ipos_B.Gain_f =
      (robotarm_student_2021a_Ipos_B.airBagRef -
       robotarm_student_2021a_Ipos_B.Gain2) *
      robotarm_student_2021a_Ipos_P.Gain_Gain_l;

    /* S-Function (dleadlag): '<S51>/Dctleadlag' */

    /* Level2 S-Function Block: '<S51>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[34];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S51>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S51>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[35];
      sfcnOutputs(rts,0);
    }

    /* Logic: '<S27>/Logical Operator1' */
    robotarm_student_2021a_Ipos_B.LogicalOperator1_i =
      !(robotarm_student_2021a_Ipos_B.airBagEnabled != 0.0);

    /* Switch: '<S27>/AirbagSwitch' */
    if (robotarm_student_2021a_Ipos_B.LogicalOperator1_i) {
      /* Switch: '<S27>/Homing Running Switch' */
      if (robotarm_student_2021a_Ipos_B.homingBusy_n >=
          robotarm_student_2021a_Ipos_P.HomingRunningSwitch_Threshold_d) {
        robotarm_student_2021a_Ipos_B.fy2_tmp =
          robotarm_student_2021a_Ipos_B.Product_n;
      } else {
        robotarm_student_2021a_Ipos_B.fy2_tmp =
          robotarm_student_2021a_Ipos_B.Sum6;
      }

      /* End of Switch: '<S27>/Homing Running Switch' */
    } else {
      robotarm_student_2021a_Ipos_B.fy2_tmp =
        robotarm_student_2021a_Ipos_B.Dct1lowpass_a;
    }

    /* End of Switch: '<S27>/AirbagSwitch' */

    /* Gain: '<S27>/Gain' incorporates:
     *  Product: '<S27>/Product1'
     */
    robotarm_student_2021a_Ipos_B.Saturation1_a =
      robotarm_student_2021a_Ipos_B.fy2_tmp *
      robotarm_student_2021a_Ipos_B.controlEnabled *
      robotarm_student_2021a_Ipos_P.Gain_Gain_g;

    /* Saturate: '<S27>/Saturation1' */
    if (robotarm_student_2021a_Ipos_B.Saturation1_a >
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_i) {
      /* Gain: '<S27>/Gain' incorporates:
       *  Saturate: '<S27>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1_a =
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_i;
    } else if (robotarm_student_2021a_Ipos_B.Saturation1_a <
               robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_n) {
      /* Gain: '<S27>/Gain' incorporates:
       *  Saturate: '<S27>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1_a =
        robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_n;
    }

    /* End of Saturate: '<S27>/Saturation1' */

    /* S-Function (ec_IposResetEnc): '<S28>/Reset EncoderR1' */

    /* Level2 S-Function Block: '<S28>/Reset EncoderR1' (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[36];
      sfcnOutputs(rts,0);
    }

    /* DiscreteIntegrator: '<S28>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_i =
      robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k;

    /* Gain: '<S60>/Gain1' incorporates:
     *  Sum: '<S28>/Sum1'
     */
    robotarm_student_2021a_Ipos_B.Gain1_a =
      (robotarm_student_2021a_Ipos_B.DiscreteTimeIntegrator_i -
       robotarm_student_2021a_Ipos_B.Gain3) *
      robotarm_student_2021a_Ipos_P.Gain1_Gain_j;

    /* S-Function (dweakint): '<S60>/Dctintegrator3' */

    /* Level2 S-Function Block: '<S60>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[37];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S60>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S60>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[38];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S60>/Dctleadlag' */

    /* Level2 S-Function Block: '<S60>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[39];
      sfcnOutputs(rts,0);
    }

    /* Switch: '<S28>/Homing Running Switch' incorporates:
     *  Product: '<S28>/Product'
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

    /* End of Switch: '<S28>/Homing Running Switch' */

    /* Gain: '<S28>/Gain' */
    robotarm_student_2021a_Ipos_B.Saturation1_d =
      robotarm_student_2021a_Ipos_P.Gain_Gain_j *
      robotarm_student_2021a_Ipos_B.fy2_tmp;

    /* Saturate: '<S28>/Saturation1' */
    if (robotarm_student_2021a_Ipos_B.Saturation1_d >
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_o) {
      /* Gain: '<S28>/Gain' incorporates:
       *  Saturate: '<S28>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1_d =
        robotarm_student_2021a_Ipos_P.Saturation1_UpperSat_o;
    } else if (robotarm_student_2021a_Ipos_B.Saturation1_d <
               robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_g) {
      /* Gain: '<S28>/Gain' incorporates:
       *  Saturate: '<S28>/Saturation1'
       */
      robotarm_student_2021a_Ipos_B.Saturation1_d =
        robotarm_student_2021a_Ipos_P.Saturation1_LowerSat_g;
    }

    /* End of Saturate: '<S28>/Saturation1' */

    /* Sum: '<S19>/Add' */
    robotarm_student_2021a_Ipos_B.Add = ((robotarm_student_2021a_Ipos_B.Ready_a
      + robotarm_student_2021a_Ipos_B.Ready_i) +
      robotarm_student_2021a_Ipos_B.Ready_n) +
      robotarm_student_2021a_Ipos_B.Ready;

    /* Stop: '<S28>/Stop Simulation' */
    if (robotarm_student_2021a_Ipos_B.StopSim != 0.0) {
      rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
    }

    /* End of Stop: '<S28>/Stop Simulation' */

    /* Stop: '<S27>/Stop Simulation' */
    if (robotarm_student_2021a_Ipos_B.StopSim_n != 0.0) {
      rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
    }

    /* End of Stop: '<S27>/Stop Simulation' */

    /* Sum: '<S40>/Diff' incorporates:
     *  Sum: '<S53>/Sum'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_B.toPoint
      + robotarm_student_2021a_Ipos_B.Constant1_f;

    /* RateLimiter: '<S53>/Limit Speed' */
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
      robotarm_student_2021a_Ipos_DW.PrevY;
    if (robotarm_student_2021a_Ipos_B.fy2_tmp >
        robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim *
        robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
               robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim *
               robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY;
    }

    robotarm_student_2021a_Ipos_DW.PrevY =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

    /* End of RateLimiter: '<S53>/Limit Speed' */

    /* SampleTimeMath: '<S59>/TSamp'
     *
     * About '<S59>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ipos_B.TSamp =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h *
      robotarm_student_2021a_Ipos_P.TSamp_WtEt;

    /* Sum: '<S40>/Diff' incorporates:
     *  Sum: '<S59>/Diff'
     *  UnitDelay: '<S59>/UD'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_B.TSamp -
      robotarm_student_2021a_Ipos_DW.UD_DSTATE;

    /* RateLimiter: '<S53>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
      robotarm_student_2021a_Ipos_DW.PrevY_j;
    if (robotarm_student_2021a_Ipos_B.fy2_tmp >
        robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim *
        robotarm_student_2021a_I_period) {
      /* RateLimiter: '<S53>/Limit Acceleration' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration =
        robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_j;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
               robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim *
               robotarm_student_2021a_I_period) {
      /* RateLimiter: '<S53>/Limit Acceleration' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration =
        robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_j;
    } else {
      /* RateLimiter: '<S53>/Limit Acceleration' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration =
        robotarm_student_2021a_Ipos_B.LimitAcceleration_h;
    }

    robotarm_student_2021a_Ipos_DW.PrevY_j =
      robotarm_student_2021a_Ipos_B.LimitAcceleration;

    /* End of RateLimiter: '<S53>/Limit Acceleration' */
    /* Stop: '<S26>/Stop Simulation' */
    if (robotarm_student_2021a_Ipos_B.StopSim_o != 0.0) {
      rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
    }

    /* End of Stop: '<S26>/Stop Simulation' */

    /* Sum: '<S40>/Diff' incorporates:
     *  Sum: '<S43>/Sum'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_B.toPoint_e +
      robotarm_student_2021a_Ipos_B.Constant1_e;

    /* RateLimiter: '<S43>/Limit Speed' */
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
      robotarm_student_2021a_Ipos_DW.PrevY_d;
    if (robotarm_student_2021a_Ipos_B.fy2_tmp >
        robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_i *
        robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_i *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_d;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
               robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_k *
               robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_k *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_d;
    }

    robotarm_student_2021a_Ipos_DW.PrevY_d =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

    /* End of RateLimiter: '<S43>/Limit Speed' */

    /* SampleTimeMath: '<S49>/TSamp'
     *
     * About '<S49>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ipos_B.TSamp_d =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h *
      robotarm_student_2021a_Ipos_P.TSamp_WtEt_d;

    /* Sum: '<S40>/Diff' incorporates:
     *  Sum: '<S49>/Diff'
     *  UnitDelay: '<S49>/UD'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_B.TSamp_d -
      robotarm_student_2021a_Ipos_DW.UD_DSTATE_c;

    /* RateLimiter: '<S43>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
      robotarm_student_2021a_Ipos_DW.PrevY_f;
    if (robotarm_student_2021a_Ipos_B.fy2_tmp >
        robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_k *
        robotarm_student_2021a_I_period) {
      /* RateLimiter: '<S43>/Limit Acceleration' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_b =
        robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_k *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_f;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
               robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_m *
               robotarm_student_2021a_I_period) {
      /* RateLimiter: '<S43>/Limit Acceleration' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_b =
        robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_m *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_f;
    } else {
      /* RateLimiter: '<S43>/Limit Acceleration' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_b =
        robotarm_student_2021a_Ipos_B.LimitAcceleration_h;
    }

    robotarm_student_2021a_Ipos_DW.PrevY_f =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_b;

    /* End of RateLimiter: '<S43>/Limit Acceleration' */
    /* Stop: '<S25>/Stop Simulation' */
    if (robotarm_student_2021a_Ipos_B.StopSim_j != 0.0) {
      rtmSetStopRequested(robotarm_student_2021a_Ipos_M, 1);
    }

    /* End of Stop: '<S25>/Stop Simulation' */

    /* Sum: '<S40>/Diff' incorporates:
     *  Sum: '<S37>/Sum'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_B.toPoint_b +
      robotarm_student_2021a_Ipos_B.Constant1;

    /* RateLimiter: '<S37>/Limit Speed' */
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
      robotarm_student_2021a_Ipos_DW.PrevY_i;
    if (robotarm_student_2021a_Ipos_B.fy2_tmp >
        robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_iu *
        robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitSpeed_RisingLim_iu *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_i;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
               robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_j *
               robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitSpeed_FallingLim_j *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_i;
    }

    robotarm_student_2021a_Ipos_DW.PrevY_i =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

    /* End of RateLimiter: '<S37>/Limit Speed' */

    /* SampleTimeMath: '<S40>/TSamp'
     *
     * About '<S40>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ipos_B.TSamp_k =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h *
      robotarm_student_2021a_Ipos_P.TSamp_WtEt_g;

    /* Sum: '<S40>/Diff' incorporates:
     *  UnitDelay: '<S40>/UD'
     */
    robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
      robotarm_student_2021a_Ipos_B.TSamp_k -
      robotarm_student_2021a_Ipos_DW.UD_DSTATE_cc;

    /* RateLimiter: '<S37>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_B.fy2_tmp =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h -
      robotarm_student_2021a_Ipos_DW.PrevY_k;
    if (robotarm_student_2021a_Ipos_B.fy2_tmp >
        robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_m *
        robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' incorporates:
       *  RateLimiter: '<S37>/Limit Acceleration'
       */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitAcceleration_RisingLim_m *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_k;
    } else if (robotarm_student_2021a_Ipos_B.fy2_tmp <
               robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_k *
               robotarm_student_2021a_I_period) {
      /* Sum: '<S40>/Diff' incorporates:
       *  RateLimiter: '<S37>/Limit Acceleration'
       */
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h =
        robotarm_student_2021a_Ipos_P.LimitAcceleration_FallingLim_k *
        robotarm_student_2021a_I_period + robotarm_student_2021a_Ipos_DW.PrevY_k;
    }

    robotarm_student_2021a_Ipos_DW.PrevY_k =
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

    /* End of RateLimiter: '<S37>/Limit Acceleration' */
  }

  {
    real_T *lastU;

    /* Update for DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE +=
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainval *
      robotarm_student_2021a_Ipos_B.LimitAcceleration_h;

    /* Update for DiscreteIntegrator: '<S25>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g +=
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_i *
      robotarm_student_2021a_Ipos_B.jogSpeed_o;

    /* Update for DiscreteIntegrator: '<S26>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m +=
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_h *
      robotarm_student_2021a_Ipos_B.jogSpeed_c;

    /* Update for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o +=
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_j *
      robotarm_student_2021a_Ipos_B.LimitAcceleration_b;

    /* Update for DiscreteIntegrator: '<S27>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a +=
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_o *
      robotarm_student_2021a_Ipos_B.jogSpeed_i;

    /* Update for DiscreteIntegrator: '<S53>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j +=
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_n *
      robotarm_student_2021a_Ipos_B.LimitAcceleration;

    /* Update for UnitDelay: '<S19>/Unit Delay' */
    robotarm_student_2021a_Ipos_DW.UnitDelay_DSTATE =
      robotarm_student_2021a_Ipos_B.Add;

    /* Update for Enabled SubSystem: '<Root>/Controller' incorporates:
     *  EnablePort: '<S1>/Enable '
     */
    if (robotarm_student_2021a_Ipos_DW.Controller_MODE) {
      /* Update for UnitDelay: '<S16>/Delay Input1' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      memcpy(&robotarm_student_2021a_Ipos_DW.DelayInput1_DSTATE[0],
             &robotarm_student_2021a_Ipos_P.Objectdetectionmatrix_Value[0], 12U *
             sizeof(real_T));

      /* Update for Derivative: '<S1>/Derivative' */
      if (robotarm_student_2021a_Ipos_DW.TimeStampA == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampA =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampB == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampB =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampA <
                 robotarm_student_2021a_Ipos_DW.TimeStampB) {
        robotarm_student_2021a_Ipos_DW.TimeStampA =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA;
      } else {
        robotarm_student_2021a_Ipos_DW.TimeStampB =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB;
      }

      *lastU = robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime1.path;

      /* End of Update for Derivative: '<S1>/Derivative' */

      /* Update for Derivative: '<S1>/Derivative1' */
      if (robotarm_student_2021a_Ipos_DW.TimeStampA_o == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_o =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_g;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampB_i == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampB_i =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_b;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_o <
                 robotarm_student_2021a_Ipos_DW.TimeStampB_i) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_o =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_g;
      } else {
        robotarm_student_2021a_Ipos_DW.TimeStampB_i =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_b;
      }

      *lastU = robotarm_student_2021a_Ipos_B.Derivative;

      /* End of Update for Derivative: '<S1>/Derivative1' */

      /* Update for Derivative: '<S1>/Derivative2' */
      if (robotarm_student_2021a_Ipos_DW.TimeStampA_p == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_p =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_gt;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampB_o == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampB_o =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_k;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_p <
                 robotarm_student_2021a_Ipos_DW.TimeStampB_o) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_p =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_gt;
      } else {
        robotarm_student_2021a_Ipos_DW.TimeStampB_o =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_k;
      }

      *lastU = robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime2.path;

      /* End of Update for Derivative: '<S1>/Derivative2' */

      /* Update for Derivative: '<S1>/Derivative3' */
      if (robotarm_student_2021a_Ipos_DW.TimeStampA_pg == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_pg =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_j;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampB_k == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampB_k =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_d;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_pg <
                 robotarm_student_2021a_Ipos_DW.TimeStampB_k) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_pg =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_j;
      } else {
        robotarm_student_2021a_Ipos_DW.TimeStampB_k =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_d;
      }

      *lastU = robotarm_student_2021a_Ipos_B.Derivative2;

      /* End of Update for Derivative: '<S1>/Derivative3' */

      /* Update for DiscreteIntegrator: '<S1>/Discrete  integrator' */
      robotarm_student_2021a_Ipos_DW.Discreteintegrator_DSTATE +=
        robotarm_student_2021a_Ipos_P.Discreteintegrator_gainval *
        robotarm_student_2021a_Ipos_B.Saturation;

      /* Update for Derivative: '<S1>/Derivative4' */
      if (robotarm_student_2021a_Ipos_DW.TimeStampA_c == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_c =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_f;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampB_p == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampB_p =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_c;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_c <
                 robotarm_student_2021a_Ipos_DW.TimeStampB_p) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_c =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_f;
      } else {
        robotarm_student_2021a_Ipos_DW.TimeStampB_p =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_c;
      }

      *lastU = robotarm_student_2021a_Ipos_B.sf_quintictrajectorytime.path;

      /* End of Update for Derivative: '<S1>/Derivative4' */

      /* Update for Derivative: '<S1>/Derivative5' */
      if (robotarm_student_2021a_Ipos_DW.TimeStampA_h == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_h =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_k;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampB_a == (rtInf)) {
        robotarm_student_2021a_Ipos_DW.TimeStampB_a =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_n;
      } else if (robotarm_student_2021a_Ipos_DW.TimeStampA_h <
                 robotarm_student_2021a_Ipos_DW.TimeStampB_a) {
        robotarm_student_2021a_Ipos_DW.TimeStampA_h =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeA_k;
      } else {
        robotarm_student_2021a_Ipos_DW.TimeStampB_a =
          robotarm_student_2021a_Ipos_M->Timing.t[0];
        lastU = &robotarm_student_2021a_Ipos_DW.LastUAtTimeB_n;
      }

      *lastU = robotarm_student_2021a_Ipos_B.Derivative4;

      /* End of Update for Derivative: '<S1>/Derivative5' */
    }

    /* End of Update for SubSystem: '<Root>/Controller' */

    /* Update for UnitDelay: '<S19>/Unit Delay1' */
    robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE =
      robotarm_student_2021a_Ipos_B.Add2;

    /* Update for Delay: '<S30>/Delay' */
    strncpy(&robotarm_student_2021a_Ipos_DW.Delay_DSTATE[0],
            &robotarm_student_2021a_Ipos_B.HomingRunningSwitch[0], 255U);
    robotarm_student_2021a_Ipos_DW.Delay_DSTATE[255] = '\x00';

    /* Update for DiscreteIntegrator: '<S28>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k +=
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_gainva_g *
      robotarm_student_2021a_Ipos_B.jogSpeed;

    /* Update for UnitDelay: '<S59>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE =
      robotarm_student_2021a_Ipos_B.TSamp;

    /* Update for UnitDelay: '<S49>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_c =
      robotarm_student_2021a_Ipos_B.TSamp_d;

    /* Update for UnitDelay: '<S40>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_cc =
      robotarm_student_2021a_Ipos_B.TSamp_k;
  }

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
  robotarm_student_2021a_Ipos_M->Sizes.checksums[0] = (229377357U);
  robotarm_student_2021a_Ipos_M->Sizes.checksums[1] = (3797136058U);
  robotarm_student_2021a_Ipos_M->Sizes.checksums[2] = (1362481121U);
  robotarm_student_2021a_Ipos_M->Sizes.checksums[3] = (3777251986U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[24];
    robotarm_student_2021a_Ipos_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Controller_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &robotarm_student_2021a_Ipos_DW.Subsystem3_SubsysRanBC;
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

  robotarm_student_2021a_Ipos_M->Sizes.numSFcns = (40);

  /* register each child */
  {
    (void) memset((void *)
                  &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  40*sizeof(SimStruct));
    robotarm_student_2021a_Ipos_M->childSfunctions =
      (&robotarm_student_2021a_Ipos_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 40; i++) {
        robotarm_student_2021a_Ipos_M->childSfunctions[i] =
          (&robotarm_student_2021a_Ipos_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S15>/Dctleadlag2 (dleadlag) */
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
            &robotarm_student_2021a_Ipos_B.Dctleadlag2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag2");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator1/Dctleadlag2");
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
                       robotarm_student_2021a_Ipos_P.Dctleadlag2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag2_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag2_RWORK[0]);

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
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag2_RWORK[0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S15>/Dctintegrator3 (dweakint) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag2;
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
            &robotarm_student_2021a_Ipos_B.Dctintegrator3_c));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator1/Dctintegrator3");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_e[0]);

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
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_e[0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S15>/Dct1lowpass (dlowpass1) */
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
          sfcnUPtrs[0] = ((const real_T*) &robotarm_student_2021a_Ipos_RGND);
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
            &robotarm_student_2021a_Ipos_B.Dct1lowpass_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator1/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_m[0]);

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
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_m[0]);
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
      _ssSetInputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S5>/Dctintegrator3 (dweakint) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_g;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size_c);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_g[0]);

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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator3_n;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK_c[0]);

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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dct1lowpass_ab;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn5.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S9>/Dctpd2 (dpd) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_l;
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
            &robotarm_student_2021a_Ipos_B.Dctpd2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd2");
      ssSetPath(rts, "robotarm_student_2021a_Ipos/Controller/controller1/Dctpd2");
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctpd2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
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
            &robotarm_student_2021a_Ipos_B.Dctleadlag3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/controller1/Dctleadlag3");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn7.dWorkAux;
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
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_pg;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctpd2_a));
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size_e);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_d
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_d[0]);
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctpd2_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctleadlag3_i));
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_c[0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S10>/Dctpd2 (dpd) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_oc;
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
            &robotarm_student_2021a_Ipos_B.Dctpd2_j));
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd2_P3_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_j
                 [0]);

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
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctpd2_RWORK_j[0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S10>/Dctleadlag3 (dleadlag) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctpd2_j;
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
            &robotarm_student_2021a_Ipos_B.Dctleadlag3_f));
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag3_P3_Size_f);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_cb[0]);

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
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag3_RWORK_cb
                   [0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S14>/Dctleadlag2 (dleadlag) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_oz;
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
            &robotarm_student_2021a_Ipos_B.Dctleadlag2_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag2");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator/Dctleadlag2");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag2_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag2_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctleadlag2_P3_Size_g);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctleadlag2_RWORK_j[0]);

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
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctleadlag2_RWORK_j[0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S14>/Dctintegrator3 (dweakint) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag2_l;
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
            &robotarm_student_2021a_Ipos_B.Dctintegrator3_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator/Dctintegrator3");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctintegrator3_P2_Size_c3);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_gh[0]);

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
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ipos_DW.Dctintegrator3_RWORK_gh[0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S14>/Dctnotch4 (dnotch) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator3_l;
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
            &robotarm_student_2021a_Ipos_B.Dctnotch4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch4");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator/Dctnotch4");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctnotch4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctnotch4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctnotch4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctnotch4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctnotch4_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dctnotch4_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctnotch4_RWORK[0]);
      }

      /* registration */
      dnotch(rts);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S14>/Dctpd5 (dpd) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctnotch4;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn15.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ipos_B.Dctpd5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd5");
      ssSetPath(rts,
                "robotarm_student_2021a_Ipos/Controller/r_controller_without_double_integrator/Dctpd5");
      ssSetRTModel(rts,robotarm_student_2021a_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dctpd5_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ipos_DW.Dctpd5_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ipos_DW.Dctpd5_RWORK[0]);
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S3>/S-Function (ec_Supervisor) */
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn16.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S20>/ec_Ipos (Ipos360) */
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
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute
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
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs1;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1_n;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs2;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs3;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Saturation1_d;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs4;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Blow_suck;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs5;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_o1;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 5);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn17.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S25>/Reset EncoderR (ec_IposResetEnc) */
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn18.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S34>/Dctintegrator (dweakint) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_h;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn19.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S34>/Dctleadlag (dleadlag) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn20.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S34>/Dct1lowpass (dlowpass1) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn21.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ipos_P.Dct1lowpass_P2_Size_os);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ipos_DW.Dct1lowpass_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn21.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S35>/Dctleadlag (dleadlag) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_p;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn22.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S35>/Dct1lowpass (dlowpass1) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_l;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn23.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S26>/Reset EncoderR1 (ec_IposResetEnc) */
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn24.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S41>/Dctintegrator (dweakint) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_p;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn25.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S41>/Dctleadlag (dleadlag) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator_g;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn26.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S41>/Dct1lowpass (dlowpass1) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn27.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn27.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S42>/Dctleadlag (dleadlag) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_o;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn28.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S42>/Dct1lowpass (dlowpass1) */
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
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_b;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn29.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S27>/Reset EncoderR1 (ec_IposResetEnc) */
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn30.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S50>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
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
                         [31]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[31]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [31]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn31.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn31.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S50>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
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
                         [32]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[32]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [32]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[32]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn32.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn32.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S50>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
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
                         [33]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[33]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [33]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn33.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn33.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S51>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
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
                         [34]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[34]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [34]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[34]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn34.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn34.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S51>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
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
                         [35]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[35]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [35]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [35]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[35]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctleadlag_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn35.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn35.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S28>/Reset EncoderR1 (ec_IposResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
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
                         [36]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[36]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [36]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [36]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.UPtrs0;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn36.params;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S60>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
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
                         [37]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[37]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [37]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [37]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[37]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Gain1_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn37.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn37.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S60>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[38];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.sfcnTsMap;
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
                         [38]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[38]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [38]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [38]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [38]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [38]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[38]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dctintegrator3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn38.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn38.dWorkAux;
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

    /* Level2 S-Function Block: robotarm_student_2021a_Ipos/<S60>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[39];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.sfcnTsMap;
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
                         [39]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[39]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods2
                           [39]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods3
                           [39]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.methods4
                           [39]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.statesInfo2
                         [39]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.periodicStatesInfo[39]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ipos_B.Dct1lowpass_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ipos_M->
          NonInlinedSFcns.Sfcn39.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.outputPortCoSimAttribute
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.params;
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
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ipos_M->NonInlinedSFcns.Sfcn39.dWorkAux;
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
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S37>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1 =
    robotarm_student_2021a_Ipos_P.Constant1_Value;

  /* Start for Constant: '<S43>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1_e =
    robotarm_student_2021a_Ipos_P.Constant1_Value_a;

  /* Start for Constant: '<S53>/Constant1' */
  robotarm_student_2021a_Ipos_B.Constant1_f =
    robotarm_student_2021a_Ipos_P.Constant1_Value_e;

  /* Start for Constant: '<S19>/set_robot_calibration_r' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_r =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_r_Value;

  /* Start for Constant: '<S19>/set_robot_calibration_x' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_x =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_x_Value;

  /* Start for Constant: '<S19>/set_robot_calibration_z' */
  robotarm_student_2021a_Ipos_B.set_robot_calibration_z =
    robotarm_student_2021a_Ipos_P.set_robot_calibration_z_Value;

  /* Start for Enabled SubSystem: '<Root>/Controller' */
  robotarm_student_2021a_Ipos_DW.Controller_MODE = false;

  /* Start for Constant: '<S1>/Object' */
  robotarm_student_2021a_Ipos_B.Object =
    robotarm_student_2021a_Ipos_P.Object_Value;

  /* Start for S-Function (dleadlag): '<S15>/Dctleadlag2' */
  /* Level2 S-Function Block: '<S15>/Dctleadlag2' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S15>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S15>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S15>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S15>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S5>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S5>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S5>/Dctleadlag' */
  /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S9>/Dctpd2' */
  /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S9>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S9>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S8>/Dctpd2' */
  /* Level2 S-Function Block: '<S8>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S8>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S8>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S10>/Dctpd2' */
  /* Level2 S-Function Block: '<S10>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S10>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S10>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S14>/Dctleadlag2' */
  /* Level2 S-Function Block: '<S14>/Dctleadlag2' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S14>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S14>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dnotch): '<S14>/Dctnotch4' */
  /* Level2 S-Function Block: '<S14>/Dctnotch4' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S14>/Dctpd5' */
  /* Level2 S-Function Block: '<S14>/Dctpd5' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<Root>/Controller' */

  /* Start for Enabled SubSystem: '<S29>/Subsystem3' */
  /* Start for IfAction SubSystem: '<S31>/If Action Subsystem' */
  robotarm_stu_SerialWrite1_Start(&robotarm_student_2021a_Ipos_DW.SerialWrite1);

  /* End of Start for SubSystem: '<S31>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S31>/If Action Subsystem1' */
  robotarm_stu_SerialWrite1_Start(&robotarm_student_2021a_Ipos_DW.SerialWrite);

  /* End of Start for SubSystem: '<S31>/If Action Subsystem1' */
  /* End of Start for SubSystem: '<S29>/Subsystem3' */

  /* Start for S-Function (dweakint): '<S34>/Dctintegrator' */
  /* Level2 S-Function Block: '<S34>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S34>/Dctleadlag' */
  /* Level2 S-Function Block: '<S34>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S34>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S34>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S35>/Dctleadlag' */
  /* Level2 S-Function Block: '<S35>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S35>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S35>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S41>/Dctintegrator' */
  /* Level2 S-Function Block: '<S41>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S41>/Dctleadlag' */
  /* Level2 S-Function Block: '<S41>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S41>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S41>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S42>/Dctleadlag' */
  /* Level2 S-Function Block: '<S42>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S42>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S42>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S50>/Dctintegrator' */
  /* Level2 S-Function Block: '<S50>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S50>/Dctleadlag' */
  /* Level2 S-Function Block: '<S50>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S50>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S50>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[33];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S51>/Dctleadlag' */
  /* Level2 S-Function Block: '<S51>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[34];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S51>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S51>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[35];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S60>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S60>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[37];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S60>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S60>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[38];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S60>/Dctleadlag' */
  /* Level2 S-Function Block: '<S60>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[39];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  {
    int32_T i;

    /* InitializeConditions for DiscreteIntegrator: '<S37>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE =
      robotarm_student_2021a_Ipos_B.Constant1;

    /* InitializeConditions for DiscreteIntegrator: '<S25>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S26>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_c;

    /* InitializeConditions for DiscreteIntegrator: '<S43>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o =
      robotarm_student_2021a_Ipos_B.Constant1_e;

    /* InitializeConditions for DiscreteIntegrator: '<S27>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_o;

    /* InitializeConditions for DiscreteIntegrator: '<S53>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j =
      robotarm_student_2021a_Ipos_B.Constant1_f;

    /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
    robotarm_student_2021a_Ipos_DW.UnitDelay_DSTATE =
      robotarm_student_2021a_Ipos_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S19>/Unit Delay1' */
    robotarm_student_2021a_Ipos_DW.UnitDelay1_DSTATE =
      robotarm_student_2021a_Ipos_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Delay: '<S30>/Delay' */
    strncpy(&robotarm_student_2021a_Ipos_DW.Delay_DSTATE[0],
            &robotarm_student_2021a_Ipos_P.Delay_InitialCondition[0], 255U);
    robotarm_student_2021a_Ipos_DW.Delay_DSTATE[255] = '\x00';

    /* InitializeConditions for DiscreteIntegrator: '<S28>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k =
      robotarm_student_2021a_Ipos_P.DiscreteTimeIntegrator_IC_co;

    /* InitializeConditions for RateLimiter: '<S53>/Limit Speed' */
    robotarm_student_2021a_Ipos_DW.PrevY =
      robotarm_student_2021a_Ipos_P.LimitSpeed_IC;

    /* InitializeConditions for UnitDelay: '<S59>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE =
      robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for RateLimiter: '<S53>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_DW.PrevY_j =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_IC;

    /* InitializeConditions for RateLimiter: '<S43>/Limit Speed' */
    robotarm_student_2021a_Ipos_DW.PrevY_d =
      robotarm_student_2021a_Ipos_P.LimitSpeed_IC_a;

    /* InitializeConditions for UnitDelay: '<S49>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_c =
      robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScal_e;

    /* InitializeConditions for RateLimiter: '<S43>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_DW.PrevY_f =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_IC_k;

    /* InitializeConditions for RateLimiter: '<S37>/Limit Speed' */
    robotarm_student_2021a_Ipos_DW.PrevY_i =
      robotarm_student_2021a_Ipos_P.LimitSpeed_IC_e;

    /* InitializeConditions for UnitDelay: '<S40>/UD' */
    robotarm_student_2021a_Ipos_DW.UD_DSTATE_cc =
      robotarm_student_2021a_Ipos_P.DiscreteDerivative_ICPrevScal_h;

    /* InitializeConditions for RateLimiter: '<S37>/Limit Acceleration' */
    robotarm_student_2021a_Ipos_DW.PrevY_k =
      robotarm_student_2021a_Ipos_P.LimitAcceleration_IC_i;

    /* SystemInitialize for Chart: '<S25>/Supervisor' */
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

    /* SystemInitialize for Chart: '<S26>/Supervisor2' */
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

    /* SystemInitialize for Chart: '<S27>/Supervisor' */
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

    /* SystemInitialize for Chart: '<S28>/Supervisor' */
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
    /* InitializeConditions for UnitDelay: '<S16>/Delay Input1' */
    for (i = 0; i < 12; i++) {
      robotarm_student_2021a_Ipos_DW.DelayInput1_DSTATE[i] =
        robotarm_student_2021a_Ipos_P.DetectChange_vinit;
    }

    /* End of InitializeConditions for UnitDelay: '<S16>/Delay Input1' */

    /* InitializeConditions for Derivative: '<S1>/Derivative' */
    robotarm_student_2021a_Ipos_DW.TimeStampA = (rtInf);
    robotarm_student_2021a_Ipos_DW.TimeStampB = (rtInf);

    /* InitializeConditions for Derivative: '<S1>/Derivative1' */
    robotarm_student_2021a_Ipos_DW.TimeStampA_o = (rtInf);
    robotarm_student_2021a_Ipos_DW.TimeStampB_i = (rtInf);

    /* InitializeConditions for Derivative: '<S1>/Derivative2' */
    robotarm_student_2021a_Ipos_DW.TimeStampA_p = (rtInf);
    robotarm_student_2021a_Ipos_DW.TimeStampB_o = (rtInf);

    /* InitializeConditions for Derivative: '<S1>/Derivative3' */
    robotarm_student_2021a_Ipos_DW.TimeStampA_pg = (rtInf);
    robotarm_student_2021a_Ipos_DW.TimeStampB_k = (rtInf);

    /* InitializeConditions for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    robotarm_student_2021a_Ipos_DW.Discreteintegrator_DSTATE =
      robotarm_student_2021a_Ipos_P.Discreteintegrator_IC;

    /* InitializeConditions for Derivative: '<S1>/Derivative4' */
    robotarm_student_2021a_Ipos_DW.TimeStampA_c = (rtInf);
    robotarm_student_2021a_Ipos_DW.TimeStampB_p = (rtInf);

    /* InitializeConditions for Derivative: '<S1>/Derivative5' */
    robotarm_student_2021a_Ipos_DW.TimeStampA_h = (rtInf);
    robotarm_student_2021a_Ipos_DW.TimeStampB_a = (rtInf);

    /* SystemInitialize for Chart: '<S1>/Stateflow 1' */
    robotarm_student_2021a_Ipos_DW.is_active_ActionDone = 0U;
    robotarm_student_2021a_Ipos_DW.is_ActionDone = 0U;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i5 = 0U;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i4 = 0U;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i3 = 0U;
    robotarm_student_2021a_Ipos_DW.is_active_Object_picked = 0U;
    robotarm_student_2021a_Ipos_DW.is_Object_picked = 0U;
    robotarm_student_2021a_Ipos_DW.is_active_Object_tracking = 0U;
    robotarm_student_2021a_Ipos_DW.is_Object_tracking = 0U;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i2 = 0U;
    robotarm_student_2021a_Ipos_DW.temporalCounter_i1_m0 = 0U;
    robotarm_student_2021a_Ipos_DW.is_active_Vacuum = 0U;
    robotarm_student_2021a_Ipos_DW.is_Vacuum = 0U;
    robotarm_student_2021a_Ipos_DW.treshold = 150.0;
    robotarm_student_2021a_Ipos_DW.x = 160.0;
    robotarm_student_2021a_Ipos_DW.y = 0.0;
    robotarm_student_2021a_Ipos_DW.z = 99.0;
    robotarm_student_2021a_Ipos_DW.X_pos = 0.0;
    robotarm_student_2021a_Ipos_DW.Y_pos = 0.0;
    robotarm_student_2021a_Ipos_DW.Z_pos = 0.0;
    robotarm_student_2021a_Ipos_DW.elapTime = 0.0;
    robotarm_student_2021a_Ipos_DW.yTracked = 0.0;
    robotarm_student_2021a_Ipos_DW.track = 0.0;
    robotarm_student_2021a_Ipos_DW.reachability = 0.0;
    robotarm_student_2021a_Ipos_DW.action = 0.0;
    robotarm_student_2021a_Ipos_DW.EndTime = 2.0;
    robotarm_student_2021a_Ipos_DW.velocity = 10.0;
    robotarm_student_2021a_Ipos_B.R_rad = 0.0;
    robotarm_student_2021a_Ipos_B.X_rad = 0.0;
    robotarm_student_2021a_Ipos_B.Z_rad = 0.0;
    robotarm_student_2021a_Ipos_B.Blow_suck = 0.0;
    robotarm_student_2021a_Ipos_DW.isNotInit = false;
    robotarm_student_2021a_Ipos_DW.sfEvent_e = robotarm_student_202_CALL_EVENT;

    /* Chart: '<S1>/Stateflow 1' */
    robotarm_student_2021a_Ipos_DW.is_active_c4_robotarm_student_2 = 1U;
    robotarm_student_2021a_Ipos_DW.is_active_Object_Detection = 1U;
    robotarm_student_2021a_Ipos_DW.is_Object_Detection =
      robotarm_student_202_IN_Seeking;
    robotarm_student_2021a_Ipos_DW.is_active_Identification = 1U;
    robotarm_student_2021a_Ipos_DW.is_Identification =
      robotarm_student_2_IN_No_Object;
    robotarm_student_2021a_Ipos_DW.ObjectType = 0.0;
    robotarm_student_2021a_Ipos_DW.is_active_Belt = 1U;
    robotarm_student_2021a_Ipos_DW.is_Belt = robotarm_student_2_IN_Belt_Home;
    robotarm_student_2021a_Ipos_DW.is_active_Robot_Arm = 1U;
    robotarm_student_2021a_Ipos_DW.is_Robot_Arm =
      robotarm_student__IN_Start_Home;
    robotar_enter_atomic_Start_Home();
    robotarm_student_2021a_Ipos_DW.is_active_Vacuum = 1U;
    robotarm_student_2021a_Ipos_DW.is_Vacuum = robotarm_student__IN_Vacuum_Off;
    robotarm_student_2021a_Ipos_B.Blow_suck = 1.0;
    robotarm_student_2021a_Ipos_DW.is_active_Object_picked = 1U;
    robotarm_student_2021a_Ipos_DW.is_Object_picked =
      robotarm_student__IN_Not_Picked;
    robotarm_student_2021a_Ipos_DW.is_active_Object_tracking = 1U;
    robotarm_student_2021a_Ipos_DW.is_Object_tracking =
      robotarm_student_2_IN_No_object;
    robotarm_student_2021a_Ipos_DW.track = 0.0;
    robotarm_student_2021a_Ipos_DW.is_active_ActionDone = 1U;
    robotarm_student_2021a_Ipos_DW.is_ActionDone =
      robotarm_student_2_IN_No_action;
    robotarm_student_2021a_Ipos_DW.action = 0.0;

    /* SystemInitialize for MATLAB Function: '<S1>/quintic trajectory time1' */
    robo_quintictrajectorytime_Init
      (&robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1);

    /* SystemInitialize for MATLAB Function: '<S1>/quintic trajectory time2' */
    robo_quintictrajectorytime_Init
      (&robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2);

    /* SystemInitialize for MATLAB Function: '<S1>/quintic trajectory time' */
    robo_quintictrajectorytime_Init
      (&robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime);

    /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
    /* SystemInitialize for Outport: '<S17>/Delay [s]' incorporates:
     *  Inport: '<S17>/In1'
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
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (Ipos360): '<S20>/ec_Ipos' */
  /* Level2 S-Function Block: '<S20>/ec_Ipos' (Ipos360) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */
  /* Terminate for S-Function (dleadlag): '<S15>/Dctleadlag2' */
  /* Level2 S-Function Block: '<S15>/Dctleadlag2' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S15>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S15>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S15>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S15>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S5>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S5>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S5>/Dctleadlag' */
  /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S9>/Dctpd2' */
  /* Level2 S-Function Block: '<S9>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S9>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S9>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S8>/Dctpd2' */
  /* Level2 S-Function Block: '<S8>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S8>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S8>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S10>/Dctpd2' */
  /* Level2 S-Function Block: '<S10>/Dctpd2' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S10>/Dctleadlag3' */
  /* Level2 S-Function Block: '<S10>/Dctleadlag3' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S14>/Dctleadlag2' */
  /* Level2 S-Function Block: '<S14>/Dctleadlag2' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S14>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S14>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dnotch): '<S14>/Dctnotch4' */
  /* Level2 S-Function Block: '<S14>/Dctnotch4' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S14>/Dctpd5' */
  /* Level2 S-Function Block: '<S14>/Dctpd5' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */

  /* Terminate for Enabled SubSystem: '<S29>/Subsystem3' */
  /* Terminate for IfAction SubSystem: '<S31>/If Action Subsystem' */
  robotarm_stud_SerialWrite1_Term(&robotarm_student_2021a_Ipos_DW.SerialWrite1);

  /* End of Terminate for SubSystem: '<S31>/If Action Subsystem' */

  /* Terminate for IfAction SubSystem: '<S31>/If Action Subsystem1' */
  robotarm_stud_SerialWrite1_Term(&robotarm_student_2021a_Ipos_DW.SerialWrite);

  /* End of Terminate for SubSystem: '<S31>/If Action Subsystem1' */
  /* End of Terminate for SubSystem: '<S29>/Subsystem3' */

  /* Terminate for S-Function (ec_IposResetEnc): '<S25>/Reset EncoderR' */
  /* Level2 S-Function Block: '<S25>/Reset EncoderR' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S34>/Dctintegrator' */
  /* Level2 S-Function Block: '<S34>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S34>/Dctleadlag' */
  /* Level2 S-Function Block: '<S34>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S34>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S34>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S35>/Dctleadlag' */
  /* Level2 S-Function Block: '<S35>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S35>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S35>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S26>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S26>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S41>/Dctintegrator' */
  /* Level2 S-Function Block: '<S41>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S41>/Dctleadlag' */
  /* Level2 S-Function Block: '<S41>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S41>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S41>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S42>/Dctleadlag' */
  /* Level2 S-Function Block: '<S42>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S42>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S42>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S27>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S27>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S50>/Dctintegrator' */
  /* Level2 S-Function Block: '<S50>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S50>/Dctleadlag' */
  /* Level2 S-Function Block: '<S50>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S50>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S50>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S51>/Dctleadlag' */
  /* Level2 S-Function Block: '<S51>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S51>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S51>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S28>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S28>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S60>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S60>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S60>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S60>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[38];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S60>/Dctleadlag' */
  /* Level2 S-Function Block: '<S60>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ipos_M->childSfunctions[39];
    sfcnTerminate(rts);
  }

  /* CleanupRuntimeResources for Enabled SubSystem: '<Root>/Controller' */
  /* CleanupRuntimeResources for MATLAB Function: '<S1>/quintic trajectory time1' */
  quintictrajectorytim_CleanupRTR
    (&robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime1);

  /* CleanupRuntimeResources for MATLAB Function: '<S1>/quintic trajectory time2' */
  quintictrajectorytim_CleanupRTR
    (&robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime2);

  /* CleanupRuntimeResources for MATLAB Function: '<S1>/quintic trajectory time' */
  quintictrajectorytim_CleanupRTR
    (&robotarm_student_2021a_Ipos_DW.sf_quintictrajectorytime);
}

/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_CtLedTask.c
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CtLedTask.h"
#include "TSC_CtLedTask.h"















     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_CAN00_06ecbb07_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_GetMaxComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_CAN00_06ecbb07_GetMaxComMode(ComMode);
}
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_GetRequestedComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_CAN00_06ecbb07_GetRequestedComMode(ComMode);
}
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(ComMode);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */






Std_ReturnType TSC_CtLedTask_Rte_Read_RearLeft_WindowPosition_u8_Signal(uint8 *data)
{
  return Rte_Read_RearLeft_WindowPosition_u8_Signal(data);
}

Std_ReturnType TSC_CtLedTask_Rte_Read_RearRight_WindowPosition_u8_Signal(uint8 *data)
{
  return Rte_Read_RearRight_WindowPosition_u8_Signal(data);
}




Std_ReturnType TSC_CtLedTask_Rte_Write_FrontInterLight_bool_Signal(boolean data)
{
  return Rte_Write_FrontInterLight_bool_Signal(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* CtLedTask */
      /* CtLedTask */




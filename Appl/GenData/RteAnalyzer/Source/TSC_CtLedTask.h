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
 *          File:  TSC_CtLedTask.h
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_CtLedTask_Rte_Read_RearLeft_WindowPosition_u8_Signal(uint8 *data);
Std_ReturnType TSC_CtLedTask_Rte_Read_RearRight_WindowPosition_u8_Signal(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CtLedTask_Rte_Write_FrontInterLight_bool_Signal(boolean data);

/** Service interfaces */
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_GetCurrentComMode(ComM_ModeType *ComMode);
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_GetMaxComMode(ComM_ModeType *ComMode);
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_GetRequestedComMode(ComM_ModeType *ComMode);
Std_ReturnType TSC_CtLedTask_Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(ComM_ModeType ComMode);





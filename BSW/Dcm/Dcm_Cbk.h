/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2018 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dcm_Cbk.h
 *        \brief  Callback interface of DCM for other BSWs
 *
 *      \details  MICROSAR DCM based on AR 4.0.3
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/
#if !defined(DCM_CBK_H)
# define DCM_CBK_H
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
# include "Dcm_Types.h"
# include "Dcm_BaseCbk.h"
# include "Dcm_ExtCbk.h"
# include "Dcm_CoreCbk.h"
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/*! Implementation version */
# define DCM_CBK_MAJOR_VERSION                                       10u
# define DCM_CBK_MINOR_VERSION                                       4u
# define DCM_CBK_PATCH_VERSION                                       0u
#endif /* !defined(DCM_CBK_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Cbk.h
 * ******************************************************************************************************************** */

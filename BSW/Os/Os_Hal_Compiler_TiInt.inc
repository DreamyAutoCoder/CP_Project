/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2018 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 *  \addtogroup Os_Hal_Compiler
 *  \{
 *
 *  \file       Os_Hal_Compiler_TiInt.inc
 *  \brief      Additional Texax Instruments assembler compiler abstraction.
 *
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_COMPILERTIINT_INC)
# define OS_HAL_COMPILERTIINT_INC

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/*! \brief    Directive used for assembler parameter definition inside the function declaration.
 */
# define OS_HAL_ASM_MACRO_PARAM_IN_HEADER(Param)               Param

/*! \brief    Directive used for assembler parameter definition inside the function body.
 */
# define OS_HAL_ASM_MACRO_PARAM_IN_BODY(Param)                 Param

/*! \brief    Directive used to mark beginning of a macro without Param
 */
# define OS_HAL_ASM_MACRO_BEGIN_DEFINE(MacroName)           MacroName .macro

/*! \brief
 */
# define OS_HAL_ASM_MACRO_BEGIN_1(MacroName, Params) MacroName .macro  Params

/*! \brief    Directive used to mark the beginning of a macro
 */
# define OS_HAL_ASM_MACRO_BEGIN_2(MacroName, Params)

/*! \brief
 */
# define OS_HAL_ASM_MACRO_BEGIN_3(MacroName, Params)

/*! \brief    Directive used to mark the end of a macro
 */
# define OS_HAL_ASM_MACRO_END                        .endm

/*! \brief    Causes the identifier Label to be visible externally.
 *  \details  If the identifier is defined in the current module, this directive allows the linker to resolve
 *            references by other modules. If the identifier is not defined in the current module,
 *            the assembler resolves it externally.
 */
# define OS_HAL_ASM_EXPORT(Label)                    .def Label

/*! \brief     You usually use this directive when you want to explicitly declare Label as defined in another module.
 *  \details   The assembler does not require this usage, however.
 */
# define OS_HAL_ASM_IMPORT(Label)                    .global Label

/*! \brief     Directs assembly output into the section named SectionName, which should have memory allocated for it.
 *             and contains executable code.
 */
# define OS_HAL_ASM_CODE_SECTION(SectionName)        .sect .SectionName, RO

/*! \brief     Directs assembly output into the section named SectionName, which should have memory allocated for it.
 */
# define OS_HAL_ASM_CONST_SECTION(SectionName)       .sect .SectionName, RO

/*! \brief     Initialize a label with name Name and value Value.
 */
# define OS_HAL_ASM_INIT_LABEL(Name,Value)           Name:  .word  Value

/*! \brief     Definition of a label.
 */
# define OS_HAL_ASM_DEFINE_LABEL(Label)              Label

/*! \brief    Switches to mixed 16-bit and 32-bit Thumb-2 code
 */
# define OS_HAL_ASM_THUMB_CODE                       .thumb

/*! \brief    Directive used to mark the beginning of an assembler function.
 */
# define OS_HAL_ASM_FUNCTION_BEGIN(FunctionName)     FunctionName .asmfunc

/*! \brief    Directive used to mark the end of an assembler function.
 */
# define OS_HAL_ASM_FUNCTION_END(FunctionName)       .endasmfunc

/*! \brief    Directive used to mark an assembler function as a thumb function.
 */
# define OS_HAL_ASM_THUMB_FUNCTION

/*! \brief    Directive used to mark the end of the current module.
 */
# define OS_HAL_ASM_MODULE_END                       .end

/*! \brief    Directive used to define a constant.
 */

/*! \brief    Directive used to place a 32 bit constant in memory.
 */


/*! \brief    Macro used to load a register with an immediate value
 */
Os_Hal_Asm_Load_Register_Immediate .macro Register, Immediate
  movw Register, Immediate
  movt Register, Immediate
  .endm

/*! \brief    Macro used to load a register with a label value
 */
Os_Hal_Asm_Load_Register_Label .macro Register, Label
  ldr Register, Label
  .endm

/*! \brief    Directive used to specify that the current file preserves 8-bytes alignment of the stack.
 */
# define OS_HAL_ASM_PRESERVE8

/*! \brief    Directive used to specify that the current file requires 8-bytes alignment of the stack.
 */
# define OS_HAL_ASM_REQUIRE8

/*! \brief    Directive used to specify the alignment of 4.
 */
# define OS_HAL_ASM_ALIGN4


#endif /* OS_HAL_COMPILERTIINT_INC */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_CompilerTiInt.inc
 **********************************************************************************************************************/

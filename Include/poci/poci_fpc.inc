{========================================================================================
  Include file : poci_fpc
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project

  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Création
 ========================================================================================}

{$ifdef FPC}
  COMPILING_TARGET = {$i %FPCTARGET%};
  COMPILING_CPU    = {$i %FPCTARGETCPU%};
  COMPILING_OS     = {$i %FPCTARGETOS%};
  COMPILER_NAME    = 'FPC (Free Pascal Compiler)';
  COMPILER_VERSION = {$i %FPCVERSION%};
{$endif}

{$i poci_lcl.inc}

{$ifdef LazVer}
  {$i poci_lazarus.inc}
{$endif}

{$ifdef CT_VERSION}
  {$i poci_typhon.inc}
{$endif}


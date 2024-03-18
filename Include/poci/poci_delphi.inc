{========================================================================================
  Include file : poci_delphi
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project

  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Création
 ========================================================================================}

{$ifdef DCC}
  COMPILING_TARGET = '';
  COMPILING_CPU    = '';
  COMPILING_OS     = '';
  COMPILER_NAME    = 'DELPHI';
  COMPILER_VERSION = 'FloatToStr(System.CompilerVersion)';
  ENVIRONMENT_NAME = 'DELPHI';
  ENVIRONMENT_VERSION = '';
  {$ifdef FRAMEWORK_FMX}
    {$i poci/poci_fmx.inc}
  {$else}
    {$i poci/poci_vcl.inc}
  {$endif}
{$endif}


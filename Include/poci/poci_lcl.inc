{========================================================================================
  Include file : poci_lcl
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project

  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Création
 ========================================================================================}

{$ifdef FPC}
  {$ifdef LCL_FULLVERSION}
    FRAMEWORK_NAME = 'LCL';
  {$endif}
{$endif}

{$ifdef LAZ_VERSION}
  {$i poci_lcllazarusversion.inc}
{$endif}

{$ifdef CT_VERSION}
  {$i poci_lcltyphonversion.inc}
{$endif}

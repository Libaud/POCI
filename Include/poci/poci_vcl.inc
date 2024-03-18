{========================================================================================
  Include file : poci_vcl
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project
  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Création
 ========================================================================================}

{$ifdef BCCORDCC}
  {$ifdef FRAMEWORK_VCL}
  FRAMEWORK_NAME = 'VCL';
  FRAMEWORK_VERSION = VCL.Types.VCLVersion;
  {$endif}
{$endif}


{========================================================================================
  Include file : poci_fmx
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project
  Author : Fr�d�ric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Cr�ation
 ========================================================================================}

{$ifdef BCCORDCC}
  {$ifdef DECLARED(FMX)}
  FRAMEWORK_NAME = 'FMX';
  FRAMEWORK_VERSION = FMX.Types.FireMonkeyVersion;
  {$endif}
{$endif}

{========================================================================================
  Include file : poci_typhon
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project

  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Création
 ========================================================================================}

{$ifdef CT_VERSION}
  ENVIRONMENT_NAME = 'TYPHON';
{$endif}

{$ifdef CT_VERSION}
  {$i poci_typhonversions.inc}
{$endif}

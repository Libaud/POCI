{========================================================================================
  Include file : poci_lazarus
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project

  Author : Frédéric Libaud
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Création
 ========================================================================================}

{$ifdef LAZ_VERSION}
  ENVIRONMENT_VERSION = {$i %LAZ_VERSION%};
{$endif}


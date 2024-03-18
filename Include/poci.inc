{========================================================================================
  Include file : poci
  Description : Pascal Object Compiler Informations

                Purpose a way to get compiler informations in builded project

  Author : Frédéric Libaud (FL)
  **************************************************************************************
  History
  --------------------------------------------------------------------------------------
  2024 03 07 - Création
 ========================================================================================}

const
  COMPILING_DATE = {$ifdef FPC}{$i %DATE%}{$else}''{$endif};

{$ifdef BCB}
  {$define BCCORDCC}
  {$i poci/poci_cppbuilder.inc}
{$endif}

{$ifdef DCC}
  {$define BCCORDCC}
  {$i poci/poci_delphi.inc}
{$endif}

{$ifdef FPC}
  {$i poci/poci_fpc.inc}
{$endif}



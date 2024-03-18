Pascal Object Compiler Information (POCI) is a code library. Its objective is to provide all the necessary elements to offer the possibility to know at runtime the compiler, the environment (Delphi, Lazarus, Typhon, the framework version. By generating these at the time of construction.

Using

To use the POCI library, simply include the poci.inc file in the project source file (*.ctpr, *.dpr, *.ppr*). The instruction is as follows:

	{$i poci.inc}
	
Example :

	program POCISample;
	
	{$mode objfpc}{$H+}
	
	uses
	  {$IFDEF UNIX}
	  cthreads,
	  {$ENDIF}
	  Classes, SysUtils, CustApp
	  { you can add units after this };
	
	...
	
	{$i poci.inc}
	
	...
	
	type
	
	  { TPOCISample }
	
	  TPOCISample = class(TCustomApplication)
	  protected
	    procedure DoRun; override;
	  public
	    constructor Create(TheOwner: TComponent); override;
	    destructor Destroy; override;
	    procedure WriteHelp; virtual;
	  end;
	
	{ TPOCISample }
	
	procedure TPOCISample.DoRun;
	var
	  ErrorMsg: String;
	begin
	  // quick check parameters
	  ErrorMsg:=CheckOptions('h', 'help');
	  if ErrorMsg<>'' then begin
	    ShowException(Exception.Create(ErrorMsg));
	    Terminate;
	    Exit;
	  end;
	
	  // parse parameters
	  if HasOption('h', 'help') then begin
	    WriteHelp;
	    Terminate;
	    Exit;
	  end;
	
	  { add your program here }
	  
	  { Using POCI constants declared }
	  WriteLN(Format('Compiler version : %s', [COMPILER_VERSION]));
	  WriteLN(Format('Framework name : %s', [FRAMEWORK_NAME]));
	  WriteLN(Format('Framework version : %s', [FRAMEWORK_VERSION]));
	  WriteLN(Format('Environment name : %s', [ENVIRONMENT_NAME]));
	  WriteLN(Format('Environment version : %s', [ENVIRONMENT_VERSION]));
	  
	  // stop program loop
	  Terminate;
	end;
	
	constructor TPOCISample.Create(TheOwner: TComponent);
	begin
	  inherited Create(TheOwner);
	  StopOnException:=True;
	end;
	
	destructor TPOCISample.Destroy;
	begin
	  inherited Destroy;
	end;
	
	procedure TPOCISample.WriteHelp;
	begin
	  { add your help code here }
	  writeln('Usage: ', ExeName, ' -h');
	end;
	
	var
	  Application: TPOCISample;
	begin
	  Application:=TPOCISample.Create(nil);
	  Application.Title:='POCI Sample';
	  Application.Run;
	  Application.Free;
	end.
	
Remarks

Ideally for the easiest use, it is better to have the files placed in an inclusion directory (Include) common to your projects. Access is relative. For example:

	..\..\Include, on Windows ;

	../../Include, on Linux.

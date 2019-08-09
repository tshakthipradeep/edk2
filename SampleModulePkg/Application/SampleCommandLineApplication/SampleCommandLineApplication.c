#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>

#include <Protocol/ShellParameters.h>

EFI_STATUS
EFIAPI
SampleCommandLineApplicationEntryPoint (
         IN EFI_HANDLE        ImageHandle,
         IN EFI_SYSTEM_TABLE  *SystemTable
         )
{
	EFI_STATUS Status;
	EFI_SHELL_PARAMETERS_PROTOCOL *ShellParamProtocol;

	INT8 i;
              
	Status = gBS->HandleProtocol(
			ImageHandle,
			&gEfiShellParametersProtocolGuid,
			(VOID **)&ShellParamProtocol
			);

	if(EFI_ERROR(Status)) {
		AsciiPrint("HandleProtocol : EFI_SHELL_PARAMETERS_PROTOCOL, Failed\n");
	} else {
		AsciiPrint("HandleProtocol : EFI_SHELL_PARAMETERS_PROTOCOL, Success\n");

		AsciiPrint("Argc = %d\n",ShellParamProtocol->Argc);
		
		for(i=0;i<ShellParamProtocol->Argc;i++) {
			AsciiPrint("Argv[%d] = %s\n",i, ShellParamProtocol->Argv[i]);
		}
	}

	return EFI_SUCCESS;
}


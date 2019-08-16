#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>

#include <Protocol/SampleDxe.h>

VOID SampleDxeFunc(VOID);

EFI_HANDLE mSampleDxeProtocolHandle;

EFI_SAMPLE_DXE_PROTOCOL mSampleDxeProtocol = {
	.SampleDxeFunc = SampleDxeFunc,
};

VOID SampleDxeFunc(VOID) {
	DEBUG((DEBUG_INFO, "In SampleDxeFunc...\n"));
}

EFI_STATUS
EFIAPI
SampleDxeEntryPoint (
         IN EFI_HANDLE        ImageHandle,
         IN EFI_SYSTEM_TABLE  *SystemTable
         )
{
	EFI_STATUS Status;

	DEBUG((DEBUG_INFO, "In SampleDxeEntryPoint...\n"));

	Status = gBS->InstallMultipleProtocolInterfaces(
			&mSampleDxeProtocolHandle,
			&gEfiSampleDxeProtocolGuid,
			&mSampleDxeProtocol,
			NULL);

	if(EFI_ERROR(Status)) {
		DEBUG((DEBUG_INFO, "gEfiSampleDxeProtocolGuid Protocol Install Failed...\n"));
	} else {
		DEBUG((DEBUG_INFO, "gEfiSampleDxeProtocolGuid Protocol Install Successful...\n"));
	}
		
	return Status;
}

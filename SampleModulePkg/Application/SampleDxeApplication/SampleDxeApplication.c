#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>

#include <Protocol/SampleDxe.h>

EFI_STATUS
EFIAPI
SampleDxeApplicationEntryPoint (
         IN EFI_HANDLE        ImageHandle,
         IN EFI_SYSTEM_TABLE  *SystemTable
         )
{
	EFI_STATUS Status;
	EFI_SAMPLE_DXE_PROTOCOL *SampleDxeProtocol;

	Status = gBS->LocateProtocol(
			&gEfiSampleDxeProtocolGuid,
			NULL,
			(VOID **)&SampleDxeProtocol
			);

	if(EFI_ERROR(Status)) {
		AsciiPrint("HandleProtocol : EFI_SAMPLE_DXE_PROTOCOL, Failed\n");
	} else {
		AsciiPrint("HandleProtocol : EFI_SAMPLE_DXE_PROTOCOL, Success\n");
		SampleDxeProtocol->SampleDxeFunc();
	}

	return EFI_SUCCESS;
}


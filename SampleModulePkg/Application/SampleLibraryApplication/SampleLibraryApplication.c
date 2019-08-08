#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>

#include <Library/SampleLibrary.h>

EFI_STATUS
EFIAPI
SampleLibraryApplicationEntryPoint (
         IN EFI_HANDLE        ImageHandle,
         IN EFI_SYSTEM_TABLE  *SystemTable
         )
{
	return SampleLibraryEntryPoint(ImageHandle,SystemTable);               
}


#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>

EFI_STATUS
EFIAPI
SampleHelloWorldEntryPoint (
         IN EFI_HANDLE        ImageHandle,
         IN EFI_SYSTEM_TABLE  *SystemTable
         )
{
	CHAR8	i;

	BOOLEAN	PcdSampleHelloWorldEnabled; 
	INT16 	PcdSampleHelloWorldPrintTimes; 
	CHAR8 	*PcdSampleHelloWorldPrintString; 

	PcdSampleHelloWorldEnabled = FeaturePcdGet(PcdSampleHelloWorldEnabled);
	PcdSampleHelloWorldPrintTimes = FixedPcdGet8(PcdSampleHelloWorldPrintTimes);
	PcdSampleHelloWorldPrintString = FixedPcdGetPtr(PcdSampleHelloWorldPrintString); 

	if(PcdSampleHelloWorldEnabled) {	
		for(i=0;i<PcdSampleHelloWorldPrintTimes; i++) {
        		AsciiPrint(PcdSampleHelloWorldPrintString);
			AsciiPrint("\n");
		}
	}
               
	return EFI_SUCCESS;
}


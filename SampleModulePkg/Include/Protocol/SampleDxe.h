/** 
*  Sample Reference Dxe Driver
**/

#ifndef __EFI_SAMPLE_DXE_PROTOCOL_H__
#define __EFI_SAMPLE_DXE_PROTOCOL_H__

typedef struct _EFI_SAMPLE_DXE_PROTOCOL {
	void (*SampleDxeFunc)();
}EFI_SAMPLE_DXE_PROTOCOL;

extern EFI_GUID gEfiSampleDxeProtocolGuid;

#endif

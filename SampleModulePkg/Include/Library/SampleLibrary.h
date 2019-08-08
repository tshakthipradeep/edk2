/** 
*  Sample Reference Library
**/


/**
  Sample iLibrary function prototype which prints "Sample Hello World!!" to the
  UEFI Console based on PCD setting. 

  @param[in]  ImageHandle	Image handle of the UEFI application
  @param[in]  SystemTable	EFI System Table

  @retval EFI_SUCCESS		Success

**/
EFI_STATUS
EFIAPI
SampleLibraryEntryPoint (
         IN EFI_HANDLE        ImageHandle,
         IN EFI_SYSTEM_TABLE  *SystemTable
         );


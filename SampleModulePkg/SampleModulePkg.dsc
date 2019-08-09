[Defines]
  PLATFORM_NAME 		= SampleModulePkg
  PLATFORM_GUID 		= 476a2c5d-0612-4369-9136-db623d6d1995
  PLATFORM_VERSION 		= 0.1
  DSC_SPECIFICATION 		= 0x00010005
  OUTPUT_DIRECTORY 		= Build/SampleModulePkg
  SUPPORTED_ARCHITECTURES 	= IA32|IPF|X64|EBC
  BUILD_TARGETS           	= DEBUG|RELEASE
  SKUID_IDENTIFIER        	= DEFAULT

[LibraryClasses]
  ## More library instances need to be added if more library classes are
  ## used by the components in the following [Components] section.
  ## library class name | library instance INF file path from package
  DebugLib | MdePkg/Library/UefiDebugLibStdErr/UefiDebugLibStdErr.inf
  BaseLib  | MdePkg/Library/BaseLib/BaseLib.inf
  BaseMemoryLib | MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
  UefiApplicationEntryPoint | MdePkg/Library/UefiApplicationEntryPoint/UefiApplicationEntryPoint.inf
  UefiBootServicesTableLib | MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
  DebugPrintErrorLevelLib|MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib.inf
  UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  DevicePathLib|MdePkg/Library/UefiDevicePathLibDevicePathProtocol/UefiDevicePathLibDevicePathProtocol.inf
  UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  SampleLibrary|SampleModulePkg/Library/SampleLibrary/SampleLibrary.inf
  UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf

[Components]
  ## Sample Hello World Application reference
  SampleModulePkg/Application/SampleHelloWorld/SampleHelloWorld.inf

  ## Sample Library and Application Reference
  SampleModulePkg/Library/SampleLibrary/SampleLibrary.inf
  SampleModulePkg/Application/SampleLibraryApplication/SampleLibraryApplication.inf

  ## Sample Application reference which accepts command line arguments
  SampleModulePkg/Application/SampleCommandLineApplication/SampleCommandLineApplication.inf

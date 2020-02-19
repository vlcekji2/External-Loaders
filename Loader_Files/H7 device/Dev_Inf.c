/*
 * Dev_Inf.c
 *
 */
#include "Dev_Inf.h"
#include "quadspi.h"

/* This structure contains information used by ST-LINK Utility to program and erase the device */
#if defined (__ICCARM__)
__root struct StorageInfo const StorageInfo  =  {
#else
struct StorageInfo const StorageInfo  =  {
#endif
   "STM32_external loader", 	 	 // Device Name + version number
   NOR_FLASH,                  					 // Device Type
   0x90000000,                						 // Device Start Address
   MEMORY_FLASH_SIZE,                 						 // Device Size in Bytes (512Mbits)
   MEMORY_PAGE_SIZE,                 						 // Programming Page Size 16Bytes
   0xFF,                       							 // Initial Content of Erased Memory
// Specify Size and Address of Sectors (view example below)
   (MEMORY_FLASH_SIZE/MEMORY_SECTOR_SIZE),(uint32_t) MEMORY_SECTOR_SIZE,     				 // Sector Num : 128 ,Sector Size: 64KBytes
   0x00000000, 0x00000000,

};


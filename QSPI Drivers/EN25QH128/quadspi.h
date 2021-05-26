
/* USER CODE BEGIN Private defines */

uint8_t CSP_QUADSPI_Init(void);
uint8_t CSP_QSPI_EraseSector(uint32_t EraseStartAddress, uint32_t EraseEndAddress);
uint8_t CSP_QSPI_WriteMemory(uint8_t* buffer, uint32_t address, uint32_t buffer_size);
uint8_t CSP_QSPI_EnableMemoryMappedMode(void);
uint8_t CSP_QSPI_Erase_Chip (void);

/* USER CODE END Private defines */



/* USER CODE BEGIN Prototypes */

/*EN25QH128 memory parameters*/
#define MEMORY_FLASH_SIZE               0x1000000 /* 16 MBytes*/
#define MEMORY_SECTOR_SIZE              0x1000    /* 4 kBytes */
#define MEMORY_PAGE_SIZE                0x100     /* 256 bytes */


/*EN25QH128  commands */
#define WRITE_ENABLE_CMD 0x06
#define READ_STATUS_REG_CMD 0x05
#define SECTOR_ERASE_CMD 0x20
#define CHIP_ERASE_CMD 0xC7
#define PAGE_PROGRAM_CMD 0x02
#define QUAD_OUT_FAST_READ_CMD 0xEB
#define DUMMY_CLOCK_CYCLES_READ_QUAD 6
#define RESET_ENABLE_CMD 0x66
#define RESET_EXECUTE_CMD 0x99
#define ENABLE_QUAD_MODE 0x38

/*EN25QH128 timeouts*/
#define QUADSPI_MAX_ERASE_TIMEOUT 45000 /* 45s max */

/* USER CODE END Prototypes */


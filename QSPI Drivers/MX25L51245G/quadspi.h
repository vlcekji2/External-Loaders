/* USER CODE BEGIN Private defines */

typedef struct {
  uint32_t FlashSize;          /*!< Size of the flash */
  uint32_t EraseSectorSize;    /*!< Size of sectors for the erase operation */
  uint32_t EraseSectorsNumber; /*!< Number of sectors for the erase operation */
  uint32_t ProgPageSize;       /*!< Size of pages for the program operation */
  uint32_t ProgPagesNumber;    /*!< Number of pages for the program operation */
} QSPI_Info;


uint8_t CSP_QUADSPI_Init(void);
uint8_t CSP_QSPI_EraseSector(uint32_t EraseStartAddress ,uint32_t EraseEndAddress);
uint8_t CSP_QSPI_WriteMemory(uint8_t* buffer, uint32_t address, uint32_t buffer_size);
uint8_t CSP_QSPI_EnableMemoryMappedMode(void);
uint8_t CSP_QSPI_Erase_Chip (void);
uint8_t CSP_QSPI_GetInfo    (QSPI_Info* pInfo);

/* USER CODE END Private defines */




/* USER CODE BEGIN Prototypes */

/*MX25L512 memory parameters*/
#define MEMORY_FLASH_SIZE				0x4000000 /* 512 MBits => 64MBytes */
#define MEMORY_BLOCK_SIZE				0x10000   /* 1024 sectors of 64KBytes */
#define MEMORY_SECTOR_SIZE				0x1000    /* 16384 subsectors of 4kBytes */
#define MEMORY_PAGE_SIZE				0x100     /* 262144 pages of 256 bytes */


/*MX25L512 commands */
#define WRITE_ENABLE_CMD 0x06
#define READ_STATUS_REG_CMD 0x05
#define WRITE_STATUS_REG_CMD 0x01
#define SECTOR_ERASE_CMD 0x20
#define CHIP_ERASE_CMD 0xC7
#define QUAD_IN_FAST_PROG_CMD 0x38
#define READ_CONFIGURATION_REG_CMD 0x15
#define QUAD_READ_IO_CMD 0xEC
#define QUAD_OUT_FAST_READ_CMD 0x6B
#define QPI_ENABLE_CMD 0x35
#define DUMMY_CLOCK_CYCLES_READ_QUAD 10
#define RESET_ENABLE_CMD 0x66
#define RESET_EXECUTE_CMD 0x99
#define DISABLE_QIP_MODE 0xf5

/* USER CODE END Prototypes */

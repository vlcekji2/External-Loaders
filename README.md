# External-Loaders

This session helps you to integrate QSPI external memory to your Embedded system driven by STM32

- **Loader_Files**   folder contains files needed for STM32 external loader design.
- **QSPI driver**    folder contains memory drivers for specific sales types.
- **QSPI testing**   folder includes routines for memory testing.

Video tutorial how to use the files and develop your own external loader is located on website:

https://www.st.com/content/st_com/en/support/learning/stm32-education/stm32-moocs/external_QSPI_loader.html

Videos available in MOOC tutorial:

**1. Intro**
- Includes introduction and prerequisites of tutorial. 

**2. QSPI theory** 
- It quickly describes Loader and QSPI functionality.

**3. CubeMX** 
- CubeMX part shows you how to set QSPI peripheral and generate new project from CubeMX tool.

**4. QSPI Memory driver** 
- Each memory command requires specific signal sequence. This part describe how to handle memory commands and create memory driver.

**5. Test memory driver** 
- First part of this video shows how to use and test memory driver in basic application (code located in internal flash).
- Second part changes project properties and generate External loader .stldr file.

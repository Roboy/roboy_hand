openbionics-samd 1.2.20 27th June 2019
* Fixed __bootloader_ver_ptr for 'flash_without_bootloader' for 'Shifted' by re-adding the '-16' offset

openbionics-samd 1.2.19 17th June 2019
* Fixed __bootloader_ver_ptr for 'flash_without_bootloader' scripts. It should now '== 0', rather than '== 0 - 16'

openbionics-samd 1.2.18 13th June 2019
* Added __flash_origin to linker scripts

openbionics-samd 1.2.17 6th June 2019
* Added missing comma in package.json

openbionics-samd 1.2.16 6th June 2019
* Fixed packaging process (should all have been 'zip/dir/everything_else', instead of 'zip/everything_else')

openbionics-samd 1.2.15 6th June 2019
* Added __bootloader_ver_ptr to linker scripts 

openbionics-samd 1.2.14 18th April 2019
* Added 'OB1 Hand Controller - Shifted' with a flash origin offset of 0x2000
* Removed unused 'OB1 Hand Controller - DEV'

openbionics-samd 1.2.13 29th March 2019
* Updated core to ArduinoCore 1.6.20
* Removed unused Arduino variants
* Removed unused OB1_EMG variant

openbionics-samd 1.2.12
* reverted analogWrite() to using 8-bit timers (16-bit breaks PWM using TC timers)

openbionics-samd 1.2.11
* changed PID & VID to Open Bionics' in boards.txt & USBCore.cpp
* added SerialJack & SerialPins to Chestnut variant
* added Serial (programming pads) & SerialWrist to OB1 hand controller

openbionics-samd-dev 1.2.10
* changed memory sizes in variants\chestnut\linker_scripts\gcc\flash_with_bootloader.ld
* changed analogWrite() to map to 8 bit timer instead of 16 bit

openbionics-samd-dev 1.2.9
* reverted all changes to 1.2.4

openbionics-samd-dev 1.2.5
* updated from ArduinoCore Samd

openbionics-samd 1.2.4
* added '#define Serial SerialUSB' to allow external libraries to use SerialUSB by default - Chestnut, OB1_HC & OB1_EMG
* changed flash boards.txt 'board_name.build.ldscript=linker_scripts/gcc/flash_without_bootloader.ld' - OB1_HC & OB1_EMG
* changed I2C pins to correct port (from PORTB to PORTA) - OB1_EMG
* removed unused variant folders from variants folder
* removed unused bootloaders from bootloaders folder

openbionics-samd 1.2.3
* added PWM functionality to LED on D4 (PB10) - OB1 EMG
* changed PWM timer on PA19 to alternate timer (PA19) - OB1 HC

openbionics-samd 1.2.2
* fixed all compilation errors
* removed Serial1() init functions
* added placeholder USB_DP_PIN... for OB1_HC

openbionics-samd 1.2.1
* fixed board IDE's from OB1 to OB1_HC & OB1_EMG
* fixed build.board=XXXX to correct names

openbionics-samd 1.2.0
* added OB1 EMG
* changed OB1 board to OB1 Hand Controller
* fixed Chestnut

openbionics-samd 1.1.0
* added OB1 board
* changed Chesnut/Chesntut+ to Chestnut

openbionics-samd 1.0.0
* added Chestnut/Chestnut+ PCB

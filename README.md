Flashing with SWD via raspberry pi with openocd 


##  Default RPI-2 B settings
ip: 192.168.1.10

user: pi
pw: Roboy2016

##  access RPI
sudo ifconfig enx00e04c6836b1 192.168.1.1 netmask 255.255.255.0 up
ssh -b 192.168.1.1  pi@192.168.1.10

# working dir:
cd ~/Projekts/openocd/testing/samd21/


At91samd was programmed via openocd with an raspberry pi (https://iosoft.blog/2019/01/28/raspberry-pi-openocd/)

config file 

##  Pin header chestNut-PCB
1	VCC +3.3V
2	SWDIO
3	SWCLK
4	NC/
5	RESET
6	GND

##master config
source rpi2.cfg

transport select swd
adapter_khz 1000

set CHIPNAME at91samd21g18
source [find target/at91samdXX.cfg]

bindto 0.0.0.0


##raspberry config
# rpi2.cfg: OpenOCD interface on RPi v2+
echo "rpi2 cfg"
# Use RPi GPIO pins
interface bcm2835gpio

# Base address of I/O port
bcm2835gpio_peripheral_base 0x3F000000

# Clock scaling
bcm2835gpio_speed_coeffs 146203 36

# SWD                swclk swdio
# Header pin numbers 22    18
bcm2835gpio_swd_nums 25    24

# JTAG                tck tms tdi tdo
# Header pin numbers  22  18  16  15 
bcm2835gpio_jtag_nums 25  24  23  22

bcm2835gpio_srst_num 18
reset_config srst_only srst_push_pull



##rpi commands
###start openocd server
sudo openocd -f samd21_test.cfg
###telnet
telnet localhost 4444
###telnet commands
init
targets
reset halt
at91samd chip-erase
reset halt
at91samd bootloader 0
#program /home/pi/Projekts/openocd/testing/samd21/samd21_mkr1000.bin verify
#program /home/pi/Projekts/openocd/testing/samd21/samd21_sam_ba.bin verify
#program /home/pi/Projekts/openocd/testing/samd21/zero/samd21_sam_ba.bin verify
program /home/pi/Projekts/openocd/testing/samd21/samd21_genu_mkr1000.bin verify

at91samd bootloader 8192
reset
shutdown

#then mk1000 can be seltected in arduino after init flash the board will apear as "arduino zero"

Arduino head changes
Changed Pins.ino for finger.h file 

finger[0].attach(10, 11, A1, A9, false); // attach the thumb
finger[3].attach(4, 3, A0, 1, false); // attach the ring & pinky (fingers are inverted)
finger[1].attach(9, 6, A3, 0, false); // attach the index (finger is inverted)
finger[2].attach(5, 12, A2, A5, false); //doesn't move (could be wronge pin


#dump deltet ...... :
interface cmsis-dap
transport select swd
#Target
set CHIPNAME at91samd21e18
source [find target/at91samdXX2.cfg]
#source [find target/stm32f1x.cfg]

init
targets
reset halt
at91samd chip-erase
reset halt
at91samd bootloader 0
program D:/projects/SAMD_Loader/Firmware/all.bin verify
at91samd bootloader 8192
reset
shutdown

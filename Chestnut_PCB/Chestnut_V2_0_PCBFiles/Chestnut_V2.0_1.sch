EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr User 12092 8268
encoding utf-8
Sheet 1 9
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	950  4800 5050 4800
Wire Wire Line
	5050 4800 5050 5850
$Comp
L Chestnut_V2.0-eagle-import:DINA4_L #FRAME8
U 1 1 DD6D1993
P 903 5900
AR Path="/DD6D1993" Ref="#FRAME8"  Part="1" 
AR Path="/5DFB82CE/DD6D1993" Ref="#FRAME8"  Part="1" 
F 0 "#FRAME8" H 903 5900 50  0001 C CNN
F 1 "DINA4_L" H 903 5900 50  0001 C CNN
F 2 "" H 903 5900 50  0001 C CNN
F 3 "" H 903 5900 50  0001 C CNN
	1    903  5900
	1    0    0    -1  
$EndComp
$Comp
L Chestnut_V2.0-eagle-import:DINA4_L #FRAME8
U 2 1 DD6D199F
P 7300 5900
AR Path="/DD6D199F" Ref="#FRAME8"  Part="2" 
AR Path="/5DFB82CE/DD6D199F" Ref="#FRAME8"  Part="2" 
F 0 "#FRAME8" H 7300 5900 50  0001 C CNN
F 1 "DINA4_L" H 7300 5900 50  0001 C CNN
F 2 "" H 7300 5900 50  0001 C CNN
F 3 "" H 7300 5900 50  0001 C CNN
	2    7300 5900
	1    0    0    -1  
$EndComp
Text Notes 4069 2769 0    500  ~ 100
Open Bionics 
Text Notes 9120 3377 0    200  ~ 40
Designed by Patrick Brinson 2016
Text Notes 1050 5150 0    127  ~ 0
V1.0 to V1.1 Modifications:
Text Notes 1050 5400 0    85   ~ 0
M1 Potentiometer GND pour fixed
Text Notes 1050 5600 0    85   ~ 0
"Comms Switch" Pulled up to default to ADC rather than I2C
$EndSCHEMATC

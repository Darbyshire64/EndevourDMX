# EndevourDMX
This is a custom DMX Tranciver Platform Designed for both reciving and controling DMX. Using an ESP32-C3 With Onboard WIFI

## Features
  - Control One DMX Universe
  - Recive DMX and make signal qaulity Reports.
  - WIFI Based Control.
  - Display Status and Other INFO With Inbuilt OLED

## How It Works

It allows for DMX Passthrough so if something where to hapen to the MCU the DMX signal Could still passthrough pasiveley without power. The A,B Data lines are protected by a TVS Diode and 100 ohm resistors this cleans up any interfearence in the transmision. this is then sent the the MAX845E Chip to convert the data into easy to recive serieal data for the ESP. As the DMX lighting protocol uses RS845 Serieal the MAX845E is neccesary to control TX/RX the signal.



# BOM

Prices From JLCPCBA Parts List.

| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
| 2   | 1.5KE15CA (TVS DIODE)   | $0.4500 |             |
| 1   | 1N4007 Tape             | $0.0161 |             |
| 1   | MFR-25FBF52-1K8         | $0.0034 |             |
| 1   | MFR-25FBF52-3K3         | $0.0156 |             |
| 2   | MFR-25FBF52-100R        | $0.0156 |             |
| 1   | MFR-25FBF52-120R        | $0.0114 |             |
| 1   | 2N3904                  | $0.0156 |             |
| 3   | WS281B-HS01/W           | $0.0839 |             |
| 1   | MAX485EN                | $0.3870 |             |
| 1   | NC3FAAH                 | $1.3320 |             |
| 1   | NC3MAAH                 | $1.5360 |             |
|     | Total PCBA Component Cost| $4.4990 |             |
| 5   | Custom PCBA With EING*  | $25.60  |             |

* Excluding Shiping and PCBA Components. PCBA because i have SMD components and my soldering is abismal. EING cus it look nice and the boards primary function is Highspeed Data. PCBA Components are in the first section of the table.

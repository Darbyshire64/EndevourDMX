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

| QTY | Item                    | Price | Link        |
|-----|-------------------------|-------|-------------|
| 1   | IO-XLR3-M-EH            | £1.87 | <a href="https://www.digikey.co.uk/en/products/detail/io-audio-technologies/IO-XLR3-M-EH/9931887E"> LINK </a> |
| 1   | IO-XLR3-F-EH            | £1.93 | <a href="https://www.digikey.co.uk/en/products/detail/io-audio-technologies/IO-XLR3-F-EH/9931888"> LINK </a> |
| 1   | MAX485ECPA+             | £5.45 | <a href="https://www.digikey.co.uk/en/products/detail/analog-devices-inc-maxim-integrated/MAX485ECPA/1495198"> LINK </a> |
| 1   | XIAO ESP32-C3           | £3.67 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/113991054/16652880"> LINK </a>
| 2   | 1.5KE6.8CA TVS Diode    | £0.40 | <a href="https://www.digikey.co.uk/en/products/detail/littelfuse-inc/1-5KE6-8CA/285844"> LINK </a>
| 1   | 1N4148                  |

# EndevourDMX
This is a custom DMX Tranciver Platform Designed for both reciving and controling DMX. Using an ESP32-C3 With Onboard WIFI

>[!Warning]
> Use This PCB at your own Risk. I cannot take liability if it breake's and or causes damage to equipment. This has not been tested and there is no garrentee of upholding to any level of quality/functionality.

## Features
  - Control One DMX Universe
  - Recive DMX and make signal qaulity Reports.
  - WIFI Based Control.
  - Display Status and Other INFO With Inbuilt OLED

## How It Works

It allows for DMX Passthrough so if something where to hapen to the MCU the DMX signal Could still passthrough pasiveley without power. The A,B Data lines are protected by a TVS Diode and 100 ohm resistors this cleans up any interfearence in the transmision. this is then sent the the MAX845E Chip to convert the data into easy to recive serieal data for the ESP. As the DMX lighting protocol uses RS845 Serieal the MAX845E is neccesary to control TX/RX the signal.



# BOM
## PCB 

EING Because The PCB Will be handeling Highspeed Data.

| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
|  5  | Custom White, EING PCB  | $24.90 |             |
|     | Shipping (GSDL)         | $5.19   |             |

## Components

| QTY | Item                    | Price  | Link        |
|-----|-------------------------|---------|-------------|
|  2  | 1.5KE15CA        | $0.34 | <a href="https://www.digikey.co.uk/en/products/detail/stmicroelectronics/1-5KE15CA/1037261">LINK</a> |
|  1  | 1N4007           | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/diotec-semiconductor/1N4007/18833652">LINK</a> |
|  1  | MFR-25FBF52-1K8  | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/MFR-25FBF52-1K8/9138063">LINK</a> |
|  1  | MFR-25FBF52-3K3  | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/MFR-25FBF52-3K3/9138148">LINK</a> |
|  2  | MFR-25FBF52-100R | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/MFR-25FBF52-100R/12795">LINK</a> |
|  1  | MFR-25FBF52-120R | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/MFR-25FTE52-120R/9139747">LINK</a> |
|  1  | 2N3904           | $0.14 | <a href="https://www.digikey.co.uk/en/products/detail/diotec-semiconductor/2N3904/13164701">LINK</a> |
|  3  | WS281B           | $0.68 | <a href="https://www.digikey.co.uk/en/products/detail/sparkfun-electronics/16347/11630204">LINK</a> |
|  1  | MAX485ECSA+      | $5.88 | <a href="https://www.digikey.co.uk/en/products/detail/analog-devices-inc-maxim-integrated/MAX485ECSA/1495336">LINK</a> |
|  1  | IO-XLR3-F-EH     | $2.63 | <a href="https://www.digikey.co.uk/en/products/detail/io-audio-technologies/IO-XLR3-F-EH/9931888">LINK</a> |
|  1  | IO-XLR3-M-EH     | $2.55 | <a href="https://www.digikey.co.uk/en/products/detail/io-audio-technologies/IO-XLR3-M-EH/9931887">LINK</a> |
|  1  | ESP-32-C3        | $4.99 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/113991054/16652880">LINK</a> |
|  1  | 2.4Ghz Atenna    | $2.20 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/103990623/18724506">LINK</a> |
|  1  | Headers          | $0.24 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/102010490/19176770">LINK</a> |

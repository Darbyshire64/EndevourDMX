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

# Photos
## PCB
<img width="1569" height="1078" alt="image" src="https://github.com/user-attachments/assets/e983d16b-e711-4c6e-908e-37b072736a50" />
<img width="1248" height="863" alt="image" src="https://github.com/user-attachments/assets/846313d9-7763-4014-8b2a-640cb3290d84" />

## Case

<img width="1272" height="764" alt="image" src="https://github.com/user-attachments/assets/e63a2f39-d777-46fb-b018-aa6648251ac9" />
<img width="1360" height="742" alt="image" src="https://github.com/user-attachments/assets/25aa59ab-6dca-418f-b122-c7edd516a988" />

# BOM


| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
|     | PCB Total               | $30.09  |             |
|     | Component Total         | $29.84  |             |
|     | Case Total              | $4.50   |             |
|     | Misc Total              | $26.24   |             |
|     | Total                   | $90.67   |             |
## PCB 

| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
|  5  | Custom Black LF HASL PCB| $24.90  |             |
|     | Shipping (GSDL)         | $5.19   |             |
|     | Total                   | $30.09  |             |
## Components

Components All From DigiKey. Shiping is estimate. I have chosen Digikey because it has all of my components vs LCSC who has a few of my components in stock as of making the BOM. it would be more cost effective  to buy all the components in one go rather than by two lots of shipping and handeling fees.

### Digikey
| QTY | Item                    | Price  | Link        |
|-----|-------------------------|---------|-------------|
|  2  | 1.5KE15CA        | $0.34 | <a href="https://www.digikey.co.uk/en/products/detail/stmicroelectronics/1-5KE15CA/1037261">LINK</a> |
|  1  | 1N4007           | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/diotec-semiconductor/1N4007/18833652">LINK</a> |
|  1  | MFR-25FBF52-1K8  | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/MFR-25FBF52-1K8/9138063">LINK</a> |
|  1  | CFR-12JB-52-3K3  | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/CFR-12JB-52-3K3/3989">LINK</a> |
|  2  | MFR-25FBF52-100R | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/MFR-25FBF52-100R/12795">LINK</a> |
|  1  | MFR-25FBF52-120R | $0.10 | <a href="https://www.digikey.co.uk/en/products/detail/yageo/MFR-25FTE52-120R/9139747">LINK</a> |
|  1  | 2N3904           | $0.14 | <a href="https://www.digikey.co.uk/en/products/detail/diotec-semiconductor/2N3904/13164701">LINK</a> |
|  3  | WS281B           | $0.68 | <a href="https://www.digikey.co.uk/en/products/detail/sparkfun-electronics/16347/11630204">LINK</a> |
|  1  | MAX485ECSA+      | $5.88 | <a href="https://www.digikey.co.uk/en/products/detail/analog-devices-inc-maxim-integrated/MAX485ECSA/1495336">LINK</a> |
|  1  | IO-XLR3-F-EH     | $2.63 | <a href="https://www.digikey.co.uk/en/products/detail/io-audio-technologies/IO-XLR3-F-EH/9931888">LINK</a> |
|  1  | IO-XLR3-M-EH     | $2.55 | <a href="https://www.digikey.co.uk/en/products/detail/io-audio-technologies/IO-XLR3-M-EH/9931887">LINK</a> |
|  1  | XIAO ESP-32-C3   | $4.99 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/113991054/16652880">LINK</a> |
|  1  | 2.4Ghz Atenna    | $2.20 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/103990623/18724506">LINK</a> |
|  1  | Headers          | $0.24 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/102010490/19176770">LINK</a> |
|     | Shiping          | $6.88 | |
|     | Total Excl Shiping| $21.95 | |
|     | Total Incl Shiping| $29.84 | |

# AliExpress

| QTY | Item                    | Price  | Link        |
|-----|-------------------------|---------|-------------|
|  1  | OLED DISPLAY        | $5.35 | <a href="https://www.aliexpress.com/item/1005008988479159.html?spm=a2g0o.detail.0.0.3f8dP1SHP1SHRr&mp=1&pdp_npi=5%40dis%21USD%21USD%205.35%21USD%202.62%21%21USD%202.62%21%21%21%40211b628117536181461324433e3141%2112000047475624684%21ct%21UK%21-1%21%211%210">LINK</a> |
| | Total Excl Shiping | $5.35 |
| | Toatl Incl Shiping | $8.34 |

## Case

Printed With Printing Legion. Estmiated Shiping Cost Based on prevoious printing legion experiance.

| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
|  1  | Case                    | $4.50   |             |

## Tool's & Misc

| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
|  1  | 10g Flux                | $3.32   | <a href="https://www.aliexpress.com/item/1005008562727265.html?spm=a2g0o.detail.0.0.1891tDgOtDgOiD&mp=1&pdp_npi=5%40dis%21USD%21USD%203.32%21USD%200.99%21%21USD%200.99%21%21%21%40211b628117536181317473986e3141%2112000045736601174%21ct%21UK%21-1%21%211%210"> LINK </a> |
|  1  | 50g Solder              | $10.89  | <a href="https://www.aliexpress.com/item/1005007330449968.html?spm=a2g0o.detail.0.0.d802qv9rqv9rOF&mp=1&pdp_npi=5%40dis%21USD%21USD%2010.89%21USD%205.44%21%21USD%205.44%21%21%21%40211b628117536180518621644e3141%2112000040294388218%21ct%21UK%21-1%21%211%210"> LINK </a> |
|  1  | M3 Heatset Inserts      | $2.03   | <a href="https://www.aliexpress.com/item/1005003582355741.html?spm=a2g0o.detail.0.0.330ciNNZiNNZhx&mp=1&pdp_npi=5%40dis%21USD%21USD%202.03%21USD%202.03%21%21USD%202.03%21%21%21%40211b628117536180843722706e3141%2112000026370649756%21ct%21UK%21-1%21%211%210"> LINK </a>  |
|  1  | M3x14mm Screws          | $2.94   | <a href="https://www.aliexpress.com/item/32867841097.html?spm=a2g0o.cart.0.0.5a5b38dafIVPIo&mp=1&pdp_npi=5%40dis%21USD%21USD%202.94%21USD%202.65%21%21USD%202.65%21%21%21%402103892f17536178038338142eac37%2165441947149%21ct%21UK%21-1%21%211%210"> LINK </a> |
| | Total No Discout & Shiping | $19.81 |
| | Total Incl Discounts & Shiping | $13.36|

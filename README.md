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
|  1  | ESP-32-C3        | $4.99 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/113991054/16652880">LINK</a> |
|  1  | 2.4Ghz Atenna    | $2.20 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/103990623/18724506">LINK</a> |
|  1  | Headers          | $0.24 | <a href="https://www.digikey.co.uk/en/products/detail/seeed-technology-co-ltd/102010490/19176770">LINK</a> |
|     | Shiping          | $6.88 | |
|     | Total Excl Shiping| $21.95 | |
|     | Total Incl Shiping| $29.84 | |

## Case

Printed With Printing Legion. Estmiated Shiping Cost Based on prevoious printing legion experiance.

| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
|  1  | Case                    | $4.50   |             |

## Tool's & Misc

3M Cable Because the Device will often be deployed far from a power source so a long cable is required

| QTY | Item                    | Price   | Link        |
|-----|-------------------------|---------|-------------|
|  1  | M3x16                   | $6.69   | <a href="https://www.amazon.co.uk/16mm-Allen-Socket-Head-Screws/dp/B08GYF6Z3Y?crid=15LVFZGD8HR12&dib=eyJ2IjoiMSJ9.R7LtEaNrE88IebYLJhaKUirPmxgAEbwW-PyeTWmdwYolEud-Eof81PcpfETehbEgGPz3TIChHSJQn1gEMM9mfaaVm4ZIeJQth0HC5Npyw5Ol3DQfCMqPKgL7NJsJPVsFVzdyhbQ3PkNWcNozbyIsPuC-5K1GfIlnxWXfK8rqPLRGqdFUnMLiNO0uN2zns_Za05sMS5z3jdYmeetL5IvxuD3aNkWCZsAMbZfmJZhrZB6P8NO1QLNhPm-12yCl-79ivqs-a3WXTcuMItGsM74CUnseu91z42Y3tGqkp19urQg.PNpXIaAO9fPF1lhoJot3FOKvMkJfSNP6CfaQHxNjbAc&dib_tag=se&keywords=m3x16%2Bscrews&qid=1753044394&sprefix=m3x16%2Bscews%2Caps%2C71&sr=8-16&th=1&currency=USD"> LINK </a>|
| 1 | M3 Heatset Inserts | $2.94 | <a href="https://www.amazon.co.uk/Printing-Heatset-Insert-M3x4x5-Length/dp/B0D1WVNW3G?crid=REA2M8IF9K5Y&dib=eyJ2IjoiMSJ9.Kv1N7d5yHhk7sFh2VwQg_kz5ZZ262LlZgPDMME6b_av8RNQofelx6qbSFbVPtzaTgvm7ZN4m8YebUSHoWpbzAX8bkWUwxKrzRx_SAOrQtNJmaVfoEPiZF1BKLK4EuMVZJR4ugto9p0rjDh2Upla85NCSy5WPO9AH9NuNLyGhOvQ1YxewzKBMtygEjH3pOKq8Aeosc1FRPr-opfy5QTtxGvelFNtJovn6qs2Qe1y4b-3M6DrKAiFRrg7ruVP-0Zk6Jd8EnEWj_xQueOV5BUEgrpUBdl7BDroTTpzUQd65YJA.I8RJnF6sOWVnRY-9nGTHRuONJ9_tq6ExHVC_Cw2ybqc&dib_tag=se&keywords=m3+heatset+inserts&qid=1753044537&sprefix=m3+heats%2Caps%2C85&sr=8-7"> LINK </a> |
| 1 | Flux For Soldering | $4.95 | <a href="https://www.amazon.co.uk/No-Clean-Lead-Free-Environmentally-Friendly-Appliance/dp/B0DL372S45?crid=58Z6EIR2M8FB&dib=eyJ2IjoiMSJ9.ELIlOil1_F-nDXl55UlM4CaqLjbC5Jjlp8mlcIFMkT6LQkFkVmFJ-HiNxu9GAAqax238iHJ--37pJxiA8dRNvgT4OZihCteL7MrGpUdOTkFuwjK_SSfpMunYNyIih1bUledBzj4FjdgOZBaM6iLtVZNNKo5f_hqOWRr0bAE72McR9WOZBSzXmZj525H2jvUqP3dLzbxcMXZYUX5s8qVse4LphZar6yE44Ka81GRNEvcXPWfu-5OMrCgS6uofun9skdmy2J0zhtoAEh9E0TNNyzxiYjiXDbXt8SyWrxpXV0g.Fxa2NyHo7fXIwnJHA3CF2HRWFoSbHtidP7DieQO6kj0&dib_tag=se&keywords=Flux&qid=1753044627&sprefix=flux%2Caps%2C97&sr=8-7&th=1"> LINK </a> |
| 1 | Lead Free Solder 20g | $5.22 | <a href="https://www.amazon.co.uk/Solder-Soldering-Electronic-Electrical-Components/dp/B0BFW8TS6H?crid=36Z0VSCOYYWJ2&dib=eyJ2IjoiMSJ9.pJVYa_JWjAPJifEl0_q4F9ZEjgdOKLzFX979g0fsHxriWrTMHz1WhvDvB4vwqgCN2LiDWracCdT3BjW0zk9RYUuKnl8OYX58FmOnZI0LSr7LWKUW0nt6Y_ddFCwwuPQnJTrf2uG2xnvBEa9SF5IobF1bVS34mimeM2pCA3JvD9kUkoWskHGavyZUvix5uuflgLBgoLycTTpUHXuSrq0cpVVWYFr2r5a_db3jo3DhM0lR2VJizT6mkQdZk-y7RH4iKpHBZ9YiOoBXY7lUGSaKzArAmnoUpu5GUqGtqL3cXuk.FkQIKbA1p36csSD0wzsIv2QIwdEtIxGPsKTACrNPNp4&dib_tag=se&keywords=Lead%2BFree%2Bsolder&qid=1753044774&sprefix=lead%2Bfree%2Bsolder%2Caps%2C97&sr=8-6&th=1"> LINK </a> 
| 1 | 3M USB-C to USB-A   | $4.28 | <a href="https://www.aliexpress.com/item/1005007183957687.html?spm=a2g0o.productlist.main.4.7c7166d3YFEiky&aem_p4p_detail=202507220307405809771213609160000276455&algo_pvid=5501929a-5d8d-4f06-abb8-a38275108efb&algo_exp_id=5501929a-5d8d-4f06-abb8-a38275108efb-3&pdp_ext_f=%7B%22order%22%3A%2214%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21GBP%212.11%210.76%21%21%2119.76%217.10%21%40211b6a7a17531788601646067e945e%2112000039730274974%21sea%21UK%210%21ABX&curPageLogUid=cQmrO1WiA3XH&utparam-url=scene%3Asearch%7Cquery_from%3A&search_p4p_id=202507220307405809771213609160000276455_4"> LINK </a> |
|   | Total              | $26.24 | |

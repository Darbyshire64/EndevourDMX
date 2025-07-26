---
title: "EndevourDMX" 
author: "Lawri Darbyshire"
description: "This is a custom DMX Tranciver Platform Designed for both reciving and controling DMX (A Stage Lighting Protocol). Using an ESP32-C3 With Onboard WIFI"
created_at: "2025-07-15"
---

> [!WARNING]  
> Although i may seem it i am not drunk writeing it. i often was writing this journel very late at night and was very tired. coupled with Dyslexia this journal will be horribley misplet, appolegies in advance.
> This journal for a few logs is written a couple days later because I often forgot to journal. time is guestimate

# Planing 

(2 hrs)

Along time ago - 14/07/25

(Ive been thinking about this for a long time.)

I often do stage lighting for both my Drama Class and School Events. i wanted something i could use to diagnose lights. give me live data and more.
in order to do this i looked at hooking up a Seed Studio XIAO ESP32-C3, that had built in WIFI,  to a intercept a DMX signal and proccess it. so i researched more about this.
i discovered that DMX Uses RS845 as it is based on MIDI witch is serial. So after a bit of researching i settled on taking the DMX signal and
parsing it through a MAX845E Chip to allow it to be controlled VIA the GPIO of the ESP32. i also then started to think about the formfactor
would it be a Square like the MYDMX 3 Box. but after being inspired by The Wolf on slacks Cable tester i settled on  a Rectangular Design. THE PCB is
very Compact and Functional only Allows as much room as needed for the components whilst still maintaining a nice Shape and design.  Later that day i began work on the PCB.

# The PCB

## Day 1 Of PCB DESIGN (3 hrs)

From Yesterday (14/07/25) I worked on the PCB. I already new the components i needed. and after finding diagrams online i managed to get the schematic done. it took a lot of effort. 
i often setup the TX side of things but completely forgot i would be RX aswell. After all these mistakes by the Night i had finished the Schematic

<img width="1032" height="440" alt="image" src="https://github.com/user-attachments/assets/e0da8db4-1712-4799-91b4-b60141c3643b" />


## Day 2 of PCB DESIGN (4 hrs)

Today (15/07/2025) I spent alot of time working on the PCB and getting all the components layed out. i made a lot of progress working extra hard to get everything done quickly as of witting its 30mins past midnight for me.
will probably go over this in the morning with a fresh mind and fix all the spelling mistakes. But after a lot of work i completed the PCB. initially started work on this yesterday as a personal project but eventualy i decided i would like do this for highway to get some more points so i havent got the KiCAD source files in here yet but will migrate them at a later date. 

## Notice

I Couldnt do much work due to me doing lighting for two events on the 17th and 18th of July

# Day 3 of PCB Design (3 hrs)

(18/07/2025) I Spent time changeing the width of all the traces to match the voltage. thanks to guidance from @Krunch on slack. i added a ground plane to remove the Unessary winding GND trace around my pcb. this also reduces noise from the 5V to Data Lines. as well as if theres a Surge on one of the lines then it will go to ground before any critical components. i also spent the later half of the evening researching components on JLC PCB's Library. I also thought some status lights would be necessary for my PCB so i added 3 Neo Pixels  That correspond to there silk screen icons above.

<img width="1542" height="838" alt="image" src="https://github.com/user-attachments/assets/77a244c0-db64-4f3f-ab37-be70ae87ff05" />


# Day 4 Of PCB Design (3 hrs)

(19/07/2025) Today i found all the parts in the JLC Parts List and put them on to a table on the READEME.md. I also uploaded my PCB Gerber's to JLC PCB and calculated the cost of my PCB. i decided Due to me handeling data i wanted EING for high performance and also wanted the PCB to look high quality so EING was the obvious choice. ive also recently liked white PCB so chose that.

<img width="922" height="622" alt="image" src="https://github.com/user-attachments/assets/29c0fa3a-f347-4bfe-9cb9-7b399bdc046c" />

# Day 5 - Case Design (4 hrs)

I designed the case and and finished up the BOM. I moved everything back to Digikey Because PCBA Became ridiculously expensive. I also changed back to HASL. for the case I just did a simple open top design to make mounting the pcb and printing easy. I may have gone abit crazy with the fillet.

<img width="1492" height="997" alt="image" src="https://github.com/user-attachments/assets/5df7af34-a58d-4d09-bc19-62a73a608848" />


# Day 6 - Firmware (2hrs)

So today I thought that the PCB and Case where pretty much finished. so I decided to move onto the firmware. for the firmware i just wanted to start off with a simple  mode cable testing. tommorow i will probably work on an actual control mode.

<img width="1141" height="1252" alt="image" src="https://github.com/user-attachments/assets/e52f172d-6ae1-46d0-85e8-b72086f22f98" />

# Day 7 Firmware (2hrs)

Utilizing the Pre-exsisting firmware i wrote on Day 6 i researched how to control the ESP-32's C3 Wifi chip. so now this new firmware makes an Wifi Network and hosts a web server. With faders to control the ligts. im just making simple firmware for now but im going to add more modes tommorrow.

---
title: "EndevourDMX"
author: "Lawri Darbyshire"
description: "This is a custom DMX Tranciver Platform Designed for both reciving and controling DMX (A Stage Lighting Protocol). Using an ESP32-C3 With Onboard WIFI"
created_at: "2025-07-15"
---

> [!WARNING]  
> Although i may seem it i am not drunk writeing it. i often was writing this journel very late at night and was very tired. coupled with Dyslexia this journal will be horribley misplet, appolegies in advance.

# Planing 

Along time ago - 14/07/25

(Ive been thinking about this for a long time.)

I often do stage lighting for both my Drama Class and School Events. i wanted something i could use to diagnose lights. give me live data and more.
in order to do this i looked at hooking up a Seed Studio XIAO ESP32-C3, that had built in wifi,  to a intercept a DMX signal and proccess it. so i researched more about this.
i discoverd that DMX Uses RS845 as it is based on MIDI witch is serial. So after a bit fo researching i setled on taking the DMX signal and
parseing it through a MAX845E Chip to allow it to be controled VIA the GPIO of the ESP32. i also then started to think about the formfactor
would it be a Square like the MYDMX 3 Box. but after being inspired by The Wolf on slacks Cable tester i settled on  a Rectangular Design. THE PCB is
very Compact and Functional only Allows as much room as needed for the components whilst still maintaining a nice Shape and design.  Later that day i began work on the PCB.

# The PCB

## Day 1 Of PCB DESIGN (3 hrs)

From Yesterday (14/07/25) I worked on the PCB. I already new the components i needed. and after finding diagrams online i managed to get the schematci done. it took alot of effort. 
i offten setup the TX side of things but completley forgot i would be RX aswell. After all these mistakes by the Night i had finished the Schematic

## Day 2 of PCB DESIGN (4 hrs)

Today (15/07/2025) I spent alot of time working on the PCB and geting all the components layed out. i made alot of progress working extra hard to get everything done quickly as of writeting its 30mins past midnight for me.
will probably go over this in the morning with a fresh mind and fix all the spelling mistakes. But after alot of work i completed the PCB. initialy started work on this yesterday as a personal project but eventualy i decided i would like do this for highway to get some more points so i havent got the kicad source files in here yet but will migrate them at a later date. 

## Notice

I Couldnt do much work due to me doing lighting for two events on the 17th and 18th of july

# Day 3 of PCB Design (3 hrs)

(18/07/2025) I Spent time changeing the width of all the traces to match the voltage. thanks to guidance from @Krunch i added a ground plane to remove the Unessary winding GND trace around my pcb. this also reduces noise from the 5V to Data Lines. as well as if theres a Surge on one of the lines then it will go to ground before any critical components. i also spent the later half of the evening researching components on JLC PCB's Library. I also thought some status lights would be nessacary for my PCB so i added 3 NeoPixels  That correspond to there silk screen icons above.

# Day 4 Of PCB Design (3 hrs)

(19/07/2025) Today i found all the parts in the JLC Parts List and put them on to a table on the READEME.md. I also uploaded my PCB Gerbers to JLC PCB and calculated the cost of my PCB. i decided Due to me handelign data i wanted EING for high performance and also wanted the PCB to look high quality so EING was the obvious choice. ive also recently liked white PCB so chose that.



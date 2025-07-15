---
title: "EndevourDMX"
author: "Lawri Darbyshire"
description: "This is a custom DMX Tranciver Platform Designed for both reciving and controling DMX (A Stage Lighting Protocol). Using an ESP32-C3 With Onboard WIFI"
created_at: "2025-07-15"
---
# Planing 

Along time ago - 15/07/25

(Ive been thinking about this for a long time.)

I often do stage lighting for both my Drama Class and School Events. i wanted something i could use to diagnose lights. give me live data and more.
in order to do this i looked at hooking up a Seed Studio XIAO ESP32-C3, that had built in wifi,  to a intercept a DMX signal and proccess it. so i researched more about this.
i discoverd that DMX Uses RS845 as it is based on MIDI witch is serial. So after a bit fo researching i setled on taking the DMX signal and
parseing it through a MAX845E Chip to allow it to be controled VIA the GPIO of the ESP32. i also then started to think about the formfactor
would it be a Square like the MYDMX 3 Box. but after being inspired by The Wolf on slacks Cable tester i settled on  a Rectangular Design. THE PCB is
very Compact and Functional only Allows as much room as needed for the components whilst still maintaining a nice Shape and design.  Later that day i began work on the PCB.

# The PCB

## Day 1 Of PCB DESIGN

From Yesterday (15/07/25) I worked on the PCB. I already new the components i needed. and after finding diagrams online i managed to get the schematci done. it took alot of effort. 
i offten setup the TX side of things but completley forgot i would be RX aswell. After all these mistakes by the Night i had finished the Schematic

## Day 2 of PCB DESIGN

Today (16/07/2025) I spent alot of time working on the PCB and geting all the components layed out. i made alot of progress working extra hard to get everything done quickly as of righting its 30mins past midnight for me.
will probably go over this in the morning with a fresh mind and fix all the spelling mistakes. But after alot of work i completed the PCB. initialy started work on this yesterday as a personal project but eventualy i decided i would like do this for highway to get some more points so i havent got the kicad source files in here yet but will migrate them at a later date.  Unfortunatley I am going to my mums tommorow and cant do any case design due to having a slower PC. so il probably be a while before making any changes. case design next. finaly.

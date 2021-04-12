[![LICENSE](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/mmistakes/minimal-mistakes/master/LICENSE)
[![Doxygen Action](https://github.com/theAgingApprentice/aaChip/actions/workflows/main.yml/badge.svg?event=push)](https://github.com/theAgingApprentice/aaChip/actions/workflows/main.yml)

# Microprcessor information class 

## Table of contents
* [Overview](#Overview)
* [Dependencies](#Dependencies)
* [Author(s)](#Author)
* [Development environment](#Development-environment)
* [Code documentation](#Code-documentation)
* [Microprocessor compatibility](#Microprocessor-compatibility)
* [Installing](#Installing)
* [Running tests](#Running-tests)
* [Releases](#Releases)
* [Acknowledgements](#Acknowledgements)

## Overview
This repository contains an Arduino class retrieves information about the 
microprocessor that is hosting the Arduino binary. It is part of a series 
of classes made to support a standard set of APIs for robot platforms. 

## Dependencies
This class depends on <a href="https://github.com/espressif/arduino-esp32">
Arduino.h</a> being present on your system. This is the Arduino core library
that comes bundled with PlatformIO.

## Author
Written by Old Squire for the Aging Apprentice.

## Development environment
This library was written using the following tools:
* [<img src="/img/vscLogo.png" width="15" height="15">](https://code.visualstudio.com/docs) 
Microsoft's Visual Studio Code source code editor. 
* [<img src="/img/pioLogo.png" width="20" height="15">](https://platformio.org/) 
PlatformIO plugin 
[embedded software](https://en.wikipedia.org/wiki/Embedded_software) application 
[IDE](https://en.wikipedia.org/wiki/Integrated_development_environment). 

<span style="color:green">suggestion:</span> If you are using the standard 
Arduino IDE for your project then you should probably avoid using this library 
unless you are comfortable navigating the subtle differences bewteen how your 
envoronment bahaves and how the environment used to create this library behaved.

## Code documentation
As part of our CI/CD software development process we use 
[Github Actions](https://docs.github.com/en/actions) to automatically generate up-to-date 
documentation via [Doxygen](https://www.doxygen.nl/index.html) every time the 
MAIN branch gets updated. The output from Doxygen is placed in the docs folder 
found in the root of the repository. This repository has an associated 
[Github Pages](https://pages.github.com/) site that contains all of the Doxygen
tags and assorted embedded comments from the code itself. This documentation 
can be viewed in your web browser [here]
(https://theagingapprentice.github.io/aaChip/html/).    

## Microprocessor compatibility
This library has only been tested on the [Adafruit Huzzah32](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather) 
development board containing the 
[Espressif ESP WROOM32 SOC](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf) 
featuring a pair of [Cadence/Xtensa®32-bit LX6 microprocessors](https://mirrobo.ru/wp-content/uploads/2016/11/Cadence_Tensillica_Xtensa_LX6_ds.pdf). 

## Installing
These instructions assume that you have [Git](https://git-scm.com/) installed on 
your computer.

1. Navigate to the Arduino project directory on your computer.
2. Issue the command `git clone https://github.com/theAgingApprentice/aaChip.git`.
3. Issue the command `git remote`. If you get back the response *origin* then 
you are all set. If you get a blank response back then you must set up an 
association to the remote repository by issuing the command `git remote add 
origin https://github.com/theAgingApprentice/aaChip.git` to set up the remote. 

## Running tests
As part of our CI/CD software development process we use the PlatformIO C/C++ 
unit testing tool called [unity](https://github.com/ThrowTheSwitch/Unity) to 
run the test script test_main.cpp located located in the test directory off 
the root of the repository. Full instrucitns on how to write and run these tests
can be found on the PlatformIO website 
[here](https://docs.platformio.org/en/latest/tutorials/espressif32/arduino_debugging_unit_testing.html#writing-unit-tests). 
We are currenty also loking at TravisCI to see if we wish to automate test 
scripts during checkin. 

## Releases
* We use the [SemVer](http://semver.org/) numbering scheme for our releases. 
* There is no stable release of this library at this time. 

## Examples
There is an 
[example sketch](https://github.com/theAgingApprentice/aaChip/blob/main/examples/callAllExample/callAllExample.cpp) 
that shows you how to use this class.   

## Acknowledgements
* The many folks involved in porting the Arduino libraries over to the ESP32 SOC.
* Adafruit for their excellent freely available tutorials.

[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor)
![Project](https://img.shields.io/badge/Project-STM8-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Automatic-Items-Counter-on-STM8-based-Conveyor
<strong>Solo Project: Automatic Items Counter on STM8-based Conveyor</strong><br><br>
The items are transported by the conveyor through the laser beam. At the same time, the system counts the number of items. The constant light emitted by the laser is used as a trigger in the sensor reading. The sensor will measure the high-low intensity of the incoming light. Under normal circumstances, the received light intensity is high. If the light intensity is low, it is certain that an object is passing by. The calculation results will be displayed on the OLED screen. This work may be useful for business people because it can increase efficiency in production.

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | STM8S103F3P6 |
| Code Editor | Arduino IDE |
| Programmer Tools | ST-Link/V2 |
| Driver | ST-Link |
| Programming Language | C/C++ |
| Arduino Library | ? |
| Sensor | LDR: Light Dependent Resistor (x1), KY-008: Laser Transmitter Module 5V (x1) |
| Display | OLED I2C (x1) |
| Other Components | Micro USB cable - USB type A (x1), Jumper cable (1 set), Adaptor DC 5V (x1), Breadboard (x1), Resistor (1 set) |

<br><br>

## Download & Install
1. Arduino IDE

   ```
   https://www.arduino.cc/en/software
   ```
<br>

2. ST-Link Driver

   ```
   https://bit.ly/STLink_Driver
   ```
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/b7624237-778d-44be-ab74-e561b94d51a1" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/0e428d27-71ab-4b51-9342-3b99c144187d" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img width="840" src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/67e0f08b-0e5c-4d1d-ab97-76a3ca3c4492" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open this project by clicking: ``` File ``` -> ``` Open ``` -> ``` auto_counter.ino ```.<br><br>
   
2. Fill in the ``` Additional Board Manager URLs ``` in Arduino IDE<br><br>
   • Method: click ``` File ``` -> ``` Preferences ``` -> enter the ``` Boards Manager Url ``` by copying the following link:
   
   ```
   https://github.com/tenbaht/sduino/raw/master/package_sduino_stm8_index.json
   ```
   
3. ``` Board Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Install ``` Sduino STM8 plain C core (non-C++) ```. Then selecting a Board by clicking: ``` Tools ``` -> ``` Board ``` -> ``` STM8S Boards ``` -> ``` STM8S103F3 Breakout Board ```.<br><br>
   
4. ``` Change Programmer ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` Programmer ``` -> ``` ST-Link/V2 ```.<br><br>
   
5. Before uploading the program please click: ``` Verify ```.<br><br>

6. If there is no error in the program code, then please click: ``` Upload ```.<br><br>

7. If there is still a problem when uploading the program, then try to check the ``` driver ``` / ``` wiring ``` / ``` others ``` section.

<br><br>

## Programmer Tools Setup: ST-Link/V2
<img src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/989711ed-6397-4819-aa6a-0fee6da782e8"><br><br>

<strong>Notes:</strong>

   • The single wire interface module or ``` SWIM ``` is basically used to communicate with the ``` STM8 ``` board.
   
   • You can see the wiring between the ``` ST-Link/V2 ``` and the ``` STM8 ``` board in the picture above.

   • Based on personal experience, the STM8 can only be programmed with ``` ST-Link ```.

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
<img src="" alt="auto_items_counter">

<br><br>

## Disclaimer
This application has been created by including third-party sources. Third parties here are service providers, whose services are in the form of libraries, frameworks, and others. I thank you very much for the service. It has proven to be very helpful and implementable.

<br><br>

## LICENSE
MIT License - Copyright © 2024 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.

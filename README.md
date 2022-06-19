# About this Fork

We are experimenting on LoRa using cheap TTGO Boards (V2.1-1.6). Unfortunately, these do not come with GPS included. So, Lukas DH2LM decided to add support for an external GPS Module to the already existing code.

# LoRa APRS Tracker

The LoRa APRS Tracker will work with very cheap hardware which you can buy from Amazon, eBay or AliExpress.
Try it out and be part of the APRS network.

![TTGO T-Beam](pics/Tracker.png)

## Supported boards

You can use one of the Lora32 boards:

* TTGO T-Beam V0.7 (433MHz SX1278)
* TTGO T-Beam V1 (433MHz SX1278)
* TTGO V2.1-1.6 (433MHz) using an **external GPS module** (Pins can be re-defined at src/pins.h, currently using Pin 25 for RX and Pin 2 for TX)

This boards cost around 20-30 Euros, they are very cheap but perfect for an LoRa iGate.
Keep in mind: you need a 433MHz version!

## Compiling and configuration

**There is a german [quick start](https://www.lora-aprs.info/docs/LoRa_APRS_iGate/quick-start-guide/) page! Take a look ;)**

**There is a french [quick start](http://www.f5kmy.fr/spip.php?article509) page! Take a look ;)**

### How to compile

The best success is to use PlatformIO (and it is the only platform where I can support you). 

* Go to [PlatformIO](https://platformio.org/) download and install the IDE. 
* If installed open the IDE, go to the left side and click on 'extensions' then search for 'PatformIO' and install.
* When installed click 'the alien head' on the left and choose import the project on the right.
* Just open the folder and you can compile the Firmware.

Alternatively, you can install using Visual Studio Code
* Install [Visual Studio Code](https://code.visualstudio.com/) (if you don't have already)
* Then, go to "extensions" and search "PlatformIO". Install the extension "PlatformIO IDE".
* Clone this repository and load it into Visual Studio Code
* Wait until PlatformIO is done configuring itself
* At the bottom bar you can choose which LoRa board you want to use. Make sure you choose the right one.
* Finally, connect your LoRa Board and click on "upload" (the right arrow on the bottom bar)

### Configuration

* You can find all nessesary settings to change for your configuration in **data/tracker.json**.
* The `button_tx` setting enables manual triggering of the beacon using the middle button on the T-Beam.
* To upload it to your board you have to do this via **Upload File System image** in PlatformIO!
* To find the 'Upload File System image' click the PlatformIO symbol (the little alien) on the left side, choose your configuration, click on 'Platform' and search for 'Upload File System image'.

## LoRa iGate

Look at my other project: a [LoRa iGate](https://github.com/peterus/LoRa_APRS_iGate)

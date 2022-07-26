# 3DSUSBController-USB-Device
3DS Homebrew to turn your 3DS into a USB game controller (Teensy code)  

Requires [3DSUSBController-Homebrew](https://github.com/jcrm1/3DSUSBController-Homebrew) and [3DSUSBController-Server](https://github.com/jcrm1/3DSUSBController-Server)  

To run, follow the instructions at [3DSUSBController-Homebrew](https://github.com/jcrm1/3DSUSBController-Homebrew)  

Compile and upload using Teensyduino ([Teensy](https://www.pjrc.com/teensy/))  
I used a Teensy++ 2.0 without issue

As of 7/25/22, this repo includes a sketch (3DSUSBAbsoluteMousePositioning.ino) to use your 3DS touchscreen as a touchscreen for your PC (similar to a graphics tablet)! However, because of limitations of the Teensy itself, this sketch only works on Teensy 3.x and LC boards ([source](https://www.pjrc.com/teensy/td_mouse.html)). Because I only own Teensy++ 2.0 boards, I cannot confirm if it actually works. I have confirmed that the code at least compiles without error. Please create an issue if you own one of these boards and it does not work for you.

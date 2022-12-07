# EverythingArduino
This is a complete repository of everything I learn while working with my arduino UNO. It contains files from arduino IDE with comments and a deep understanding of arduino UNO and its working. This repository is meant to show case my expertise and understanding in the field of microcontrollers. 

#  1. LED with push buttons

Now you would assume that buttons are simple entities, well they arent. If you try and apply buttons as a switch in real time it works just fine. However the moment you decide to sense the state of a push button and program an output with respect to it, you will fall into a pithole of getting weird values. 

In an ideal case a switch would have two states, on or off
|Input|State|
|:----|:----|
|0|LOW|
|1|HIIGH|

![Alternate Text](1.jpeg)



However if you read the values you get from a push button pin you are expected to get one of three states, assuming that on the push buttons one pin is connected to GND pin or arduino, when the button is not being pressed you expect to read HIGH or 1, when the button is pressed and the switch is closed you expect to read LOW or 0. However you never consider that the arduino pin reading the value is also sensitive to external noise from other pins or electronic compoenents. This creates a weird grey area where the input pin neither reads 0 or 1 and keeps toggling betweeen the two values at very high speeds.
|Input|State|
|:----|:----|
|0|LOW|
|1|HIIGH|
|idle|High impedence|




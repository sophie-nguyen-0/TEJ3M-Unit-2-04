"""
Created by: Sophie
Created on: Mar 2025
changes the color of a RGB LED
"""

import time
import board
import digitalio

#variables
PIN_5 = digitalio.DigitalInOut(board.GP5)
PIN_6 = digitalio.DigitalInOut(board.GP6)
PIN_7 = digitalio.DigitalInOut(board.GP7)
PIN_5.direction = digitalio.Direction.OUTPUT
PIN_6.direction = digitalio.Direction.OUTPUT
PIN_7.direction = digitalio.Direction.OUTPUT
blink_time = 1

while True:
    #turns LED off
    PIN_5.value = False
    PIN_6.value = False
    PIN_7.value = False
    time.sleep(blink_time)

    #green
    PIN_5.value = True
    PIN_6.value = False
    PIN_7.value = False
    time.sleep(blink_time)

    #blue
    PIN_5.value = False
    PIN_6.value = True
    PIN_7.value = False
    time.sleep(blink_time)

    #red
    PIN_5.value = False
    PIN_6.value = False
    PIN_7.value = True
    time.sleep(blink_time)

    #cyan
    PIN_5.value = True
    PIN_6.value = True
    PIN_7.value = False
    time.sleep(blink_time)

    #yellow
    PIN_5.value = True
    PIN_6.value = False
    PIN_7.value = True
    time.sleep(blink_time)

    #magenta
    PIN_5.value = False
    PIN_6.value = True
    PIN_7.value = True
    time.sleep(blink_time)

    #white
    PIN_5.value = True
    PIN_6.value = True
    PIN_7.value = True
    time.sleep(blink_time)


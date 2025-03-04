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


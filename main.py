"""
Created by: Sophie
Created on: Mar 2025
This module is a Micro:bit MicroPython program that changes the color of a RGB LED
"""

from microbit import *

display.clear
display.show(Image.HEART)

while True:
    if button_a.is_pressed():
        # red
        pin16.write_digital(1)
        display.scroll("Red")
        sleep(1000)
        pin16.write_digital(0)
        # green
        pin15.write_digital(1)
        display.scroll("green")
        sleep(1000)
        pin15.write_digital(0)
        # blue
        pin14.write_digital(1)
        display.scroll("blue")
        sleep(1000)
        # magenta
        pin16.write_digital(1)
        display.scroll("magenta")
        sleep(1000)
        pin16.write_digital(0)
        # cyan
        pin15.write_digital(1)
        display.scroll("cyan")
        sleep(1000)
        pin14.write_digital(0)
        # yellow
        pin16.write_digital(1)
        display.scroll("yellow")
        sleep(1000)
        # white
        pin14.write_digital(1)
        display.scroll("white")
        sleep(1000)
        pin16.write_digital(0)
        pin15.write_digital(0)
        pin14.write_digital(0)
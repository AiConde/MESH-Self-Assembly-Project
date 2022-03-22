#This file contains the controller for the magnet, i.e turning it on and off

Magnet_state = int(input("Enter '1' if you want to turn the Electromagnet off.Enter '0' if electromagnet stays on:"))

if Magnet_state == 1:
    print('Initializing motors')

else:
    print('Continuing Current Mission')


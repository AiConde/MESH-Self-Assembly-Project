import serial
import time

arduino = serial.Serial(port='COM9', baudrate=115200, timeout=.1)
def move_servo(x):
    arduino.write(x)
    time.sleep(0.05)
    data = arduino.readline()
    return data

while True:
    # num = input("Enter a number: ") # Taking input from user
    num = 45
    new_pos = move_servo(num)
    print(new_pos) # printing the value


from machine import I2C, Pin
import utime

sda = Pin(0)
scl = Pin(1)
i2c = I2C(0, sda=sda, scl=scl, freq=100000)

slave_addr = 0x08
response_data = bytearray([8, 7, 6, 5, 4, 3, 2, 1])

while True:
    if i2c.is_ready(slave_addr):
        received = i2c.readfrom(slave_addr, 8)
        print('Received data:', received)
        i2c.writeto(slave_addr, response_data)
        print('Sent data:', response_data)
    utime.sleep(0.1)

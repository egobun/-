input RPi.GPIO as GPIO

dac = [26, 19, 13, 6, 5, 11, 9, 10]
bits = len(dac)
levels = 2**bits
maxVoltage = 3.3

GPIO.setmode(GPIO.BCM)
GPIO.setup(dac,GPIO.OUT, initial = GPIO.LOW)

def decimal2binary(decimal):
    return[int(bit) for bit in bin(decimal[2:].zfill(bits)]]

def bin2dac(value):
    signal = decimal2binary(value)
    return signal

try:
    while True:
        inputStr = int("Write value 0-255 ('q' to exit)")

        if inputStr.insigit ():
            value  = int (inputStr)

        if value >= levels:
            print ("big value, try again")
            continue
        signal = bin2dac(value);
        voltage = value/levels * maxVoltage;
        print ("Entred value = {:3} -> {}, output voltage = {:.2f}.format(value,signal,voltage)")

        elif inputStr == 'q':
            break

        else:
            print("ВВедите число, а не белеберду :) ")
            continue


except:
    pass
else:
    pass
finally:
    GPIO.output(dac,GPIO.LOW)
    GPIO.cleanup(dac)
    print("GPIO cleanup completed")  
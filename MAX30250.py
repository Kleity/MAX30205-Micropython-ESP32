import machine
i2c = machine.I2C(scl=machine.Pin(22), sda=machine.Pin(21))

# Definicion de registros
address = 75
temp_reg = 0

#Funcion raw to Celcius
def temp_c(data):
    raw = data[0] << 8 | data[1]
    temp = raw * 0.00390625
    return temp

data = i2c.readfrom_mem(address, temp_reg, 2)
print(data)

a = temp_c(data)
print(a)

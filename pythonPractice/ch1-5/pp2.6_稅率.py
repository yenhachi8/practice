income = int(input("Input income: "))
if income > 4090000:
    rate = 0.4
    diff = 721100
elif income > 2180000:
    rate = 0.3
    diff = 312100
elif income > 1090000:
    rate = 0.21
    diff = 115900
elif income > 410000:
    rate = 0.13
    diff = 28700
else:
    rate = 0.06
    diff = 0
tax = (income * rate) - diff

print('tax= '+str(tax))

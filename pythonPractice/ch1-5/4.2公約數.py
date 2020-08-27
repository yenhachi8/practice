m = int(input("Input m"))
n = int(input("Input n"))
x = m
y = n
while x != y:
    if x > y:
        x = x - y
    elif y > x:
        y = y - x

print(x)

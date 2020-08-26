max = 0
i = 0
N = int(input("Input N"))

for i in range(N):
    tmp = int(input("Input tmp:"))
    if tmp > max:
        max = tmp

print("Max="+str(max))

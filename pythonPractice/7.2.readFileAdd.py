sum = 0
alen = 0
f = open("add.txt", "r")
print("add.txt: ")

for line in f:
    sum = sum+int(line)
    print(int(line))
    alen = alen + 1

print("Average: ", str(sum/alen))
f.close()

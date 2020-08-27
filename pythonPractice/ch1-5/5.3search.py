flag = 0
A = [0 for i in range(10)]
for i in range(10):
    tmp = int(input("Input tmp"))
    A[i] = tmp

x = int(input("Input x to search:"))
for i in range(10):
    if (x == A[i]):
        print("找到了A[%d]" % i)
        flag = 1
if (flag != 1):
    print("Not found!")

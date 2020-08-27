A = [0 for i in range(10)]
for i in range(10):
    tmp = int(input("Input Num:"))
    A[i] = tmp

MAX = 0
for i in range(10):
    if A[i] > MAX:
        MAX = A[i]
        tag = i

print("Max tag=%d, value= %d" % (tag+1, MAX))

A = [0 for i in range(10)]
print(A)
for i in range(10):
    tmp = int(input("input tmp"))
    A[i] = tmp

x = 0
for i in range(10):
    x += A[i]

x = x / 10
print(x)

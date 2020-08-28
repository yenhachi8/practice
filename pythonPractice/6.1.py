def input_array(x, n):
    print("Read array")
    i = 0
    while (i < n):
        input_num = int(input("Input number:"))
        x[i] = input_num
        i = i + 1


num = int(input("Input Number:"))
A = [0 for i in range(10)]
input_array(A, 5)
for i in range(10):
    print("data=%d" % A[i], end=" ")
    # print(A[i])

def catch_date(X, day):
    print("Please input date", day, end="")
    temp = (input("Input date"))
    date = temp.split("/")
    for i in range(3):
        X[i] = int(date[i])


def compare(A, B):
    result = 0
    i = 2
    while result == 0:
        if A[i] > B[i]:
            print("A在B之後")
            result = 1
        elif B[i] > A[i]:
            print("Ｂ在A之後")
            result = 1
        elif i == 0:
            print("日期相同")
            result = 1
        else:
            i = i-1


A = [0 for i in range(3)]
B = [0 for i in range(3)]
catch_date(A, 'A')
catch_date(B, 'B')
compare(A, B)

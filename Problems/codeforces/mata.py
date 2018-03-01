A = (int)(raw_input())
B = (int)(raw_input())
N = (int)(raw_input())

while A >= N:
    if A <= B and B <= N:
        B = (2*A)+1
        print(A)
        print(B)
        print(N)
        A = B + 1
    else:
        B = A + 1
        N = B - (2*A) + 1
    print(A)
    print(B)
    print(N)
    A = A + 1
    N = N - B + 2
print(A)
print(B)
print(N)
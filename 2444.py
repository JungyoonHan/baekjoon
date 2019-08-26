n = int(input())
for i in range(1, n+1):
    print(" "*int(n-i) + "*"*(2*i-1))
for i in range(1, n):
    print(" "*i + "*"*(2*int(n-i)-1))
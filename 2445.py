n = int(input())
for i in range(1, n+1):
    print("*"*i+" "*(2*int(n-i))+"*"*i)
for i in range(1, n):
    print("*"*int(n-i)+" "*(2*i)+"*"*int(n-i))
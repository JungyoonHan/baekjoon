n = int(input())
for i in range(n):
    print(" "*i+"*"*(2*int(n-i)-1))
for i in range(1,n):
    print(" "*(int(n-i)-1)+"*"*(2*i+1))
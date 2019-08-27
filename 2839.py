n = int(input())
sum = 0
while n > 0:
    if n % 5 == 0:
        sum += 1
        n -= 5
    elif n % 3 == 0:
        sum += 1
        n -= 3
    elif n > 5 :
        n -= 5
        sum += 1
    else:
        sum = -1
        break
print(sum)
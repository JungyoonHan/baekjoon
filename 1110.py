n = input()
count = 0
ans = n
while True:
    if len(n) == 1:
        n = '0'+ n
    sum = int(n[0]) + int(n[1])
    sum = sum%10
    count += 1
    new = n[1] + str(sum)
    if int(new) == int(ans):
        break
    else:
        n = new
print(count)
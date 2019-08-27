a = int(input())
b = int(input())
c = int(input())
answer = a*b*c
answer = str(answer)
arr = [0,0,0,0,0,0,0,0,0,0]
for i in range(len(answer)):
    for j in range(11):
        if j == int(answer[i]):
            arr[j] += 1
for k in range(len(arr)):
    print(arr[k])
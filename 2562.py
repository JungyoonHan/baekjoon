max = 0
max_count = 0
for i in range(9):
    n = int(input())
    if n >= max:
        max = n
        max_count = i+1
print(max)
print(max_count)
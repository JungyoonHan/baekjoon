n = input()
line = int(len(n)/10)+1
for i in range(line):
    print(n[0:10])
    n = n[10:]
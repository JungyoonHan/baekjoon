month, date = input().split()
month = int(month)
date = int(date)
day = 0
for i in range(1,month):
    if i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10:
        day += 31
    elif i == 4 or i == 6 or i == 9 or i == 11:
        day += 30
    elif i == 2:
        day += 28
day += date
if day % 7 == 1:
    print('MON')
elif day % 7 == 2:
    print('TUE')
elif day % 7 == 3:
    print('WED')
elif day % 7 == 4:
    print('THU')
elif day % 7 == 5:
    print('FRI')
elif day % 7 == 6:
    print('SAT')
elif day % 7 == 0:
    print('SUN')
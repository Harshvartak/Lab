sum1=0
for i in range(1,5):
    if(i!=4):
        print(' ',end='')
    for j in range(4,i,-1):
        print('  ',end='')
    sum1=sum1+i
    sum2=sum1
    for k in range(0,i):
        print(sum2,end=' ')
        sum2=sum2-1
    print()

t=int(input())
for _ in range(t):
    a,b,m=map(int,input().split())
    count=0
    for i in range(a,b+1):
        if i%m==0:
            count+=1
    print(count)
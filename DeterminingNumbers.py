from collections import Counter 

n=int(input())
arr=list(map(int,input().split()))
a=Counter(arr)
ans=[]
for b,c in a.items():
    if c==1:
        ans.append(b)

ans.sort()
print(*ans)

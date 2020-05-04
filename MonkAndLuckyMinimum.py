t=int(input())
from collections import Counter 
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    p=Counter(l)
    x=min(l)
    if p[x]%2==0:
        print('Unlucky')
    else:
        print('Lucky')
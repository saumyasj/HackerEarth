
finalSum=sum([i for i in range(1,1000001)])
t=int(input())
l=[]
for _ in range(t):
    x,y=map(int,input().split())
    l.append([x,y])
    #taking inputs of ranges 
l=sorted(l)
for i in range(len(l)-1):
    if(l[i+1][0]<=l[i][1]):
        l[i+1][0]=l[i][1]+1
        #remove overlapping ranges 
for i in range(len(l)):
    if(l[i][0]>l[i][1]):
        l[i]=0
        #decreasing ranges removed 
for i in range(len(l)):
    if (l[i]!=0):
        upperRangeSum=(l[i][1]*(l[i][1]+1))//2 
        lowerRangeSum=(l[i][0]*(l[i][0]+1))//2
        #using n(n+1)/2 sum formula for each range
        currentNumberSum=upperRangeSum-lowerRangeSum+l[i][0]
        finalSum-=currentNumberSum
print(finalSum)

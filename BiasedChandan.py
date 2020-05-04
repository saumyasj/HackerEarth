n=int(input())
x=[]
for i in range(n):
    rating=int(input())
    if rating ==0:
        if len(x)>0:
            x.pop()
    else:
        x.append(rating)
print(sum(x))
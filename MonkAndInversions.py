t=int(input())
for _ in range(t):
    n=int(input())
    matrix=[]
    for i in range(n):
        a=list(map(int,input().split()))
        matrix.append(a)
        
    count=0;
    for i in range(n):
        for j in range(n):
            for p in range(n):
                for q in range(n):
                    if i<=p and j<=q:
                        if matrix[i][j]>matrix[p][q]:
                            count+=1
    print(count)
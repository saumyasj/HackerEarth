n=int(input())
s=input()
l=list(s)
stack=[]
stack.append(l[0])
for i in range(1,len(l)):
    stack.append(l[i])
    try:
        if stack[-1] and stack[-2]:
            if stack[-1] ==stack[-2]:
                stack.pop()
                #print(stack)
                stack.pop()
                #print(stack)
    except:
        pass
print(len(stack))
print(''.join(stack))
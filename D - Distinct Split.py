    k=int(input())
    for j in range(k):
        n = int(input())
        s = input()
        i=0
        maxi=len(set(s))
        while(i<n):
            v=s[:i+1]
            l=s[i+1:]
            x=len(set(v))+len(set(l))
            if x >=maxi:
                maxi = x
            i+=1
        print(maxi)
     

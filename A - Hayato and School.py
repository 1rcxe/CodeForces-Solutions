    t = int(input())
     
    for l in range(t):
        n = int(input())
        a = [int(i) for i in input().split()]
        i,j,k = 0,1,2
        x = [i for i in a if i%2!=0]
        f = 0
        if len(x) == 0 or (len(x)==2 and n==3):
            print("NO")
        else:
            for i in range(n):
                for j in range(i+1,n):
                    for k in range(j+1,n):
                        if (a[i] + a[j] + a[k]) % 2 :
                            print(f"YES\n{i+1} {j+1} {k+1}")
                            f = 1
                            break
                    if f == 1:break
                if f == 1:break

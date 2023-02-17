    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    int main(){
        int t ;
        cin >> t;
        while(t--){
          int a,b;
          cin>>a;
          ll allsum=0,msum=1e10,num=0;
          for(int x=0;x<a;x++)
          {
            cin>>b;
            if(b<0)
            {
                num++;
            }
            allsum+=abs(b);
            if(msum>abs(b))msum=abs(b);
          }
          if(num==0||num%2==0)
         {
             cout<<allsum;
         }
         else cout<<allsum - 2*msum;
         cout<<"\n";
     
     
        }
     
    }

    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    int main(){
        int t;
        cin >>t;
        while(t--){
            ll c ,n;
            cin >> n >> c ;
            vector<ll> v(n);
            int nb = 0 ;
            for (int i = 0 ;i <n ; i++){
                ll x;
                cin >> x;
                v[i]=x+i+1;
            }
            sort(v.begin(),v.end());
            int i = 0;
            c=c-v[i];
            while (c >= 0 && i < n){
                nb++;
                i++;
                c-=v[i];
     
            }
     
            cout << nb <<endl;
        }
     
     
    }

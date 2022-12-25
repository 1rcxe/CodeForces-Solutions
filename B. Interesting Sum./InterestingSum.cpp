    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    using namespace std;
     
    void solve(){
        long long n,sum;
        cin >> n ;
        vector<long long> v(n);
        for (int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        sum = v[n-1]-v[0]+v[n-2]-v[1];
        cout << sum << endl;
        
    }
     
     
     
     
     
     
     
    int main (){
        fast;
        int t;
        cin >> t ; 
        while (t--)
        solve();
    }

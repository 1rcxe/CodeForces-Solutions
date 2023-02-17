    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    void solve(){
        int n, ans = 0;
    		cin >> n;
    		vector<int>a(n);
    		for (int& a : a)cin >> a;
    		sort(a.begin(), a.end());
    		map<int, int>ma;
    		for (int& a : a)
    			if (!ma[a - 1])
    				ans++, ma[a]++;
    			else ma[a - 1]--, ma[a]++;
    		cout << ans << endl;
    }
     
    int main(){
        int t ;
        cin >> t;
        while(t--){
            solve();
                }
     
    }

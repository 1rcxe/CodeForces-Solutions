

    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>s1,s2;
        vector<int>last(26,-1);
        for(int i=0;i<s.size();i++)
        {
            last[s[i]-'a'] = i;
            s1.insert(s[i]);
        }
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
        if(last[s[i]-'a'] == i)
            s1.erase(s[i]);
        s2.insert(s[i]);
        int val = s1.size()+s2.size();
        ans = max(ans,val);
            }
        cout<<ans<<endl;
        }
    int main(){
        fast
        int t =1 ;
        cin >> t;
        while(t--){
            solve();
        }
     
    }

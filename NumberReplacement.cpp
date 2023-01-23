#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main(){
    int t ;
    cin >> t ;
    while(t--){
        bool flag = true;
        int n ;
        cin >> n ;
        map<int,char> mp;
        vector<int> v ;
        for (int i = 0 ; i<n ; i++){
            int x ;
            cin >> x ;
            v.push_back(x);
            mp[v[i]]=' ';
        }
        string s ;
        cin >> s ;
        for (int i=0 ; i < n ; i++){
            if (mp[v[i]]==' '){
                mp[v[i]]=s[i];
            }
            else{
                if (mp[v[i]]!=s[i]){
                    flag=false;
                    break;
                }
            }

        }
        if (flag){
        cout << "YES" << '\n';
        }
        else{
        cout << "NO" << '\n';}

    }



}

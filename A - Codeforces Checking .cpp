    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    int main(){
        int t;
        cin >>t;
        while(t--){
            char c;
            int flag = 1;
            cin >> c ;
            string s ="codeforces";
            for (int i = 0 ;i < s.length();i++){
                if (s[i]==c){
                    cout << "YES" <<endl;
                    flag = 0 ;
                    break;
                }
            }
            if (flag == 1){
                cout << "NO" <<endl;
            }
     
        }
    }

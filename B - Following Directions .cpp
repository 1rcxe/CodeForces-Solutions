    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
    int main(){
        int t;
        cin >> t;
        while (t--){
            int n ;
            cin >> n ;
            string s ;
            int x = 0;
            int y = 0;
            cin >> s;
            int flag = 1;
            for (int i = 0 ;i < n ; i++){
                if (s[i]=='U'){
                    y++;
                }
                if (s[i]=='D'){
                    y--;
                }
                if (s[i]=='R'){
                    x++;
                }
                if (s[i]=='L'){
                    x--;
                }
                if (x==1 && y==1){
                    cout << "YES" <<endl;
                    flag = 0;
                    break;
     
                }
                }
                if (flag == 1){
                    cout << "NO" <<endl;
                }
     
     
        }
    }

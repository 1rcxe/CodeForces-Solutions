    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    int main(){
        int n ;
        cin >> n ;
        string str ;
        cin >> str;
        cout << str;
        int t,s;
        cout << 1;
        for(int i=n-2;i>0;i--){
            cout << 1;
            if (str[i]=='L'){
                s=i+1;t=i+1;
                while (str[i-1]=='L'){
                    t--;
                }
                break;
            }
            else if(str[i]=='R'){
                s=i+1;t=i+1;
                while(str[i-1]=='R'){
                    s--;
                }
                break;
            }
        }
        cout << s << ' ' << t <<'\n';
     
     
    }

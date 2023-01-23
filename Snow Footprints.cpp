#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

int main(){
    int n ;
    string str ;
    cin >> n >> str;
    int t,s;
    for(int i=n-2;i>0;i--){
        if (str[i]!='.'){
            if (char(str[i])=='L'){
                s=i+1;t=i+2;
                while (str[i]=='L'){
                    t--;
                    i--;
            }
                t--;
        }
            else {
                s=i+2;t=i+2;
                while(str[i]=='R'){
                    s--;
                    i--;
            }
        }
        break;
    }

    }
    cout << s << ' ' << t <<'\n';


}

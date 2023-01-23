
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

int main(){
    int  n , x = 0 ;
    cin >> n ;
    while(n--){
        string s ;
        cin >> s;
        if (s[0]=='+'){
            ++x;
        }
        else if (s[0]=='-'){
            --x;
        }
        else if (s[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }

    cout << x <<endl;

}

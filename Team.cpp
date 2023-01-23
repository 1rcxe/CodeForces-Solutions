#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
    fast ;
    int solved=0;
    int n;
    cin >> n ;
    while (n--){
        int sum=0,x,b=3;
        while(b--){
            cin >> x;
            sum+=x;
        }
        if (sum>=2){
            solved +=1;
        }
    }
    cout << solved;
}

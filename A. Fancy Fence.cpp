#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

int main(){
    int n ;
    cin >> n ;
    while(n--){
        int a ;
        cin >> a ;
        double b = 180 , c = 3 ;
        while (a > b/c){
            c++;
            b = 180*(c-2);

        }
        if (a==b/c){
            cout <<"YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }

    }
}

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;



int fact(int num ){

    if(num==0){
return 1;}
else{
    return(num*fact(num-1));}

}
void solve(){
    int n,k;
    cin >> n >> k ;
    int f= n-k+1;
    vector<int> vi;
    vector<int> ci;
    for (int j = 0 ; j < f ; j++){
        for (int i = j+1 ;i <=f+j  ; i++ ){
            int p1 = fact(n)/fact(n-i);
            int p2 = fact(n+1)/fact(n-i-1);
            int p3 = fact(n+2)/fact(n-i-2);
            int x = max(max(p1,p2) , p3)+min(min(p1,p2) , p3);
            cout << x << '\n';
            ci.push_back(x);
        }

    }

}


int main(){
    int t ;
    cin >> t;
    while(t--){
    solve();
    }

}

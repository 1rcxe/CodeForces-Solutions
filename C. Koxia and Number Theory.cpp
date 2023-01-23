#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;}
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);}

ll isprime(int n){
    for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
    return n!=1;
    }

void solve(){
    int n ;
    cin >> n ;
    vector<int> vi;
    vector<int> vm;
    for (int i = 0 ; i < n ; i++){
        int a ;
        cin >> a;
        vi.push_back(a);
        vm.push_back(a);
    }
    sort(vi.begin(),vi.end());
    bool hasDuplicates = adjacent_find(vi.begin(), vi.end()) != vi.end();
    bool flag=true;
    if (hasDuplicates){
    flag=false;}
    else{
    for (int i = 0 ; i < n-1 ; i++){
        if (!isprime(vm[i])){
            flag=false;
            break;
        }
    }

    }
    if (flag){
    cout << "YES" << '\n';}
    else{
    cout << "NO" << '\n';}

}

int main(){
    int t ;
    cin >> t ;
    while(t--){
    solve();
    }


}

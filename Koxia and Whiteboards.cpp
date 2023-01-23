#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;


void solve(){
    int n,m;
    cin >> n >> m ;
    vector<int> vn;
    vector<int> vm;
    map<int,int> mp;
    for (int i = 0 ; i < n ; i++){
        int a ;
        cin >> a;
        vn.push_back(a);
    }
    for (int i = 0 ; i < m ; i ++ ){
        int a ;
        cin >> a;
        vm.push_back(a);

    }

    ll sum = 0;
    if (n>=m){
        sort(vn.rbegin(),vn.rend());
        sort(vm.rbegin(),vm.rend());
        for(int i = 0 ; i<m ; i++){
            sum=sum+vm[i];
        }
        for (int i = 0 ; i<n-m ; i++){

            sum=sum+vn[i];
        }
    }
    else {
        sum=vm[m-1];
        vm.pop_back();
        sort(vm.rbegin(),vm.rend());
        sort(vn.rbegin(),vn.rend());
        for(int i = 0 ; i<n-1 ; i++){
            if (vm[i]>vn[i]){sum=sum+vm[i];}
            else{sum=sum+vn[i];}
            }

            }
    cout << sum << '\n';
}

int main (){
    int t ;
    cin >> t ;
    while (t--){
    solve();}


}

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

int main(){
    int n,k;
    cin >> n >> k ; cin.ignore();
    vector<int> v(n*2+1);
    for(int i = 0 ; i < n*2+1 ; i++){
        cin >> v[i];
    }
    int i=2*n-1;
    while(k!=0){
        if (i%2==1){
            if (v[i-1] < v[i]-1 && v[i]-1 > v[i+1]){
            v[i]--;
            k--;}
        }
        i--;
    }
    for(int i = 0 ; i < n*2+1 ; i++){
        cout << v[i] << ' ';
        continue;
    }
    cout << endl;
}

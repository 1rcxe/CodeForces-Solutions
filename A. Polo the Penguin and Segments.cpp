
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

int main(){
    int n , k ;
    cin >> n >> k ;
    int nb = 0 ;
    vector<pair <int, int>> v(n);
    for(int i =0  ; i < n ; i++){
        cin >> v[i].first;
        cin >> v[i].second;

        nb=nb+abs(v[i].second-v[i].first)+1;
        cout << nb <<endl;
    }
    int cnt = 0 ;
    int j = n-1;
    while (nb%k!=0 && j > 0 && v[j].first-1 > v[j-1].first){
        cnt++;
        v[j].first--;
        nb++;
        j--;
    }
    while(nb%k!=0){
            v[0].first--;
            nb++;
            cnt++;
    }
    while(nb%k!=0){
            v[0].second++;
            nb++;
            cnt++;
    }

    cout << cnt <<endl;
}

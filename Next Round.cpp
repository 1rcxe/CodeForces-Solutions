#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

int main (){
    fast
    int n , k;
    cin >> n >> k ;
    vector<int> vi;
    for(int i=0 ; i<n ; i++){
        int a ;
        cin >> a ;
        vi.push_back(a);
    }
    int score=vi[k-1],nb=0;
    for (int i=0 ; i<n ; i++){
        if (vi[i]>0 && vi[i]>=score){
            nb++;
        }
    }
    cout << nb << '\n';


}

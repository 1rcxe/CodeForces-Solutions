#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
    int n , nb=0 , x , y;
    vector<vector<int>> v;
    cin >> n ;
    int cases = n ;
    while (cases--){
        vector <int> p;
        cin >> x >> y ;
        p={x,y};
        v.push_back(p);
    }
    for (int i=0 ; i<n; i ++){
            int j = 0 ;
            while (j<n){
            if (j!=i)
            {
                if (v[i][0]==v[j][1]){
                    nb++;
                    }
                }
                j++;
            }
    }
cout << nb ;


}

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main (){
    vector <int> calories;
    string s ;
    int n = 4 ,nb=0;
    while(n--){
        int x ;
        cin >> x;
        calories.push_back(x);
    }
    cin >> s ;
    for(int i = 0 ; i < s.size() ; i ++){
        nb+=calories[int(s[i])-49];

    }

    cout << nb;





}

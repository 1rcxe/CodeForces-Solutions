#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    int n,nb=0;
    string s;
    cin >> n ;
    cin >> s ;
    for (int i=0 ; i < n ;i ++){
        if (s[i]==s[i+1]){
            nb++;
        }

    }
    cout << nb ;



}

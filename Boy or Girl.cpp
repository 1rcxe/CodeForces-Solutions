#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main(){
    string s;
    int sum;
    cin >> s ;
    map<char,int>mp;
    for (int i=0;i<s.length();i++){
        mp[char(s[i])]++;
    }
    for (int i=0;i<s.length();i++){
        if(mp[char(s[i])]>=1){
            mp[char(s[i])]=0;
            sum++;

        }
        }
    if (sum%2==0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }


}

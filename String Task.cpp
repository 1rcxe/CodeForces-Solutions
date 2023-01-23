#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;
;
int main(){
    string s , str;
    str=".";
    cin >> s ;
    for(int i =0 ; i < s.size() ; i++){
        if ((toupper(s[i])!='A'&&toupper(s[i])!='O'&&toupper(s[i])!='Y'&&toupper(s[i])!='E'&&toupper(s[i])!='U'&&toupper(s[i])!='I'))
        {
            char c=tolower(s[i]);
            str=str+c;
            str=str+'.';
        }
        }
    cout << str.substr(0,str.size()-1) <<endl;



}

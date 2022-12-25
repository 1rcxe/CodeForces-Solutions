#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main (){
        string s ; cin >> s;
        int counter_uppercase=0 , counter_lowercase=0;
        for (int i = 0 ; i < s.length() ; i ++){
            if (s[i]>='a' && s[i]<='z'){
                counter_lowercase+=1;
            }
            else{
                counter_uppercase+=1;
            }
        }
        if (counter_lowercase>=counter_uppercase){
            for (int i=0 ; i < s.length() ; i++){
            s[i]=tolower(s[i]);}
        }
        else{
           for (int i=0 ; i < s.length() ; i++){
            s[i]=toupper(s[i]);}
        }
 
        cout << s ;
    }
 
 

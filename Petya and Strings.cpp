#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin >> s >> s1 ;

    int sum1=0,sum2=0;
    for (int i = 0 ; i < s.length() ; i ++ ){
        s[i]=tolower(s[i]);
        s1[i]=tolower(s1[i]);
    }
    if (s.compare(s1)==0){
    cout<<0;
    }
    else if (s.compare(s1)<0){
        cout<< -1;
    }
    else if (s.compare(s1)>0){
    cout << 1 ;
    }

}

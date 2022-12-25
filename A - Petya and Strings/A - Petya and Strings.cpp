    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        string s,s1;
        cin >> s >> s1 ;
     
        int sum1=0,sum2=0,i = s.length();
        while (i--){
            sum1+=tolower(s[i]);
            sum2+=tolower(s1[i]);
        }
        if (sum1>sum2){cout<<1;}
        else if (sum1<sum2){cout<<-1;}
        else{cout << 0 ;}
     
    }

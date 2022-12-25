    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    using namespace std;
     
    int main(){
        string t,s;
        cin >> s >> t ;
        int i=0;
        for (int j = 0 ; j < t.length();j++){
            if (s[i]==t[j]){
                i++;
            }
     
        }
        cout << i+1;
     
     
     
    }

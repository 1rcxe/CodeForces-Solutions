    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    int main(){
     
        int t ;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            string s ;
            cin >> s;
            int shortest = n ;
            int j = n-1 , i = 0 ;
            while (((s[j]=='1' && s[i]=='0') || (s[i]=='1' && s[j]=='0')) && j>i){
                j--;
                i++;
                shortest -=2;
            }
            cout<<shortest <<endl;
        }
    }


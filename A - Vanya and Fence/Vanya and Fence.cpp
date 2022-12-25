    #include <bits/stdc++.h>
    #define PB push_back
    #define MP make_pair
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
     
    ll solve (int h){
            int a;
            cin >> a ;
            if (a<=h){
                return 1;
                }
            else {
                return 2;
                }
        }
     
     
    int main(){
        int n,h,sum=0,a;
        cin >> n ;
        cin >> h;
        while (n--)
            sum+=solve(h);
        cout << sum ;
    }

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        int sum = 0 ;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ;i < n ;i++){
            cin >> a[i];
            sum+=a[i];
 
        }
        int flag = 0 ;
        for (int i = 0 ; i < n-1 ;i++){
            if (a[i]==a[i+1] && a[i]==-1){
                sum+=4;
                flag=1;
                break;
 
            }
        }
        if (!flag){
            int c=count(a.begin(), a.end(), -1);
            if (c==0){
                sum-=4;
            }
 
        }
        cout << sum <<endl;
 
 
    }
 
 
}

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m , d;
        cin >> n >> m >> d ;
        map<int,int> p;
        for(int i = 0 ; i < n ; i ++ ){
            int x ;
            cin >> x ;
            p[x]=i+1;
            }
        vector<int> a(m);
        for (int i = 0 ; i< m ; i++){
            cin >> a[i];
        }
        bool flag = true;
        for(int i = 0 ; i < m-1 ; i ++){
            if (p[a[i]] > p[a[i+1]] || (p[a[i]]+d < p[a[i+1]])){
                flag = false;
                break;
            }
        }
        if (flag){
            int s = n;
            for(int i = 0 ; i < m-1 ; i ++){
                if (p[a[i+1]]-p[a[i]]<s){
                    s=p[a[i+1]]-p[a[i]];
                }
            }
            int s1 = n ;
            for(int i = 0 ; i < m-1 ; i ++){
                int diff = p[a[i]]+d-p[a[i+1]];
                if (n-p[a[i+1]]+p[a[i]]-1>diff && diff+1<s1){
                    s1 = diff + 1 ;
                }
 
            }
            cout << min(s,s1) <<endl;
        }
        else{
            cout << 0 <<endl;
        }
 
 
 
    }
 
 
 
}

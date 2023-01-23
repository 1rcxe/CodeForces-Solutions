#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

int main (){
    int n,x;
    cin >> n >> x ;
    bool flag= true;
    vector<int>r(n),l(n);
    for(int i = 0 ; i < n ; i++){
            cin >> r[i] >> l[i];
        if (x == r[i]||x==l[i]||x==7-r[i]||x==7-l[i])
        {
            flag=false;
        }
        x=7-x;
    }
    if (flag){
        cout<<"YES"<<endl;

    }
    else{
        cout << "NO" << endl;
    }




}

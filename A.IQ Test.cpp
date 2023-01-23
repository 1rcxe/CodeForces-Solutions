#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;


int main(){
    vector<string> v(4);
    for(int i = 0 ;  i < 4 ; i++){
        cin >> v[i];
    }
    bool flag = false;
    for(int i = 0 ; i < 3 ; i ++){

        for (int j = 0  ; j <3  ;j++){
            string s="" ;
            s=s+v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1];
            int nb = count(s.begin(), s.end(), '#');
            if (nb==0 || nb==1 || nb== 3 || nb ==4){
                flag = true;
                break;
            }
            if (flag){
                break;
            }
        }

    }
    if (flag){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }


}

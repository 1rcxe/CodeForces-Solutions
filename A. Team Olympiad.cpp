#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;}
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);}

ll isprime(int n){
    for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
    return n!=1;
    }
int main(){
    int n ;
    cin >> n ;
    vector<int> vi;
    map<int,int> mp;
   for(int i = 0 ; i < n ; i++){
        int x;
        cin >>x ;
        vi.push_back(x);
        mp[x]++;
    }
    int minimum=n;
    for(int i =1 ; i<4 ; i++){
        if (mp[i]<minimum){
        minimum=mp[i];}
    }
    cout << minimum <<endl;
    while(minimum--){
        int p,m,pe;
        vector<int> save(3);
        p=m=pe=0;
        for(int i =0 ; i < vi.size(); i++){
            if (vi[i]==1 && p==0){
                save[0]=i+1;
                p++;
                vi[i]=0;
            }
            if (vi[i]==2 && m==0){
                save[1]=i+1;
                m++;
                vi[i]=0;
            }
            if(vi[i]==3 && pe==0){
                save[2]=i+1;
                pe++;
                vi[i]=0;
            }
        }
        for(int i = 0 ; i < 3 ;i++){
            cout << save[i] << ' ';
        }
        cout << endl;
    }

}

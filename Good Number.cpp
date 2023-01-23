
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;}
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);}

ll isprime(int n){
    for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
    return n!=1;}

int main(){
    fast
    int t , n , nb = 0;
    cin >> t >> n ;
    for(int i = 0 ; i < t ; i++){
        vector <int> vi;
        int a ;
        cin >> a ;
        if (a==0){
            vi.push_back(0);
        }
        while(a!=0){
            vi.push_back(a%10);
            a=a/10;
        }
        sort(vi.begin(),vi.end());
        int sizes=vi.size();
        int j = sizes-1 ,current=n;
        if (sizes>n){
            while(j>=0 && current>=0){
                if (vi[j]==current){
                    current--;
                }
                j--;

            }

            if (current==-1){
                nb++;
            }
        }
        }
        cout << nb << '\n';
}

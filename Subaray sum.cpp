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
        int n,s ;
        cin >> n >> s;
        vector<int> arr ;
        for (int i = 0 ; i<n ; i++){
            int x ;
            cin >> x;
            arr.push_back(x);

        }
        cout << 1;
        int l = 0 , r = 0 , sum = 0 ;
        while (sum!=s && r < arr.size()-1 ){
            while (r<arr.size()-1 && sum+arr[r+1]<s){
                r++;
                cout << 1 ;
                sum+=arr[r];

            }

            if(r<arr.size()-1 && sum+arr[r+1]>s){
                sum = sum-arr[l];
                l++;
                if (l>r){
                    r = l;
                }
            }



        }
        if (sum==s){
            cout << l+1 << ' ' << r+1;
        }
        else{
            cout << -1 ;
        }
    }

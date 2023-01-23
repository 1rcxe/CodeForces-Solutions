
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


ll query(int l, int r) {
	cout << "? " << l + 1 << " " << r + 1 << endl;
	cout.flush();
	int x;
	cin >> x;
	return x;
}

ll b_s(int n, int x) {
	int k,l=0,r=n-1;
	while(l<=r) {
		k=l+(r-l)/2;
		int l_query = query(0, k);
		if((k+1)-l_query < x) {
			l=k+1;
		}
		else r=k-1;
	}
	return l;
}

int main(){
    fast;
	int n, t, x;
	cin >> n >> t >> x;
	int ans=b_s(n,x);
	cout << "! "<< ans+1;
	cout.flush();
}

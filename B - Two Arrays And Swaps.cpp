    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
     
    void solve(){
            int n, k, sum=0;
    		cin>>n>>k;
    		
    		int a[n];
    		int b[n];
     
    		for(int i=0;i<n;i++){
    			cin>>a[i];
    		}
    		for(int i=0;i<n;i++){
    			cin>>b[i];
    		}
     
    		sort(a, a+n);
    		sort(b, b+n, greater<int>());
    		int j=0;
     
    		while(k>0 && a[j]<b[j]){
    			a[j]=b[j];
    			j++;
    			k--;
    		}
    		for(int i=0;i<n;i++){
    			sum = sum+ a[i];
    		}
    		cout<<sum<<endl;
        }
    int main(){
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }

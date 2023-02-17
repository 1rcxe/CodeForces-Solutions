    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
    const int N=110;
    void solve(){
        int n;
    	cin>>n;
    	int a[N][N];
    	for(int i=1;i<=n;i++)
    		for(int j=1;j<n;j++)
    			cin>>a[i][j];
    	int s=a[1][1];
    	if(s!=a[2][1])
    		s=a[3][1];
    	cout<<s<<" ";
    	for(int i=1;i<=n;i++)
    		if(a[i][1]!=s)
    			for(int j=1;j<n;j++)
    				cout<<a[i][j]<<" ";
    	cout<<endl;
    	return ;
    	}
    int main(){
        int t;
        cin >> t;
        while (t--){
            solve();
        }
     
    }

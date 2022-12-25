    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    int main(){
        fast;
        int n ;
        cin >> n ;
        vector<int> vi;
        vector<int> vp;
        for (int i=0; i<n;i++){
            int x ;
            cin >> x ;
            vi.push_back(x);
            vp.push_back(x);
        }
        for(int i=0;i<n;i++){
            if (vi[i]!=i+1){
                vp[vi[i]-1]=i+1;
            }
     
        }
        for(int i =0 ; i < n ; i++ ){
            cout << vp[i] << ' ';
        }
        cout << endl;
     
     
    }

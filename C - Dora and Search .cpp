            #include <bits/stdc++.h>
            #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
            #define ll long long int
            #define db double
            using namespace std;
            void solve(){
                int n;
                cin>>n;
                bool flag = true;
                vector<int> v(n);
                for(int i=0; i<n;i++){cin>>v[i];}
                int i=0,j=n-1,i1,j1;
                int minn=1,maxx=n;
                while(i<j){
                    i1=i;j1=j;
                    if(v[i]==minn){
                        i++;minn++;}
                    else if(v[i]==maxx){
                        i++;maxx--;}
                    if(v[j]==minn){
                        j--;minn++;}
                    else if(v[j]==maxx){
                        j--;maxx--;}
                    if(i1==i and j1==j){
                            cout<< i+1 <<" "<< j+1 <<'\n';
                            flag = false;
                            break;
                    }
                }
                if (flag){
                   cout<<-1<<endl;
            }
            }
            int main(){
                fast
                int t;
                cin >> t;
                while(t--){
                    solve();
            }
            }

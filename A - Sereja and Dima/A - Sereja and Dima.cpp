    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    using namespace std;
    int main(){
        fast;
        map<char,int> mp;
        int n,x;
        vector<int> vi;
        cin >> n ;
        while (n--){
            cin >> x ;
            vi.push_back(x);
        }
        n=vi.size();
        for(int i =0 ; i < n ; i ++){
            x=max(vi[0],vi[vi.size()-1]);
     
            if (x==vi[vi.size()-1]){
                        vi.pop_back();
                }
            else{
                    reverse(vi.begin(), vi.end());
                    vi.pop_back();
                }
            if (i%2==0){
                mp['s']+=x;
            }
            else{
                mp['d']+=x;
            }
     
        }
        cout << mp['s'] << " "<< mp['d'];
     
     
     
     
     
     
     
     
    }

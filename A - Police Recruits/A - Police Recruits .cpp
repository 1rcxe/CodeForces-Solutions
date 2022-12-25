    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    using namespace std;
    int main(){
        vector<int> vi;
        int n ;
        cin >> n ;
        while(n--){
            int x ;
            cin >> x ;
            vi.push_back(x);
        }
        int crimes=0,nb=0;
        for (int i = 0 ; i < vi.size() ; i++){
            if ((vi[i]==-1)&&(nb==0)){
                crimes++;
            }
            else{
                nb+=vi[i];
            }
     
            }
     
        cout << crimes;
     
     
    }

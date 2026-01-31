#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int cows=0;cows<=n/4;cows++){
            int chicken=n- 4*cows;
            if(chicken%2==0 && chicken>=0){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
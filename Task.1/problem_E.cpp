#include <iostream>
#include <cstring> 
using namespace std;

int main(){
    int t;
    cin>>t;
    string x="codeforces";
    while(t--){
        char c;
        cin>>c;
        bool found=false;
        for(int i=0;i<10;i++){
            if(c==x[i]){
                found=true;
            }
        }
        if(found){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
#include <iostream>
#include <cstring> 
using namespace std;

int main(){
    long long t;
    cin>>t;
    int a,b,c,d;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a==b &&b==c&& c==d){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}
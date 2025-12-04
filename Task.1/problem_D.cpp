#include <iostream>
#include <cstring> 
using namespace std;


int main() {
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if (b+c==a||a+c==b||a+b==c){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}
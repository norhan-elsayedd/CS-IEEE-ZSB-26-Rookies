#include <iostream>
#include <cstring> 
using namespace std;

int main(){
    int k;
    int r;
    cin>>k>>r;
    for(int i=1;i<=10;i++){
        int price=i*k;
        if(price%10==0||price%10==r){
            cout<<i<<endl;
            break;
        }
    }
}
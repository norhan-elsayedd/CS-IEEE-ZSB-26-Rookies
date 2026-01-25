#include <iostream>
using namespace std;

int function(int n){
    if(n==0){
    return 1;}

    return function (n-1)*n;
}
int main(){
    int n;
    cin>>n;
    cout<<function(n);
}
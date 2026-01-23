#include <iostream>
using namespace std;
#include <math.h>

//base K representation

int digits(int n,int k){
   return floor(log(n)/log(k))+1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int digit= digits(n,k);
    cout<<digit;
}
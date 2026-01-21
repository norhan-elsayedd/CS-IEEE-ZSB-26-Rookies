#include <iostream>
using namespace std;
#include <math.h>

//base K representation

int main(){
    int n,k;
    cin>>n>>k;
    int digit= floor(log(n)/log(k))+1;
    cout<<digit;
}
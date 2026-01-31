#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;

    long long a=1,b=x;
    long long sq=sqrt(x);
    
    for(long long i=1;i<=sq;i++){
        if(x%i==0){
            long long a2=i;
            long long b2=x/i;
            if(a2*b2/__gcd(a2,b2)==x){
                if(max(a2,b2)<max(a,b)){
                a=a2;
                b=b2;
                }
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}
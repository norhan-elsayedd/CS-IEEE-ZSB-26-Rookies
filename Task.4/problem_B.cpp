#include <iostream>
using namespace std;

void sequence(long long n){
    cout<<n<<" ";
    if(n<=1){
        return;
    }
    
    if(n%2==0)
    sequence(n/2);
    else
    sequence(3*n+1);
}
int main(){
    long long n;
    cin>>n;
    sequence(n);
}

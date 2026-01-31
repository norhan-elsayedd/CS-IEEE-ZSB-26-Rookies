#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long a=0, b=0;
        long long original=n;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                a=i;
                n/=i;
                break;
            }
        }

        if(!a){
            cout<<"NO\n";
            continue;
        }

        for(long long i=a+1;i*i<=n;i++){
            if(n%i==0){
                b=i;
                break;;
            }
        }

        long long c=original/(a*b);

        if(b&&c >=2 && c!=a && c!=b){
            cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }

}
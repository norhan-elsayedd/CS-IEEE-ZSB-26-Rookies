#include <iostream>
#include <cstring> 
using namespace std;

int main(){
    long long n;
    cin>>n;
    int p,v,t;
    int problem_count=0;
    for(int i=0;i<n;i++){
        cin>>p>>v>>t;
        int sum=p+v+t;
        if(sum>=2){
            problem_count++;
        }
    }
    cout<<problem_count<<endl;

}
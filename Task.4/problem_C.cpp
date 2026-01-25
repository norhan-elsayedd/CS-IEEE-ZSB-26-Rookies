#include <bits/stdc++.h>
using namespace std;

int n;
long long arr[20],total,result=LLONG_MAX;
void answer(int i,long long s){
    if(i==n){
        result=min(result,llabs(total-2*s));
        return;
    }
    answer(i+1,s+arr[i]);
    answer(i+1,s);
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    answer(0,0);
    cout<<result;
}
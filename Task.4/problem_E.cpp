#include<iostream>
#include<algorithm>
using namespace std;

int n;
string s;
string result[40320];
int indx=0;
void solve(string current,string remain){
    sort(remain.begin(),remain.end());

    for(int i=0;i<remain.size();i++){
        if(i>0 && remain[i]==remain[i-1])
            continue;
        if(remain.empty()){
            result[indx++]=current;
            return;
        }
        solve(current+remain[i],remain.substr(0,i)+remain.substr(i+1));
    }
    if(remain.empty()){
        result[indx++]=current;
    }
}

int main(){
    cin>>s;
    solve("",s);
    sort(result,result+indx);
    cout<<indx<<endl;
    for(int i=0;i<indx;i++){
        cout<<result[i]<<endl;
    }
}
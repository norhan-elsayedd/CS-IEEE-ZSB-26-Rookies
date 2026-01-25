#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;

string s1,s2;
int n;
int target;
int good=0,total=0;

void solve(int indx,int pos){
    if(indx==n){
        total++;
        if(pos==target)
            good++;
        return;
    }
    if(s2[indx]=='+'){
        solve(indx+1,pos+1);
    }
    else if(s2[indx]=='-'){
        solve(indx+1,pos-1);
    }
    else{
        solve(indx+1,pos+1);
        solve(indx+1,pos-1);
    }

}

int main(){
    cin>>s1>>s2;
    n=s1.size();

    target=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+')
            target++;
        else{
            target--;
        }
    }
    solve(0,0);
    cout<<fixed<<setprecision(10)<<(double)good/total;
}
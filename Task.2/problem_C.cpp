#include <iostream>
#include <cstring>
using namespace std;

//Way Too Long Words

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        if(s.size()<=10){
            cout<<s<<endl;
        }
        else{
            for(int i=1;i<s.size()-1;i++){
                sum++;
            }
            cout<<s[0]<<sum<<s[s.size()-1]<<endl;
        }    
    }
}
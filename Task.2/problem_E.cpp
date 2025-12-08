#include <iostream>
#include <cstring>
using namespace std;

//Pangram

int main(){
    int length;
    cin>>length;
    string s;
    cin>>s;
    bool letters[26]={false};
    for(int i=0;i<length;i++){
        if((s[i]>='A'&&s[i]<='Z')){
            letters[s[i]-'A']=true;
        }else if((s[i]>='a'&&s[i]<='z')){
            letters[s[i]-'a']=true;
        }
    }
    bool result=true;
    for(int i=0;i<26;i++){
        if(!letters[i]){
            result=false;
        }
    }
    if(result){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
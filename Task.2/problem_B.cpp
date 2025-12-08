#include <iostream>
#include <cstring>
using namespace std;

//cAPS lOCK

int main(){
    string s;
    cin>>s;
    bool allupper=true;
    bool except_first=true;

    for(int i=0;i<s.size();i++){
        if(!(s[i]>='A'&&s[i]<='Z')){
            allupper=false;
        }
        if(i>0 &&!(s[i]>='A'&&s[i]<='Z')){
            except_first=false;
        }
    }

    if(allupper||except_first){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]+32;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
    }
    cout<<s<<endl;
}
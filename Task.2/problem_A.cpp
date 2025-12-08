#include <iostream>
#include <cstring>
using namespace std;

// ICPC Balloons

int main(){
    int t;
    cin>>t;
    while (t--){
        int length;
        cin>>length;
        string s;
        cin>>s;
        int used[26]={0};
        int balloons=0;
        for(int i=0;i<length;i++){
            int id;
            id=s[i]-'A';
        
            if(used[id]==0){
                balloons=balloons+2;
                used[id]=1;
            }
            else{
                balloons+=1;
            }
        }
        cout<<balloons<<endl;
    }
}
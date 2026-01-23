#include <iostream>
using namespace std;
#include <math.h>
#include "string"

//Comparing Strings

string comparestrings(int a, int b){
    string sa=to_string(a);
    string sb=to_string(b);

    string s1="";
    string s2="";
    for(int i=0; i<b;i++)
    s1+=sa;
    
    for(int i=0;i<a;i++)
    s2+=sb;

    return min(s1,s2);
}

int main(){
    int a, b;
    cin>>a>>b;
    string result=comparestrings(a,b);
    cout<<result;
}
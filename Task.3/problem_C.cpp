#include <iostream>
using namespace std;
#include <math.h>

//ATM

int main(){
    int x ;
    double y;
    cin>>x>>y;
    if(fmod(x,5.0)==0 && y>=x+0.50){
        y=y-x-0.50;
    }
    cout<<y;
}
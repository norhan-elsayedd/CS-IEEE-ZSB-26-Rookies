#include <iostream>
using namespace std;
#include <math.h>

//ATM

double ATM(int x,double y){
    if(fmod(x,5.0)==0 && y>=x+0.50){
        y=y-x-0.50;
    }
    return y;
}

int main(){
    int x ;
    double y;
    cin>>x>>y;

    double remain=ATM(x,y);
    cout<<remain;
}
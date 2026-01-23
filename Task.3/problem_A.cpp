#include <iostream>
using namespace std;
#include <math.h>

//serval is fighting a monster
long long Hits(long long h,long long a){
    return ceil((double)h/a);
}

int main(){
    long long h,a;
    cin >>h>>a;

    long long result=Hits(h, a);
    cout<<result;
}

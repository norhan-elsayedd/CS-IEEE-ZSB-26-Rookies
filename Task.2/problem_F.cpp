#include <iostream>
#include <cstring>
using namespace std;

//Beautiful Matrix

#include <iostream>
using namespace std;

int main() {
    int row=0;
    int col=0;

    for(int i= 0;i<5;i++){
        for(int j=0;j<5;j++) {
            int num;
            cin>>num;
            if(num==1) {
                row=i;
                col=j;
            }
        }
    }
    int moves=0;
    if(row> 2) {
        moves=moves+(row-2);
    }else{
        moves=moves+(2-row);
    }
    if(col>2){
        moves=moves+(col-2);
    }else{
        moves=moves+(2-col);
    }
    cout<<moves<<endl;
}
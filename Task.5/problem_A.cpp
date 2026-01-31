#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--){
        int m;
        cin>>m;

        int count=0;
        for(int i=1;i*i<=m;i++){
            if(m%i==0){
                count++;
                if(i!=m/i)
                    count++;
            }
        }
        cout<<count<<endl;
    }
}
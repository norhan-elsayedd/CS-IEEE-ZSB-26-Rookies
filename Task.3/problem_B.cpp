#include <iostream>
#include <algorithm>
using namespace std;

// Mountain Scenery

int main(){
    int n ,k;
    cin>>n>>k;
    int points=(n*2)+1;
    
    int arr[points];
    for(int i=0;i<points;i++){
        cin>>arr[i];
    }

    for(int i=1;i<points;i++){
        if(arr[i]>arr[i-1] +1 && arr[i]> arr[i+1] +1 ){
            arr[i]--;
            k--;
            if(k==0){
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<points;i++){
        cout<<arr[i]<<" ";
    }

}
//Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,7,8,2,10,1};
    bool flag=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                flag=1;
                cout<<arr[i];
                break;
            }
        }

    }
    if(flag==false) cout<<"no duplicate";
    return 0;
}
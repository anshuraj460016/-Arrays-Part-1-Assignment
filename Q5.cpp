//WAP to find the smallest missing positive element in the sorted Array that contains only
//positive elements.
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int x=0;
    bool flag=false;
    for(int i=0;i<10;i++){
        if(arr[i]!=x){
            cout<<x<<endl;
            flag=1;
            break;
        }
        else x++;
    }
    if (flag==false) cout<<x<<endl;
  return 0;
}
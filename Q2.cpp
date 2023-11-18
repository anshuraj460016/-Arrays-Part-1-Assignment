//Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<5;i++){
    if(max1<arr[i]){
        max2=max1;
        max1=arr[i];
    }
    else if (max2<arr[i] && arr[i]!=max1){
        max2=arr[i];
    }
 
    }
    if(max2==INT_MIN){
        cout<<"no second element";

    }
    else cout<<max2<<endl;
    return 0;
}
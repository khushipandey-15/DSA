#include<iostream>
using namespace std;

int main(){
  int b;
    int arr[5];
        cout<<"enter num of element: ";
            cin>>b;
    cout<<"enter the value: ";


    for(int i=0;i<b;i++){
        
        cin>>arr[i];
        cout<<arr[i]<<" ";

    }
    for(int i=0;i<b;i++){
        cout<<"double :";
        cout<<arr[i]*2<<endl;
    }

    
}
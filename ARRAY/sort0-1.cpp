#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{0,1,1,1,0,0,1,0};
    int start=0;
    int end=arr.size()-1;
    int i=0;

    while(i<arr.size()){
    if(arr[i]==0){
        swap(arr[start],arr[i]);
        
        start++;
        i++;
    }
    if(arr[i]==1){
        swap(arr[end],arr[i]);
        end--;

    
    }
    }
    for(i=0;i<arr.size();i++){
    cout<<arr[i];
    
    }
}
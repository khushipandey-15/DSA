#include<iostream>
#include<vector>

using namespace std;
int vaibhav(vector <int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
        }
    
        cout<<"unique value is "<<ans<<endl;
}

int main(){
    //int n;
    //cout<<"enter the number";
    //cin>>n;
    //vector<int>arr(n);
        vector<int>arr{1,1,2,2};
        vaibhav(arr);


    //for(int i=0;i<arr.size();i++){
      //  cin>>arr[i];
        
    //}

    // int ans=0;
    // for(int i=0;i<arr.size();i++){
    //     ans=ans^arr[i];
    //     }
    
    //     cout<<"unique value is"<<ans<<endl;
    
}
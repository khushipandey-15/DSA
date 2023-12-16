#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={9,0,7,6,5,4};
    int sizea=6;
    int brr[]={1,2,3,4,5,6,7};
    int sizeb=7;

    vector<int>ans;
    for(int i=0;i<=sizea;i++){
        ans.push_back(arr[i]);

    }
    for(int i=0;i<=sizeb;i++){
        ans.push_back(brr[i]);
}
cout<<"union is ";
for(int i=0;i<=ans.size();i++){
       
cout<<ans[i]<<" " ;
}
}
// #include<iostream>
// using namespace std;

// int search(int arr[],int n,int key){
   
//     for(int i=0;i<n;i++){
        
//         if(arr[i]==key){
//             return true;

//        }
//        else {
//         return false;
//        }
//     }
    
// }

// int main(){
//     // int n;
//     // cout<<"how many elements you want";
//     // cin>>n;
//     // int arr[n];
//     // cout<<"enter the value";

//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     //     arr[i]={1};
//     //     cout<<arr[i]<<endl;   
//     // }
// int n;
// int key;
// int arr[10];
// cout<<"how many element you want :";
// cin>>n;
// cout<<"enter the value :";
// for(int i=0;i<n;i++){
//     cin>>arr[i];

//     }
//     cout<<"which number you want :";
//     cin>>key;
//     bool ans=search(arr,n,key);
//        if(ans==true){
//           cout<<"found";
//         }
//         else{
//             cout<<"not ffffffffffff";
//         }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int size=15;
//     int zero=0;
//     int one=0;
    
//     int arr[]={0,1,0,1,1,1,1,0,0,0,0,1,1,1,1};
//     for(int i=0;i<=size;i++){
//     if(arr[i]==0){
//         zero++;
        
//     }
//     else{
//         one++;
//     }
//     }
//     cout<<"number of zero's are: "<<zero<<endl;
//     cout<<"number of ones are: "<<one<<endl;
// }

#include<iostream>
#include<limits.h>
using namespace std;
int count(int arr[],int size){
    int max=INT_MIN;
         for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        } 
     }
    cout<<"maximum num is :"<<max<<endl;
}
int main(){
    
   int n=5;
    int arr[100];
    cout<<"enter the element :";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    count(arr,n);
    
   
}




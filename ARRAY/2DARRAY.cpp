#include<iostream>
using namespace std;
//function to sum values
void printsumwisearray(int arr[][3],int rows,int col){
    cout<<"sum are"<<endl;
    for(int i=0;i<rows;i++){
       int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
} 

int main(){
    //creating a 2D array
    //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    int arr[3][3];
    int rows=3;
    int col=3;
    cout<<"enter the number of array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         cin>>arr[i][j];


        }
  
    }
    cout<<"values are"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         cout<<arr[i][j]<<" ";



        }
        cout<<endl;

        
      

    }
    printsumwisearray(arr,rows,col); 

    return 0;


}
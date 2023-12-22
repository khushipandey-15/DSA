#include<iostream>
#include<limits.h>
using namespace std;
//funtion call
int getmin(int arr[][3],int rows,int col){
//finding min value
    int min=INT_MAX;
    //for checking we use for loop
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}

int main(){
    int rows=3;
    int col=3;
    int arr[3][3];
    //int arr[3][3]={{1,5,9},{2,4,6},{3,7,12}};
    cout<<"no. of arrays :"<<endl;
    //taking input 
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];

        }
    }
    //intialising function
    int result=getmin(arr,rows,col);

    cout<<"min :"<<result<<endl;
    
    
}
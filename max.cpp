#include<iostream>
#include<limits.h>
using namespace std;

int getmax(int arr[][3],int rows,int col){

    int max=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}

int main(){
    int rows=3;
    int col=3;
    int arr[3][3];
    //int arr[3][3]={{1,5,9},{2,4,6},{3,7,12}};
    cout<<"no. of arrays :"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];

        }
    }
    int result=getmax(arr,rows,col);

    cout<<"max :"<<result<<endl;
    
    
}
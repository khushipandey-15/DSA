#include<iostream>
using namespace std;


int main(){
    
    int key;
    int element;
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"enter the key value"<<endl;
       cin>>key;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            if(key==arr[i][j]){
                element=arr[i][j];
            }
            

        }
        cout<<endl;
    }
    if(element==key){
        cout<<"element found"<<element;
    }
    else{
        cout<<"element not found"<<endl;
    }
}

#include<iostream>
using namespace std;
// int add(int a,int b){
//     int c=a+b;
//     cout<<c<<endl;
//     return c;
//   }

// int main(){
//     int a;
//     cout<<"enter the value of a\n";
//     cin>>a;
//     int b;
//     cout<<"enter the value of b\n";
//     cin>>b;
//     int c=add(a,b);
//     return 0;
// }
  // int max(int a,int b,int c){
  //   if(a>b&&a>c){
  //     cout<<"a is greater\n"<<a;
  //   }
  //   else if(b>a&&b>c){
  //     cout<<"b is greater\n"<<b;
  //   }
  //   else{
  //     cout<<"c is greater\n"<<c;
  //   }
    
  // }

  // int main(){ 
  //   int a;
  //   int b;
  //   int c;
  //   cout<<"enter any three value:";
  //   cin>>a>>b>>c;
  //    max(a,b,c);
  //   return 0;
    
  // }

  int count(int n)
  {
    int sum=0;
    
    for(int i=0;i<=n;i++){
      if(i%2==0){
        sum=sum+i;
        cout<<sum<<endl;
        
        
      }
      
      
    }
    
  }
  int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    count(n);
    return 0;
  }
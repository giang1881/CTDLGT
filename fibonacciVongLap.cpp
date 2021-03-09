#include<iostream>
using namespace std;

int fibonacci(int n){
    int a1 = 1, a2 = 1;
    if(n==1||n==2){
        return n;
    }
    int i=3,a=0;
    while(i<=n){
        a=a1+a2;
        a1=a2;
        a2=a;
        i++;
    } 
    return a;
}
int main(){
   int i,n,d=0;
   cout<<"n = ";
   cin>>n;
   for(i=0;i<=n;i++){
       if(n==fibonacci(i)){
            d++;            
       }
   }
   if(d==1){
       cout<<n<<" thuoc day fibonacci";
   }else{ 
       cout<<n<<" khong thuoc day fibonacci";
   } 
} 
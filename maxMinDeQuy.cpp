#include<iostream>
using namespace std;

int min(int a[],int n){
    if(n==1){
        return a[0];
    }else{
        if(a[n-1]<min(a,n-1)){
            return a[n-1];
        }else{
            return min(a,n-1);
        }
    }
}int max(int a[],int n){
    if(n==1){
        return a[0];
    }else{
        if(a[n-1]>max(a,n-1)){
            return a[n-1];
        }else{
            return max(a,n-1);
        }
    }
}
int main(){
    int n,a[100];
    cout<<"nhap so phan tu ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"A["<<i<<"]=";
        cin>>a[i]; 
    }
    cout<<"min= "<<min(a,n)<<endl;
    cout<<"max= "<<max(a,n);
    return 0;
}

#include<iostream>
using namespace std;

void maxMin(int a[],int n){
    int max,min;
    max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max =a[i];
        } 
    }
    cout <<"max= "<<max<<endl;
    min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min =a[i];
        } 
    }
    cout <<"min= "<<min;
}
int main(){
    int n,a[100];
    cout<<"nhap so phan tu";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"A["<<i<<"]=";
        cin>>a[i]; 
    }
    maxMin(a,n);
    return 0;
}

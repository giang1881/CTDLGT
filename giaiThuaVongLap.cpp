#include<iostream>
using namespace std;

int giaiThua(int n){
    int a=n;
    for(;n>1;n--){
        a=a*(n-1);
    }
    return a;
}
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    cout<<"n!= "<<giaiThua(n);
    return 0;
}

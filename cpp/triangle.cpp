#include<stdio.h>
#include<iostream>
using namespace std;

void form_triangle(int n){
    int num = 1;

    for(int i=0 ;i<n+1;i++){
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"enter N"<< endl;
    cin>>n;
    form_triangle(n);

}
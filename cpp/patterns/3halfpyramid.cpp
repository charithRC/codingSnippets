#include<iostream>
using namespace std ;
int main(){
    int n = 6;   //input
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<" * " ;
        }
        cout<<endl;
    }
}
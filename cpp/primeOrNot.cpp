#include<iostream>
using namespace std ;

void primeNo(int n){
    if( n % 2 ==0){
        cout<< "not a  prime number"<<endl;
        exit(0);
    }
    else{
        for(int i=2;i<n / 2;i++){
            if(n%i == 0 ){
                    cout<<"not a prime number"<<endl;
                    exit(0);
            }
        }
    }
    cout<<"it is a prime number"<<endl;
}

int main(){
int n;
cout<< "enter the number ";
cin>>n;
primeNo(n);

}
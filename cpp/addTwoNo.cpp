#include<iostream>
using namespace std;

void firstMethod(int n1,int n2){
    cout<<"sum1= "<< n1-(-n2)<<endl;
}

void secMethod(int n1,int n2){
    while(n1>0){    //for +ve n1
        n1--;
        n2++;
    }
    while(n1<0){
        n1++;
        n2--;
    }
    cout<<"sum2= "<<n2<<endl;
}
int main (){
    int n1,n2;
    cout<<"enter the two numbers"<<endl;
    cin>>n1>>n2;
    firstMethod(n1,n2);
    secMethod(n1,n2);

}
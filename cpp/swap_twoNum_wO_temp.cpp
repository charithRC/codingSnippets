#include<iostream>
using namespace std;

int calc(int num1,int num2){
    num1 = num1 + num2;
    num2 = num1 - num2;  //num2 got value of num1
    num1 = num1 - num2;

    cout<<num1<<endl<<num2<<endl;
    return 0;
}



int main(){
    int num1,num2;
    cout<<"enter two numbers"<<endl;
    cin>>num1;
    cin>>num2;
    calc(num1,num2);

}
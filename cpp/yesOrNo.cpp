#include<iostream>
using namespace std;
int main(){
    float f = 0.1;
    int f1 = 0.1;
    int a = 10,x;


    if (f == 0.1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    cout<<"f1 = "<<f1<<endl;
    x = a-- + ++a;  // x = 10 then a value will be decremented ,so now a = 9, now pre increment ,a will be 
    // 10,     so  10 + 10 = 20
    cout<< "a = "<<x;
}
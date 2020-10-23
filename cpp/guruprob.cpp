// https://www.programiz.com/cpp-programming/examples/fibonacci-series

#include<iostream>
using namespace std;

void calculate(int n ) {
 
}

int main() {
    int n1,p1,n2,p2,readSpeed,writeSpeed,time;
    cout<<"enter number of pages of 1st book"<<endl;
    cin>>n1;
    cout<<"enter number of lines of 1st book"<<endl;
    cin>>p1;
    cout<<"enter number of pages of 2nd book"<<endl;
    cin>>n2;
    cout<<"enter number of lines of 2nd book"<<endl;
    cin>>p2;
    cout<<"enter reading speed"<<endl;
    cin>>readSpeed;
    cout<<"writing speed"<<endl;
    cin>>writeSpeed;
    
    int reading_time = (n1*p1)/readSpeed;
    int writing_time = (n2*p2)/writeSpeed;

    cout<<"enter the time"<<endl;
    cin>>time;
    if(time< reading_time){
        cout<<"bot is still reading and has read "<< time*readSpeed<<" lines";
    }else{
        cout<<"bot has started to write and has written "<<(time - reading_time)*writeSpeed<<" lines";
    }


}
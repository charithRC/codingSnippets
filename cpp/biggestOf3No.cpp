#include<iostream>
using namespace std;

void find_big(int n1,int n2,int n3){

    if(n1>n2 ){
        if(n1>n3){
                cout<<n1 <<" is the biggest no"<<endl;
                exit(0);
        }else{
            cout<<n3<<" is the biggest no"<<endl;
        }
    }else{
        if(n2>n3){
            cout<<n2<< " is greatest"<<endl;
        }else{
            cout<<n3<<" is greatest";
        }
    }
    //  OR SIMPLE LOGIC !!  //
    
//     if((num1>num2)&&(num1>num3))
//       printf("\n Number1 is greatest");
//    else if((num2>num3)&&(num2>num1))
//       printf("\n Number2 is greatest");
//    else
//       printf("\n Number3 is greatest");
}

int main(){
    int n1,n2,n3;
    cout<<"enter 3 num"<<endl;
    cin>>n1>>n2>>n3;
    find_big(n1,n2,n3);

}
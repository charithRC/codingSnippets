#include<iostream>
using namespace std;
int main (){
    int n =6;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            if(j ==n || i ==1 )
                cout<<" * ";
        }
        cout<<endl;
    }
}
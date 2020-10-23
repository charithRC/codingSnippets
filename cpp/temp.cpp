#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void triangle(int n){
int num =1;
int z = n+2;
for(int i =0;i<n;i++){
	for(int j=0 ;j<n;j++){
		for(int k=0;k<z;k++){cout<<num;num++;}
		
	}
	cout<<endl;
}

}


int main(){
int n;
cout<< "enter number "<<endl;
cin>>n;
triangle(n);
}

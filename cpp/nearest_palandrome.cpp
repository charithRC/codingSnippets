#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string pal_calc(int num){
     int temp = num;
     int rem=0,rev=0;
    while(num!=0){
        rem = (num%10);
        rev = rev*10 + rem;
        num = num/10;
    }
    if(temp == rev){ return "it is a palandrome";}
    else{return "not a palandrome";}
}

int findnearest_pal(int num){
    int pal = true;
    while (pal){
    num++;
    if(pal_calc(num) == "it is a palandrome")
    pal = false;
    }
    return num;
}

bool palstring(string s ){

    int n = s.length();
    string a;
    for(int i= n ; i>0; i--){

        a[n-i] = s[i-1];
    }
     for(int i=0 ;i< s.length();i++)
        if(a[i] != s[i])
            return false;

    return true;
}

int main(){
    int num;
    string s;
    cout<<"enter number"<<endl;
    cin>>num;
    cout<< pal_calc(num)<<endl;
    if(pal_calc(num) == "not a palandrome" )
        cout<<"nearest palandrome = "<<findnearest_pal(num)<<endl;

    cout<<"enter palandrome string "<<endl;
    cin>>s;
    cout<<"are they palandrome = "<<palstring(s);
   

}
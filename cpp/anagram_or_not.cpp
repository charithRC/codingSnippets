// anagram words that can formed by rearranging 
// for ex :  rescued and secured, resign and singer, stone and tones,

//method :sort letter and compare

#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 

bool anagram ( string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
   
    for(int i=0 ;i< str1.length();i++)
        if(str1[i] != str2[i])
            return false;
        
    return true;
}


int main (){
    string str1,str2;
   cout<<"enter both the string "<<endl;
   cin>>str1>>str2;
    if (anagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
}
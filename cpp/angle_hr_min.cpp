// this pgm will compute angle between hour hand and minute hand

// // math -
// The idea is to take 12:00 (h = 12, m = 0) as a reference. Following are detailed steps.
// 1) Calculate the angle made by hour hand with respect to 12:00 in h hours and m minutes. 
// 2) Calculate the angle made by minute hand with respect to 12:00 in h hours and m minutes. 
// 3) The difference between two angles is the angle between two hands.


// How to calculate the two angles with respect to 12:00? 
// The minute hand moves 360 degree in 60 minute(or 6 degree in one minute) and 
// hour hand moves 360 degree in 12 hours(or 0.5 degree in 1 minute). In h hours and m minutes, 
// the minute hand would move (h*60 + m)*6 and hour hand would move (h*60 + m)*0.5. 

#include<iostream>
using namespace std;
// #include <bits/stdc++.h>

int calc_angle(int h,int m){

    //validating input
    if(h<0 || m<0 || h>12 || m> 60){
        cout << "wrong input" << endl; 
    }
    if(h ==12 ) h=0;
    if(m == 60) m =0;

     h = (h*60 + m)*0.5;
     m = (m * 6);

    int angle = abs(h-m);       //abs is VV IMP

    if(angle > 180){
        angle = 360 - angle;
    }

    return angle;

}



int main (){
    
    cout<<calc_angle(12,0)<<endl;
}


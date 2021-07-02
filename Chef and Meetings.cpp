#include <bits/stdc++.h>

using namespace std;

int h(string mytime, int t){                                     //changing hours of the given string
    int mh;
    mh = 10*(mytime[0+t]-'0')+1*(mytime[1+t]-'0');               //extracting hours from string 
    if(mytime[6+t]=='P'){                                        //checking for PM 
        if(mh!=12){
            mh+=12;                                              //conversion from 12 to 24 hour format
        }
    }
    if(mytime[6+t]=='A') {                                       //checking for AM
        if(mh==12) {
            mh-=12;                                              //conversion from 12 to 24 hour format
        }
    }

    return mh;                                                   //returning the hour in 24 hour format
}

int m(string mytime, int t){                                     //extracting minutes from the given string
    int mm;
    mm = 10*(mytime[3+t]-'0')+(mytime[4+t]-'0');
    return mm;                                                   //returning the minutes 
}

int main(){                                                      //driver code
    long long t;
    cin>>t;                                                      //taking no. of inputs 
    cin.ignore();                                                //function is used to ignore or clear one or more characters from the input buffer
    while(t--){
        string mytime;                     
        getline(cin, mytime);                                    //take input for my time
        int mh = h(mytime, 0);                                   //function calling to convert hours
        int mm = m(mytime, 0);                                   //function calling to convert minutes
        long long n;  
        cin>>n;                                                  //taking in input for no. of inputs for friend time
        cin.ignore();
        string res = "";                                        
        while(n--){
            string friendtime; 
            getline(cin, friendtime);                            //taking input
            int fsh = h(friendtime, 0);                          //function calling for hours of the start time
            int fsm = m(friendtime, 0);                          //for minutes
            int feh = h(friendtime, 9);                          //function calling for hours of the end time
            int fem = m(friendtime, 9);                          //for minutes
            if((fsh> mh)||(feh< mh)) {                           //start hours and end hours 
                res.push_back('0');                              
            }
            else if(fsh == mh && fsm> mm) {                      //start hours and start minutes
                res.push_back('0');
            }
            else if(feh == mh && fem< mm) {                      //end hours and end minutes
                res.push_back('0');
            }
            else {                                               //if all the conditions above are false than friend time fits with my time 
                res.push_back('1');                              
            }
        }
        cout<<res<<"\n";                                         //output
    } 

    return 0;
}

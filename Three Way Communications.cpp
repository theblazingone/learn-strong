#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){                                                             //taking no. of inputs
        int r;
        cin>>r;
        int x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;                                         //taking input for coordinates 
        int d1, d2, d3;
        d1 = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);                                //to avoid double/float data type instead using sqrt use r*r
        d2 = (x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
        d3 = (x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
        if (d1<=r*r&&d2<=r*r || d1<=r*r&&d3<=r*r || d2<=r*r&&d3<=r*r){       //if any two can communicate than output will be yes
            cout<<"yes"<<endl;                                               //distance should be less than or equal
        }
        else {
            cout<<"no"<<endl;
        }
    }

    return 0;
}  

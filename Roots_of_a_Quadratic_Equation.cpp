#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    double a, b, c, r1, r2;
    cin>>a>>b>>c;

    double d = sqrt(b*b - 4*a*c);

    r1 = (-b + d) / (2*a);
    r2 = (-b - d) / (2*a);
    cout<<fixed<<setprecision(6)<<r1<<endl;
    cout<<fixed<<setprecision(6)<<r2;

    return 0;
}
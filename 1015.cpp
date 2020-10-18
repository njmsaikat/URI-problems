#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double x,y,x1,x2,y1,y2,d;
    cin>>fixed>>setprecision(1)>>x1>>y1>>x2>>y2;

    x = (x2-x1);
    y = (y2-y1);
    d = pow(x,2)+pow(y,2);
    d = sqrt(d);

    cout<<fixed<<setprecision(4)<<d<<endl;

return 0;
}

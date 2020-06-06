
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

double A,B,avg;
cin>>fixed>>setprecision(1)>>A>>B;
avg=(A*3.5+B*7.5)/(3.5+7.5);

cout<<"MEDIA"<<' '<<"="<<' '<<fixed<<setprecision(5)<<avg<<endl;

return 0;
}

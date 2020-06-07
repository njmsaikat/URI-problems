#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int a,b;
float c,d;
cin>>a>>b;
cin>>fixed>>setprecision(2)>>c;
d=b*c;

cout<<"NUMBER"<<' '<<"="<<' '<<a<<"\n"<<"SALARY"<<' '<<"="<<' '<<"U$"<<' '<<fixed<<setprecision(2)<<d<<endl;


return 0;
}

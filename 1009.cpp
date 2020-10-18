#include <iostream>
#include <iomanip>

using namespace std;

int main(){

char n[100];
double sal,sale,total;
cin>>n>>fixed>>setprecision(2)>>sal>>setprecision(2)>>sale;

total=sal+(sale*15)/100;

cout<<"TOTAL = R$"<<' '<<fixed<<setprecision(2)<<total<<endl;

return 0;
}

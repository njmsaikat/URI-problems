#include <iostream>
#include <iomanip>

using namespace std;

    int main(){
    int a,b,c,d;

    double e,f,g;

    cin>>a>>b>>fixed>>setprecision(2)>>e;
    cin>>c>>d>>fixed>>setprecision(2)>>f;

    g=(b*e)+(d*f);

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<g<<endl;

    return 0;
}

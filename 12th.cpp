#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double a,b,c,t,cr,tr,q,r;
    cin>>fixed>>setprecision(1)>>a>>b>>c;

    t=0.5*a*c;
    cr=3.14159*(c*c);
    tr=((a+b)/2)*c;
    q=b*b;
    r=a*b;

    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<t<<"\n"
        <<"CIRCULO: "<<cr<<"\n"
        <<"TRAPEZIO: "<<tr<<"\n"
        <<"QUADRADO: "<<q<<"\n"
        <<"RETANGULO: "<<r<<endl;


return 0;
}

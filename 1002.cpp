#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double R,a;
    cin>>R;
    a=3.14159*R*R;
    cout<<"A="<<fixed<<setprecision(4)<<a<<endl;
    return 0;
}

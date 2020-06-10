/*#include <iostream>

using namespace std;

int main(){
int a,b,c;

cin>>a>>b>>c;

if(a>b && a<c){
    cout<<a<<" eh o maior"<<endl;
}

else if(b>a && b>c){
    cout<<b<<" eh o maior"<<endl;
}

else{
    cout<<c<<" eh o maior"<<endl;
}

return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;



int main(){

    int a,b,c,MaiorAB,s,MAX;
    cin>>a>>b>>c;
    MaiorAB=(a+b+abs(a-b))/2;
    MAX=(MaiorAB+c+abs(MaiorAB-c))/2;

    cout<< MAX<<" eh o maior"<<endl;

return 0;}

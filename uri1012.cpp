#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
     double pi=3.14159,tri ,rad,trap,sqa,ret;
      cin>>a>>b>>c;
      tri=0.5*a*c;
      rad=pi*c*c;
      trap=(a+b)/2*c;
      sqa=b*b;
      ret=a*b;
      cout<<fixed;
      cout<<"TRIANGO: "<<setprecision(3)<<tri<<endl;
      cout<<"CIRCULO: "<<setprecision(3)<<rad<<endl;
      cout<<"TRAPZIO: "<<setprecision(3)<<trap<<endl;
      cout<<"QUADRADO: "<<setprecision(3)<<sqa<<endl;
      cout<<"RETANGLE: "<<setprecision(3)<<ret<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,y;
    cin>>a>>b>>c;
scanf("%d%d%d, &a &b &c");
       if(a<(b+c)&&b<(a+c)&&c<(a+b))
       {
           cout<<fixed;
           cout<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;

       }
       else{
          y=0.5*(a+b)*c;
        cout<<fixed;
        cout<<setprecision(1)<<"Area = "<<y<<endl;

       }
    return 0;
}

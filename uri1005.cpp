#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A , B, med;
    cin>> A >> B ;
   /* A=A*3.5;
    B=B*7.5;
    med=(A+B)/(3.5+7.5);*/
   med=((A * 3.5)+(B * 7.5))/ (3.5+ 7.5);
     cout<<"MEDIA "<<" = "<<fixed<<setprecision(5)<<med<<endl;
     return 0;
}

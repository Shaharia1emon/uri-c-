//Bank note coins.
#include<bits/stdc++.h>
using namespace std;
int main()
{

     double n;

int in,nt,nt1;

while(cin>>n){

in=n;
n=100*n;
nt1=n;

       cout<<"NOTAS:"<<endl;
      cout<<in/100<<" nota(s) de R$ 100.00"<<endl;
      nt=in%100;
      cout<<nt/50<<" nota(s) de R$ 50.00"<<endl;
      nt=nt%50;
      cout<<nt/20<<" nota(s) de R$ 20.00"<<endl;
      nt=nt%20;
      cout<<nt/10<<" nota(s) de R$ 10.00"<<endl;
      nt=nt%10;
      cout<<nt/5<<" nota(s) de R$ 5.00"<<endl;
      nt=nt%5;
      cout<<nt/2<<" nota(s) de R$ 2.00"<<endl;
      nt=nt%2;
      cout<<"MOEDAS:"<<endl;

      cout<<nt/1<<" moeda(s) de R$ 1.00"<<endl;
      nt1=nt1%100;
      cout<<nt1/50<<" moeda(s) de R$ 0.50"<<endl;
      nt1=nt1%50;
      cout<<nt1/25<<" moeda(s) de R$ 0.25"<<endl;
      nt1=nt1%25;
      cout<<nt1/10<<" moeda(s) de R$ 0.10"<<endl;
      nt1=nt1%10;
      cout<<nt1/5<<" moeda(s) de R$ 0.05"<<endl;
      nt1=nt1%5;
      cout<<nt1/1<<" moeda(s) de R$ 0.01"<<endl;

}
    return 0;
}

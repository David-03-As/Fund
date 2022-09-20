//José David Aguiar Sosa
#include<iostream>
using namespace std;
int main()
{
float jdas_x,jdas_y,jdas_s=0,jdas_r=0,jdas_m=0,jdas_d=0;
 cout<<"Ingrese valor 1: ";
 cin>>jdas_x;
 cout<<"Ingrese valor 2: ";
 cin>>jdas_y;
 jdas_s=jdas_x+jdas_y;
 jdas_r=jdas_x-jdas_y;
 jdas_m=jdas_x*jdas_y;
 jdas_d=jdas_x/jdas_y;
 cout<<"La suma de "<<jdas_x<<"+"<<jdas_y<<"="<<jdas_s<<endl;
 cout<<"La resta de "<<jdas_x<<"-"<<jdas_y<<"="<<jdas_r<<endl;
 cout<<"La multiplicación de "<<jdas_x<<"*"<<jdas_y<<"="<<jdas_m<<endl;
 cout<<"La división de "<<jdas_x<<"/"<<jdas_y<<"="<<jdas_d<<endl;
return 0;
}

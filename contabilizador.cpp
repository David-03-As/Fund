//José David Aguiar Sosa
#include<iostream>
using namespace std;

int main()
{
int jdas_i=0,jdas_l; 
float jdas_x,jdas_s=0;
     cout << "Ingresé limite: ";
     cin >>jdas_l;
    do {
     cout << "Ingresé número : ";
     cin >>jdas_x;
     jdas_i=jdas_i+1;
     jdas_s=jdas_s+jdas_x;
    }while(jdas_i<jdas_l);
     cout << "Se ingresaron "<<jdas_l<<" números "<<" que sumaron "<<jdas_s<<endl;
    
    return 0;
}

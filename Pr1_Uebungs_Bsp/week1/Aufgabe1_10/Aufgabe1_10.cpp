#include<iostream>
#include<cmath>
using namespace std;

int main (){
double koef[3];
double x{0};


for (size_t i = 0; i < 4; i++)
{
    cout<<"Geben sie den "<<1+i<<"en Koeffizienten ein"<<endl;
    cin>>koef[i];

}
cout<<"Geben sie die Stelle an die berechent werden soll"<<endl;
cin>>x;

cout<<"Der Wert an der Stelle x="<<x<<" betraegt "<<koef[3]*pow(x,4)+koef[2]*pow(x,3)+koef[1]*pow(x,2)+koef[0]*x<<endl;
return 0;
}
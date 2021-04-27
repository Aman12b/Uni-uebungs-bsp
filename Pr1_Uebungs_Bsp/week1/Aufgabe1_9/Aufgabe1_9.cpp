#include<iostream>
using namespace std;

int main (){

double x{0};

cout<<"Geben sie die Maenge des Wasserstoffs in g an"<<endl;
cin>>x;

cout<<"Bei der Verbrennung von "<<x<<"g Wasserstoff entsteht "<<x*9<<"g Wasser und es wird "<<x+0.5<<"g Sauerstoff benoetigt."<<endl;

return 0;
}
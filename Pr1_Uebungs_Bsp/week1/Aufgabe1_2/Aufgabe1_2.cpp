#include<iostream>
using namespace std;

int main(){

    double preis, steuersatz;

    cout<< "Preis angeben"<<endl;
    cin >> preis;
    cout<<"Steuersatz angeben"<<endl;
    cin>> steuersatz;

    cout<< "Preis inklusive Steuersatz betraegt "<<preis*(1+(steuersatz/100))<<endl;




}
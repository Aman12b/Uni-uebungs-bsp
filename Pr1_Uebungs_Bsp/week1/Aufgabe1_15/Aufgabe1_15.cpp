#include<iostream>

using namespace std;

int main(){

    double eingabe{0},x{0};

    cout<<"Zahl eingeben"<<endl;
    cin>>x;
    eingabe+=x;
    cout<<"Zahl eingeben"<<endl;
    cin>>x;
    eingabe+=x;
    cout<<"Zahl eingeben"<<endl;
    cin>>x;
    eingabe+=x;
    cout<<"Zahl eingeben"<<endl;
    cin>>x;
    eingabe+=x;
    cout<<"Zahl eingeben"<<endl;
    cin>>x;
    eingabe+=x;

    cout<<"Der Mittelwert luatet "<<eingabe/5<<endl;
}
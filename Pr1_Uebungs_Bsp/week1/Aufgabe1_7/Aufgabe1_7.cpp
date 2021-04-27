#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double betrag, kurs{0.85};
    int auswahl;
    cout<<"Geben sie eine Geldbetran ein"<<endl;
    cin>> betrag;
    cout<<"Fuer Doller auf Euro waehlen sie 1"<<endl;
    cout<<"Fuer Euro auf Doller waehlen sie 2"<<endl;
    cin>> auswahl;
    switch (auswahl)
    {
    case 1:
        cout<<betrag<<" Doller ergibt "<<kurs*betrag<<" Euro.";
        break;
    case 2:
        cout<<betrag<<" Euro ergibt "<<betrag/kurs<<" Doller.";
        break;
    default:
        cout<<"Keine gueltige Auswahl getroffen";
        break;
    }
    


    return 0;

}
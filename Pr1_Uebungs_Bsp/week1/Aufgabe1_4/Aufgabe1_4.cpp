#include<iostream>
using namespace std;

int main(){

 const double pi{3.14159265358979323846};


    double radius,winkel;
    cout<< "Radius angeben"<<endl;
    cin>>   radius;
    cout<<"Winkel angeben"<<endl;
    cin>>winkel;
    cout<<"Flaeche des Kreissektors betraegt "<<(radius*radius*pi*360)/winkel<<endl; 
    return 0;
}
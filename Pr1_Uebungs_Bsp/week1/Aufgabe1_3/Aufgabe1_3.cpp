#include<iostream>
#include<cmath>
using namespace std;

int main(){

 const double pi{3.14159265358979323846};


    double radius,winkel;
    
    cout<< "Radius angeben"<<endl;
    cin>>   radius;
    cout<<"Winkel angeben"<<endl;
    cin>>winkel;
    cout<<"Flaeche des Kreissegments betraegt "<<(radius*radius*pi*winkel/360)-(radius*radius*sin(winkel*pi/180))/2<<endl; 
     

    return 0;
}


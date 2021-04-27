#include<iostream>
using namespace std;

int main(){

     int n;
    cout<<"Geben sie eine natuerliche Zahl ein"<<endl;
    cin>> n;
    int summe{0};
    while (n>0)
    {
        summe+=n--;
        cout<<n;

    }
    cout<<"Die Summe aller natuerlichen Zahlen lautet:"<<endl;
    cout<<summe;
    return 0;

}
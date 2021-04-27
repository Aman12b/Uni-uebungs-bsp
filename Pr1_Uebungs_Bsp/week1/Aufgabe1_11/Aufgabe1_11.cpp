#include<iostream>

using namespace std;

int main(){

    double werte[4];
    
    for (size_t i = 0; i < 5; i++)
    {
        cout<<"Bitte geben sie eine Zahl ein"<<endl;
        cin>>werte[i];
    }
        double total;
        for(double element : werte)
        {total+=element;}    

    cout<<"DEr Mittelwert der eingegebenen Zahlen ergibt "<<total/(sizeof(werte)/sizeof(werte[0]))<<endl;
    return 0;

}
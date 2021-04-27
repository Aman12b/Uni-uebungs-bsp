#include <iostream>

using namespace std;

int main(){

    int i,counter{0},gerade{0};

    while (i!=0)
    {
        cout<<"geben sie eine Zahl ein =!0"<<endl;
        cin>> i;
        if (i%2==0&&i!=0)
        {
            gerade++;
        }
        counter++;
    }

    cout<<"Es wurden "<<--counter<<" Zahlen eingegeben, davon waren "<<gerade<<" gerade und "<<counter-gerade<<" ungerade Zahlen."<<endl;
}
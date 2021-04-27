#include<iostream>
#include<string>

using namespace std;

int main(){

    
    int n{0};
    bool restart{true};
    char abfrage;
    string ausgabe{""};
    do
    {
        cout<<"Bitte geben sie eine Zahl ein"<<endl;
        cin>>n;

        if (n%1000!=0)
        {
            for (size_t i = 0; i < 3; i++)
            {
                ausgabe+=to_string((n%10));
                n/=10;
            }
            
            cout<<"Die Umkehrung der eingegebenen Zahl lautet "<<ausgabe<<endl;
            
                
        }
        
        cout<<"Wollen sie weitere Zahlen eingeben? [j/n]"<<endl;
        cin>>abfrage;
        if(toupper(abfrage)!='J')
            break;
    
    } while (true);



}
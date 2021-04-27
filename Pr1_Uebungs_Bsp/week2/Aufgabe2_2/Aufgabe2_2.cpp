#include<iostream>


using namespace std;

int main(){

    
    int n{0},quersumme{0};
    bool restart{true};
    char abfrage;

    do
    {
       
    
    
        
        cout<<"Bitte geben sie eine Zahl ein"<<endl;
        cin>>n;

        if (n%1000!=0)
        {
            for (size_t i = 0; i < 3; i++)
            {
                quersumme+=(n%10);
                n/=10;
            }
            
            cout<<"Die Quersumme der eingegebenen Zahl "<<n<<" lautet "<<quersumme<<endl;
            if(quersumme%3!=0){
                cout<<"Die eingegebene Zahl ist nicht durch 3 teilbar"<<endl;}
                else{
                cout<<"Die eingegebene Zahl ist durch 3 teilbar"<<endl;}
                
        }
        
        cout<<"Wollen sie weitere Zahlen eingeben? [j/n]"<<endl;
        cin>>abfrage;
        if(toupper(abfrage)!='J')
            break;
    
    } while (true);



}
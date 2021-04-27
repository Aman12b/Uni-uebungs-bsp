#include<iostream>


using namespace std;

int main(){

    
    int n{0},m{0},z{1};
    bool restart{true};
    char abfrage;

    do
    {
       
    
    
        cout<<"Bitte geben sie eine Zahl fuer m ein"<<endl;
        cin>>m;
        cout<<"Bitte geben sie eine Zahl fuer n ein"<<endl;
        cin>>n;

        if (m>0&&n>0)
        {
            for (size_t i = 0; i < n-1; i++)
            {
                m/=10;
            }
            
            cout<<"Die Zahl an der Stelle "<<n<<" lautet "<<m%10<<endl;
        }
        
        cout<<"Wollen sie weitere Zahlen eingeben? [j/n]"<<endl;
        cin>>abfrage;
        if(toupper(abfrage)!='J')
            restart=false;
    
    } while (restart);



}
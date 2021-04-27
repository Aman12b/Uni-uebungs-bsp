#include <iostream>
#include <limits>
using namespace std;


void funktion(int n){
    cout<<endl;
    for (int a = 1; a < n; a++)
    {
        if (n%a==0||n%a==1)
        {
            
            cout<<a;
            for (int i = 1; i < n/a; i++)
            {
                cout<<"+"<<a;
            }
            
            if (n%a==0)
            {
                cout<<endl;
            }
            if (n%a==1)
            {
                cout<<"+1"<<endl;
            }
            
        }
    }
    cout<<n<<endl;
}


int main(){

bool restart{true};string repeat;int eingabe{0};
do
{   

        do
        {
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            }
           
           cout<<"Bitte geben sie eine Zahl ein!"<<endl;
           cin>>eingabe;
        } while (cin.fail());
          
    funktion(eingabe);
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Wollen sie weitere Zahlen eingaben? [j/n]"<<endl;
    cin>>repeat;
    restart=toupper(repeat[0])=='J'?true:false;
} while (restart);

return 0;
}

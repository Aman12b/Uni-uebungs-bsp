#include<iostream>
#include <string.h> 
using namespace std;


string output(int a,int maxlength){
//returned ein string welches je nach Ziffernläge genügen Leerzeichen
//dazu gibt, damit Tie tabelle symetrisch ist

    string output;
    output=to_string(a);
    for (size_t i = 0; i < maxlength-(to_string(a).length()); i++)
    {
        output+=" ";
    }
    return output;
}


int main(){


    int n{0},cont{0},auswahl{0};
    string spacer{" "};
    cout<<"Fuer Multiplikationstabelle waehlen sie die 2, Additionstabelle waehlen sie die 1 "<<endl;
    cin>>auswahl;
    cout<<"Geben sie ein Zahl fuer n ein"<<endl;
    cin>>n;
    int maxzahl=to_string(n*n).length();
    
    if (auswahl==1)
    {
        
        for (int i = 0; i < n; i++)
        {
            for (int a=i; a<i+n; a++)
             {
                cout<<output((a),maxzahl);
             }
            cout<<endl;
             cont++;
        }

    }
    else{
        if (auswahl==2){
       

       for (int i = 0; i < n; i++)
        {
          for (int a=0; a<n; a++)
            {
                  cout<<output((a*i),maxzahl);
            }
            cout<<endl;
            cont++;
        }
    }
    }
}


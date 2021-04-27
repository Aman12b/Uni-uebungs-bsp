#include<iostream>
#include<vector>
#include<limits> 
#include<ios>
#include"Geheim.h"

//Die Klasse Geheim dient zum Speichern von wichtigen Informationen, die mit Passworten geschützt werden können. 
//Jedes Objekt enthält außer der zu speichernden Information (String) noch einen zweiten String, das Passwort. 
//Ist das Passwort leer, so ist das Objekt offen, ansonst ist es gesperrt. Implementieren und testen Sie zumindest 
//die folgenden Methoden: 

using namespace std;
ostream& operator<<(ostream& o, Geheim& gh){

    if (!gh.checkseal())
    {
        return o<<gh.getinfo();
    }
    return o<<"";
}
void clearline(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main(){

    int a;bool run{true};
    vector<Geheim> gh;
    do
    {
        cin>>a;
        switch (a)
        {
        case 1:{
            clearline();string a,b;
            cout<<"Information eingeben: "<<endl;
            getline(cin,a);
            cout<<"Passwort eingeben: "<<endl;
            getline(cin,b);
            Geheim g(a,b);
            gh.push_back(g);
        }break;

        case 2:{
            clearline();string a;
            cout<<"Information eingeben: "<<endl;
            getline(cin,a);
            Geheim g(a);
            gh.push_back(g);
        }break;

        case 3:{
           clearline();
           
           if (gh.front().checkseal())
           {
               string pass;
               cout<<"Pass eingeben: "<<endl;
                getline(cin,pass);
               if(gh.front().unlock(pass)){
                    cout<<"entsperrt"<<endl;
                    cout<<gh.front().len()<<endl;}
                 else 
                    cout<<"fehler!"<<endl;
           }else
           {
               cout<<gh.front().len()<<endl;
           }
           
           
        }break;
        
        default:
        run=false;
            break;
        }


    } while (run);
    

    return 0;
}
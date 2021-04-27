#include<iostream>
#include<string>
//Schreiben Sie zwei Funktionen, die jeweils eine Zeichenkette als Parameter erhalten und die umgekehrte 
//Zeichenkette (also die ursprüngliche Zeichenkette von rechts nach links gelesen) retournieren. 
//Verwenden Sie dazu in der ersten Funktion eine Schleife und in der zweiten Funktion keine Schleife.
//Es dürfen nur die in der Legende angeführten Methoden der Klasse string verwendet werden. 
using namespace std;



string umkehr1(string kette){

string umkehrung;
for (int i = kette.length()-1; i>=0; i--)
{
    umkehrung+=kette[i];
  
}
return umkehrung;

}

string umkehr2(string kette){

    if (kette.length()==0)
    {
        return kette;
    }
    
    char lastchar{kette.at(kette.length()-1)};
    kette.pop_back();
    return lastchar+umkehr2(kette);
}

string manip(const string& s){
    if(s.empty())
    {
        return s;

    }
    char first{s.at(0)};
    string rest{s.substr(1)};
    return manip(rest)+first;



}

int main(){

string eingabe,restart;
bool run{true};

do
{   
    cout<<"Bitte geben sie eine Zeichenfolge ein! \n";
    cin>> eingabe;

    cout<<"Die Umkehrung durch Funktion 1 lautet: \n";
    cout<<manip(eingabe)<<endl;
    cout<<"Die Umkehrung durch Funktion 2 lautet: \n";
    cout<<umkehr2(eingabe)<<endl;
    cout<<"Wollen sie das Programm erneurt durchfuehren? [j/n] \n";
    cin>>restart;
    run=toupper(restart[0])!='J'?false:true;
} while (run);



return 0;
}
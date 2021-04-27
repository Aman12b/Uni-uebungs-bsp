#include<iostream>
using namespace std;



int tosekconv(int jahre,int tage,int stunden,int minuten,int sekunden){
    //Converts y,d,h,m,s into secounds
    int output=jahre*(365*24*60*60)+tage*(24*60*60)+minuten*(60*60)+sekunden;
    
    return output;
}

int * sekconv(int eingabe){
    //Converts secs to y,d,h,m,a
     int jahr{0},tage{0},stunden{0},minuten{0},sekunden{0};
     static int ausgabe[5];
    if (eingabe/60>=1)
    {
        minuten=eingabe/60;
        sekunden=eingabe-(minuten*60);
        if (minuten>=60)
        {
            stunden=minuten/60;
            minuten=minuten-(stunden*60);
        }
        if (stunden>=24)
        {
            tage=stunden/24;
            stunden=stunden-(tage*24);
        }
        if (tage>=365)
        {
            jahr=tage/365;
            tage=tage-(jahr*365);
        }       
       
    }else
    {
        sekunden=eingabe;
    }
    ausgabe[0]=jahr;
    ausgabe[1]=tage;
    ausgabe[2]=stunden;
    ausgabe[3]=minuten;
    ausgabe[4]=sekunden;
    return ausgabe;
}

int main(){
do
{
    int input;
    char abfrage;

    cout<<"Fuer Sekuden auf Jahr,Tag,Stunde,Minute umzurechen waehlen sie die 1 ein"<<endl;
    cout<<"Fuer Jahr,Tag,Stunde,Minute auf Sekunden umzurechen waehlen sie die 2 ein"<<endl;
    cin>>input;
    if (input==1)
    {
        cout<<"Bitte geben sie die Sekunden an:"<<endl;
        cin>>input;
        int* out=sekconv(input);
        cout<<"Die eingegebenen "<<input<<" Sekunden ergeben:"<<endl<<" Jahre:"<<*out<<endl<<" Tage:"<<*out+1<<endl<<" Stunden:"<<*out+2<<endl<<" Minuten:"<<*out+3<<endl<<" Sekunden:"<<*out+4<<endl;

    }else{
        if (input==2)
        {
            int jahre,tage,stunden,minuten,sekunden;
            cout<<"Bitte geben sie die Jahre an:"<<endl;
            cin>>jahre;
            cout<<"Bitte geben sie die Tage an:"<<endl;
            cin>>tage;
            cout<<"Bitte geben sie die Stunden an:"<<endl;
            cin>>stunden;
            cout<<"Bitte geben sie die Minuten an:"<<endl;
            cin>>minuten;
            cout<<"Bitte geben sie die Sekunden an:"<<endl;
            cin>>sekunden;
            cout<<"Ergeben "<<tosekconv(jahre,tage,stunden,minuten,sekunden)<<" Sekunden."<<endl;
            
        }
        else
        {
            cout<<"Ungueltige Eingabe!"<<endl;
        }        
    }
     cout<<"Wollen sie das Programm fortsetzen? [j/n]"<<endl;
        cin>>abfrage;
        if(toupper(abfrage)!='J')
            break;
    
} while (true);
    
return 0;

}


//(+) Ein befreundeter, fanatischer CD-Sammler hat Sie gebeten, ihm ein einfaches Programm zur Verwaltung 
//seiner Sammlung zu schreiben. Er wünscht sich folgende Funktionen: Für jedes Album sollen Interpret, 
//Name und Stilrichtung speicherbar sein. Eingabe, Ändern und Löschen von Eintragungen soll möglich sein. 
//Eine Suche soll entweder nach Interpret, nach Albumname oder Stilrichtung vorgenommen werden können und 
//eine Liste aller jeweils passenden CDs liefern. Album, Sammlung 

#include<iostream>
#include<cctype>
#include<limits> 
#include<ios>
#include"Sammlung.h"
#include"Album.h"


using namespace std;
int main(){
bool run{true};
Sammlung s;
Album a1("Inter0","Album0","Rock");
Album a2("Inter1","Album1","HipHop");
Album a3("Drake","Hotline Bling","Rap" );
Album a4("Justin Bieber","What Do You Mean?","HipHop");
Album a5("Silento","Watch Me","Pop");
Album a6("Fetty Wap ft. Remy Boyz", "Fetty Wap","HipHop");
Album a7("The Weeknd", "Beauty Behind the Madness","HipHop");
Album a8("Selena Gomez ft. A$AP Rocky","Good for You", "Pop");
Album a9("Big Bang", "MADE","HipHop");
Album a10("Big Bang", "NOTMADE","Pop");
s.Add(a1);s.Add(a2);s.Add(a3);s.Add(a4);s.Add(a5);s.Add(a6);s.Add(a7);s.Add(a8);s.Add(a9);s.Add(a10);
int input{0};
string search;
do
{
   cout<<"Um ein Album hinzufuegen waehlen sie die 0"<<endl; 
   cout<<"Um nach Album zu suchen 1,um nach einen Interpet zu suchen 2"<<endl;
   cout<<"Um nach einer Stilrichtung zu suchen 3, um die Liste auszugeben 4"<<endl;
   cout<<"um ein Album zu loeschen 5,um eine Eintrag zu bearbeiten 6"<<endl;
   cout<<"Um das Programm zu beenden die 7"<<endl;
   string album,inter,stil;
   
   cin>>input;
   switch (input)
   {
   case 0:{
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Geben sie den Namen des Albums an:"<<endl;getline(cin,album);
      cout<<"Geben sie den Namen des Interprets an:"<<endl;getline(cin,inter);
      cout<<"Geben sie die Stilrichtung an:"<<endl;getline(cin,stil);
      Album neu(inter,album,stil);
      s.Add(neu);
   }break;
   case 1:{
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Bitte geben sie das zu suchende Album ein:"<<endl;
      getline(cin,search);
      for (Album a:s.searchAlbum(search))
      {
         cout<<"Interpret: "<<a.getInterpret()<<" Album: "<<a.getName()<<" Stil: "<<a.getStilrichtung()<<endl;
      }  
   }break;
   case 2:{
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Bitte geben sie den Interpet an:"<<endl;
      getline(cin,search);
      for (Album a:s.searchInterpret(search))
      {
         cout<<"Interpret: "<<a.getInterpret()<<" Album: "<<a.getName()<<" Stil: "<<a.getStilrichtung()<<endl;
      }  
   }break;
   case 3:{
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Bitte geben sie die Stilrichtung an:"<<endl;
      getline(cin,search);
      for (Album a:s.searchStilrichtung(search))
      {
         cout<<"Interpret: "<<a.getInterpret()<<" Album: "<<a.getName()<<" Stil: "<<a.getStilrichtung()<<endl;
      }  
   }break;
   case 4:{
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      for (Album a:s.getAll())
      {
         cout<<"Interpret: "<<a.getInterpret()<<" Album: "<<a.getName()<<" Stil: "<<a.getStilrichtung()<<endl;
      }  
   }break;
   case 5:{
      int count{0};
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      for (Album a:s.getAll())
      {
         cout<<count<<" Interpret: "<<a.getInterpret()<<" Album: "<<a.getName()<<" Stil: "<<a.getStilrichtung()<<endl;
         count++;
      }  
      cout<<"Geben sie die Zahl des Albums ein welches geloescht werden soll"<<endl;
      cin>>count;
      cout<<s.deleteing(count);count=0;
   }break;
   case 6:{
      int unsigned long count{0};
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      for (Album a:s.getAll())
      {
         cout<<count<<" Interpret: "<<a.getInterpret()<<" Album: "<<a.getName()<<" Stil: "<<a.getStilrichtung()<<endl;
         count++;
      }  
      cout<<"Geben sie die Zahl des Albums ein welches sie bearbeiten wollen"<<endl;
      cin>>count;cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Um die vorhandenen Inforamtionen beizubehalten drüchen sie Enter:"<<endl;
      cout<<"Geben sie den Namen des Albums an:"<<endl;getline(cin,album);
      cout<<"Geben sie den Namen des Interprets an:"<<endl;getline(cin,inter);
      cout<<"Geben sie die Stilrichtung an:"<<endl;getline(cin,stil);
      cout<<s.change(count,album,inter,stil);count=0;
   }break;
   default:
      run=false;
      break;
   }
   cout<<"--------------------------------------------------------------------------"<<endl;
} while (run);




}


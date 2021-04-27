#include<iostream>
using namespace std;
//Schreiben Sie eine Funktion bool intTest(int n, char c), die prüft, ob die Ziffer c in der Zahl n vorkommt. 

int intTest(int n,char c){

 return to_string(n).find(c)!=SIZE_MAX?true:false;

}

int main(){
	bool restart{true};
	int eingabe{0};
	char suche,exit;
	string eingabe2;
	do{
	
	cout<<"Geben sie eine Zahl ein"<<endl;
	cin>> eingabe;
	if(!cin){
		cout<<"Error Bitte nur Zahlen eingeben"<<endl;
		break;
	}
	cout<<"Geben sie ein char ein"<<endl;
	cin>> eingabe2;


	while(eingabe2.length()!=1){
	eingabe2.clear();
	cout<<"Bitte nur ein Zeichen eingeben!"<<endl;
	cin>>eingabe2;
	}
	suche=eingabe2[0];


	string output=intTest(eingabe,suche)?("Zahl enthaelt Char \n"):("Zahl enthaelt nicht den Char \n");
	cout<<output;
	cout<<"Wollen sie weitere Zahlen eingaben? [j/n]"<<endl;
	cin>>exit;
	restart=toupper(exit)=='J'?true:false;
	}while(restart);	

	return 0;

}

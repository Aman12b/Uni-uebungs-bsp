#include<iostream>
//Palindrome sind Worte (oder auch Sätze), die von links nach rechts gelesen das gleiche ergeben, 
//wie von rechts nach links gelesen. Ein bekanntes Beispiel ist der Name "Otto". Das kann man auch auf Zahlen anwenden: 
//So ist zum Beispiel 121 ein Palindrom, während 123 keines ist. Für Zahlen ist die Eigenschaft "Palindrom" natürlich
//abhängig von der gewählten Darstellung. So ist etwa die Zahl 15 in Binärdarstellung (1111) ein Palindrom, nicht aber 
//in der Dezimaldarstellung. Schreiben Sie zwei Funktionen ''bool pal10(unsigned)'' und ''bool pal2(unsigned)'', 
//die feststellen, ob der Eingangsparameter ein Palindrom im Dezimalsystem (pal10) bzw. im Binärsystem (pal2) ist. 
//Verwenden Sie in der Funktion pal2 weder Multiplikation (*,*=), noch Division (/,/=).  
using namespace std;


int multiplier(int a,int b,int c);
int mult(int a,int b);
bool pal10(unsigned){



return true;
}
    
    
    
    
bool pal2(unsigned){


return true;
}
int division(int dividend,int divisor){

    int leng=to_string(dividend).length(),count{10},d{};
    int a[leng]={};
    for (int i = leng-1; i >= 0; i--)
    {
        a[i]=dividend%count;
        dividend-=a[i];
        mult(10,count);
    }
       
    for(int i:a){
        cout<<i<<" ";
    }


    return 0;
}

int multiplier(int a,int b,int c){
    if (b==1)
    {
        return a;
    }
    return multiplier(a+c,--b,c);  
}
int mult(int a,int b){

    return multiplier(a,b,a);
}

int main(){

    division(524,2);


}
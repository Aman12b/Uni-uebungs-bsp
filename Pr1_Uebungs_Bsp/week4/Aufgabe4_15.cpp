#include<iostream>

using namespace std;

string Addition(string s1,string s2){

char zahlen[]{'0','1','2','3','4','5','6','7','8','9'};

string output{""};
int s1kom{0},s2kom{0},over{0},sumand1{0},suand2{0},laenge{0},nachkommer{0};
s1.find('.')!=SIZE_MAX?s1kom=s1.find('.'):s1kom=0;
s2.find('.')!=SIZE_MAX?s2kom=s2.find('.'):s2kom=0;
int s1nachkommer=s1.length()-s1kom;
int s2nachkommer=s2.length()-s2kom;
if (s1nachkommer>s2nachkommer)
{
    for (size_t i = s2nachkommer; i < s1nachkommer; i++)
    {
        s2+='0';
    }
    
}
else
{
    for (size_t i = s1nachkommer; i < s2nachkommer; i++)
    {
        s1+='0';
    }
}
cout<<s1.length()<<" "<<s1nachkommer<<endl;
cout<<s2.length()<<" "<<s2nachkommer<<endl;
if ((s1.length()-s1nachkommer)>(s2.length()-(s2.length()-s2kom)))
{
    cout<<"drinnen"<<endl;
    for (size_t i = (s1.length()-(s1.length()-s1kom)); i < (s2.length()-(s2.length()-s2kom)); i++)
    {
        s1='0'+s1;
    }
}
if ((s1.length()-(s1.length()-s1kom))<(s2.length()-(s2.length()-s2kom)))
{
    for (size_t i = (s2.length()-(s2.length()-s2kom)); i < (s1.length()-(s1.length()-s1kom)); i++)
    {
        s2='0'+s2;
    }
}





for (size_t i = 0; i < (s1.length()-s1kom); i++)
{
    /* code */
}


 return s2;   
}


int main(){

string eingabe{""};
cout<<Addition("21313.34343","123.12")<<endl;
cin>>eingabe;

cout<<"Ausabe: "<<eingabe.find('.')<<"  "<<SIZE_MAX;

}
#include<iostream>

using namespace std;

string Multiplikation(string s1,string s2){

string arr[s2.length()];

string output{""},mp{""};
int i{0},overflow{0};
for (i = 0; i < s2.length(); i++)
{
    for (size_t a = 0; a > s1.length(); a--)
    {
        mp=to_string(static_cast<int>(s2[a])*static_cast<int>(s1[i]+overflow));

        if (mp.length()>1)
        {
            arr[i]+=mp[mp.length()];
            overflow=0;
        }else
        {
            arr[i]+=mp;
        }
        
        mp.clear();
    }
    
}



}



int main(){

string eingabe{""};

cin>>eingabe;



}
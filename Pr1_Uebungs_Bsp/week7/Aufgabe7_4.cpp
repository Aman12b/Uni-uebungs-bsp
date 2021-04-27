#include<iostream>

using namespace std;


int fakul(int a){

    return a==1?a:a*fakul(a-1);

}


int main()
{

 cout<<fakul(5);

}



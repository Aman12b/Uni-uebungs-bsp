#include<iostream>
#include"Sammlung.h"
#include"Album.h"
using namespace std;


void Sammlung::Add(Album alb){
    albums.push_back(alb);
}

vector<Album> Sammlung::getAll(){return albums;};

vector<Album> Sammlung::searchInterpret(string name){
    vector<Album> result;
    for(Album a:albums){
        if (a.getInterpret()==name)
        {
            result.push_back(a);
        }
        
    }
    if(result.size()>0)
        return result;
    else
      throw runtime_error("Suche war erfolglos!");
}
vector<Album> Sammlung::searchAlbum(string name){
    vector<Album> result;
    for(Album a:albums){
        if (a.getName()==name)
        {
            result.push_back(a);
        }
        
    }
    if(result.size()>0)
        return result;
    else
      throw runtime_error("Suche war erfolglos!");
}
vector<Album> Sammlung::searchStilrichtung(string stil){
    vector<Album> result;
    for(Album a:albums){
        if (a.getStilrichtung()==stil)
        {
            result.push_back(a);
        }
        
    }
    if(result.size()>0)
        return result;
    else
      throw runtime_error("Suche war erfolglos!");
}


string Sammlung::deleteing(unsigned long del){
    if(del>albums.size()-1){
        return "Ungueltige Eingabe!\n";
    }
    try
    {
        albums.erase(albums.begin()+(del));
    }
    catch(exception& e)
    {
        return "Element konnte nicht gelöscht werden!\n";
    }
    return "Element wurde geloescht!\n";



}
string Sammlung::change(int a,string album,string inter,string stil){
    try
    {
       if(album.size()>0)
        albums.at(a).setName(album);

    if(inter.size()>0)
        albums.at(a).setInterpret(inter);

    if(stil.size()>0)
        albums.at(a).setStilrichtung(stil);
    }
    catch(const std::exception& e)
    {
        return e.what();
    }
    return "Album wurde geaendert\n";
    

}


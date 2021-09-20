#include "Analyseur.h"
#include "Verificateur.h"
#include "Occurrence.h"

Analyseur::Analyseur()
{

}

Analyseur::~Analyseur()
{
    delete V;
}

//vector<Occurrence> analyser(vector<string> texte)
//{
//
//}

vector<Occurrence> Analyseur::transformer()
{
  for(map<string,int>::iterator it=Stat.begin();it!=Stat.end();++it)
    {
        Occurrence oc;
        oc.setMot(it->first);
        oc.setOcc(it->second);
        stat.push_back(oc);
    }
    return stat;
}

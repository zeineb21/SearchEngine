#include "AnalyseurMap.h"
#include "Occurrence.h"

AnalyseurMap::AnalyseurMap()
{
    //ctor
}

AnalyseurMap::~AnalyseurMap()
{
    //dtor
}

vector<Occurrence> AnalyseurMap::analyser(vector<string> texte)//prend un vecteur de string et retourne l'occurrence des mots
{
    string mot;
    int taille=texte.size();
    V->saveWords();
    for(int i=0; i<taille; i++)
        {
            mot=V->caractereSpeciaux(V->minuscule(texte[i]));
            if(V->stopWords(mot)==false)
            {
                ++Stat[mot];
            }
        }
        return stat;
}

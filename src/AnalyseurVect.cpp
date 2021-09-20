#include "AnalyseurVect.h"
#include "Occurrence.h"

AnalyseurVect::AnalyseurVect()
{
    //ctor
}

AnalyseurVect::~AnalyseurVect()
{
    //dtor
}

vector<Occurrence> AnalyseurVect::analyser(vector<string> texte)
{
    Occurrence o;
    V->saveWords();
    if(V->stopWords(texte[0])==false)
        {
            o.setMot(V->caractereSpeciaux(V->minuscule(texte[0])));
            o.setOcc();
            stat.push_back(o);
        }
    int j=0;
    int taille=texte.size();
    for(int i=1; i<taille; i++)
        {
          if(V->stopWords(texte[i])==false)
          {
              if(stat[j].getMot()!=texte[i])
              {
                Occurrence c;
                c.setMot(V->caractereSpeciaux(V->minuscule(texte[0])));
                c.setOcc();
                stat.push_back(c);
              }
              else
                {
                  for(int k=0;k<j;k++)
                    {
                      if(stat[k].getMot()==V->minuscule(texte[i]))
                      stat[k].setOcc2();
                    }
                }
         }
      }
         return stat;
}

#include "IndexeurMap.h"

IndexeurMap::IndexeurMap()
{
    //ctor
}

IndexeurMap::~IndexeurMap()
{
    //dtor
}

void IndexeurMap::indexer(string chemin)//prend les stats que retourne l'analyseur et les met dans un fichier index.txt
{
    ofstream fichierIndex("index.txt",ios::app);
    for(map<string,int>::iterator t=Stat.begin();t!=Stat.end();++t)
        {
            fichierIndex << t->first <<'\t'<<chemin<<'\t'<< t->second<<endl;
        }
}

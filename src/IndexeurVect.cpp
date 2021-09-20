#include "IndexeurVect.h"

IndexeurVect::IndexeurVect()
{
    //ctor
}

IndexeurVect::~IndexeurVect()
{
    //dtor
}

void IndexeurVect::indexer(string chemin)//prend les stats que retourne l'analyseur et les met dans un fichier index.txt
{
    ofstream fichierIndex("index.txt",ios::app);
    int taille=stat.size();
    for(int i=0; i<taille;i++)
        {
            fichierIndex << stat[i].getMot() <<'\t'<<chemin<<'\t'<< stat[i].getOcc() <<endl;
        }
}

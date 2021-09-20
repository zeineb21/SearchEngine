#include "Lecteur.h"

Lecteur::Lecteur()
{
    //ctor
}

Lecteur::~Lecteur()
{
    //dtor
}

vector<string> Lecteur::extraireMots(string chemin)
    {
        string mot;
        ifstream fichier(chemin,ios::in);
        if(!fichier.is_open())
        {
            cout<<"erreur 1"<<endl;
        }
        else
        {
            while(fichier >> mot)
            {
                texte.push_back(mot);
            }
        }
        return texte;
    }

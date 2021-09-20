#include "Ordonnanceur.h"
#include "Verificateur.h"

Ordonnanceur::Ordonnanceur()
{

}

Ordonnanceur::~Ordonnanceur()
{
    delete v;
}

void Ordonnanceur::recherche (string req){}

vector<string> Ordonnanceur::splitRequete(string req)//methode qui decoupe une chaine en mots et les met dans un vecteur
{
    v=new Verificateur;
    stringstream chaine(req);
    string mot;
    vector<string> splitreq;
    v->saveWords();
    while(getline(chaine,mot,' '))
        {
            string Mot=v->caractereSpeciaux(v->minuscule(mot));
            if(v->stopWords(Mot)==false)
            {
                splitreq.push_back(Mot);
            }
        }
        return splitreq;
}

vector<string> Ordonnanceur::split(const string& s)
{
   string token;
   vector<std::string> tokens;
   istringstream tokenStream(s);
   while (getline(tokenStream, token, '\t'))
   {
      tokens.push_back(token);
   }
   return tokens;
}

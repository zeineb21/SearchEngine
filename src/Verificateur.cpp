#include "Verificateur.h"
#include "Lecteur.h"

Verificateur::Verificateur()
{

}

Verificateur::~Verificateur()
{
    delete l;
}

vector<string> Verificateur::saveWords()
{
    ifstream f("stopwords.txt",ios::in);
    l= new Lecteur;
    l->extraireMots("stopwords.txt");
    memoire=l->texte;
    return memoire;
}

bool Verificateur::stopWords(string mot)
{
    int i(0);
    bool trouve=false;
    while(i<memoire.size() && trouve != true )
        {
            if(mot==memoire[i])
                trouve=true;
            else
               {
                   i++;
               }
        }
        return trouve;
}

string Verificateur::minuscule(string mot)
{
    for(int i=0;i<mot.size();i++)
        {
            mot[i]=tolower(mot[i]);
        }
        return mot;
}

string Verificateur::caractereSpeciaux(string mot)
{
    int i(0);
    bool trouve=false;
    string caractere[6]={".",",",";",":","?","!"};
    int j= mot.size()-1;
    string car=string(1,mot[j]);
    while(i<6 && trouve == false)
        {
            if(car==caractere[i])
                trouve=true;
            else
                i++;
        }
    if(trouve==true)
        {
             string chaine;
             for(int j(0);j<mot.size()-1;j++)
             {
                chaine+=string(1,mot[j]);
             }
             return chaine;
        }
        else
            return mot;

}

void Verificateur::duree()
    {
        chrono::system_clock::time_point start = chrono::system_clock::now();
        for ( long i = 0; i < 10000000; ++i )
        {
           sqrt( 123.456L );
        }
        chrono::duration<double> sec = chrono::system_clock::now() - start;
        cout << "the execution took " << sec.count() << " seconds\n";
    }



#include "Moteur.h"
#include "Ordonnanceur.h"
#include "Lecteur.h"
#include "AnalyseurMap.h"
#include "IndexeurMap.h"
#include "Verificateur.h"
#include "OrdBinaire.h"
Moteur::Moteur()
{

}

Moteur::~Moteur()
{
    delete O;
    delete L;
    delete A;
    delete I;
    delete V;
}

void Moteur::ajouterFichier(string nomFichier)//methode qui extrait tous les mots d’un fichier, les analyse puis les indexe
{
    V= new Verificateur;
    L= new Lecteur;
    A= new AnalyseurMap;
    I= new IndexeurMap;
    L->extraireMots(nomFichier);
    A->analyser(L->texte);
    I->Stat=A->Stat;
    I->indexer(nomFichier);
}

void Moteur::supprimerFic(string chemin)//methode qui supprime un fichier de l'index
{
   OrdBinaire* O=new OrdBinaire;
   ifstream fichierIndex("index.txt",ios::in);
   ofstream tempIndex;
   tempIndex.open("temp.txt");
   string ligne;
   vector<string> splitligne;
   while(getline(fichierIndex,ligne))
   {
      splitligne = O->splitRequete(ligne);
      if(splitligne[1]!=chemin)
      tempIndex<<ligne<<endl;
   }
   fichierIndex.close();
   tempIndex.close();
   remove("index.txt");
   rename("temp.txt","index.txt");
}

void Moteur::AfficherIndex() //methode qui affiche l'index
{
    ifstream fichierIndex("index.txt");
    if(!fichierIndex.is_open())
    {
       cout<<"erreur 4"<<endl;
    }
    else
    {
       string ligne;
       while(getline(fichierIndex,ligne))
       {
           cout<<ligne<<endl;
       }
     }
}

void Moteur::ajouterChoix(Indexeur* I,Analyseur* A,string nomFichier,vector<string> texte)
{
    V=new Verificateur;
    V->duree();
    A->analyser(texte);
    I->Stat=A->Stat;
    I->stat=A->transformer();
    I->indexer(nomFichier);

}
void Moteur::chercherFic(Ordonnanceur* O,string req, int n)//methode qui affiche le resultat d'une requete de recherche
{
   V=new Verificateur;
   int j=0;
   O->recherche(req);
       while(j<n && j<O->score.size())
       {
          for(map<string,int>::iterator it=O->score.begin();it!=O->score.end();++it)
          {
              cout<<it->first<<' '<<it->second<<endl;
              j++;
          }
       }
       V->duree();
}
void Moteur::indexerDossier(string chemin)
{
    V=new Verificateur;
    V->duree();
    DIR *rep=nullptr;
    struct dirent* fichier=nullptr;
    rep = opendir (chemin.c_str());
    if (rep!= nullptr)
    {
       while ((fichier=readdir(rep))!= nullptr)
       {
         ajouterFichier(chemin+"\\"+ fichier->d_name);
       }
       closedir(rep);
    }
    else
    {
       cout<<"erreur 5"<<endl;
    }
}
void Moteur::reindexerFichier(string file)
{
    V=new Verificateur;
    V->duree();
    ifstream index("index.txt",ios::in);
    string mot;
    if(!index.is_open())
    {
     cout<<"erreur "<<endl;
    }
    else
    {
        while(index>>mot)
        {
            if(mot==file)
            {
                supprimerFic(file);
                ajouterFichier(file);
                break;
            }
        }
    }
}

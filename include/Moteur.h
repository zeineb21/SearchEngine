#ifndef MOTEUR_H
#define MOTEUR_H

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <map>
#include <iterator>
#include <sstream>
#include <cstring>
#include <stdio.h>
#include <dirent.h>
#include <Analyseur.h>
#include <Indexeur.h>
#include <Ordonnanceur.h>
#include <AnalyseurMap.h>
#include <IndexeurMap.h>
#include <Lecteur.h>
#include <Verificateur.h>
#include <typeinfo>
#include <OrdBinaire.h>

using namespace std;

class Moteur
{
    public:
        Moteur();
        Verificateur* V;
        Ordonnanceur* O;
        Lecteur* L;
        AnalyseurMap* A;
        IndexeurMap* I;
        virtual ~Moteur();
        void ajouterFichier(string);//methode d'ajout par defaut(optimisée)
        void supprimerFic(string);//methode qui supprime un fichier de l'index
        void AfficherIndex();//methode qui affiche l'index
        void ajouterChoix(Indexeur*,Analyseur*,string,vector<string>);//methode qui permet l'ajout d'un fichier avec configuration
        void chercherFic(Ordonnanceur*,string,int);//methode qui affiche le resultat d'une requete introduite par l'utilisateur
        void indexerDossier(string);//methode qui permet d'indexer un dossier(ensemble de fichiers texte)
        void reindexerFichier(string);//methode qui permet de reindexer un fichier
};

#endif // MOTEUR_H

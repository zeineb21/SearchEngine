#ifndef VERIFICATEUR_H
#define VERIFICATEUR_H
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
#include <Lecteur.h>
#include <chrono>
#include <cmath>

using namespace std;
class Verificateur
{
    public:
        Verificateur();
        Lecteur* l;
        virtual ~Verificateur();
        vector<string> memoire;
        vector<string> saveWords();//methode qui extrait les mots vide d'un fichier "stopwords.txt"
        bool stopWords(string);//methode qui permet de verifier si un mot est mot vide ou non
        string minuscule(string);//methode qui transforme une chaine en majuscule en minuscule
        string caractereSpeciaux(string);// methode qui verifie si le dernier caractere d'un mot est parmi la liste dans methode
        void duree();//methode qui retourne le temps d'execution d'une méthode
};

#endif // VERIFICATEUR_H

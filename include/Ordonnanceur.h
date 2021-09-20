#ifndef ORDONNANCEUR_H
#define ORDONNANCEUR_H

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
#include <Verificateur.h>

using namespace std;

class Ordonnanceur
{
    Verificateur* v;
    public:
        Ordonnanceur();
        virtual ~Ordonnanceur();
        vector<string> Res;
        map<string,int> score;
        map<string,int> ResF;
        virtual void recherche (string)=0;
        vector<string> split(const string& s);
        vector<string> splitRequete(string);
};

#endif // ORDONNANCEUR_H

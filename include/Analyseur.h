#ifndef ANALYSEUR_H
#define ANALYSEUR_H
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
#include <Occurrence.h>
#include <Verificateur.h>

using namespace std;

class Analyseur
{
    public:
        Analyseur();
        Verificateur* V=new Verificateur;
        virtual ~Analyseur();
        map<string,int> Stat;
        vector<Occurrence> stat;
        vector<Occurrence> transformer();//methode que transforme un map<string,int> en un vector<Occurrence>
        virtual vector<Occurrence> analyser(vector<string>)=0;
};

#endif // ANALYSEUR_H

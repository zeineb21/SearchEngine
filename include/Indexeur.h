#ifndef INDEXEUR_H
#define INDEXEUR_H
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
using namespace std;

class Indexeur
{
    public:
        Indexeur();
        virtual ~Indexeur();
        map<string,int> Stat;
        vector<Occurrence> stat;
        virtual void indexer(string)=0;
};

#endif // INDEXEUR_H

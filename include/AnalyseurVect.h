#ifndef ANALYSEURVECT_H
#define ANALYSEURVECT_H
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

using namespace std;

class AnalyseurVect : public Analyseur
{
    public:
        AnalyseurVect();
        virtual ~AnalyseurVect();
        vector<Occurrence> analyser(vector<string>);
};

#endif // ANALYSEURVECT_H

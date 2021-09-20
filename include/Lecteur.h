#ifndef LECTEUR_H
#define LECTEUR_H
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

using namespace std;

class Lecteur
{
    public:
        Lecteur();
        virtual ~Lecteur();
        vector<string> texte;
        vector<string> extraireMots(string);
};

#endif // LECTEUR_H

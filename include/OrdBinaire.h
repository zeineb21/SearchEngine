#ifndef ORDBINAIRE_H
#define ORDBINAIRE_H

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

#include <Ordonnanceur.h>


class OrdBinaire : public Ordonnanceur
{
    public:
        OrdBinaire();
        virtual ~OrdBinaire();
        void recherche(string);
};

#endif // ORDBINAIRE_H

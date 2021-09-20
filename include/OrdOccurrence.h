#ifndef ORDOCCURRENCE_H
#define ORDOCCURRENCE_H

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


class OrdOccurrence : public Ordonnanceur
{
    public:
        OrdOccurrence();
        virtual ~OrdOccurrence();
        void recherche(string);
};

#endif // ORDOCCURRENCE_H

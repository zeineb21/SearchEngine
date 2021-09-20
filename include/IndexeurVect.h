#ifndef INDEXEURVECT_H
#define INDEXEURVECT_H

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

#include <Indexeur.h>


class IndexeurVect : public Indexeur
{
    public:
        IndexeurVect();
        virtual ~IndexeurVect();
        void indexer(string);
};

#endif // INDEXEURVECT_H

#ifndef INDEXEURMAP_H
#define INDEXEURMAP_H

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


class IndexeurMap : public Indexeur
{
    public:
        IndexeurMap();
        virtual ~IndexeurMap();
        void indexer(string);
};

#endif // INDEXEURMAP_H

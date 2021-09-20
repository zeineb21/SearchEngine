#ifndef ANALYSEURMAP_H
#define ANALYSEURMAP_H
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


class AnalyseurMap : public Analyseur
{
    public:
        AnalyseurMap();
        virtual ~AnalyseurMap();
        vector<Occurrence> analyser (vector<string>);
};

#endif // ANALYSEURMAP_H

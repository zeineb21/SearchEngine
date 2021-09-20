#ifndef OCCURRENCE_H
#define OCCURRENCE_H
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

class Occurrence
{
    public:
        Occurrence();
        virtual ~Occurrence();
        int getOcc();
        string getMot();
        void setMot(string);
        void setOcc(int x=1);
        void setOcc2();
    private:
        int occ;
        string mot;
};

#endif // OCCURRENCE_H

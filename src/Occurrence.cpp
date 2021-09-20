#include "Occurrence.h"

Occurrence::Occurrence()
{
    //ctor
}

Occurrence::~Occurrence()
{
    //dtor
}

int Occurrence::getOcc()
{
    return occ;
}

string Occurrence::getMot()
{
    return mot;
}

void Occurrence::setMot(string ch)
{
    mot=ch;
}

void Occurrence::setOcc(int x)
{
    occ=x;
}

void Occurrence::setOcc2()
{
    occ++;
}

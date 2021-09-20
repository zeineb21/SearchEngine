#include "OrdOccurrence.h"

OrdOccurrence::OrdOccurrence()
{
    //ctor
}

OrdOccurrence::~OrdOccurrence()
{
    //dtor
}

void OrdOccurrence::recherche(string req)//methode de recherche d'occurrence
{
    ifstream index("index.txt",ios::in);
    if(!index.is_open())
        {
            cout<<"erreur 3"<<endl;
        }
    else
        {
            string ligne;
            while(getline(index,ligne))
                {
                    vector<string> tabRequete=splitRequete(req);
                    vector<string> splitLigne=split(ligne);
                    for (int i=0;i<tabRequete.size();i++)
                        {
                            if (splitLigne[0]==tabRequete[i])
                            {
                                Res.push_back(ligne);
                            }
                        }
                }
        }
    vector<string> splitcase;
    for(int i(0);i<Res.size();i++)
        {
            splitcase=split(Res[i]);
            score[splitcase[1]]+=stoi(splitcase[2]);
        }
    if(score.size()==0)
        {
            cout<<"No document matches the specified search terms"<<endl;
        }
}

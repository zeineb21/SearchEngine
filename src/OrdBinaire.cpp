#include "OrdBinaire.h"

OrdBinaire::OrdBinaire()
{
    //ctor
}

OrdBinaire::~OrdBinaire()
{
    //dtor
}

void OrdBinaire::recherche(string req)//methode de recherche binaire
{
    ifstream index("index.txt",ios::in);
    if(!index.is_open())
        {
            cout<<"erreur 2";
        }
    else
        {
            vector<string> tabRequete=splitRequete(req);
            vector<string> splitcase;
            string ligne;
            while(getline(index,ligne))
            {
                vector<string> splitLigne=split(ligne);
                for (int i(0);i<tabRequete.size();i++)
                {
                    if(splitLigne[0]==tabRequete[i])
                    {
                         Res.push_back(ligne);
                    }
                }
            }
            for(int j(0);j<Res.size();j++)
            {
                splitcase=split(Res[j]);
                ++score[splitcase[1]];
            }
            if(score.size()==0)
            {
                cout<<"No document matches the specified search terms"<<endl;
            }
        }

}

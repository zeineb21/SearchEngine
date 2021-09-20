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
#include <Lecteur.h>
#include <Verificateur.h>
#include <Occurrence.h>
#include <Analyseur.h>
#include <AnalyseurMap.h>
#include <AnalyseurVect.h>
#include <Indexeur.h>
#include <IndexeurMap.h>
#include <IndexeurVect.h>
#include <Ordonnanceur.h>
#include <OrdBinaire.h>
#include <OrdOccurrence.h>
#include <Moteur.h>

using namespace std;


int main()
{
   Verificateur* V=new Verificateur;
    V->saveWords();
    Moteur M;
    int selection=0;

    do
    {
        cout<<endl;
        cout << "  Z&M Search Engine Menu\n";
        cout << "  ====================================\n";
        cout << "  1.  Search\n";
        cout << "  2.  Add File\n";
        cout << "  3.  Reindex File\n";
        cout << "  4.  Add Folder\n";
        cout << "  5.  Delete File\n";
        cout << "  6.  Add File with configuration\n";
        cout << "  7.  Display index\n";
        cout << "\n";
        cout << "  8.  Exit\n";
        cout << "  ====================================\n";
        cout << "  Enter your selection: ";
         while(!(cin >> selection))
            {
            cin.clear();
            cin.ignore(999,'\n');
            cout<<"Invalid selection type!\nPlease enter your selection again: ";
            }
        cout << endl;
        system("cls");
        switch (selection)
        {
            case 1:
                    {

                    string req;
                    int s=0;
 		            int nbrRes;

                        cout << "  ====================================\n";
                        cout << "  1.  Binary search\n";
                        cout << "  2.  Occurrence\n";
                        cout << "\n";
                        cout << "  3.  Exit\n";
                        cout << "  ====================================\n";
                        cout << "  Enter your selection: ";
                        while(!(cin >> s))
                        {
                            cin.clear();
                            cin.ignore(999,'\n');
                            cout<<"Invalid selection type!\nPlease enter your selection again: ";
                        }
                            cout << endl;
                            switch(s)
                            {
                               case 1:
                               {
                                   cout<<" Enter here: ";
                                   OrdBinaire O;
                                   cin.ignore();
                                   getline(cin,req,'\n');
                                   cout<<endl;
                                   cout<<"Number of results to display :";
                                   cin>>nbrRes;
                                   cout<<endl;
                                   M.chercherFic(&O,req,nbrRes);
                                   break;
                               }
                               case 2:
                               {
                                  cout<<" Enter here: ";
                                  OrdOccurrence O;
                                  cin.ignore();
                                  getline(cin,req,'\n');
                                  cout<<endl;
                                  cout<<"Number of results to display :";
                                  cin>>nbrRes;
                                  cout<<endl;
                                  M.chercherFic(&O,req,nbrRes);
                                  break;
                               }
                               case 3:
                                  break;
                               default: cout <<s << " is not a valid menu item try again.\n";
                               cout<<endl;
                              }
                                cout<<endl;
                                cin.ignore();
                                cout << " Press enter to quit.. ";
                                cin.get();
                                system("cls");
                            break;
                }

            case 2:
                {
                    string file;
                    cin.ignore();
                    cout<<" Enter Full Directory & File Name (Example: C:\\User\\file.txt ): ";
                    getline(cin,file,'\n');
                    M.ajouterFichier(file);
                    system("cls");
                    break;
                }

            case 3:
                {
                    string fichier;
                    cin.ignore();
                    cout<<" Enter Full Directory & File Name (Example: C:\\User\\file.txt ): ";
                    getline(cin,fichier,'\n');
                    M.reindexerFichier(fichier);
                    system("cls");
                    break;
                }

            case 4:
                {
                    string dossier;
                    cin.ignore();
                    cout<<" Enter Full Directory : ";
                    getline(cin,dossier,'\n');
                    M.indexerDossier(dossier);
                    system("cls");
                    break;
                }

            case 5:
                {
                    system("cls");
                    string file;
                    cin.ignore();
                    cout<<" Enter Full Directory & File Name (Example: C:\\User\\file.txt ): ";
                    getline(cin,file,'\n');
                    M.supprimerFic(file);
                    cout<<endl;
                    system("cls");
                    break;
                }

            case 6:
                {
                    string file;
                    cin.ignore();
                    cout<<" Enter Full Directory & File Name (Example: C:\\User\\file.txt ): ";
                    getline(cin,file,'\n');
                    int s=0;
                    int sel=0;
                    cout << "  ====================================\n";
                    cout << "  1.Analyze with vector\n";
                    cout << "  2.Analyze with map\n";
                    cout << "\n";
                    cout << "  3.  Exit\n";
                    cout << "  ====================================\n";
                    cout << "  Enter your selection: ";
                    while(!(cin >> s))
                    {
                        cin.clear();
                        cin.ignore(999,'\n');
                        cout<<"Invalid selection type!\nPlease enter your selection again: ";
                    }
                        cout << endl;
                        system("cls");
                        switch(s)
                          {
                             case 1:
                             {
                                Lecteur L;
                                AnalyseurMap A;
                                cout << "  ====================================\n";
                                cout << "  1.  Index with vector\n";
                                cout << "  2.  Index with map\n";
                                cout << "\n";
                                cout << "  3.  Exit\n";
                                cout << "  ====================================\n";
                                cout << "  Enter your selection: ";
                                while(!(cin >> sel))
                                {
                                    cin.clear();
                                    cin.ignore(999,'\n');
                                    cout<<"Invalid selection type!\nPlease enter your selection again: ";
                                }
                                cout << endl;
                                system("cls");
                                switch(sel)
                                {
                                    case 1:
                                    {
                                        IndexeurVect I;
                                        M.ajouterChoix(&I,&A,file,L.extraireMots(file));
                                        break;
                                    }
                                    case 2:
                                    {
                                        IndexeurMap I;
                                        M.ajouterChoix(&I,&A,file,L.extraireMots(file));
                                        break;
                                    }
                                    case 3:
                                        break;
                                    default: cout <<sel << " is not a valid menu item try again.\n";
                                    cout<<endl;
                                }
                                        break;
                            }
                             case 2:
                             {
                                Lecteur L;
                                AnalyseurMap A;
                                cout << "  ====================================\n";
                                cout << "  1.  Index with vector\n";
                                cout << "  2.  Index with map\n";
                                cout << "\n";
                                cout << "  3.  Exit\n";
                                cout << "  ====================================\n";
                                cout << "  Enter your selection: ";
                                while(!(cin >> sel))
                                {
                                    cin.clear();
                                    cin.ignore(999,'\n');
                                    cout<<"Invalid selection type!\nPlease enter your selection again: ";
                                }
                                cout << endl;
                               system("cls");
                                 switch(sel)
                                {
                                    case 1:
                                    {
                                        IndexeurVect I;
                                        M.ajouterChoix(&I,&A,file,L.extraireMots(file));
                                        break;
                                    }
                                    case 2:
                                    {
                                        IndexeurMap I;
                                        M.ajouterChoix(&I,&A,file,L.extraireMots(file));
                                        break;
                                    }
                                    case 3:
                                        break;
                                    default: cout <<sel << " is not a valid menu item try again.\n";
                                    cout<<endl;
                                }
                               break;
                             }
                             case 3:
                                break;
                                default: cout <<s << " is not a valid menu item try again.\n";
                                cout<<endl;
                          }

                                cout<<endl;
                                break;
                }

            case 7:
                 {
                    M.AfficherIndex();
                    break;
                 }
             case 8:
                 {
                     cout << "Goodbye.\n";
                    return 0;
                 }


            default: cout <<selection << " is not a valid menu item try again.\n";

                cout << endl;
        }

    }while (selection != 8 );
    return 0;

};

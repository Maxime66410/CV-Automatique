#include "Fonctions.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <windows.h>

using namespace std;

string Nom = " "; // Nom de l'utilisateur
string Prenom = " ";  //  Pr�nom de l'utilisateur
string DateDeNaissance = " ";    //  Date de Naissance de l'utilisateur
string Adresse = " ";    //  Adresse de l'utilisateur
int Num = 0;    //  Num�ro de t�l�phone de l'utilisateur
string Mail = " ";    //  Mail de l'utilisateur
vector<string> expPro(2,"");    //  Exp�rience professionnelle de l'utilisateur
vector<string> etudForm(2,"");  //  Etudes et formations de l'utilisateur
vector<string> Comp(2,"");  //  Comp�tences de l'utilisateur
vector<string> CentrInteret(2,""); // Centre Int�ret de l'utilisateur

Fonctions::SauvegardeDesDonner()
{
    //Nom = "Sanchez";
    //Prenom = "Maxime";
    string const LeRepertoire(Nom + " " + Prenom + " CV.txt"); // R�pertoire ou le fichier ce cr�er + Nom du fichier
    ofstream monFichier(LeRepertoire.c_str()); // Cr�ation du fichier

    if(monFichier) // Enregistrement de toute les informations dans le fichier txt
    {
        cout << "Enregistrement a \x82" << "t\x82" << " fait avec succ\x88" << "s !" << endl;

        // Enregistrement des information g�n�ral

        monFichier << "Nom : " << Nom << endl;
        monFichier << "Pr�nom : " << Prenom << endl;
        monFichier << "Date de naissance : " << DateDeNaissance << endl;
        monFichier << "Adresse compl�te : " << Adresse << endl;
        monFichier << "E-Mail : " << Mail << endl;
        monFichier << "Num�ro de t�l�phone : +33" << Num << endl;

        monFichier << endl << endl << endl << endl;

        // Enregistrement des Exp�rience professionnelles

        monFichier << "--------------- Exp�rience professionnelles ---------------" << endl;

        for(int ab = 0 ; ab < expPro.size() ; ab++)
        {
            monFichier << "| - " << expPro[ab] << " - |" << endl;
        }

        monFichier << "-----------------------------------------------------------" << endl;

        monFichier << endl << endl << endl << endl;

        // Enregistrement des �tudes et formations

        monFichier << "--------------- �tudes et Formations ---------------" << endl;

        for(int ac = 0 ; ac < etudForm.size() ; ac++)
        {
            monFichier << "| - " << etudForm[ac] << " - |" << endl;
        }

        monFichier << "-----------------------------------------------------------" << endl;

        monFichier << endl << endl << endl << endl;

        // Enregistrement des comp�tences

        monFichier << "--------------- Comp�tences ---------------" << endl;

        for(int ad = 0 ; ad < Comp.size() ; ad++)
        {
            monFichier << "| - " << Comp[ad] << " - |" << endl;
        }

        monFichier << "-----------------------------------------------------------" << endl;

        monFichier << endl << endl << endl << endl;

        // Enregistrement des Centres D'int�r�t

        monFichier << "--------------- Centre D'int�r�t ---------------" << endl;

        for(int ae = 0 ; ae < CentrInteret.size() ; ae++)
        {
            monFichier << "| - " << CentrInteret[ae] << " - |" << endl;
        }

        monFichier << "-----------------------------------------------------------" << endl;

        monFichier << endl << endl << endl << endl;
    }
    else
    {
        cout << "ERREUR : Le fichier est d\x82" << "j\x85" << " existant ou impossible d'ouvrir le fichier." << endl;
    }

    return 0;
}

Fonctions::Enregistrement()
{
//  Information de base
    cout << "Information g\x82" << "n\x82" << "rale" << endl;

    cout << "Veuillez entr" << "\x82" << "e votre nom" << " : ";    //  Entr�e du Nom
    cin >> Nom;
    cout << "Votre nom est : " << Nom << endl;

    cout << "Veuillez entr" << "\x82" << "e votre pr" << "\x82" << "nom : ";    //  Entr�e du Pr�nom
    cin >> Prenom;
    cout << "Votre pr\x82"<< "nom est : " << Prenom << endl;

    cout << "Veuillez entr" << "\x82" << "e votre date de naissance (Format : JOUR/MOIS/ANNEE -> exemple : 05/12/2000) : ";    //  Entr�e de la date de naissance
    cin >> DateDeNaissance;
    cout << "Votre age est : " << DateDeNaissance << endl;

    cin.ignore();

    cout << "Veuillez entr" << "\x82" << "e votre adresse : ";    //  Entr�e de l'adresse
    getline(cin, Adresse);
    cout << "Votre adresse est : " << Adresse << endl;

    cout << "Veuillez entr" << "\x82" << "e votre num\x82" << "ro de t\x82" << "l\x82" <<"phone : ";    //  Entr�e de Num�ro
    cin >> Num;
    cout << "Votre num\x82" << "ro de t\x82" << "l\x82" <<"phone est : +33" << Num << endl;

    cin.ignore();

    cout << "Veuillez entr" << "\x82" << "e votre adresse e-mail : ";    //  Entr�e de e-mail
    getline(cin, Mail);
    cout << "Votre adresse e-mail est : " << Mail << endl;

    system("cls");

    // R�sum� des informations g�n�ral

    cout << "R\x82" << "sum\x82" << " des informations g\x82" << "n\x82" << "ral : " << endl;
    cout << "Nom : " << Nom << endl << "Pr\x82" << "nom : " << Prenom << endl << "Date de naissance : " << DateDeNaissance << endl;
    cout << "Adresse : " << Adresse << endl;
    cout << "Adresse E-mail : " << Mail << endl << "Num\x82" << "ro de T\x82" << "l\x82" << "phone : +33" << Num << endl;
    cout << "Passage au second formulaire dans 10 secondes...";

    usleep(10000000); // Permet d'attendre 10s
    system("cls");



    // Information Professionnelle




    /* Exp�riences Professionnelles*/




    cout << "Exemple pour les " << "exp\x82" << "riences profesionnelles :" << endl;
    cout << "> Ann\x82" << "e - Nom du poste occup\x82" <<" - Entreprise - Ville - " << endl;
    cout << "Tap\x82" << "e " << "\x82" <<"crivez ici pour une description pertinente des t\x83" << "ches effectu\x82" << "es en mettant bien en valeur des \x82" << "l\x82" << "ments cibl\x82" << "s par rapport au poste et \x83" << " l'entreprise" << endl;

    for(int i = 0 ; i < expPro.size() ; i++)
    {
        cout << "Veuillez taper votre exp\x82" << "riences profesionnelles : " << endl;

        cin.ignore();

        getline(cin, expPro[i]); // Entr�e la nouvelle exp�rience

        cout << endl;

        if(i != 0) // �vite de le demand� au premier lancement
        {
             string choixTemporaire; // Variable temporaire pour choisir si oui ou non on continue

             cout << "Voulez vous ajouter une autre exp\x82" << "rience ? (Oui / Non) : ";

             cin >> choixTemporaire;

             cin.ignore();

             if(choixTemporaire == "Oui" || choixTemporaire == "oui")
             {
                expPro.push_back(" ");
                cout << endl;
             }
             else
             {
                 break;
             }
        }

    }

    system("cls");

    cout << "Vos exp\x82" << "rience professionnelles sont : " << endl;

    for(int a = 0 ; a < expPro.size() ; a++) // Affichage de toute les exp�riences professionnelles
    {
        cout << expPro[a] << endl;
    }

    cout << endl << "Passage au \x82" << "tudes et Formations dans 20 secondes...";

    usleep(20000000); // Permet d'attendre 20s
    system("cls");




    /* �tudes et Formations */




    cout << "Exemple pour les " << "\x82" << "tudes et Formations :" << endl;
    cout << "> Ann\x82" << "e - Nom du diplome - \x82" << "cole OU Universit\x82" <<" - Ville - " << endl;
    cout << "Mettez ici le nom complet de votre formation, les options choisies et les \x82" << "ventuelles mentions obtenues et tous les \x82" << "l\x82" << "ments utiles." << endl;

    for(int b = 0 ; b < etudForm.size() ; b++)
    {
        cout << "Veuillez taper vos \x82" << "tudes et Formations : " << endl;

        cin.ignore();

        getline(cin, etudForm[b]); // Entr�e la nouvelle exp�rience

        cout << endl;

        if(b != 0) // �vite de le demand� au premier lancement
        {
             string choixTemporaires; // Variable temporaire pour choisir si oui ou non on continue

             cout << "Voulez vous ajouter une autre \x82" << "tudes et ou formations ? (Oui / Non) : ";

             cin >> choixTemporaires;

             cin.ignore();

             if(choixTemporaires == "Oui" || choixTemporaires == "oui")
             {
                etudForm.push_back(" ");
                cout << endl;
             }
             else
             {
                 break;
             }
        }

    }

    system("cls");

    cout << "Vos \x82" << "tudes et Formations sont : " << endl;

    for(int c = 0 ; c < etudForm.size() ; c++) // Affichage de toute les �tudes et formations
    {
        cout << etudForm[c] << endl;
    }

    cout << endl << "Passage au comp\x82" << "tences dans 20 secondes...";

    usleep(20000000); // Permet d'attendre 20s
    system("cls");




        /* Comp�tences */




    cout << "Exemple pour les comp" << "\x82" << "tences :" << endl;
    cout << "> Maitrise des logiciels xxx et yyy OU Lu, \x82" << "crit et parl\x82" << " couramment OU Bonnes notions professionnelles" << endl;

    for(int d = 0 ; d < Comp.size() ; d++)
    {
        cout << "Veuillez taper vos comp\x82" << "tences : " << endl;

        cin.ignore();

        getline(cin, Comp[d]); // Entr�e la nouvelle Comp�tence

        cout << endl;

        if(d != 0) // �vite de le demand� au premier lancement
        {
             string choixsTemporaires; // Variable temporaire pour choisir si oui ou non on continue

             cout << "Voulez vous ajouter une autre comp\x82" << "tences ? (Oui / Non) : ";

             cin >> choixsTemporaires;

             cin.ignore();

             if(choixsTemporaires == "Oui" || choixsTemporaires == "oui")
             {
                Comp.push_back(" ");
                cout << endl;
             }
             else
             {
                 break;
             }
        }

    }

    system("cls");

    cout << "Vos Comp\x82" << "tences sont : " << endl;

    for(int e = 0 ; e < Comp.size() ; e++) // Affichage de toute les Comp�tences
    {
        cout << Comp[e] << endl;
    }

    cout << endl << "Passage au centres d'int\x82" << "r\x88" << "t dans 20 secondes...";

    usleep(20000000); // Permet d'attendre 20s
    system("cls");





        /* Centres d'int�r�t */





    cout << "Exemple pour les centres d'int\x82" << "r\x88" << "t :" << endl;
    cout << "> Vous pouvez \x82" << "crire ici vos passions pourvues qu'elles soient singuli\x8A" << "res. On \x82" << "vitera des g\x82" << "n\x82" << "ralit\x82" << "s comunes, l'objectif \x82" << "tant de se d\x82" << "marquer des autres candidats." << endl;

    for(int f = 0 ; f < CentrInteret.size() ; f++)
    {
        cout << "Veuillez taper vos centre d'int\x82" << "r\x88" << "t : " << endl;

        cin.ignore();

        getline(cin, CentrInteret[f]); // Entr�e la nouvelle Centre int�r�t

        cout << endl;

        if(f != 0) // �vite de le demand� au premier lancement
        {
             string choisTemporaires; // Variable temporaire pour choisir si oui ou non on continue

             cout << "Voulez vous ajouter un autre centre int\x82" << "r\x88" << "t ? (Oui / Non) : ";

             cin >> choisTemporaires;

             cin.ignore();

             if(choisTemporaires == "Oui" || choisTemporaires == "oui")
             {
                CentrInteret.push_back(" ");
                cout << endl;
             }
             else
             {
                 break;
             }
        }

    }

    system("cls");

    cout << "Vos Centre d'int\x82" << "r\x88" << "t sont : " << endl;

    for(int e = 0 ; e < CentrInteret.size() ; e++) // Affichage de tout les centre d'int�r�t
    {
        cout << CentrInteret[e] << endl;
    }

    cout << endl << "Vos informations vont \x88" << "tre enregistr\x82" << " dans quelque instant...";

    usleep(5000000); // Permet d'attendre 5s
    system("cls");

    SauvegardeDesDonner();
}


Fonctions::Fonctions()
{
    //ctor
}

Fonctions::~Fonctions()
{
    //dtor
}

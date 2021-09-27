#include <iostream>
#include <string>
#include "Fonctions.h"

using namespace std;

Fonctions MaFonctions;

int main()
{
    string choixCreation;

   cout << "Bonjour, voulez vous cr" << "\x82" << "er votre CV automatis\x82 ? (Oui/Non) : ";  // Choix si oui ou non le programme sera fermer

   cin >> choixCreation; // Choix Oui ou Non
   cout << endl;

   if(choixCreation == "oui" || choixCreation == "Oui") // Ouverture
   {
       system("cls");
       MaFonctions.Enregistrement(); // Lance la fonction Enregistrement de Fontions.cpp
   }
   else // Fermeture
   {
       cout << "Arr" << "\x88" << "t du programme...";
       return 0;
   }
}

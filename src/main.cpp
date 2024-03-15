#include <iostream>
using namespace std;
int main() {
 int scootersTotal = 632;
 int scootersMaintenance = 10;
 int scootersDispos = 200;
 const float coutMinute = 0.33;
 cout << "****** Location de scooters électriques ******" << endl << endl;
 cout << "----------------------------------------------" << endl;
 cout << "Scooters disponibles: " << scootersDispos << endl ;
 cout << "Scooters en maintenance: " << scootersMaintenance << endl ;
 cout << "Scooters empruntés: " << scootersTotal-scootersDispos-scootersMaintenance << endl ;
 cout << "----------------------------------------------" << endl << endl;
 cout << "1. Emprunter un scooter électrique" << endl;
 cout << "2. Restituer un scooter électrique" << endl;
 cout << "3. Estimer le coût de la location" << endl;
 cout << "4. Quitter l'application" << endl << endl;
 return 0;
}

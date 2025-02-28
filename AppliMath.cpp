#include <iostream>
#include <limits>
#include <cstdlib>


using namespace std;

//Fonction nombre pair et impair

double impair(int a) {



    if (a % 2 == 0) {

        cout << a <<" est pair" << endl;

    }
    else {

        cout << a<<" est impair" << endl;
    }

    return a;

}




// Fonction factorielle

int factorielle(int a) {

    int b = 1;

    for (int i = 1; i <= a; i++) {

        b = b * i;
    }

    cout << "factorielle de " << a << " = " << b << endl;

    return b;
}



//Fonction table de multiplication

int produit(int a) {

    int resultat = 0;

    if (a >= 2 && a <= 10) {

        for (int i = 1; i <= 10; i++) {

            resultat = i * a;

            cout << i << " * " << a << " = " << resultat << endl;
        }
    }
    else {
        cout << "Seule la Multiplication de 2 a 10 est possible " << endl;
    }

    return resultat;
}



//fonction palindrome

int palindrome(int a) {


    int nombre = a; 
    int inverse = 0;
    int b;

    while (a > 0) {
        b = a % 10;
        inverse = inverse * 10 + b;
        a = a / 10;
    }

    if (nombre == inverse)
        cout << nombre << " est un palindrome !" << endl;
    else
        cout << nombre << " n'est pas un palindrome." << endl;

    return a;    
}



//fonction nombre premier

int premier(int n) {


    if (n <= 1) {
        cout << n << " n'est pas un nombre premier." << endl;

    }

    for (int i = 2; i * i <= n; i++) {

        if (n % i == 0) {
            cout << n << " n'est pas un nombre premier." << endl;

            return 0;

        }
    }

    cout << n << " est un nombre premier !" << endl;
   





    return n;
}



//fonction nombre parfait 

int parfait(int a) {

    int somme = 0;

    for (int i = 1; i <= a / 2; i++) {

        if (a % i == 0) {

            somme = somme + i;

        }
    }

    if (somme == a) {

        cout << a <<" est parfait" << endl;
    }

    else {

        cout << a <<" n'est pas un nombre parfait" << endl;
    }
   

    return a;
}





//Fonction affichage menu

void afficherMenu() {



    cout << "MENU PRINCIPAL" << endl;
    cout << "==============" << endl;
    cout << endl;
    cout << "1. Nombre pair et impair" << endl;
    cout << "2. Calcul de la factorielle" << endl;
    cout << "3. Table de Multiplication" << endl;
    cout << "4. Palindrome " << endl;
    cout << "5. Nombre Premier " << endl;
    cout << "6. Nombre Parfait " << endl;
    cout << "7. Quitter" << endl;
    cout << endl;
    cout << "Choisir une option entre 1, 2, 3, 4, 5, 6 ou 7 : ";
}


//Fonction decision pour repetition ou pas

void afficherDecision() {

    cout << "Menu secondaire" << endl;
    cout << endl;
    cout << "1. Repeter la meme operation" << endl;
    cout << "2. Rentrer au menu" << endl;
    cout << endl;
    cout << "Choisissez une option 1 ou 2 : ";

}




int main()
{
    float A;
    int choix;
    int decision;


    //Affichage du menu principal


    do {

    Menu_Principal:

        system("cls");//Nettoyer l'écran
        afficherMenu();
        cin >> choix;


        if (choix >= 1 && choix <= 6) {

        Repetition:

            cout << endl;
            cout << "Entrez un nombre entier : ";
            cin >> A;

        }

        switch (choix) {

        case 1:

            system("cls");
            cout << "Verification  d un nombre pair" << endl;
            cout << "================================" << endl;

            impair(A);

            break;

        case 2:

            system("cls");
            cout << "Calcul de la factorielle" << endl;
            cout << "========================" << endl;

            factorielle(A);

            break;

        case 3:

            system("cls");
            cout << "Table de Multiplication " << endl;
            cout << "=======================" << endl;

            produit(A);

            break;

        case 4:

            system("cls");
            cout << "Verification  d un palindrome" << endl;
            cout << "==============================" << endl;

            palindrome(A);

            break;

        case 5:

            system("cls");
            cout << "Verification  d un nombre premier" << endl;
            cout << "================================" << endl;

            premier(A);

            break;

        case 6:

            system("cls");
            cout << "Verification  d un nombre parfait" << endl;
            cout << "=================================" << endl;

            parfait(A);

            break;

        case 7:

            system("cls");
            cout << "Merci pour votre visite" << endl;
            cout << "Vous pouvez quitter le programme..." << endl;

            cin.ignore();
            cin.get();

            return 0;

            break;


        default:

            system("cls");

            cout << "Operation impossible. Fin du programme " << endl;
            return 0;

        }

        if (choix != 7) {

            cout << "Appuyer sur ENTER pour continuer...";
            cin.ignore();
            cin.get();

        }
      
        afficherDecision();
        cin >> decision;

        if (decision == 1) {

            goto Repetition;
        }
        else {

            goto Menu_Principal;
        }

    } while (choix != 7);



    return 0;
}



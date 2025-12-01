#include <stdio.h>
#include <string.h>

// Définition de la structure Etudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_programmation;
    float note_systeme;
};

int main() {
    // Création d'un tableau de 5 étudiants
    struct Etudiant etudiants[5];
    
    printf("=======================================================\n");
    printf("    GESTION DES DONNÉES ÉTUDIANTES AVEC STRUCTURES\n");
    printf("=======================================================\n\n");
    
    // Initialisation des données des étudiants avec strcpy
    
    // Étudiant 1
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_programmation = 16.5;
    etudiants[0].note_systeme = 12.1;
    
    // Étudiant 2
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_programmation = 14.0;
    etudiants[1].note_systeme = 14.1;
    
    // Étudiant 3
    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Sophie");
    strcpy(etudiants[2].adresse, "15, Avenue des Sciences, Paris");
    etudiants[2].note_programmation = 17.5;
    etudiants[2].note_systeme = 16.0;
    
    // Étudiant 4
    strcpy(etudiants[3].nom, "Dubois");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "8, Rue de l'Université, Bordeaux");
    etudiants[3].note_programmation = 13.5;
    etudiants[3].note_systeme = 15.0;
    
    // Étudiant 5
    strcpy(etudiants[4].nom, "Laurent");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "30, Place du Capitole, Toulouse");
    etudiants[4].note_programmation = 15.0;
    etudiants[4].note_systeme = 13.5;
    
    // Affichage des informations de tous les étudiants
    printf("LISTE DES ÉTUDIANT.E.S :\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1  : %.1f\n", etudiants[i].note_programmation);
        printf("Note 2  : %.1f\n", etudiants[i].note_systeme);
        
        // Calcul de la moyenne
        float moyenne = (etudiants[i].note_programmation + etudiants[i].note_systeme) / 2.0;
        printf("Moyenne : %.2f / 20\n", moyenne);
        
        printf("\n");
    }
    
    printf("=======================================================\n");
    printf("    STATISTIQUES GLOBALES\n");
    printf("=======================================================\n\n");
    
    // Calcul des statistiques
    float somme_moyennes = 0.0;
    float meilleure_moyenne = 0.0;
    int indice_meilleur = 0;
    
    for (int i = 0; i < 5; i++) {
        float moyenne = (etudiants[i].note_programmation + etudiants[i].note_systeme) / 2.0;
        somme_moyennes += moyenne;
        
        if (moyenne > meilleure_moyenne) {
            meilleure_moyenne = moyenne;
            indice_meilleur = i;
        }
    }
    
    printf("Moyenne de la classe : %.2f / 20\n\n", somme_moyennes / 5);
    
    printf("Meilleur.e étudiant.e : %s %s\n", 
           etudiants[indice_meilleur].prenom, 
           etudiants[indice_meilleur].nom);
    printf("Moyenne               : %.2f / 20\n\n", meilleure_moyenne);
    
    // Affichage des étudiants par ordre alphabétique (tri à bulles simple)
    printf("=======================================================\n");
    printf("    LISTE ALPHABÉTIQUE PAR NOM\n");
    printf("=======================================================\n\n");
    
    // Copie du tableau pour ne pas modifier l'original
    struct Etudiant etudiants_tries[5];
    for (int i = 0; i < 5; i++) {
        etudiants_tries[i] = etudiants[i];
    }
    
    // Tri à bulles
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strcmp(etudiants_tries[j].nom, etudiants_tries[j + 1].nom) > 0) {
                // Échange
                struct Etudiant temp = etudiants_tries[j];
                etudiants_tries[j] = etudiants_tries[j + 1];
                etudiants_tries[j + 1] = temp;
            }
        }
    }
    
    // Affichage trié
    for (int i = 0; i < 5; i++) {
        float moyenne = (etudiants_tries[i].note_programmation + etudiants_tries[i].note_systeme) / 2.0;
        printf("%d. %s %s - Moyenne: %.2f/20\n", 
               i + 1,
               etudiants_tries[i].nom, 
               etudiants_tries[i].prenom,
               moyenne);
    }
    
    printf("\n=======================================================\n");
    printf("    Programme terminé avec succès\n");
    printf("=======================================================\n");
    
    return 0;
}

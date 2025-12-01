#include <stdio.h>

int main() {
    // Nombre d'étudiants
    const int NB_ETUDIANTS = 5;
    
    // Déclaration des tableaux pour les noms et prénoms
    char noms[5][50] = {
        "Dupont",
        "Martin",
        "Bernard",
        "Dubois",
        "Laurent"
    };
    
    char prenoms[5][50] = {
        "Sophie",
        "Lucas",
        "Emma",
        "Thomas",
        "Marie"
    };
    
    // Déclaration du tableau pour les adresses
    char adresses[5][100] = {
        "15 Rue de la Paix, 75001 Paris",
        "23 Avenue des Champs, 69002 Lyon",
        "8 Boulevard Victor Hugo, 33000 Bordeaux",
        "42 Rue Nationale, 59000 Lille",
        "17 Place du Capitole, 31000 Toulouse"
    };
    
    // Déclaration des tableaux pour les notes
    float notes_programmation[5] = {15.5, 13.0, 17.5, 12.0, 16.0};
    float notes_systeme[5] = {14.0, 15.5, 16.5, 11.5, 14.5};
    
    printf("=======================================================\n");
    printf("    GESTION DES DONNÉES ÉTUDIANTES\n");
    printf("=======================================================\n\n");
    
    // Affichage des informations de tous les étudiants
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("-------------------------------------------------------\n");
        printf("ÉTUDIANT.E #%d\n", i + 1);
        printf("-------------------------------------------------------\n");
        printf("Nom              : %s\n", noms[i]);
        printf("Prénom           : %s\n", prenoms[i]);
        printf("Adresse          : %s\n", adresses[i]);
        printf("Note Prog. en C  : %.2f / 20\n", notes_programmation[i]);
        printf("Note Syst. Exp.  : %.2f / 20\n", notes_systeme[i]);
        
        // Calcul de la moyenne
        float moyenne = (notes_programmation[i] + notes_systeme[i]) / 2.0;
        printf("Moyenne générale : %.2f / 20\n", moyenne);
        
        printf("\n");
    }
    
    printf("=======================================================\n");
    printf("    STATISTIQUES GÉNÉRALES\n");
    printf("=======================================================\n\n");
    
    // Calcul des moyennes de classe
    float somme_prog = 0.0;
    float somme_systeme = 0.0;
    float somme_generale = 0.0;
    
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        somme_prog += notes_programmation[i];
        somme_systeme += notes_systeme[i];
        somme_generale += (notes_programmation[i] + notes_systeme[i]) / 2.0;
    }
    
    printf("Moyenne de classe en Programmation C   : %.2f / 20\n", somme_prog / NB_ETUDIANTS);
    printf("Moyenne de classe en Système Exploit.  : %.2f / 20\n", somme_systeme / NB_ETUDIANTS);
    printf("Moyenne générale de la classe          : %.2f / 20\n\n", somme_generale / NB_ETUDIANTS);
    
    // Recherche du meilleur étudiant
    float meilleure_moyenne = 0.0;
    int indice_meilleur = 0;
    
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        float moyenne = (notes_programmation[i] + notes_systeme[i]) / 2.0;
        if (moyenne > meilleure_moyenne) {
            meilleure_moyenne = moyenne;
            indice_meilleur = i;
        }
    }
    
    printf("-------------------------------------------------------\n");
    printf("MEILLEUR.E ÉTUDIANT.E\n");
    printf("-------------------------------------------------------\n");
    printf("Nom    : %s %s\n", prenoms[indice_meilleur], noms[indice_meilleur]);
    printf("Moyenne: %.2f / 20\n\n", meilleure_moyenne);
    
    // Liste des étudiants avec mention
    printf("-------------------------------------------------------\n");
    printf("ÉTUDIANTS AVEC MENTION (≥ 14/20)\n");
    printf("-------------------------------------------------------\n");
    
    int compteur_mention = 0;
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        float moyenne = (notes_programmation[i] + notes_systeme[i]) / 2.0;
        if (moyenne >= 14.0) {
            compteur_mention++;
            printf("%d. %s %s - Moyenne: %.2f/20", compteur_mention, prenoms[i], noms[i], moyenne);
            
            // Déterminer la mention
            if (moyenne >= 16.0) {
                printf(" (Très Bien)\n");
            } else if (moyenne >= 14.0) {
                printf(" (Bien)\n");
            }
        }
    }
    
    if (compteur_mention == 0) {
        printf("Aucun étudiant n'a obtenu de mention.\n");
    }
    
    printf("\n=======================================================\n");
    printf("    Programme terminé avec succès\n");
    printf("=======================================================\n");
    
    return 0;
}

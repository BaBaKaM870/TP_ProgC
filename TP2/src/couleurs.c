#include <stdio.h>

// Définition de la structure CouleurRGBA
struct CouleurRGBA {
    unsigned char rouge;   // Composant Rouge (0-255)
    unsigned char vert;    // Composant Vert (0-255)
    unsigned char bleu;    // Composant Bleu (0-255)
    unsigned char alpha;   // Composant Alpha (0-255, transparence)
};

int main() {
    // Création d'un tableau de 10 couleurs
    struct CouleurRGBA couleurs[10];
    
    printf("=======================================================\n");
    printf("    GESTION DES COULEURS AU FORMAT RGBA\n");
    printf("=======================================================\n\n");
    
    // Initialisation des 10 couleurs en notation hexadécimale
    
    // Couleur 1 : Orange vif
    couleurs[0].rouge = 0xef;
    couleurs[0].vert = 0x78;
    couleurs[0].bleu = 0x12;
    couleurs[0].alpha = 0xff;
    
    // Couleur 2 : Vert menthe
    couleurs[1].rouge = 0x2c;
    couleurs[1].vert = 0xc8;
    couleurs[1].bleu = 0x64;
    couleurs[1].alpha = 0xff;
    
    // Couleur 3 : Bleu ciel
    couleurs[2].rouge = 0x3a;
    couleurs[2].vert = 0x9f;
    couleurs[2].bleu = 0xd5;
    couleurs[2].alpha = 0xff;
    
    // Couleur 4 : Rouge carmin
    couleurs[3].rouge = 0xdc;
    couleurs[3].vert = 0x14;
    couleurs[3].bleu = 0x3c;
    couleurs[3].alpha = 0xff;
    
    // Couleur 5 : Jaune doré
    couleurs[4].rouge = 0xff;
    couleurs[4].vert = 0xd7;
    couleurs[4].bleu = 0x00;
    couleurs[4].alpha = 0xff;
    
    // Couleur 6 : Violet profond
    couleurs[5].rouge = 0x8b;
    couleurs[5].vert = 0x00;
    couleurs[5].bleu = 0xff;
    couleurs[5].alpha = 0xff;
    
    // Couleur 7 : Rose pastel (semi-transparent)
    couleurs[6].rouge = 0xff;
    couleurs[6].vert = 0xb3;
    couleurs[6].bleu = 0xd9;
    couleurs[6].alpha = 0x80;
    
    // Couleur 8 : Turquoise
    couleurs[7].rouge = 0x40;
    couleurs[7].vert = 0xe0;
    couleurs[7].bleu = 0xd0;
    couleurs[7].alpha = 0xff;
    
    // Couleur 9 : Gris argenté (transparent à 50%)
    couleurs[8].rouge = 0xc0;
    couleurs[8].vert = 0xc0;
    couleurs[8].bleu = 0xc0;
    couleurs[8].alpha = 0x7f;
    
    // Couleur 10 : Noir (complètement opaque)
    couleurs[9].rouge = 0x00;
    couleurs[9].vert = 0x00;
    couleurs[9].bleu = 0x00;
    couleurs[9].alpha = 0xff;
    
    // Affichage des couleurs
    printf("LISTE DES 10 COULEURS :\n\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u (0x%02X)\n", couleurs[i].rouge, couleurs[i].rouge);
        printf("Vert  : %u (0x%02X)\n", couleurs[i].vert, couleurs[i].vert);
        printf("Bleu  : %u (0x%02X)\n", couleurs[i].bleu, couleurs[i].bleu);
        printf("Alpha : %u (0x%02X)\n", couleurs[i].alpha, couleurs[i].alpha);
        
        // Affichage du code couleur hexadécimal complet
        printf("Code hexadécimal : #%02X%02X%02X%02X\n", 
               couleurs[i].rouge, 
               couleurs[i].vert, 
               couleurs[i].bleu, 
               couleurs[i].alpha);
        
        // Indication de la transparence
        if (couleurs[i].alpha == 0xff) {
            printf("Opacité : Opaque (100%%)\n");
        } else if (couleurs[i].alpha == 0x00) {
            printf("Opacité : Transparent (0%%)\n");
        } else {
            float opacite = (couleurs[i].alpha / 255.0) * 100.0;
            printf("Opacité : %.1f%%\n", opacite);
        }
        
        printf("\n");
    }
    
    printf("=======================================================\n");
    printf("    ANALYSE DES COULEURS\n");
    printf("=======================================================\n\n");
    
    // Statistiques sur les composants
    int somme_rouge = 0, somme_vert = 0, somme_bleu = 0, somme_alpha = 0;
    
    for (int i = 0; i < 10; i++) {
        somme_rouge += couleurs[i].rouge;
        somme_vert += couleurs[i].vert;
        somme_bleu += couleurs[i].bleu;
        somme_alpha += couleurs[i].alpha;
    }
    
    printf("Moyennes des composants :\n");
    printf("Rouge moyen : %.1f\n", somme_rouge / 10.0);
    printf("Vert moyen  : %.1f\n", somme_vert / 10.0);
    printf("Bleu moyen  : %.1f\n", somme_bleu / 10.0);
    printf("Alpha moyen : %.1f\n\n", somme_alpha / 10.0);
    
    // Recherche de la couleur la plus lumineuse
    printf("Couleur la plus lumineuse (luminosité maximale) :\n");
    int luminosite_max = 0;
    int indice_plus_lumineuse = 0;
    
    for (int i = 0; i < 10; i++) {
        // Calcul de la luminosité (formule simple : moyenne des composants RGB)
        int luminosite = (couleurs[i].rouge + couleurs[i].vert + couleurs[i].bleu) / 3;
        if (luminosite > luminosite_max) {
            luminosite_max = luminosite;
            indice_plus_lumineuse = i;
        }
    }
    
    printf("Couleur %d - RGB(%u, %u, %u) - Luminosité: %d/255\n\n",
           indice_plus_lumineuse + 1,
           couleurs[indice_plus_lumineuse].rouge,
           couleurs[indice_plus_lumineuse].vert,
           couleurs[indice_plus_lumineuse].bleu,
           luminosite_max);
    
    // Comptage des couleurs opaques vs transparentes
    int nb_opaques = 0;
    int nb_semi_transparentes = 0;
    
    for (int i = 0; i < 10; i++) {
        if (couleurs[i].alpha == 0xff) {
            nb_opaques++;
        } else if (couleurs[i].alpha > 0x00) {
            nb_semi_transparentes++;
        }
    }
    
    printf("Répartition par opacité :\n");
    printf("Couleurs opaques (100%%)         : %d\n", nb_opaques);
    printf("Couleurs semi-transparentes     : %d\n", nb_semi_transparentes);
    printf("Couleurs complètement transparentes : %d\n\n", 10 - nb_opaques - nb_semi_transparentes);
    
    printf("=======================================================\n");
    printf("    Programme terminé avec succès\n");
    printf("=======================================================\n");
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int pv;
} Joueur;

void attaques_guerrier (Joueur *attaquant, Joueur *cible) {
    int choix_attaque;
    int attaque1 = 50;
    int attaque2 = 80;
    int attaque3 = 130;
    int ultimate;
    int pp_attaque1 = 30;
    int pp_attaque2 = 15;
    int pp_attaque3 = 10;
    int pp_ultimate = 3;
    unsigned int attente_ultimate = 4;
    while ((*attaquant).pv > 0 && (*cible).pv > 0) {
        while (attente_ultimate > 0) {
            printf("Veuillez choisir une action :\n 1. Fracat (50D) %d/30\n 2. Charge (80D) %d/15\n 3. Coup d'epee (130D) %d/10\n 4. Vous ne possédez pas votre ultimate : il vous faut encore attendre %d tours\n", pp_attaque1, pp_attaque2, pp_attaque3, attente_ultimate);
            scanf("%d", &choix_attaque);
            if (choix_attaque == 1) {
                if (pp_attaque1 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque1;
                pp_attaque1 = pp_attaque1 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque1);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 2){
                if (pp_attaque2 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque2;
                pp_attaque2 = pp_attaque2 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque2);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 3){
                if (pp_attaque3 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque3;
                pp_attaque3 = pp_attaque3 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque3);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
        }
        while (attente_ultimate == 0) {
            printf("Veuillez choisir une action :\n 1. Fracat (50D) %d/30\n 2. Charge (80D) %d/15\n 3. Coup d'epee (130D) %d/10\n 4. Vous possédez votre ultimate : Regen (+200PV) %d/3\n", pp_attaque1, pp_attaque2, pp_attaque3, pp_ultimate);
            scanf("%d", &choix_attaque);
            if (choix_attaque == 1) {
                if (pp_attaque1 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque1;
                pp_attaque1 = pp_attaque1 - 1;
                printf("Le joueur inflige %d degats \n", attaque1);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 2){
                if (pp_attaque2 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque2;
                pp_attaque2 = pp_attaque2 - 1;
                printf("Le joueur inflige %d degats \n", attaque2);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 3){
                if (pp_attaque3 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque3;
                pp_attaque3 = pp_attaque3 - 1;
                printf("Le joueur inflige %d degats \n", attaque3);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 4){
                if (pp_ultimate == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*attaquant).pv = (*attaquant).pv + 200;
                pp_ultimate = pp_ultimate - 1;
                attente_ultimate = 4;
                printf("Vous avez maintenant : %d pv\n", (*attaquant).pv);
            }
        }
    }

    return;
}

void attaques_archer (Joueur *attaquant, Joueur *cible) {
    int attaque1 = 30;
    int attaque2 = 60;
    int attaque3 = 80;
    int ultimate = 600;
    int pp_attaque1 = 35;
    int pp_attaque2 = 15;
    int pp_attaque3 = 10;
    int pp_ultimate = 2;
    int attente_ultimate = 4;
    int choix_attaque;
    srand(time(NULL));
    int chance_de_toucher = 50;
    int resultat_chance = rand() % 100 + 1;

    while ((*attaquant).pv > 0 && (*cible).pv > 0) {
        while (attente_ultimate > 0) {
            printf("Veuillez choisir une action :\n 1. Flechette (30D) %d/35\n 2. Multi fleches (60D) %d/15\n 3. Mega Fleche (70D) %d/10\n 4. Vous ne possédez pas votre ultimate : il vous faut encore attendre %d tours\n", pp_attaque1, pp_attaque2, pp_attaque3, attente_ultimate);
            scanf("%d", &choix_attaque);
            if (choix_attaque == 1) {
                if (pp_attaque1 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque1;
                pp_attaque1 = pp_attaque1 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque1);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 2) {
                if (pp_attaque2 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque2;
                pp_attaque2 = pp_attaque2 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque2);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 3) {
                if (pp_attaque3 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque3;
                pp_attaque3 = pp_attaque3 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque3);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
        }
        while (attente_ultimate == 0) {
            printf("Veuillez choisir une action :\n 1. Flechette (30D) %d/35\n 2. Multi fleches (60D) %d/15\n 3. Mega Fleche (70D) %d/10\n 4. Vous possédez votre ultimate : Fleche de Lumiere (600D 50% de chances de toucher) %d/2\n", pp_attaque1, pp_attaque2, pp_attaque3, pp_ultimate);
            scanf("%d", &choix_attaque);
            if (choix_attaque == 1) {
                if (pp_attaque1 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque1;
                pp_attaque1 = pp_attaque1 - 1;
                printf("Le joueur inflige %d degats \n", attaque1);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 2) {
                if (pp_attaque2 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque2;
                pp_attaque2 = pp_attaque2 - 1;
                printf("Le joueur inflige %d degats \n", attaque2);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 3) {
                if (pp_attaque3 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque3;
                pp_attaque3 = pp_attaque3 - 1;
                printf("Le joueur inflige %d degats \n", attaque3);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 4){
                if (pp_ultimate == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                if (resultat_chance <= chance_de_toucher) {
                    (*cible).pv -= ultimate;
                    pp_ultimate = pp_ultimate - 1;
                    attente_ultimate = 4;
                    printf("Le joueur inflige %d degats \n", ultimate);
                    printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
                } else {
                    pp_ultimate = pp_ultimate - 1;
                    printf("L'attaque a echoue.\n");
                }


            }
        }
    }

    return;
}

void attaques_mage (Joueur *attaquant, Joueur *cible) {
    int attaque1 = 30;
    int attaque2 = 70;
    int attaque3 = 1900;
    int pp_attaque1 = 35;
    int pp_attaque2 = 15;
    int pp_attaque3 = 25;
    int pp_ultimate = 5;
    int ultimate;
    int attente_ultimate = 4;
    int choix_attaque;
    srand(time(NULL));
    int chance_de_toucher = 1;
    int resultat_chance = rand() % 100 + 1;

    while ((*attaquant).pv > 0 && (*cible).pv > 0){
        while (attente_ultimate > 0){
            printf("Veuillez choisir une action : \n 1. Energie Sombre (30D) %d/35\n 2. Vague deferlente (70D) %d/15\n 3. Fire Snow (1900D 1% de chance de toucher) %d/25 4. Vous ne possédez pas votre ultimate : il vous faut encore attendre %d tours\n", pp_attaque1, pp_attaque2, pp_attaque3, attente_ultimate);
            scanf("%d", &choix_attaque);
            if (choix_attaque == 1) {
                if (pp_attaque1 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque1;
                pp_attaque1 = pp_attaque1 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque1);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 2) {
                if (pp_attaque2 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque2;
                pp_attaque2 = pp_attaque2 - 1;
                attente_ultimate = attente_ultimate - 1;
                printf("Le joueur inflige %d degats \n", attaque2);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 3) {
                if (pp_attaque3 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                if (resultat_chance <= chance_de_toucher) {
                    (*cible).pv -= attaque3;
                    pp_attaque3 = pp_attaque3 - 1;
                    attente_ultimate = attente_ultimate - 1;
                    printf("Le joueur inflige %d degats \n", attaque3);
                    printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
                } else {
                    pp_attaque3 = pp_attaque3 - 1;
                    printf("L attaque a echoue. \n");
                }

            }
        }
        while (attente_ultimate == 0) {
            printf("Veuillez choisir une action : \n 1. Energie Sombre (30D) %d/35\n 2. Vague deferlente (70D) %d/15\n 3. Fire Snow (1900D 1% de chance de toucher) %d/25 4. Vous possédez votre ultimate : Resurrection (+100 PV sauf si c'est votre dernier ça sera +150PV) %d/5\n", pp_attaque1, pp_attaque2, pp_attaque3, pp_ultimate);
            scanf("%d", &choix_attaque);
            if (choix_attaque == 1) {
                if (pp_attaque1 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque1;
                pp_attaque1 = pp_attaque1 - 1;
                printf("Le joueur inflige %d degats \n", attaque1);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 2) {
                if (pp_attaque2 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                (*cible).pv -= attaque2;
                pp_attaque2 = pp_attaque2 - 1;
                printf("Le joueur inflige %d degats \n", attaque2);
                printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
            }
            if (choix_attaque == 3) {
                if (pp_attaque3 == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                if (resultat_chance <= chance_de_toucher) {
                    (*cible).pv -= attaque3;
                    pp_attaque3 = pp_attaque3 - 1;
                    attente_ultimate = attente_ultimate - 1;
                    printf("Le joueur inflige %d degats \n", attaque3);
                    printf("Le joueur cible a encore : %d pv\n", (*cible).pv);
                } else {
                    pp_attaque3 = pp_attaque3 - 1;
                    printf("L attaque a echoue. \n");
                }

            }
            if (choix_attaque == 4){
                if (pp_ultimate == 0) {
                    printf("Vous n'avez plus de pp veuillez choisir une autre option. \n");
                    continue;
                }
                if (pp_ultimate > 1) {
                    (*attaquant).pv = (*attaquant).pv + 100;
                    pp_ultimate = pp_ultimate - 1;
                    printf("Vous avez maintenant : %d pv\n", (*attaquant).pv);
                } else {
                    (*attaquant).pv = (*attaquant).pv + 150;
                    pp_ultimate = pp_ultimate - 1;
                    printf("Vous avez maintenant : %d pv\n", (*attaquant).pv);
                }
            }
        }
    }

    return;
}




int main() {
    int choix_joueur1;
    int choix_joueur2;
    Joueur *joueur1 = malloc(sizeof(Joueur));
    Joueur *joueur2 = malloc(sizeof(Joueur));
    int vitesse_guerrier = 1;
    int vitesse_archer = 3;
    int vitesse_mage = 2;


    printf("Joueur 1 veuillez choisir votre classe :\n 1. Guerrier\n 2. Archer\n 3. Mage \n");
    scanf("%d", &choix_joueur1);
    printf("Joueur 2 veuillez choisir votre classe :\n 1. Guerrier\n 2. Archer\n 3. Mage \n");
    scanf("%d", &choix_joueur2);

    if(choix_joueur1 == 1) {
        (*joueur1).pv = 1500;
        attaques_guerrier(joueur1, joueur2);
    }

    if (choix_joueur2 == 1) {
        (*joueur2).pv = 1500;
        attaques_guerrier(joueur2, joueur1);
    }

    if(choix_joueur1 == 2) {
        (*joueur1).pv = 850;
        attaques_archer(joueur1, joueur2);
    }

    if (choix_joueur2 == 2) {
        (*joueur2).pv = 850;
        attaques_archer(joueur2, joueur1);
    }


    if(choix_joueur1 == 3) {
        (*joueur1).pv = 1000;
        attaques_mage(joueur1, joueur2);
    }

    if (choix_joueur2 == 3) {
        (*joueur2).pv = 1000;
        attaques_mage(joueur2, joueur1);
    }



    return 0;
}

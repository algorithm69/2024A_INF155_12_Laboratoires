//
// Created by stephane on 14/11/24.
//
#include "livre.h"
#include <stdio.h>
//#include <malloc.h>
#include <string.h>
#include <malloc.h>
#include <assert.h>

typedef struct s_livre {
    char *titre;
    char *isbn;
    int nb_pages;
    double prix;
} t_livre;

t_livre *t_livre_creer(const char *titre,
                       const char *isbn, int nb_pages, double prix) {
    t_livre *livre;

    //  reserver de la place pour un livre
    livre = malloc(sizeof(t_livre));
    assert(livre != NULL);

    //  initialiser cette zone
    livre->titre = malloc(strlen(titre) + 1);
    strcpy(livre->titre, titre);

    livre->isbn = malloc(strlen(isbn) + 1);
    strcpy(livre->isbn, isbn);

    livre->nb_pages = nb_pages;
    livre->prix = prix;

    //  retourner l'adresse de la zone
    return livre;
}

void t_livre_afficher(t_livre *livre) {
    printf("Titre : %s\n", livre->titre);
    printf("ISBN : %s\n", livre->isbn);
    printf("(%d pages)\n", livre->nb_pages);
    printf("Prix : %lf\n", livre->prix);
}

void t_livre_set_titre(t_livre *livre, char *titre) {
//    strcpy(livre->titre, titre); // pas bon !

    //  avec un realloc
//    char *tmp = realloc(livre->titre, strlen(titre) + 1);
//    assert(tmp != NULL);
//    livre->titre = tmp;
//    strcpy(livre->titre, titre);

    //  avec un malloc
    char *tmp = malloc(strlen(titre) + 1);
    assert(tmp != NULL);

    free(livre->titre);
    livre->titre = tmp;
    strcpy(livre->titre, titre);
}

void t_livre_set_prix(t_livre *livre, double prix) {
    if (prix > 0) {
        livre->prix = prix;
    }
}
//
// Created by stephane on 14/11/24.
//

#ifndef ILLUSTRATION_COURS_10_LIVRE_H
#define ILLUSTRATION_COURS_10_LIVRE_H

typedef struct s_livre t_livre;

t_livre *t_livre_creer(const char *titre,
                       const char *isbn, int nb_pages, double prix);

void t_livre_afficher(t_livre *livre);

void t_livre_set_titre(t_livre *livre, char *titre);

void t_livre_set_prix(t_livre *livre, double prix);

#endif //ILLUSTRATION_COURS_10_LIVRE_H

//
// Created by stephane on 07/11/24.
//

#ifndef ILLUSTRATION_COURS_09_ETUDIANT_H
#define ILLUSTRATION_COURS_09_ETUDIANT_H

#define MAX_CHAINE 50

typedef struct s_etudiant {
    char nom[MAX_CHAINE];
    char code_permanent[MAX_CHAINE];
    int note_intra;
    int note_finale;
} t_etudiant;

//  getters ou accesseurs
char *t_etudiant_get_nom(t_etudiant *etu);
char *t_etudiant_get_code_permanent(t_etudiant *etu);
int t_etudiant_get_note_intra(t_etudiant *etu);
int t_etudiant_get_note_final(t_etudiant *etu);

//  setters ou mutateurs
void t_etudiant_set_nom(t_etudiant *etu, char *nom);
void t_etudiant_set_code_permanent(t_etudiant *etu, char *code_permanent);
void t_etudiant_set_note_intra(t_etudiant *etu, int note_intra);
void t_etudiant_set_note_final(t_etudiant *etu, int note_final);

//  constructeur
void t_etudiant_init(t_etudiant *etu, char *nom, char *code_permanent,
                     int note_intra, int note_final);

#endif //ILLUSTRATION_COURS_09_ETUDIANT_H

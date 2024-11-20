//
// Created by stephane on 07/11/24.
//
#include <string.h>
#include "etudiant.h"

//  getters (accesseurs)
char *t_etudiant_get_nom(t_etudiant *etu) {
// si etu est un etudiant
//    return &(etu.nom[0]);
//    return &(*(etu.nom + 0));
//    return &(*(etu.nom));
//    return etu.nom;

//  etu est un pointeur d'etudiant
//    return (*etu).nom;
    return etu->nom;
}
char *t_etudiant_get_code_permanent(t_etudiant *etu) {
    return etu->code_permanent;
}
int t_etudiant_get_note_intra(t_etudiant *etu) {
    return etu->note_intra;
}
int t_etudiant_get_note_final(t_etudiant *etu) {
    return etu->note_finale;
}

//  setters (mutateurs)
void t_etudiant_set_nom(t_etudiant *etu, char *nom) {
    if (nom != NULL && strcmp(nom, "") !=0) {
        strcpy(etu->nom, nom);
    }
}
void t_etudiant_set_code_permanent(t_etudiant *etu, char *code_permanent) {
    strcpy(etu->code_permanent, code_permanent);
}
void t_etudiant_set_note_intra(t_etudiant *etu, int note_intra) {
    if (note_intra >=0 && note_intra <= 100) {
        etu->note_intra = note_intra;
    }
}
void t_etudiant_set_note_final(t_etudiant *etu, int note_final) {
    etu->note_finale = note_final;
}

//  constructeur
void t_etudiant_init(t_etudiant *etu, char *nom, char *code_permanent, int note_intra, int note_finale) {
    t_etudiant_set_nom(etu, nom);
    t_etudiant_set_code_permanent(etu, code_permanent);
    t_etudiant_set_note_intra(etu, note_intra);
    t_etudiant_set_note_final(etu, note_finale);
}
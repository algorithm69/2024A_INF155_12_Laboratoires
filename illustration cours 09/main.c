#include <stdio.h>
#include "etudiant.h"

void main() {
    t_etudiant etu;

    t_etudiant_init(&etu, "Pierre", "DUV123", 89, 90);

//    etu1.note_intra = 214354675;  //  PROBLEME !!!!  On ne devrait pas pouvoir faire ca ici...
    t_etudiant_set_note_intra(&etu, 214354675); //  seulement ca.

    printf("%s\n", t_etudiant_get_nom(&etu));
    printf("note intra = %d\n", t_etudiant_get_note_intra(&etu));
}

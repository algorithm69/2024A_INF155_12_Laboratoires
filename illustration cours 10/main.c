#include "livre.h"

int main(void) {
    t_livre *livre;

    livre = t_livre_creer("toto", "qwert35f", 120, 54.99);

    t_livre_set_prix(livre, -1243654);
    t_livre_afficher(livre);

    t_livre_set_titre(livre, "Felix fait du ski!");
    t_livre_afficher(livre);
}

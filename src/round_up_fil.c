#include "../include/round_up_fil.h"

void round_up_fil(ptr_ptr_fil var) {
    if (check_init_fil_2(&var) == false) {
        unsigned long mask = 1UL;
        size_t i = 0;

        while (mask > 0 && i < (*var)->length) {
            unsigned long old_value = (*var)->digits[i];
            (*var)->digits[i] += mask;

            // Gestisci il trasporto
            if ((*var)->digits[i] < old_value) {
                mask = 1UL; // Trasporto al blocco successivo
            } else {
                mask = 0; // Nessun trasporto necessario
            }

            i++; // Passa al prossimo blocco
        }
    }
}
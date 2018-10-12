#include <stdbool.h>
#include "stdio.h"
int main(){
    typedef enum { // typdef sluzy do nazywania typu (typ dni)
        ni, po=5, wt, sr, cz, pi, so// mamy możliwosc wpływu na indeksowanie elementow typu wyliczeniowego
    } dni;
    dni dzien_tygodnia;
    dzien_tygodnia = wt;
    bool czy_byl_obecny = false;

    printf("%i\n", czy_byl_obecny);



}

#include <stdbool.h>
#include "stdio.h"
int main(){
    enum dni {
        ni, po=5, wt, sr, cz, pi, so
    };
    enum dni dzien_tygodnia;
    dzien_tygodnia = wt;
    bool czy_byl_obecny = true;

    printf("%i\n", czy_byl_obecny);



}

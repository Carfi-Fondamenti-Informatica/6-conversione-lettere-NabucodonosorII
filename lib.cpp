#include "lib.h"

char converti (char &carattere) {char Vero = Vero; char False=False;
    if(carattere >='A' && carattere <='Z'){char minuscolo = carattere +32;return Vero;}
    else if(carattere >='a' && carattere <='z'){char maiuscolo = carattere -32;return Vero;}
    else {return False;};
}

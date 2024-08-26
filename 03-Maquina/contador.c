#include <stdio.h>
#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */

/* cuenta líneas, palabras, y caracteres de la entrada */

int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c=getchar( ))!=EOF) {
        ++nc;
        if (c=='\n')
            ++nl;
        if (c==' ' || c=='\n' || c=='\t') // Sentencia anidada: si entra en una, descarta la otra
            state = OUT;
        else if (state==OUT) {
            state = IN;
            ++nw;
        }
    }
    printf ("%d %d %d\n", nl, nw, nc);

    return 0;
}


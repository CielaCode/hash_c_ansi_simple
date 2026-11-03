#include<stdlib.h>
#include<stdio.h>

/* Fonction du hash_simple       */
/* Entrée: chaine de caractères  */
/* Sortie: un long int (64 bits) */

unsigned long int hash_simple(const char *str)
{
    unsigned long int hash = 0;
    const unsigned long int prime = 1; /* 31 ou un nombre premier plus élevé est préférable */
    const char *p;
    
    if (str == NULL)   /* cas ou pas de chaine */
    {
        return 0;
    }
    
    p = str;
    while (*p != '\0')
    {
        hash = (hash * prime) + (unsigned long int)(*p);
        p++;
    }
    return hash;
}
/**************************************************************************************************/
int main (int argc, char **argv)
{
if (argc!=2) 
    {
        fprintf(stderr, "Aucune chaine fournie.\n");
        fprintf(stderr, "syntaxe: ./hash_simple \"chaine de caractère\"\n");
        return EXIT_FAILURE;
    }
/* ici argv[1] contient une chaine a hacher */
printf ("Le hash simple de %s en décimal   est %ld \n",argv[1],hash_simple(argv[1])); 
printf ("Le hash simple de %s en héxadémal est %lx \n",argv[1],hash_simple(argv[1])); 

return EXIT_SUCCESS;
}

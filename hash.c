#include <stdio.h>
#include <string.h>

// Fonction de hachage simple sur 8 bits
unsigned char simple_hash(const char *input) {
    unsigned char hash = 0;
    while (*input) {
        hash += *input++;  // Ajoute chaque caractère au hash
    }
    return hash;
}

// Fonction pour inverser le hash (à but pédagogique)
void reverse_hash(unsigned char hash, char *output) {
    // Cette fonction est très simpliste et ne fonctionne que pour des entrées très spécifiques
    // Elle ne peut pas inverser correctement un hash en général, mais c'est pour l'exemple
    output[0] = hash;
    output[1] = '\0';  // Terminaison de la chaîne
}

int main() {
    char input[256];
    printf("Entrez une chaîne de caractères: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;  // Supprime le saut de ligne

    // Génération du hash
    unsigned char hash = simple_hash(input);
    printf("Hash généré: %02x\n", hash);

    // Tentative de réversibilité (à but pédagogique)
    char reversed[2];
    reverse_hash(hash, reversed);
    printf("Chaîne reconstruite à partir du hash: %s\n", reversed);

    return 0;
}

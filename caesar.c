/*
* Caesar cipher: for a given  message browse every possible key and output the decrypted messaged
* the task of finding which message makes sense is left to the user.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define latin_message "Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai"

void caesar(int key, char message[]) /* apply caesar cypher for a given key */
{
    int i;      /* current character index within message */
    char c;     /* current character within message */
    printf("%d: ",key);
    for (i = 0; i < strlen(message); i++) /* the process is applied character after character */
    {
        c = message[i];
        if (islower(c))
            c = 'a' + (c - 'a' + key)%26; /* apply cypher looping with 'a' as starting point */
        else if (isupper(c))
            c = 'A' + (c - 'A' + key)%26; /* idem using 'A' as starting point, since c is upper case */
        printf("%c", c);
    }
    printf("\n");
}

int main(void)
{
    int key;

    for (key = 0; key < 26; key++)  /* browse every possible key */
        caesar(key,latin_message);  /* apply caesar cypher for the current key and print result */
        
    printf("\n");
    return 0;
}

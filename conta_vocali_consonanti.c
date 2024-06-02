#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 5

char parola [MAX+1];
int i=0, c=0, v=0;

int main (void){

printf("Inserisci una serie di lettere:\n");
scanf ("%s",parola);

    do
    {
        if (isalpha(parola[i])!=0)
        {               
            if (parola[i]=='a'||parola[i]=='e'||parola[i]=='i'||parola[i]=='o'||parola[i]=='u'||parola[i]=='A'||parola[i]=='E'||parola[i]=='I'||parola[i]=='O'||parola[i]=='U')
            {
            v++;
            }
            else {
            c++;
            }
        }
    i++;
    } while (parola[i]!='\0');

printf ("le vocali sono:%d\n",v);
printf("Le consonanti sono:%d\n",c);

    return 0;
}

#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main ()
{
	char scelta = {'\0'};
	menu ();
	scanf("%c", &scelta);
	switch (scelta)
	{
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
        default :
            printf("Non hai inserito una scelta disponibile.");

	}

    return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
    float a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%f", &a);
	scanf ("%f", &b);

	double prodotto = a * b;
	printf ("Il prodotto tra %g e %g e': %g", a,b,prodotto);
}


void dividi ()
{
    int   a,b = 0;
    printf ("Inserisci il numeratore:");
    scanf ("%d", &a);
    printf ("Inserisci il denumeratore:");
    scanf ("%d", &b);
    if (b==0)
    {
    	printf ("La divisione e' impossibile.");

    }
    else
    {
        float divisione = (float)a / b;
        printf ("La divisione tra %d e %d e': %g", a,b,divisione);
    }
}





void ins_string ()
{
    char stringa[20];
    printf ("Inserisci la stringa:");
    scanf("%19s", stringa);
    printf("La stringa da te inserita e': ");
    printf("%s\n", stringa);
}


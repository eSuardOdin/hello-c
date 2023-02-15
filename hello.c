#include <stdio.h>
#include <string.h>
int sum(int a, int b) {
  return a+b;
}

int sumAndDiff (int a, int b, int *res) {
  int sum;
  sum = a + b;
  *res = a - b;
  return sum;
}
void main(void)
{
  /*
  //Print statement
  printf("hello, world\n");

  // Int
  int a;
  int b = 3;

  a = 2;
  int c = a + b;
  printf("The sum of adding %d and %d is %d\n", a, b, c);

  
  // Float
  float a2;
  float b2 = 3.54877;
  a2 = 2.478846;
  float c2 = a2 + b2;
  printf("The sum of adding %f and %f is %.2f\n", a2, b2, c2); // %.2f pour print 2 après la virgule 
  
  */

/*
  // Pointers
  int a;
  int *ptrA;  // Déclaration d'un ptr pour int
  ptrA = &a; // Affectation de l'adresse de a

  a = 5;

  printf("La valeur de a est %d\n", a);

  *ptrA = 6; // On change la valeur contenue DANS son adresse mémoire
  printf("Sa valeur est maintenant %d\n", *ptrA);

  printf("La valeur du pointeur vers a est %p\n", ptrA);
  printf("La valeur du pointeur vers a est %d\n", *ptrA);
  printf("L'adresse de a est %p\n", &a);

  printf("On peut déclarer un pointeur comme void\n");

  int intval = 25444556;
  void *voidPtr = &intval;
  printf("Il faut ensuite la cast dans le type voulu\n");
  printf("La valeur de voidPtr en int est %d\n", *((int *) voidPtr));
  printf("La valeur de voidPtr en char est %d\n", *((char *) voidPtr));
*/

/*
// Functions
  int y = 2, z = 3;
  printf("La somme de %d et %d est %d\n", y, z, sum(y,z));

  int a = 2, b = 4;
  int diff;
  printf("The sum of %d and %d is %d\n", a, b, sumAndDiff(a, b, &diff)); // On change la valeur de diff même si on return a + b
  printf("The difference of %d and %d is %d\n", a, b, diff);
*/


// Arrays and strings
/*
int a[10];
int count;
for(count = 0; count < 10; count++)
{
  a[count] = count * 10 + count;
}
printf("The first and second elements are %d and %d\n", a[0], a[1]);
printf("The first and second elements as pointers are %d and %d\n", *a, *(a+1));


char myStr[10] = "thestring"; // Attention, on doit placer un 0 comme dernier char
*/


/*
char str1[10] = "first";
char str2[10] = "second";
char str3[20];
char *src, *dest; // Pointer source et destination

src = str1;       // Comme une array, le nom d'une string est un pointer sur son premier elmt
dest = str3;      // Dest pointe sur le premier elmt de la str3
printf("src : %p\n", src);
printf("dest : %p\n", dest);

while (*src != 0) // Tant que la fin de la str n'est pas atteinte
{
  *dest = *src; // La valeur de dest est égale à la valeur de src
  src++;        // Pointer incrémenté
  dest++;
}

src = str2;
while(*src != 0) {
  *dest = *src;
  src++;
  dest++;
}
*dest = 0;   // On termine la string

printf("%s + %s = %s\n", str1, str2, str3);
*/

/*
int val = 12;
char str[50];

sprintf(str, "The value of val is %d\n", val); // Ajoute automatiquement un zéro
printf("%s\n",str);
*/


/*
// Utilisation de string.h
char str1[10] = "first";
char str2[10] = "second";
char str3[20];

strcpy(str3,str1);    // Copie
strcat(str3, str2);   // Concat
printf("%s + %s = %s\n", str1, str2, str3);

char str4[10] = "first";
char str5[10] = "fire";

if(strcmp(str4, str5) == 0) // Pour comparer toute la str (strncmp() pour cmp un nb de char)
{
  printf("Strings are identical\n");
} else {
  printf("Strings are different\n");
}
// On peut ignorer la casse avec strcasecmp et strncasecmp
*/

// Lire la valeur d'une string
/*
int val;
char string[10] = "250";
sscanf(string, "%d", &val);
printf("The value of the string is %d\n", val);
*/

int val;
char result[10];
char string[25] = "The first number is 1";
if (sscanf (string, "The %s number is %d", result, &val) == 2)
{
printf ("String : %s Value : %d\n", result, val);
}
else
{
printf ("I couldn't find two values in that string.\n");
}
printf("The length of the str '%s' is %zu\n", string, strlen(string)); // %zu pour les long unsigned int

}


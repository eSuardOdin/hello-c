#include <stdio.h>

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
int a[10];
int count;
for(count = 0; count < 10; count++)
{
  a[count] = count * 10 + count;
}
printf("The first and second elements are %d and %d\n", a[0], a[1]);
printf("The first and second elements as pointers are %d and %d\n", *a, *(a+1));


char myStr[10] = "thestring"; // Attention, on doit placer un 0 comme dernier char

}



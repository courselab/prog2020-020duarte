/* m009.c - Sort vector.

   This program reads N<=100 numbers passed as command line
   arguments and ouputs them in ascending order. Choose the
   sorting algorithm of your preference (see bellow).

   E.g.

      command line    : m009 3 2 5 4 2
      expected output : 2 2 3 4 5

   Directions:

      Please, edit function sort();
      do no not edit function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/* Sort the first 'n' integers values in 'vector'. */

void sort (int* vector, int n)
{
  int i;
  int contador;
  int aux;
  int ordem;
  int k;

  i = 0;

  aux = n - 1;

  for(contador = 0; contador<=n; contador++)
  {
    i = 0;

    for(i; i<aux; i++)
    {
      k = i + 1;

      if(vector[i] > vector[k])
      {
        ordem = vector[k];
        vector[k] = vector[i];
        vector[i] = ordem;
      }
    }
  }
}

#define USAGE "m009 <num1> <nun2> ... \n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int values[MAX];
  int i;

  /* Read command line arguments into vector. */
  
  for (i=1; i<argc; i++)
    values[i-1] = atoi(argv[i]);


  /* Sort vector. */
  
  sort (values, argc-1);


  /* Output sorted vector. */
  
  for (i=0; i<argc-1; i++)
    printf ("%d ", values[i]);

  printf ("\n");
  
  return 0;
}

/* Tip: check these sorting methods

   Selection sort: https://en.wikipedia.org/wiki/Selection_sort
   Bubble sort: https://en.wikipedia.org/wiki/Bubble_sort
   Insertion sort: https://en.wikipedia.org/wiki/Insertion_sort
  
 */

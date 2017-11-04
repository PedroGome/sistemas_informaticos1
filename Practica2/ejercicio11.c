#include <stdio.h>

int main () {

  char car1, car2;
  unsigned int ent1;
  short int ent2;
  long lon;
  float real;
  double dob;

  printf ("Constantes y variables de tipo entero y real\n");

  ent1 = 300 * 1.5 + 0x14;                           /* (a) */
  ent2 = 301 * 1.5 + 0x14;                           /* (b) */

  printf ("\nEjemplo 1:\n");
  printf ("ent1 = %d\tent2 = %d\n", ent1, ent2);     /* (c) */

  car1 = ent1;                                       /* (d) */
  car2 = ent2 - ent1;                                /* (e) */

  printf ("\nEjemplo 2:\n");
  printf ("car1 = %d\tcar2 = %d\n", car1, car2);

  lon  = 200000;                                     /* (f) */
  ent1 = 200000;                                     /* (g) */
  ent2 = 200000;                                     /* (h) */

  printf ("\nEjemplo 3:\n");
  printf ("lon ocupa %d bytes.\t", sizeof(lon));
  printf ("Su valor es: %ld\n", lon);
  printf ("ent1 ocupa %d bytes.\t", sizeof(ent1));
  printf ("Su valor es: %d\n", ent1);
  printf ("ent2 ocupa %d bytes.\t", sizeof(ent2));
  printf ("Su valor es: %d\n", ent2);

  real = lon;                                        /* (i) */
  printf ("\nEjemplo 4:\n");
  printf ("real ocupa %d bytes.\t", sizeof(real));
  printf ("Su valor es: %f\n", real);

  real = 12345.6789;                                 /* (j) */
  dob = 12345.6789;                                  /* (k) */

  printf ("\nEjemplo 5:\n");
  printf ("real = %f\n", real);
  printf ("dob = %f\n", dob);

  return 0;
}

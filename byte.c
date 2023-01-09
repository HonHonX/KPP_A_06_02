#include<stdio.h>

int main () {
	/*
	* legt ein Array mit 100 Elementen vom Typ int, long, float und double an. Gibt Informationen bzgl. der Größe aus.
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *     Array - Bytes      * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Deklarierung
  int i[100];
  long l[100];
  float f[100];
  double d[100];
  
  printf("int     : %lu Bytes\n", sizeof(i));
  printf("long    : %lu Bytes\n", sizeof(l));
  printf("float   : %lu Bytes\n", sizeof(f));
  printf("double  : %lu Bytes\n", sizeof(d));
	
	//Ende
	printf("\n\n");
	return 0;
}

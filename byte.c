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
	
	//Arrays deklarieren
	int i[100];
	long l[100];
	float f[100];
	double d[100];
  
	//Ausgabe
	printf("int(Element)			: %lu Bytes\n", sizeof(i[0]));
	printf("int         			: %lu Bytes\n", sizeof(i));
	printf("int(number of Elements)		: %lu Bytes\n", sizeof(i)/sizeof(i[0]);
	       
	printf("long(Element)			: %lu Bytes\n", sizeof(l[0]));
       	printf("long 				: %lu Bytes\n", sizeof(l));
	printf("long(number of Elements)	: %lu Bytes\n", sizeof(l)/sizeof(l[0]);
	       
	printf("float(Element)			: %lu Bytes\n", sizeof(f[0]));
	printf("float  				: %lu Bytes\n", sizeof(f));
	printf("float  				: %lu Bytes\n", sizeof(f)/sizeof(f[0]);
	       
	printf("double(Element)			: %lu Bytes\n", sizeof(d[0]));
	printf("double  			: %lu Bytes\n", sizeof(d));
       	printf("double(number of Elements)	: %lu Bytes\n", sizeof(d)/sizeof(d[0]);
	
	//Ende
	printf("\n\n");
	return 0;
}

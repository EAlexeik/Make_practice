#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
#define MUESTRAS 512

void guarda_datos(float seno[]){
	FILE *archivo;
	register int n;
	archivo=fopen("seno.dat","w");
	if(!archivo){
		perror("Error al abrir archivo");
		exit(EXIT_FAILURE);
	}
	for(n=0;n<MUESTRAS;n++){
		fprintf(archivo,"%f \n", seno[n]);
	}
	fclose(archivo);
}

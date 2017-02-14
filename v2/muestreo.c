#include <stdio.h>
#include "procesamiento.h"
#include "defs.h"
#include "archivos.h"

int main(){
	float seno[MUESTRAS];
	
	genera_seno(seno);
	guarda_seno(seno);
	return 0;
}

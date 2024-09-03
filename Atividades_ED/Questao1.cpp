#include <stdio.h>

int converte_em_min(int hora, int minuto) {
	int h = hora * 60;
	int m = minuto;
	int converte = h + m;
	return converte;
}

int main () {
	int hora, minuto;
	for (int i = 0; i <= 2; i++) {
		printf("Digite a hora: \n");
		scanf("%d", &hora);
		printf("Digite o minuto: \n");
		scanf("%d", &minuto);
		
		bool hora_minuto_certos = hora <= 24 and minuto <= 60;

		if (hora_minuto_certos){

			int hora_convertida = converte_em_min(hora, minuto);
		
			printf("Hora original: %dh e %dmin\n", hora, minuto);
			printf("Hora convertida: %dmin\n", hora_convertida);
		
			i++;
		}

		else printf("Erro\n");
	}
	
}

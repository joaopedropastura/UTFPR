#include <stdio.h>

int main(){
	int ano, mes, mes2, ano2, anodoseculo, dia, dia_semana, seculo;

	printf("Calendario\n");         //6-10: Coleta de dados;
	printf("Digite um ano: ");
	scanf("%d", &ano);
	printf("Digite um mes: ");
	scanf("%d", &mes);

	if (mes < 3){                   //12-19: Correcao para janeiro e fevereiro ;
		mes2 = mes + 12;
		ano2 = ano - 1;
	}
	else {
		mes2 = mes;
		ano2 = ano;
	}

	for (dia = 1; dia <= 31; dia++){
		anodoseculo = ano2 % 100;      //22-24: Calculo do dia da semana;
		seculo = ano2 / 100;
		dia_semana = (dia + ((26 * mes2 + 26) / 10) + (anodoseculo) + (anodoseculo / 4) + (seculo / 4) + (5 * seculo)) % 7;

		if ((mes == 2 && (ano % 4 != 0 || (ano > 1582 && ano % 100 == 0 && ano % 400 != 0))) && dia > 28) //26-28: Excecao 1: Fevereiro em anos nao bissextos;
			break;
		else if ((mes == 2 && (ano % 400 == 0 || (ano < 1582 && ano % 4 == 0))) && dia > 29) //29-31: Excecao 2: Fevereiro em anos bissextos;
			break;
		else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) //32-34: Excecao 3: Meses com 30 dias;
			break;
		if (ano == 1582 && mes == 10 && dia > 4 && dia < 15){ //35-38: Excecao 4: Outubro de 1582;
			dia = 14;
			continue;
		}

		if (ano < 1582 || (ano == 1582 && mes == 10 && dia < 15) || (ano == 1582 && mes < 10)) //40-42: Correcao do dia da semana
		    dia_semana = (dia_semana + 3) % 7;                                                  //antes de 15 de Outubro de 1582;
		for (seculo; seculo < 15; seculo++){  //43-48: Correcao do dia da semana para os anos bissextos antes de 1582.
			if (seculo % 4 == 3)
				continue;
			dia_semana = (dia_semana + 6) % 7;
		}

		if (dia_semana == 0)                //50-69: Printando os dias da semana para cada caso.
			printf("%d: sabado\n", dia);
		else if (dia_semana == 1)
			printf("%d: domingo\n", dia);
		else if (dia_semana == 2)
			printf("%d: segunda\n", dia);
		else if (dia_semana == 3)
			printf("%d: terca\n", dia);
		else if (dia_semana == 4)
			printf("%d: quarta\n", dia);
		else if (dia_semana == 5)
			printf("%d: quinta\n", dia);
		else printf("%d: sexta\n", dia);
	}

	return 0;
}

/*
 * jó 
 * iniciado em 28.01.2018
 * terminado em 29.01.2018
 */
 
#include <stdio.h>

int Celsius();
int Fahrenheit();
int MetroPe();
int PeMetro();
int MetroJarda();
int JardaMetro();
int KmMilha();
int MilhaKm();
int CmPolegada();
int PolegadaCm();
int KgLibra();
int LibraKg();

int main(void)
{
	printf("\t***CONVERSOR***\n");
	printf("\t###############\n");
	
	printf("Esse programa faz a conversão\n");
	printf("das seguintes alternativas:\n\n");
	
	int i = 1;
	
	
	while (i != 0000){
		
		printf("\n==========================\n");
		printf("\n1 - Celsius/Fahrenheit\t*   2 - Fahrenheit/Celsius\n");
		printf("3 - Metros/Pés\t\t*   4 - Pés/Metros\n");
		printf("5 - Metros/Jardas\t*   6 - Jardas/Metros\n");
		printf("7 - Km/Milhas\t\t*   8 - Milhas/Km\n");	
		printf("9 - Cm/Polegada\t\t*   10 - Polegada/Cm\n");
		printf("11 - Kg/Libras\t\t*   12 - Libras/Kg\n");
		
		int alternativa;
		printf("\nDigite o número correspondente\n");
		printf("ao que se deseja converter (Ctrl c=sair): ");
		scanf("%d", &alternativa);
	
		if (alternativa == 1){
			printf("Você escolheu a opção 1 (Celsius/Fahrenheit)\n");
			printf("%d", Celsius());
		}
		else if (alternativa == 2){
			printf("Você escolheu a opção 2 (Fahrenheit/Celsius)\n");
			printf("%d", Fahrenheit());
		}
		else if(alternativa == 3){
			printf("Você escolheu a opção 3 (Metros/Pés)\n");
			printf("%d", MetroPe());
		}
		else if(alternativa == 4){
			printf("Você escolheu a opção 4 (Pés/Metros)\n");
			printf("%d", PeMetro());
		}
		else if(alternativa == 5){
			printf("Você escolheu a opção 5 (Metros/Jardas)\n");
			printf("%d", MetroJarda());
		}
		else if(alternativa == 6){
			printf("Você escolheu a opção 6 (Jardas/Metros)\n");
			printf("%d", JardaMetro());
		}
		else if(alternativa == 7){
			printf("Você escolheu a opção 7 (Km/Milhas)\n");
			printf("%d", KmMilha());
		}
		else if(alternativa == 8){
			printf("Você escolheu a opção 8 (Milhas/Km)\n");
			printf("%d", MilhaKm());
		}
		else if(alternativa == 9){
			printf("Você escolheu a opção 9 (Cm/Polegadas)\n");
			printf("%d", CmPolegada());
		}
		else if(alternativa == 10){
			printf("Você escolheu a opção 10 (Polegada/Cm)\n");
			printf("%d", PolegadaCm());
		}
		else if(alternativa == 11){
			printf("Você escolheu a opção 11 (Kg-Libras)\n");
			printf("%d", KgLibra());
		}
		else if(alternativa == 12){
			printf("Você escolheu a opção 12 (Libras-Kg)");
			printf("%d", LibraKg());
		}
		else{
			printf("\nNúmero/caractere inválido.");
			printf("\nDigite um número de 1-12.");
			continue;
		
		}
	}
}

int Celsius(){
	printf("\n\tConversão CELSIUS-FAHRENHEIT\n");
	float c;
	float f;
	printf("Digite o(s) grau(s) em Celsius: ");
	scanf("%f", &c);
	f = (c*1.8) + 32;
	printf("%.2fC° corresponde(m) a **%.2fF°**\n", c, f);
}

int Fahrenheit(){
	printf("\n\tConversão FAHRENHEIT-CELSIUS\n");
	float c;
	float f;
	float x;
	printf("Digite o(s) grau(s) em Fahrenheit: ");
	scanf("%f", &f);
	x = f - 32;
	c = x/1.8;
	printf("%.2fF° corresponde(m) a **%.2fC°**\n", f, c);
}

int MetroPe(){
	printf("\n\tConversão METROS-PÉS\n");
	float m, p;
	printf("Digite a quantidade de metros: ");
	scanf("%f", &m);
	p = m*3.28;
	printf("%.2fm equivale(m) a **%.2fft**", m, p);
}

int PeMetro(){
	printf("\n\tConversão PÉS-METROS\n");
	float m, p;
	printf("Digite a quantidade de pés: ");
	scanf("%f", &p);
	m = p*0.304;
	printf("%.2fft equivale(m) a **%.2fm**", p, m);
}

int MetroJarda(){
	printf("\n\tConversão METROS-JARDAS\n");
	float m, j;
	printf("Digite a quantidade de metros: ");
	scanf("%f", &m);
	j = m/0.9144;
	printf("%.2fm equivale(m) a **%.2fyd**", m, j);
}

int JardaMetro(){
	printf("\n\tConversão JARDAS-METROS\n");
	float m, j;
	printf("Digite a quantidade de jardas: ");
	scanf("%f", &j);
	m = j*0.9144;
	printf("%.2fyd equivale(m) a **%.2fm**", j, m);
}

int KmMilha(){
	printf("\n\tConversão KM-MILHAS\n");
	float k, m;
	printf("Digite a quantidade de km: ");
	scanf("%f", &k);
	m = k/0.621;
	printf("%.3fkm equivale(m) a **%.3fmi**", k, m);
}

int MilhaKm(){
	printf("\n\tConversão MILHAS-KM\n");
	float m, k;
	printf("Digite a quantidade de milhas: ");
	scanf("%f", &m);
	k = m*0.621;
	printf("%.3fmi equivale(m) a **%.3fkm**", m, k);
}

int CmPolegada(){
	printf("\n\tConversão CM-POLEGADAS\n");
	float c, p;
	printf("Digite a quantidade de cm: ");
	scanf("%f", &c);
	p = c*0.393;
	printf("%.2fcm equivale(m) a **%.2fin**", c, p);
}


int PolegadaCm(){
	printf("\n\tConversão POLEGADAS-CM\n");
	float c, p;
	printf("Digite a quantidade de polegadas: ");
	scanf("%f", &p);
	c = p/0.393;
	printf("%.2fin equivale(m) a **%.2fcm**", p, c);
}

int KgLibra(){
	printf("\n\tConversão KG-LIBRAS\n");
	float k, l;
	printf("Digite a quantidade de kg: ");
	scanf("%f", &k);
	l = k*2.204;
	printf("%.3fkg equivale(m) a **%.3flbs**", k, l);
}

int LibraKg(){
	printf("\n\tConversão LIBRAS-KG\n");
	float k, l;
	printf("Digite a quantidade de libras: ");
	scanf("%f", &l);
	k = l/2.204;
	printf("%.3flb equivale(m) a **%.3fkg**", l, k);
}



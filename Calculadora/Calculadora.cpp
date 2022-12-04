#include <stdio.h>
#include <conio.h>

int main() {
	char opcion;
	int valor1 = 0, valor2 = 0;
	int caracter = 0;

	while (true)
	{
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Multiplicacion\n");
		printf("4. Division\n");
		printf("<<Esc=Salir>>\n\n");
		printf("Elige una opcion: ");
		opcion = getch();
		printf("\n\n");
		caracter = opcion;
		if (opcion == 27)
		{
			printf("Saliste del programa");
			break;
		}
		switch (opcion) {
		case '1':
			printf("Escribe un valor numerico: ", 130);
			scanf("%i", &valor1);
			printf("Escribe otro valor numerico: ", 130);
			scanf("%i", &valor2);
			printf("La suma de %i+%i = %i", valor1, valor2, valor1 + valor2);

		case'2':
			printf("Escribe un valor numerico: ", 130);
			scanf("%i", &valor1);
			printf("Escribe otro valor numerico: ", 130);
			scanf("%i", &valor2);
			printf("La resta de %i-%i = %i", valor1, valor2, valor1 - valor2);

		case'3':
			printf("Escribe un valor numerico: ", 130);
			scanf("%i", &valor1);
			printf("Escribe otro valor numerico: ", 130);
			scanf("%i", &valor2);
			printf("La multiplicacion de %i*%i = %i", valor1, valor2, valor1 * valor2);

		case'4':
			printf("Escribe un valor numerico: ", 130);
			scanf("%i", &valor1);
			printf("Escribe otro valor numerico: ", 130);
			scanf("%i", &valor2);
			printf("La division de %i/%i = %i", valor1, valor2, valor1 / valor2);
		}
	}
}

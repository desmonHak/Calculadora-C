#include <stdio.h>
#include <stdlib.h>

int main(){

	while(1 == 1){

		char opcion = 0;

		long int num1 = 0, num2 = 0;

		long int resta = 0, multiplicacion = 0, dividir = 0, sumar = 0;

		printf("""[----- opciones: -----]\n1.   sumar\n2.   restar\n3.   dividir\n4.   multiplicar\n5.   salir\n[----- ========= -----]\n""");

		printf("ingresa una opcion: ");
		scanf("%hhx", &opcion);
		system("clear");



		printf("opcion escogida: %i\n", opcion);

		if (opcion == 0){
			printf("escoga una opcion del 1 al 4, el 0 no es valido");
			exit(0);
		}

		else if (opcion == 1){
			printf("ingrese el primer numero a sumar: ");
			scanf("%li", &num1);

			printf("ingrese el segundo numero a sumar: ");
			scanf("%li", &num2);

			sumar = num1 + num2;

			printf("La suma es: %li", sumar);
		}


		else if (opcion == 2){
			printf("ingrese el primer numero a restar: ");
			scanf("%li", &num1);

			printf("ingrese el segundo numero a restar: ");
			scanf("%li", &num2);

			resta = num1 - num2;

			printf("La resta es: %li", resta);
		}


		else if (opcion == 3){
			printf("ingrese el primer numero a dividir: ");
			scanf("%li", &num1);

			printf("ingrese el segundo numero a dividir: ");
			scanf("%li", &num2);

			dividir = num1 / num2;

			printf("La division es: %li", dividir);


		}


		else if (opcion == 4){
			printf("ingrese el primer numero a multiplicar: ");
			scanf("%li", &num1);

			printf("ingrese el segundo numero a multiplicar: ");
			scanf("%li", &num2);

			multiplicacion = num1*num2;

			printf("La multiplicacion es: %li", multiplicacion);

		}

		else if(opcion == 5){
			printf("saliendo del programa\n");
			break;
		}


		else{
			printf("su opcion: %i no esta en el rango o es un caracter", opcion);
		}

		printf("\n\n");

	}

	exit(0);
	return 0;
}

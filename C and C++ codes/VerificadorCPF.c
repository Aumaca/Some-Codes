#include <stdio.h>

long long int exponencial (int number1, int number2) {
	long long int result = 1;
	for (int count = 1; count <= number2; count++) {
		result *= number1;
	}
	return result;
}

int calcDigit (int cpfArr[], int digit) {
	int total = 0, digCalc;
	
	if (digit == 1) {
		for (int index = 0, toMult = 10; toMult >= 2; index++, toMult--) {
			total += cpfArr[index] * toMult;
		}
		total %= 11;
		if (total < 2)
			digCalc = 0;
        else
			digCalc = 11 - total;
	}
	else if (digit == 2) {
		for (int index = 0, toMult = 11; toMult >= 2; index++, toMult--) {
			total += cpfArr[index] * toMult;
		}
		total %= 11;
		if (total < 2)
			digCalc = 0;
        else
			digCalc = 11 - total;
	}
	
	return digCalc;
}

void main() {
	char toContinue = 'S';
	while (toContinue == 'S' | toContinue == 's') {
		int cpfArr[10], firstDig, secondDig; 
		long long int cpf, cpfToUse;
		printf("Informe seu CPF: ");
		scanf("%lld", &cpf);
		cpfToUse = cpf;
		
		for (int count = 10, index = 0; cpfToUse != 0; count--, index++) {
			int digit = cpfToUse / exponencial(10, count);
			cpfArr[index] = digit;
			if (index == 9)
				firstDig = digit;
			else if (index == 10)
				secondDig = digit;
			cpfToUse = cpfToUse % exponencial(10, count);
		}
		
		int firstDigCalc = calcDigit(cpfArr, 1);
        cpfArr[9] = firstDigCalc;
        int secondDigCalc = calcDigit(cpfArr, 2);

        if (firstDig == firstDigCalc && secondDig == secondDigCalc) {
			printf("CPF VALIDO");
		} else {
			printf("CPF INVALIDO");
		}
		printf("\nContinuar? [S/N]: ");
		scanf(" %c", &toContinue);
	}
}

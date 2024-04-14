#pragma once

int sum(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mul(int a, int b){
	return a * b;
}

double div(int a, int b){
	return (double)a / b;
}

double power(int a, int b){
	double result = 1.0;

	if(b < 0){
		while(b++){
			result = mul(result, a);
		}

		return div(1, result);
	}

	while(b--){
		result = mul(result, a);
	}

	return result;
}


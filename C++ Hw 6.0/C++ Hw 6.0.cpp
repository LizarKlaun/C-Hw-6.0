#include <iostream>

using namespace std;

template<typename T>
T PrintSum(T firstNumber, T secondNumber);
template<typename T>
T PrintSubtraction(T firstNumber, T secondNumber);
template<typename T>
T PrintMultiplication(T firstNumber, T secondNumber);
template<typename T>
T PrintDivision(T firstNumber, T secondNumber);
int Operator(char operat, int firstNumber, int secondNumber);

int Operator(char operat, int firstNumber, int secondNumber) {
	if (operat == '+') {
		int result = PrintSum(firstNumber, secondNumber);
		return result;
	}
	else if (operat == '-') {
		int result = PrintSubtraction(firstNumber, secondNumber);
		return result;
	}
	else if (operat == '*') {
		int result = PrintMultiplication(firstNumber, secondNumber);
		return result;
	}
	else if (operat == '/') {
		int result = PrintDivision(firstNumber, secondNumber);
		return result;
	}
	else {
		return 10;
	}
}

template<typename T>
T PrintSum(T firstNumber, T secondNumber) {
	return firstNumber + secondNumber;
}

template<typename T>
T PrintSubtraction(T firstNumber, T secondNumber) {
	return firstNumber - secondNumber;
}

template<typename T>
T PrintMultiplication(T firstNumber, T secondNumber) {
	return firstNumber * secondNumber;
}

template<typename T>
T PrintDivision(T firstNumber, T secondNumber) {
	return firstNumber / secondNumber;
}


int main() {
	int firstNumber;
	cout << "Print your 1 number: ";
	cin >> firstNumber;
	int secondNumber;
	cout << "Print your 2 number: ";
	cin >> secondNumber;
	char operat;
}
/*
Задача #1

#include <iostream>
void dot(double** A, double** B, double** C, int m, int n, int p, int k) 
{
	setlocale(LC_ALL, "Ru");
	if (n != p) {
		std::cout << "Ошибка: матрицы не являются согласованными" << std::endl;
		return;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			C[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			for (int t = 0; t < n; t++) {
				C[i][j] += A[i][t] * B[t][j];
			}
		}
	}
}

int main() {
	double A[2][3] = { {1, 2, 3}, {4, 5, 6} };
	double B[3][2] = { {7, 8}, {9, 10}, {11, 12} };
	double C[2][2] = {};
	double* pA[2] = { A[0], A[1] };
	double* pB[3] = { B[0], B[1], B[2] };
	double* pC[2] = { C[0], C[1] };
	dot(pA, pB, pC, 2, 3, 3, 2);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout << C[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
*/

/*
Задача #2

#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "Ru");
	std::string text;
	std::cout << "Введите текст:";
	std::getline(std::cin, text);

	std::cout << "Найденные номера:" << std::endl;

	for (int i = 0; i <= text.length() - 11; i++) {
		if (text[i] == '8') {
			bool ok = true;
			for (int j = 0; j < 11; j++) {
				if (!isdigit(text[i + j])) {
					ok = false;
					break;
				}
			}
			if (ok) {
				for (int j = 0; j < 11; j++) {
					std::cout << text[i + j];
				}
				std::cout << std::endl;
			}
		}
	}
	return 0;
}

*/
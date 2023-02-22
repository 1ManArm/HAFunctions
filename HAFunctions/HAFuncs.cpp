#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

double mean(double num_1, double num_2) {
	return (num_1 + num_2) / 2;
}

void print_arr(int array[], const int length) {
	std::cout << '[';
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n";
}

int mean_arr(int array[], const int length) {
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < length; i++) {
		sum += array[i];
		avg = sum / length;
	}
	return avg;
}

int powers(int num_1, int num_2) {
	int q = num_1;
	for (int i = 0; i <= num_2; i++) {
		q *= num_1;
		std::cout << q << "\t";
	}
	return q;
}

void positive_arr(double a[], const int sz)
{
	for (int i = 0; i < sz; i++)
		if (a[i] < 0.0) a[i] = -a[i];
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	std::cout << "Задание 1: Mean\n\n";
	std::cout << "Введите числа -> ";
	std::cin >> n >> m;
	std::cout << mean(n, m) << "\n\n";

	std::cout << "Задание 2: Среднее арифметическое массива\n\n";
	const int rng = 5;
	int arr[rng]{ 6, 7, 11, 8, 1 };
	std::cout << "Массив:\n";
	print_arr(arr, rng);
	std::cout << "Среднее арифметическое -> " << mean_arr(arr, rng) << "\n\n";

	std::cout << "Задание 3: Функция powers\n\n";
	std::cout << "Введите числа -> ";
	int nx, mx;
	std::cin >> nx >> mx;
	powers(nx, mx);
	
	std::cout << "\n\n";
	std::cout << "Задание 4: Минус на плюс в массиве\n\n";

	double a[] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };
	int sz = sizeof(a) / sizeof(double);

	std::cout << "Изначальный ряд: ";
	for (int i = 0; i < sz; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	positive_arr(a, sz);
	std::cout << "Измененный ряд: ";
	for (int i = 0; i < sz; i++)
		std::cout << a[i] << " ";

	




	return 0;
}
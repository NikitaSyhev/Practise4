//Шаблон

#include <iostream>

void clear_arr(int arr[], int length, int k) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == k)
			arr[i] = 0;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int index_sum(int arr1[], int arr2[], int length1, int length2, int n) {
	return arr1[n] + arr2[n];
}




double mean_arr(int arr3[], int length1) {
	int max = arr3[0];
	for (int i = 1; i < length1; i++)
		if (arr3[i] > max)
			max = arr3[i];
	int min = arr3[0];
	for (int i = 1; i < length1; i++)
		if (arr3[i] < min)
			min = arr3[i];
	
	return (min + max) * 0.5;
}

void prime_range(int a, int b) {
	int counter;
	for (int i = a; i <= b; i++) {
		counter = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				counter++;
		if (counter == 2)
			std::cout << i << " ";
	}

}


int main() {
	setlocale(LC_ALL, "Russian");
		int n, m, k, p;

		std::cout << "Задание 1: Функция clear_arr: \n";
		std::cout << "Введите ключевое значение: ";
		std::cin >> n;
		const int size = 3;
		int arr[size]{ 4, 5, 78 };
		clear_arr(arr, size, n);



		std::cout << "Задание 2: Функция index_sum: \n";
		const int size3 = 4;
		const int size4 = 4;
		int arr1[size4]{ 2, 3, 5, 3 };
		int arr2[4]{ 6, 1, 9, 9 };
		std::cout << "Введите число index: \n";
		std::cin >> m;
		std::cout << "Сумма элементов массива с иднексом " << m << " равна " << index_sum(arr1, arr2, size3, size4, m) << ".\n\n";
		if (index_sum == 0)
			std::cout << "Error";
		



		std::cout << "Задание 3: Функция mean_arr: \n";
		const int size1 = 5;
		int arr4[size1]{ 650, 7, 3, 67, 9 };
		std::cout << "Среднее арифметическое максимума и минимума массива равно: " << mean_arr(arr4, size1) << ".\n\n";


		std::cout << "Задание 4: Функция prime_rage: \n";
		std::cout << "Введите число 1: \n";
		std::cin >> k;
		std::cout << "Введите число 2: \n";
		std::cin >> p;
		prime_range(k, p);





		














	return 0;
}


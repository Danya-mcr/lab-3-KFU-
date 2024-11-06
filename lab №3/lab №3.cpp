#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    // задание 1А
	short c = 0;
	while (c <= 100) {
		cout << "Температура в цельсиях: " << c << "  ";
		cout << "Температура в фаренгейтах: " << 9.00 / 5.0 * c + 32 << endl;
		c += 10;
	}
	// задание 1Б
	float x = 0;
	do {
		cout << "x = " << x << "   " << "y = " << log(x + 1) * sin(x) << endl;
		x += 0.5;
	} while (x <= 5.0);
	// задание 1В
	float x = 0;
	for (int k = 0; k <= 12; k++) {
		cout << "x = " << x << "   " << "y = " << cos(x) << endl;
		x += M_PI / 6;
	}
	// задание 1Г
	float x = -1.5;
	while (x <= 2.5) {
		if (x < -0.5) {
			cout << "x = " << x << "   " << "y = " << 1 - pow(x, 2) << endl;
			x += 0.5;
		}
		if (x >= -0.5 && x <= 1) {
			cout << "x = " << x << "   " << "y = " << x + 1 << endl;
			x += 0.5;
		}
		if (x > 1) {
			cout << "x = " << x << "   " << "y = " << 1 + sqrt(abs(cos(x))) << endl;
			x += 0.5;
		}
	}
	// задание 2
	short arr[7], cnt = 0, sum = 0, min_nmb;
	for (int k = 0; k < 7; k++) {
		cout << "ВВедите " << k + 1 << "-ое число: ";
		cin >> arr[k];
	}
	for (int n = 0; n < 7; n++) {
		if (arr[n] < 0)
			cnt++;
	}
	cout << "Количество отрицательных чисел: " << cnt << endl;
	for (int i = 0; i < 7; i++) {
		if (arr[i] >= 10)
			sum += arr[i];
	}
	cout << "Сумма двузначных чисел: " << sum << endl;
	min_nmb = arr[0];
	for (int j = 0; j < 7; j++) {
		if (arr[j] < min_nmb)
			min_nmb = arr[j];
	}
	cout << "Минимальное число: " << min_nmb << endl;
	
	// задание 3
	short n; cin >> n;
	float sum = 0;
	for (int k = 2; k <= 2 * n; k += 2) {
		sum += 1.0 / k;
	}
	cout << sum;
	
	// задание 4А
	float x, p = 0; cin >> x;
	short n; cin >> n;
	p = cos(x);
	for (int k = 1; k <= n - 1; k++) {
		p = cos(1 + p);
	}
	cout << p;
	
	// задание 4Б
	float x, p = 0; cin >> x;
	short n; cin >> n;
	p = sqrt(x);
	for (int k = 1; k <= n - 1; k++)
		p = sqrt(x + p);
	cout << p;
	
	// задание 5
	//скип

	// задание 6
	cout << "Введите число, чтобы остановить цикл, введите '110011'";
	int cnt = 0, cnt_chet = 0;
	int nmb = 0;
	while (nmb != 110011) {
		cin >> nmb;
		cnt++;
		if (nmb % 2 == 0)
			cnt_chet++;
	}
	cout << "Кол-во чисел: " << cnt << endl;
	cout << "Кол-вл чётных чисел: " << cnt_chet;
	
	// задание 7
	short n; cout << "Введите количество вершин: "; cin >> n; cout << endl;
	float x1, y1, x2, y2, x3, y3;
	float per = 0;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	per += sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	for (int i = 0; i < n - 2; i++) {
		cin >> x3 >> y3;
		per += sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
		x2 = x3; y2 = y3;
	}
	per += sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << "Периметр = " << per;
	
	// задание 8
	short n; cin >> n;
	if (n % 2 == 0) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n / 2; j++) {
				cout << "O   " << "*   ";
			}
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << "O   ";
			for (int j = 0; j < n / 2; j++) {
				cout << "*   " << "O   ";
			}
			cout << endl;
		}
	}
	
	// задание 9
	short cnt = 0;
	int max_el = 0, nmb = 1, nums[1000], cnt_max_el = 0;//в более свежих версиях компилятора можно не указывать размер массива (оптимизация)
	while (nmb != 0) {
		for (int k = 0; nmb != 0; k++) {
			cin >> nmb;
			nums[k] = nmb;
			cnt++;
		}
	}
	int len = sizeof(nums) / sizeof(nums[0]);
	for (int j = 0; j < len; j++) {
		if (nums[j] > max_el)
			max_el = nums[j];
	}
	for (int i = 0; i < len; i++) {
		if (nums[i] == max_el)
			cnt_max_el++;
	}
	cout << "Макс. элемент: " << max_el << endl << "Кол-во макс. элементов: " << cnt_max_el;
	

	return 0;
}
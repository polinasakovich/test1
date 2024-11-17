
#include <iostream>
using namespace std;

void zad1() {
	int t = 12345;
	void* w = &t;
	*(int*)w = 666;
	cout << t << endl;
}

void zw(int* l) {
	*l += 5;
}

void zad2() {
	int n = 5;
	int* wsk = &n;
	zw(wsk);
	cout << n << endl;
	zw(&n);
	cout << n << endl;
}

void zad3() {
	int tab[5] = { 1,7,3,4,5 };
	cout << *(tab + 2) << endl;
}
void zad4() {
	int l1 = 1, l2 = 2, l3 = 3;
	int* w[3];
	w[0] = &l1;
	w[1] = &l2;
	w[2] = &l3;
	cout << *w[0] << endl;
}
void zad5() {
	int* z;
	z = new int[3];
	z[0] = 111;
	z[1] = 1111;
	cout << *(z + 1) << endl;
	delete z;

}
void zad6() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << a + b + c;
}
void zad7() {
	float x;
	cin >> x;
	if (x < 0) {
		cout << (-1 * x) << endl;
	}
	else {
		cout << x << endl;
	}
}

int zad8() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int d = (b * b - (4 * a * c));
	if (a == 0 && b == 0 && c == 0) {
		cout << "nieskonczonosc";
		return 0;
	}
	if (a == 0 && b != 0) {
		cout << 1;
		return 0;
	}
	if (a == 0 && b == 0) {
		cout << 0;
		return 0;
	}
	if (d > 0) cout << 2;
	else if (d == 0) cout << 1;
	else cout << 0;
	return 0; 
}
void zad9() {
	int a, b;
	cin >> a;
	cin >> b;
	if (a > b || a == b) cout << a;
	else cout << b;
}
void zad10() {
	int n;
	int suma = 0;
	cin >> n;
	/*for (int i = 1; i <= n; i++) {
		suma += i;//suma=suma+i
	}*/
	int i = 1;
	do {
		suma += i;
		i++;
	} while (i <= n);
	cout << suma;
}

void zad11() {
	int n;
	int suma = 1;
	cin >> n;
	/*for (int i = 1; i <= n; i++) {
		suma *= i;//suma=suma*i
	}*/
	int i = 1;
	do {
		suma *= i;
		i++;
	} while (i <= n);
	cout << suma;
}

void zad12() {
	int n, m;
	cin >> n; 
	int suma = 1;
	cin >> m;
	
	int i = n;
	do {
		suma *= i;
		i++;
	} while (i <= m);
	cout << suma;
}
void zad13() {
	for (int i = 1; i <= 20; i++) cout << i<<" ";
	cout << endl;
	for (int a = 10; a < 100; a = a + 2) cout << a << " ";
	cout << endl;
	for (int d = 10; d < 100; d++)
		if (d % 3 == 0 || d % 5 == 0) cout << d << " ";
	cout << endl;
	for (int d = 10; d < 100; d++)
		if (d % 3 == 0 && d % 2 == 1) cout << d << " ";
	cout << endl;
}
void zad14() {
	int n;
	int s = 1;
	cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			s *= 2;
		}
		cout << s;
	}
}
void zad15() {
	int n;
	cin >> n;
	int s = 0, count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s += i;
			count++;
		}
	}cout << s << " " << count;
}
int main()
{
	//zad1();
	//zad2();
	//zad3();
	//zad4();
	//zad5();
	//zad6();
	//zad7();
	//zad8();
	//zad9();
	//zad10();
	//zad11();
	//zad12();
	//zad13();
	//zad14();
	zad15();
	return 0;
}

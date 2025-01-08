#include <iostream>
#include <numeric>
#include <cstdlib>
using namespace std;

int s1(int aa);
int s2(int aa);
int s3(int aa);
int s4(int aa);
int NWD(int a1, int b);
int NWD1(int a1, int b);
void cyfra(long n);
int main() {
    int a = 6;
    cout << s1(a) << endl;
    cout << s2(a) << endl;
    cout << s3(a) << endl;
    cout << s4(a) << endl;
    int a1,b;
    cout<<"podaj dwie liczby: "<<endl<<"pierwsza liczba= ";
    cin>>a1;
    cout<<endl<<"druga liczba= ";
    cin>>b;
    cout<<"NWD("<<a1<<","<<b<<")="<<NWD(a1,b)<<endl;
    cout<<"NWD1("<<a1<<","<<b<<")="<<NWD1(a1,b)<<endl;
    long nn=12345;
    cyfra(nn);
    return 0;

}

int s1(int aa) {
    int k = 1;
    for (int i = 2; i <= aa; i++) {
        k *= i;
    }
    return k;
}

int s2(int aa) {
    if (aa == 1) {
        return 1;
    } else {
        return aa * s2(aa - 1);
    }
}

int s3(int aa) {
    if (aa <= 1) {
        return aa;
    }
    return s3(aa - 1) + s3(aa - 2);
}

int s4(int aa) {
    long long d = 0, b = 1;
    for (int i = 2; i <= aa; i++) {
        cout << b << " ";
        b += d;
        d = b - d;
    }
    return b;
}
int s5(int aa) {
    int t[10];
    t[0] = 0;
    t[1] = 1;
    for (int i = 2; i <= aa; i++) {
        t[i] = t[i - 1] + t[i - 2];
    }
    return t[aa];
}

int NWD(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int NWD1(int a1, int b) {
    if (a1!= b) {
        return NWD1(a1 > b ? a1 - b : a1, b > a1 ? b - a1 : b);
        /*int NWD1(int a1, int b) {
    while (a1 != 0 && b != 0) {
        if (a1 > b) {
            a1 -= b;  // уменьшаем большее число
        } else {
            b -= a1;  // уменьшаем меньшее число
        }
    }
    return a1 == 0 ? b : a1;  // возвращаем ненулевое число
}
*/
    }
    return a1;
}
void cyfra(long n) {
    if (n < 10) {
        cout << n;
    } else {
        cout << n % 10 << " ";
        cyfra(n / 10);
    }
}

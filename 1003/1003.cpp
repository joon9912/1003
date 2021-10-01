#include <iostream>
using namespace std;

int fibo[41] = { 0, 1, };

int func(int n) {
	if (n == 0 || n == 1)
		return fibo[n];
	else if (fibo[n] == 0)
		fibo[n] = func(n - 1) + func(n - 2);

	return fibo[n];
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i) {
		int n;
		cin >> n;
		func(n);

		if (n == 0) 
			cout << "1 0\n";
		else
			printf("%d %d\n", func(n-1), func(n));
	}
	return 0;
}

/*
0 1 1 2 3 5 8 13 ...

(0 출력되는 개수, 1 출력되는 개수)
ex) n = 4
= > func(3) func(4)

why ?

n = 1 (0, 1)
n = 2 (1, 1)
n = 3 (1, 2)
n = 4 (2, 3)
n = 5 (3, 5)
n = 6 (5, 8)
...
n = k(fibo(n = k - 1), fibo(n = k))

*/

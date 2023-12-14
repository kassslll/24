#include <stdio.h>
#include <Windows.h>

int task_1(int);
void f1(int);
void f2(int);
void f3(int);

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//printf("%d", task_1(5));
	f3(11);
}

int task_1(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * task_1(n - 1);
}

void f1(int n) {
	if (n < 1) {
		return;
	}
	printf("%d ", n);
    f1(n - 2);
}

void f2(int n) {
	if (n > 1) {
		f2(n - 2);
	}
	printf("%d ", n);
}

void f3(int n) {
	printf("%d ", n);
	if (n > 1) {
		f3(n - 2);
		printf("%d ", n);
	}

}
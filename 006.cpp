// #### Aşağıdaki C++ programı derlenip çalıştırıldığında standart çıkış akımına ne yazar?

// ```
int foo(int *p, int *q)
{
	*p = 1;
	*q = 2;
	
	return *p + *q;
}

char str[] = "0123";

#include <iostream>

int main()
{
	using namespace std;

	int a = 3;
	int b = 4;
	int c = foo(&a, &a);
	cout << c << endl;
	(c == a + b ? a : b) = 5;
	cout << a << b << endl;
	int i = 0;

	// i[str+2] => *(i + (str+2)) 
	str[i] = i[str + 2];
	cout << str << endl;
	
} 
// ```

// [ödevin cevabı](https://youtu.be/DDYvnqgowUs)

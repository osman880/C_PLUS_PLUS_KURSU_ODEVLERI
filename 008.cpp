// #### Aşağıdaki kodda yapılan referans tanımlamalarından geçersiz olanları işaretleyin ve geçersizlik nedenlerini açıklayın:

// ```
#include <iostream>

int &f1();
int f2();

int main()
{
	int x = 10;
	int y = 35;
	const int primes[]{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	int a[]{ 1, 2, 4 };
	//ref need to initializer
	int &r1;
	//operand of preincrement/predecrement operator is Lvalue in CPP
	int &r2(++x);
	int &r3{ 10 };
	const int &r4{ int() };
	const int &r5{ int{} };
	//expression of sign operator is Rvalue 
	int &r6 = +y;
	//if right operand of comma operator, expression is Lvalue in CPP
	int &r7 = (x, y);
	//conditional expression is Lvalue in CPP
	int &r8 = x > 10 ? x : y;
	int &r9 = f1();
	//return value of f2 is Rvalue 
	int &r10 = f2();
	//const value assignment to non-const Lvalue is not legal 
	int &r11 = primes[5];
	int const &r12 = *primes;
	const int &r13{ x };
	//type of ref and type of array not compatibale
	int *&r14 = a;
	int(&r15)[] = a;
	int(&r16)[3] = a;

	std::cout << r2;
	std::cout << r7;
}
// ```

// [ödev cevabı](https://www.youtube.com/watch?v=vNR3lPt25GM)

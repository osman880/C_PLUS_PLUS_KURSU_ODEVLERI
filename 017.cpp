
// ```

// #include <iostream>

// int main()
// {
// 	int x = 10;
// 	int *ptr = &x;

// 	auto r1 = x; //int r1 = x
// 	auto r2 = *ptr; //int *r2 = ptr
// 	auto r3 = r2; //int *r3 = r2
// 	auto &r4 = ptr; //int &(*r4) = ptr
// 	auto &r5 = *ptr; //int &(r5) = *ptr

// 	r1 += 3;
// 	std::cout << "x = " << x << "\n";
// 	r2 += 13;
// 	std::cout << "x = " << x << "\n";
// 	r3 += 20;
// 	std::cout << "x = " << x << "\n";
// 	*r4 += r2;
// 	std::cout << "x = " << x << "\n";
// 	++r5;
// 	std::cout << "x = " << x << "\n";

// }
// ```

// [ödevin cevabı](https://www.youtube.com/watch?v=5Foj9k1OGTA)

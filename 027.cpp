// #### Aşağıdaki kodda yapılan işlev çağrılarının durumunu belirtin. Geçerli mi değil mi? Geçerli ise çağrılan işlev hangisidir?

// ```
// #include <iostream>
// using namespace std;

// void func(int){ cout << 1 << "\n";}  	//1
// void func(double){ cout << 2 << "\n";} 	//2
// void func(long){ cout << 3 << "\n";}  	//3
// void func(bool){ cout << 4 << "\n";} 	//4

// int main()
// {
// 	int x = 10;

// 	func('A'); //1 
// 	func(2.3F); //2
// 	func(4u); //ambiguity
// 	func(10 > 5); //4
// 	func(&x); //4
// 	func(nullptr); //no match

// 	return 0;
// }
// ```

// [ödev cevabı](https://www.youtube.com/watch?v=1WAa6J1wTR0&list=PLL6uEfc2ZSZVQQUdzaMxZje66PlfmxDXi&index=28)

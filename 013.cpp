// ##### Aşağıdaki her bir kod hakkında yorum yapınız:
// #include <iostream>
// using namespace std;


// ```
/*Referans geri dönüşlü bir fonksiyonun geri dönüş değeri otomatik ömürlü bir nesne olamamlı.
Otomatik ömürlü nesne olursa tanımsız davranış olur.*/
// int &func(int x)
// {
// 	return x;
// }

// int main()
// {
// 	int y = 20;
// 	func(y) = 50;
// }
// ```


// ```
// #include <iostream>

// int main()
// {
// 	const int x = 20;
// 	auto y = x;// int y = x
// 	++y;

// 	std::cout << y << " " << x << "\n";

// }
// ```


// ```
// include <iostream>

// int main()
// {
// 	int x = 10;
// 	int &r1 = x;
// 	auto r2 = x; //int r2 = x
// 	auto &r3 = r2;

// 	r2 += 5;
// 	r3 += 20;
// 	++x;

// 	std::cout << r1 + r2 + r3 << "\n";
// }
// ```


// ```
// int main()
// {
// 	int x = 10;
// 	const int &cr = x;
// 	auto &r = cr; //const int &r = cr

// 	++r; // const nesne arttırılamaz
// }
// ```


// ```
// #include <iostream>

// int main()
// {
// 	int a[] = { 0, 1, 2, 3, 4, 5 };
// 	auto r1 = a; //int *r1 = a
// 	auto &r2 = a; // int (&r2)[6] = a

// 	++r2[3]; //ref olduğu için a[3]'ün değeri arrttı
// 	std::cout << (r1[3] == r2[3]) << "\n";
// 	//r1 pointer olduğu için r1[3]'te a[3]'ü gösteriyor.
// 	std::cout << r1[3] << " " << r2[3] << "\n";
// }
// ```


// ```
// #include <iostream>
 

  
// int main()
// {
// 	int a[] = { 10, 20, 30, 40 };
// 	auto p = a; //int *p = a
// 	auto &r = p; // int * &r = p
// 	++r;
// 	++p;
// 	//dizinin 3. elemanını gösterecektir.
// 	std::cout << *r << "\n";
// }
// ```

// ```
// #include <iostream>

// int &func(int &r)
// {
// 	++r;
// 	return r;
// }

// int main()
// {
// 	int x = 10;
// 	auto f = func; //int &(*f)(int &) = func
// 	auto y = f(x); //int y = 11 
// 	auto &r = f(x); //int &r = x 
// 	r += 400; //x'e referans olduğu için x'de artacak
// 	y += 50;

// 	std::cout << "x = " << x << "\n";

// }
// ```


// ```
// #include <iostream>

// int main()
// {
// 	int x = 10;
// 	int *ptr = &x;

// 	auto r1 = x; //int r1 = x
// 	auto r2 = *ptr; //int *r2 = *ptr
// 	auto r3 = r2; //int *r3 = r2
// 	auto &r4 = ptr; //int &r4 = ptr
// 	auto &r5 = *ptr; //int &r5 = *ptr

// 	r1 += 3; //r1 = 13
// 	r2 += 13; //r2 = 23
// 	r3 += 20; //r3 = 30
// 	*r4 += r2; //x = 33
// 	++r5; //x = 34

// 	std::cout << "x = " << x << "\n";

// }
// ```

// [ödev cevabı](https://www.youtube.com/watch?v=F9teyZ8eHi8)

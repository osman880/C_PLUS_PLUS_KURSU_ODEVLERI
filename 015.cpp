// #### Aşağıdaki kodlarda (varsa) sentaks hatalarını işaretleyiniz ve sentaks hatalarının nedenlerini belirtiniz:

// ```
// void f1()
// {
// 	const int x = 10;
// 	auto a = x; //int a = x
// 	auto &b = x; //int const &b = x
// 	decltype(x) c = 0; //const int c = 0

// 	++a;
// 	++b; //b, x'i refere eder ve x const olduğu için arttırılamaz
// 	++c; // c const olduğu için arttırılamaz
// }


// void f2()
// {
// 	int x = 10;
// 	int y = 20;
// 	const int *p = &x;
// 	int *const cp = &x;

// 	auto a = p; //const int *a = p
// 	auto b = cp; //int *b = cp

// 	a = &y;
// 	*a = 20; //a'nın gösterdiği adresi değiştirebilirim fakat göserdiği adresteki değeri değiştiremem
// 	b = &y;
// 	*b = 56;
// }


// void f3()
// {
// 	//decltype'a isim verilirse ismin tipi çıkarılır
// 	//L Value verilirse değer kategorisinin referansı çıkarılır
// 	//PR Value verilirse tipi çıkarılır
// 	int x = 10;
// 	int *p = &x;
// 	int **pp = &p;

// 	decltype(p) a; //int *a
// 	decltype(*p) b; //int &b
// 	decltype(+*p) c; //int c
// 	decltype(pp) d; //int **d
// 	decltype(*pp) e; //int *&e
// 	decltype(**pp) f; //int &f
// }

// void f4()
// {
// 	int arr[]{ 1, 2, 3, 4 };
// 	decltype(arr)a; //int a[4];
// 	auto b{ arr }; //int *b
// 	auto &c{ arr }; //int (&c)[4]

// 	++a; //a ++ operatorünün operandı olduğunda array decay olacak fakat a modifiable olmadığı için hata oluşacak.
// 	++b;
// 	++c;
// 	++*a;
// 	++*b;
// 	++*c;
// }

// void f5()
// {
// 	auto x = 10; //int x = 10
// 	auto y = &x; //int *y = &x
// 	auto z = &y; //int **z = &y

// 	y = *z;
// 	x = **z;
// 	y = 0;
// 	z = 0;	
// }

// void f6()
// {
// 	const int x = 10;
// 	const int &r = x;
// 	auto a = r; //int a = r. & olmadığı için const'luk düşücek
// 	decltype(a) b; //int b
// 	++a;
// 	++b; //b indetermined bir value ve bunu kullanmak undefined behavior oluşturuyor
// 	decltype(*&x) c; //L value olduğu için tipin referansı çıkarılır. init edilmediği için hatalı
// }
// ```

// [ödevin cevabı](https://www.youtube.com/watch?v=teqFH0i_rok)

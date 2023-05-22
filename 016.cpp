// #### Aşağıdaki C++ programı hakkında yorum yapınız:

// + sentaks hatası
// + tanımsız davranış
// + derleyiciye göre değişir
// + ekrana şunu yazar: 

// ```
// #include <iostream>

// int main()
// {
// 	int x = 5;
// 	decltype((x)) y{ x };
// 	std::cout << "x = " << x << "\n";

// 	decltype(y *= 2) z = x;
// 	decltype(y--) t = x;
// 	int &rx{ x };
// 	std::cout << "rx = " << rx << "\n";
// 	auto ax{ rx };

// 	++y;
// 	z *= 2;
// 	t *= 5;
// 	ax += 10;

// 	std::cout << "x = " << x << "\n";
// }
// ```

// [ödevin cevabı](https://www.youtube.com/watch?v=Eg279cxMVZM)

// #### Aşağıdaki C++ programı hakkında yorum yapınız:

// + sentaks hatası
// + tanımsız davranış
// + derleyiciye göre değişir
// + ekrana şunu yazar: 

// ```
#include <iostream>

int main()
{
	int x{ 1 }, y{ 1 };

	const int &r1 = x > 0 ? x : y++;
	const int &r2 = x > 0 ? x : ++y;
	x = 5;
	std::cout << r1 << r2;
}

// ```

// [ödev cevabı](https://www.youtube.com/watch?v=C8obQMuvk6k)

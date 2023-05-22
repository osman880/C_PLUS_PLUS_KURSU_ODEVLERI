// #### Aşağıdaki C++ programı hakkında yorum yapınız

// + sentaks hatası var ise, hatayı ve hatanın nedenini belirtiniz.
// + tanımsız davranış var ise nedenini belirtiniz.
// + standart çıkış akımına ne yazdırılacağını belirtiniz.

// ```

#include <iostream>

int main()
{
	const int x = 20;
	//& olmadığı için y x'i refere etmez ve arı bir değişken olarak arttırılabilir
	auto y = x; //int y = x
	++y;

	std::cout << y << " " << x << "\n";
}
// ```

// [ödevin cevabı](https://www.youtube.com/watch?v=AYVwPKvnmPI)

// Aşağıdaki bildirimlerden sentaks hatası içerenleri işaretleyiniz. Sentaks hatasının nedenini açıklayınız:
#include <iostream>

//bir parametrede default argument kullanılırssa ondan sonraski 
//parametreler de default argument olmalı 
// void f1(int, int = 10, int);


//maximal munch kuralına takılmış. * ile = arasında boşluk olmadığı 
//için string ataması yerine çarpma işlemi olarak algılanıyor
// void f2(const char *= "error");

//hata yok.
// int g{};
// void f3(int &r = g);


//daha önceki parametreler default argument olarak kullanılamaz
// void f4(int x = 10, int y = x);


//tekrar eden bildirimlerde aynı default argument tekrar edemez
// void f5(int, int, int = 10);
// void f5(int, int, int = 10);


//hata yok
// int f6(int x = 10, int y = 20)
// {
// 	return x * x + y - 5;
// }


//fonksiyon deklerasyonları kümülatif ele alınacağı için hata yok
//hem 2. hem de 3. parametre default argument
// int f7(int, int, int);
// int f7(int, int, int = 10);
// int f7(int, int = 20, int);


//f8 default argument aldığı için f9 ve f10'da
//default argument almış gibi davranırlar. Hata yok
// int f8(int = 0);
// int f9(int = f8());
// int f10(int = f9());


//hem fonksiyon tanımı hem de fonksiyon bildiriminde
//default argument kullanılamaz. Birinde olabilir
// int f11(int = 1);

// int f11(int x = 1)
// {
// 	return x + 5;
// }



// [ödevin cevabı](https://youtu.be/Xj4NQyX985Y)

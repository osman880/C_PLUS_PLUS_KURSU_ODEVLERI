// #### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


// ```
// #include <iostream>
 
// void f(int) 
// {
// 	std::cout << "int";
// }
 
// void f(long)
// {
// 	std::cout << "long";
// }
 
// void f(double)
// { 
// 	std::cout << "double";
// }
 
// int main()
// {
// 	f(static_cast<double>((sizeof(int))));
 
// 	return 0;
// }
// ```

// __Sorunun yanıtı şu seçeneklerden biri de olabilir:__

// + Sentaks hatası *(syntax error)*
// + Tanımsız davranış *(undefined behavior)*
// + Derleyiciye göre değişir *(implementation defined)*

// [ödev cevabı](https://www.youtube.com/watch?v=q4pxYctYKDQ&list=PLL6uEfc2ZSZVQQUdzaMxZje66PlfmxDXi&index=9)

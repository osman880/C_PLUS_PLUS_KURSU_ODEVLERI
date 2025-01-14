// #### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


// ```
// #include <iostream>
 
// void func(int)
// {
// 	std::cout << "int";
// }
 
// void func(float)
// {
// 	std::cout << "float";
// }
 
 
// int main()
// {
// 	//double input verilmiş. Ambiguity var, sentaks hatası
// 	func(2.5);
// }
// ```

// __Sorunun yanıtı şu seçeneklerden biri de olabilir:__

// + Sentaks hatası *(syntax error)*
// + Tanımsız davranış *(undefined behavior)*
// + Derleyiciye göre değişir *(implementation defined)*


// [ödev cevabı](https://youtu.be/8GfOlinx448)

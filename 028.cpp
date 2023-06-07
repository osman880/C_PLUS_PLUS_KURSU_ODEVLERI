// #### Aşağıdaki kodda yapılan işlev çağrılarının durumunu belirtin. Geçerli mi değil mi? Geçerli ise çağrılan işlev hangisidir?

// ```
// void func(void *);  //1
// void func(bool); //2

// void foo()
// {
// 	double x = 1.0;

// 	func(0); //ambiguity
// 	func(nullptr); //1. 2 uygun bile değil
// 	func(&x); //1. 2'de uygun
// 	func(x); //2. 1 uygun değil
// }
// ```

// [ödev cevabı](https://youtu.be/WqaiCOZmMew)

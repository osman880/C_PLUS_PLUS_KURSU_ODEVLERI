// #### Aşağıdaki kodların her biri için şu soruya yanıt vermeniz gerekiyor:

// + Sentaks hatası var mı?
// + İşlev yüklemesi var mı?


// ```
//Function overloading yok
// class A {
// public:
// 	void func(int);
// private:
// 	void func(int);
// };
// ```

// ```
//2 overload var
// class B {
// public:
// 	void func(int, int);
// private:
// 	void func(int);
// };
// ```


// ```
//Overload yok farklı scope
// class C {
// public:
// 	void func(int);
// };

// void func(C *ptr, int);
// ```


// ```
//3 overload var
// class D {
// public:
// 	void func(int) = delete;
// 	void func(unsigned int) = delete;
// 	void func(double) = delete;
// };
// ```


// ```
// 2 overload var
// class E {
// public:
// 	void func()const;
// 	void func();
// };
// ```


// ```
//func overload yok
// class F {
// public:
// 	F& func();
// 	const F& func();
// };
// ```


// ```
//2 overload var
// class A;
// class B;

// class G {
// public:
// 	void func(A);
// 	void func(B);
// };
// ```

// [ödevin cevabı](https://www.youtube.com/watch?v=qKKOWjpAYIM)

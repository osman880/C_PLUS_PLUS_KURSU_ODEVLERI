// #### C dili tekrarı için sorulmaktadır:</br>
// Aşağıdaki kodda C ve C++ dillerinin kurallarına göre sentaks hatası oluşturan deyimleri *(statements)* işaretleyiniz ve sentaks hatalarının nedenlerini açıklayınız. Her bir gösterici *(pointer)* değişkeni niteleyen ingilizce terimleri yazınız. Soruya bir derleyici, *IDE* ya da yardımcı bira araç kullanmadan yanıt veriniz.

// ```
int main()
{
	int x = 10;
	int y = 20;
	
	//const pointer to int
	int * const p1 = &x;
	//pointer to const int
	const int *p2 = &x;
	//pointer to const int
	int const *p3 = &x;
	//const pointer to const int
	const int* const p4 = &x;

	*p1 = 40;
	p1 = &y;

	*p2 = 40;
	p2 = &y;

	*p3 = 40;
	p3 = &y;
	
	*p4 = 40;
	p4 = &y;
}
// ```

// [ödev cevabı](https://www.youtube.com/watch?v=LLP0CyEmkJ0)

// #### Sentaks hatası olan satırları belirtiniz:

// ```

// auto a; //auto nesnelere ilk değer ataması yapılmalı yoksa tip çıkarımı yapamaz
// int &b; //ref tanımında ilk değer ataması yapılmalı
// auto c = 10; //int c = 10
// int &d = c;
// const auto &e = 20; //const int &e = 20
// int &f = ++c; 
// int &g = c + 5; //L value'ya PR value ile ilk değer verilemez
// int &&h = c % 2; 
// int func(); int &&j = func();
// int &foo(); int &&m = foo(); //R value ref'e L value ile ilk değer verilemez
// int ival = 10; int &&rval = ival + 10; int &p = rval;

// ```



// [ödev cevabı](https://www.youtube.com/watch?v=5WejBbJa4MQ&ab_channel=NecatiErgin)

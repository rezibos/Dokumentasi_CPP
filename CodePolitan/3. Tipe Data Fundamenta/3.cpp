#include <iostream>
#include <limits>

// Tipe data fundametal
// Cek limit variabel

using namespace std;

int main()
{

   /*
      bilnagan bulat
      int a = 4;  32 bit // agar tidak ada negatif tambahin (unsigned)
      long long b = 8; 64 bit // long = b 4; 32 bit
      short c = 2;  16 bit
   */

   /*
      bilangan decimal
      float d = 1.0;
      double e = 2.0;
   */

   /*
      character
      char = 'f'; // string engak masuk karena tergabung sama char
   */

   /*
      bool = true/false;
   */

   unsigned int a = 2;
   cout << a << endl;
   cout << sizeof(a) << " byte " << endl;               // 1 byte = 8 bit
   cout << numeric_limits<unsigned int>::max() << endl; // angka max
   cout << numeric_limits<unsigned int>::min() << endl; // angka min


   return 0;
}
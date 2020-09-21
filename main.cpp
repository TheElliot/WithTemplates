#include <iostream>

using namespace std;

template <typename whateverType>
whateverType square(whateverType a) {
  return a*a;
}

int main() {
  int test_int = 8;
  double test_double = 8.5;
  float test_float = 8.2;
  bool test_bool = true;

  cout << "int " << square <int> (test_int) << endl;
  cout << "double " << square <double> (test_double) << endl;
  cout << "float " << square <float> (test_float) << endl;
  cout << "bool " << square <bool> (test_bool) << endl;
}
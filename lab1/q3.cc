#include <iostream>
#include <string>

using namespace std;

int array[10];

void fill_array(int first, int increment) {
 for (int n = 0; n < 10; ++n) {
  array[n] = first + n*increment;
 }
}

int main(){
 fill_array(4,2);
 for (int n = 0; n < 10; ++n) {
  cout << array[n] << '\n';
 }
 return 0;
}

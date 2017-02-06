#include <iostream>

using namespace std;

int main () {
  int x = 5, y = 15;
  int * p1, *p2;
		// value of	x	y	p1	p2
		//		5	15	uninit	uninit
  p1 = &x;
  cout << "x: " << x << " y: " << y << " p1: " << p1 << endl;
                //		5	15	x addre	uninit
  p2 = &y;
  cout << "x: " << x << " y: " << y << " p1: " << p1 << " p2: " << p2 << endl;
                //		5	15	x addre	y address
  *p1 = 6;
  cout << "x: " << x << " y: " << y << " p1: " << p1 << " p2: " << p2 << endl;
                //		6	15	x addre	y address
  *p1 = *p2;
  cout << "x: " << x << " y: " << y << " p1: " << p1 << " p2: " << p2 << endl;
                //		15	15	x addre	y address
  p2 = p1;
  cout << "x: " << x << " y: " << y << " p1: " << p1 << " p2: " << p2 << endl;
                //		15	15	x addre	x address
  *p1 = *p2+10;
  cout << "x: " << x << " y: " << y << " p1: " << p1 << " p2: " << p2 << endl;
                //		25	15	x addre	x address
  return 0;
}


#include <cstdlib> // for atoi
#include <iostream>
// prototype 
void moveDisks(int n, const char* FROM, const char* VIA, const char* TO);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " number_of_disks" << std::endl;
    return -1;
  }
  int n = atoi(argv[1]);
  moveDisks(n, "peg A", "peg C", "peg B");
  return 0;
}
// put your moveDisks() function here 
void moveDisks(int n, const char* FROM, const char* TO, const char* VIA){
  if (n > 0){
      moveDisks(n-1, FROM, VIA, TO);
      std::cout << "Move disk from " << FROM << " to " << TO << std::endl;
      moveDisks(n-1, VIA, TO, FROM);
  }
}

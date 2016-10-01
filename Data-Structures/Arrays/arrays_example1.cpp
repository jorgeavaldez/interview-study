#include <iostream>

int main(int argc, char** argv) {
  // create

  // static array
  char c1[10];
  // char[] c1 = char[10];

  // dynamic array
  char* c2 = new char[10];

  for (int i = 10; i > 0; i--){
    c1[i - 1] = i;
    *(c2 + i) = i;
  }

  // read one value
  std::cout << c1[2] << std::endl;

  std::cout << c2[2] << std::endl;
  std::cout << *(c2 + 2) << std::endl;

  // update

  for (int i = 0; i < 10; i++){

      c1[i] = i;
      *(c2 + i) = i;
  }

  // delete
  
  delete [] c2;
}

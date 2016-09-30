#include <iostream>

using namespace std;

void testFunc1(int* const &);

int main(int argc, char** argv) {
  int* nums1 = new int[10];
  int nums2[3];

  for (int i = 0; i < 10; i++) {
    nums1[i] = i;
  }

  int* const numsP1 = nums1 + 3;

  testFunc1(numsP1);

  int* numsP2 = numsP1 - 1;
}

void testFunc1(int* const &intArr) {
  int* x = intArr;
  
  for (int i = 3; i < 5; i++) {
    x[i] = intArr[i - 1];
  }
}

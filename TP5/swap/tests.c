
#include "tps_unit_test.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void swap(void* a, void*b, size_t size);

#include "swap.h"



void test_0(void)
{
  int tab1[6] = {1, 2, 3, 4, 5, 6};
  int tab2[6] = {11, 12, 13, 14, 15, 16};

  swap(tab1, tab2, 6 * sizeof(tab1[0]));
  tps_assert(tab1[0] == 11);
  tps_assert(tab2[0] == 1);
  tps_assert(tab1[5] == 16);
  tps_assert(tab2[5] == 6);
}

int main(int argc, char ** argv) {

  int test_idx = argc > 1 ? atoi(argv[1]) : -1;

  switch(test_idx){
    default:
    
    case 0:
    test_0();
  }

  return 0;
}

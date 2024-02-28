#include "tps_unit_test.h"
#include "ca_malloc.h"

TEST_INIT_GLOBAL

void test_ok()
{
  int * tab = ca_malloc(3*sizeof(int));
  tps_assert(tab != NULL);
  tab[0] = 1;
  tab[1] = 1;
  tab[2] = 1;
  ca_free(tab);
  fprintf(stderr, "\n");
}
void test_ok_2()
{
  int * tab = ca_malloc(3*sizeof(int));
  int * tab2 = ca_malloc(5*sizeof(int));
  tps_assert(tab != NULL);
  tps_assert(tab2 != NULL);
  tab[0] = 1;
  tab[1] = 1;
  tab[2] = 1;

  tab2[0] = 1;
  tab2[1] = 1;
  tab2[2] = 1;
  tab2[3] = 1;
  tab2[4] = 1;
  ca_free(tab);
  ca_free(tab2);
  fprintf(stderr, "\n");
}
void test_erreur()
{
  int * tab = ca_malloc(3*sizeof(int));
  tps_assert(tab != NULL);
  tab[0] = 1;
  tab[1] = 1;
  tab[2] = 1;
  tab[3] = 1;
  ca_free(tab);
  fprintf(stderr, "\n");
}

void test_erreur_2()
{
  int * tab = ca_malloc(101*sizeof(int));
  tps_assert(tab != NULL);
  for(int i = 0; i < 101; i++)
  {
    tab[i] = 0;
  }
    tab[101] = 2;
  ca_free(tab);
  fprintf(stderr, "\n");
}
void test_erreur_3()
{
  int * tab = ca_malloc(3*sizeof(int));
  int * tab2 = ca_malloc(5*sizeof(int));
  tps_assert(tab != NULL);
  tps_assert(tab2 != NULL);
  tab[0] = 1;
  tab[1] = 1;
  tab[2] = 1;
  tab[3] = 1;

  tab2[0] = 1;
  tab2[1] = 1;
  tab2[2] = 1;
  tab2[3] = 1;
  tab2[4] = 1;
  ca_free(tab);
  ca_free(tab2);
  fprintf(stderr, "\n");
}

int main(void)
{
  TEST(test_ok);
  TEST(test_ok_2);
  TEST(test_erreur);
  TEST(test_erreur_2);
  TEST(test_erreur_3);
}

#include <stdio.h>
#include <string.h>
#include "tps_unit_test.h"
#include "space-to-tab.h"
#include "space-to-tab.h" // <- permet de tester si votre fichier 
                          // est protégé contre la double inclusion


TEST_INIT_GLOBAL

void test_1(void)
{
  char str[] = "        du texte";
  space_to_tab(str);
  tps_assert_str_equal(str,"\tdu texte");
}

void test_2(void)
{
  char str[] = "du texte        ";
  space_to_tab(str);
  tps_assert_str_equal(str,"du texte\t");
}

void test_3(void)
{
  char str[] = "texte           ";
  space_to_tab(str);
  tps_assert_str_equal(str,"texte\t\t");
}

void test_4(void)
{
  char str[] = "texte        ";
  space_to_tab(str);
  tps_assert_str_equal(str,"texte\t     ");
}

void test_5(void)
{
  char str[] = "   texte        texte   texte   texte     ";
  space_to_tab(str);
  tps_assert_str_equal(str,"   texte\ttexte\ttexte\ttexte\t  ");
}

void test_6(void)
{
  char str[] = "texte    texte   texte   texte     ";
  space_to_tab(str);
  tps_assert_str_equal(str,"texte\t texte\t texte\t texte\t   ");
}

void test_7(void)
{
  char str[] = "\ttexte   texte";
  space_to_tab(str);
  tps_assert_str_equal(str,"\ttexte\ttexte");
}

void test_8(void)
{
  char str[] = "   texte        texte\ttexte   texte     ";
  space_to_tab(str);
  tps_assert_str_equal(str,"   texte\ttexte\ttexte\ttexte\t  ");
}




int main(void)
{
  TEST(test_1);
  TEST(test_2);
  TEST(test_3);
  TEST(test_4);
  TEST(test_5);
  TEST(test_6);
  TEST(test_7);
  TEST(test_8);
}

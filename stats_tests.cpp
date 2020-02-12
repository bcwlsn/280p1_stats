/* stats_tests.cpp
 *
 * Unit tests for the simple statistics library
 *
 * EECS 280 Project 1
 *
 * Protip #1: Write tests for the functions BEFORE you implement them!  For
 * example, write tests for median() first, and then write median().  It sounds
 * like a pain, but it helps make sure that you are never under the illusion
 * that your code works when it's actually full of bugs.
 *
 * Protip #2: Instead of putting all your tests in main(),  put each test case
 * in a function!
 */


#include "stats.h"
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

void test_sum_small_data_set();

// Add prototypes for you test functions here.
void test_count_simple(); 
void test_sum_simple();



int main()
{
  test_sum_small_data_set();
  // Call your test functions here
  test_count_simple();
  test_sum_simple();
  return 0;
}

void test_sum_small_data_set()
{
  cout << "test_sum_small_data_set" << endl;

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(sum(data) == 6);

  cout << "PASS!" << endl;
}

void test_count_simple() 
{
  cout << "COUNT Function--Simple Test: ";

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(count(data) == 3);

  cout << "PASS!" << endl;
}

void test_sum_simple() 
{
  cout << "Test -- Module, STATS.CPP / Function, SUM: ";
  
  vector<double> data; 
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(sum(data) == 6);

  cout << "PASSED!" << endl; 

  // I want a test case to test a set with only one element in the vector. Probably
  // need to write a test module strictly for one element data sets. 
}

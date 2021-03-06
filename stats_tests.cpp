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
#include <cmath>
using namespace std;

//Function Prototypes 
void test_summarize_simple_small_dataset();
void test_sum_small_data_set();
void test_count_simple(); 
void test_sum_simple();
void test_mean_simple_even_sized_dataset();
void test_mean_simple_odd_sized_dataset();
void test_median_simple_even_sized_dataset();
void test_median_simple_odd_sized_dataset();
void test_mode_simple_test();
void test_min_simple_test();
void test_max_simple_test();
void test_stdev_simple_test(); 

// The Program
int main()
{
  test_summarize_simple_small_dataset();
  test_sum_small_data_set();
  test_count_simple();
  test_sum_simple();
  test_mean_simple_even_sized_dataset();
  test_mean_simple_odd_sized_dataset(); 
  test_median_simple_even_sized_dataset();
  test_median_simple_odd_sized_dataset();
  test_mode_simple_test();
  test_min_simple_test();
  test_max_simple_test();
  test_stdev_simple_test(); 
  return 0;
}

// Function Implementations
void test_summarize_simple_small_dataset() 
{
  cout << "Test -- Module, STATS.CPP // Function: SUMMARIZE: ";

  vector<double>data; 
  vector<vector<double>> data_2D; 

  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  data_2D = summarize(data); 

  assert(summarize(data) == data_2D);

  cout << "PASSED!" << endl; 
}

void test_sum_small_data_set()
{
  cout << "Test -- Module, STATS.CPP // Function, SUM: ";

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(sum(data) == 6);

  cout << "PASS!" << endl;
}

void test_count_simple() 
{
  cout << "Test -- Module, STATS.CPP // Function, COUNT: ";

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(count(data) == 3);

  cout << "PASS!" << endl;
}

void test_sum_simple() 
{
  cout << "Test -- Module, STATS.CPP // Function, SUM: ";
  
  vector<double> data; 
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(sum(data) == 6);

  cout << "PASSED!" << endl; 

  // I want a test case to test a set with only one element in the vector. Probably
  // need to write a test module strictly for one element data sets. 
}

void test_mean_simple_even_sized_dataset() 
{
  cout << "Test -- Module, STATS.CPP // Function, MEAN [Even]: "; 

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);
  data.push_back(4);
 
  assert(mean(data) == 2.5);  
 
  cout << "PASSED!" << endl; 
}

void test_mean_simple_odd_sized_dataset() 
{
  cout << "Test -- Module, STATS.CPP // Function, MEAN [Odd]: ";
  
  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(mean(data) == 2); 	

  cout << "PASSED!" << endl;   
	
}

void test_median_simple_even_sized_dataset() 
{
  cout << "Test -- Module, STATS.CPP // Function, MEADIAN [Even]: ";

  vector<double> data; 
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);
  data.push_back(4);

  assert(median(data) == 2.5);

  cout << "PASSED!" << endl; 
}

void test_median_simple_odd_sized_dataset() 
{
  cout << "Test -- Module, STATS.CPP // Function, MEDIAN [Odd]: ";

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(median(data) == 2);

  cout << "PASSED!" << endl; 
}

void test_mode_simple_test() 
{
  cout << "Test -- Module, STATS.CPP // Function, MODE: ";
  
  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);
  data.push_back(2);

  assert(mode(data) == 2);

  cout << "PASSED!" << endl;
}

void test_min_simple_test() 
{
  cout << "Test -- Module, STATS.CPP // Function: MIN: ";

  vector<double> data; 
  data.push_back(1);
  data.push_back(0);
  data.push_back(2);
  data.push_back(3);

  assert(min(data) == 0.0);

  cout << "PASSED!" << endl; 
}

void test_max_simple_test()
{
  cout << "Test -- Module, STATS.CPP // Function: MAX: ";

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(max(data) == 3);

  cout << "PASSED!" << endl; 
}

void test_stdev_simple_test() 
{
  cout << "Test -- Module, STATS.CPP // Function: STANDARD DEVIATION: ";

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);
  data.push_back(10); 

  assert(stdev(data) == sqrt(7.5));

  cout << "PASSED!" << endl; 
	
}

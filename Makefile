all: test

test: main stats_tests stats_public_test
	./stats_public_test
	./stats_tests
	./main < main_test.in > main_test.out
	diff main_test.out main_test.out.correct

main: main.cpp stats.cpp p1_library.cpp
	g++ -Wall -Werror -pedantic -O1 --std=c++11 main.cpp stats.cpp p1_library.cpp -o main

stats_tests: stats_tests.cpp stats.cpp p1_library.cpp
	g++ -Wall -Werror -pedantic -O1 --std=c++11 stats_tests.cpp stats.cpp p1_library.cpp -o stats_tests

stats_public_test: stats_public_test.cpp stats.cpp p1_library.cpp
	g++ -Wall -Werror -pedantic -O1 --std=c++11 stats_public_test.cpp stats.cpp p1_library.cpp -o stats_public_test

clean:
	rm -vf main stats_tests stats_public_test *~ *.out

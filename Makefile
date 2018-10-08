#Compiles all necessary files for running the release
release: Normal_run

#Compiles all necessary files for running the tests
test: testing

Normal_run:
	g++ -isystem ${GTEST_DIR}/include -pthread string.c -o Normal_run
	
testing: libgtest.a string.h string.c string_test_case.c Gtest_main.c
	g++ -isystem ${GTEST_DIR}/include -pthread string_test_case.c string.c Gtest_main.c libgtest.a -o testing

libgtest.a:
	g++ -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o
	
clean: 
	rm -f *.o testing Normal_run
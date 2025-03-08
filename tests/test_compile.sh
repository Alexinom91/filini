cd ../src
gcc -c * -I../include
ar rcs libfilini.a *.o

cd ../tests
#gcc -o test_compile test_compile.o test.o -I../include

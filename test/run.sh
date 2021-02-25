rm *.o *.so *.lib test

gcc -fPIC -c trans.c
gcc -shared -o libmul.so trans.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -lmul -g

cp trans.h thirdparty/linux/include/
cp libmul.so thirdparty/linux/lib/x64/

cp trans.h thirdparty/Mac/include/
cp libmul.so thirdparty/Mac/lib/x64/
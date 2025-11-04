docker run --rm -v /Users/shai/dev/Docker-with-gcc/gcc-73-test:/work -w /work kamenker92/gcc:7.3.0-with-vim sh -lc 'gcc -std=c11 -O2 -Wall -Wextra -o c_app main.c -lm && ./c_app'

docker run --rm -v /Users/shai/dev/Docker-with-gcc/gcc-73-test:/work -w /work kamenker92/gcc:7.3.0-with-vim sh -lc 'g++ -std=gnu++14 -O2 -Wall -Wextra -o cc_app main.cpp && ./cc_app'

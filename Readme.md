# GoogleTest First

## ����

```
$ cd extsrc/googletest
$ mkdir build
$ cmake ..
$ make
$ cd ../..
$ g++ src/myint.cpp test/gtest_myint.cpp -I include/ -I extsrc/googletest/include/ -L extsrc/googletest/build -lgtest_main -lgtest -pthread
$ ./a.out
```

google test �� 1.7.0 ���g�p����悤�ɂ��Ă���B
�������Ȃ��ƁA�Ȃ��� make �Ń��C�u�������쐬����Ȃ��B

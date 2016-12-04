# GoogleTest First

## 準備

```
$ cd extsrc/googletest
$ mkdir build
$ cmake ..
$ make
$ cd ../..
$ g++ src/myint.cpp test/gtest_myint.cpp -I include/ -I extsrc/googletest/include/ -L extsrc/googletest/build -lgtest_main -lgtest -pthread
$ ./a.out
```

google test は 1.7.0 を使用するようにしている。
そうしないと、なぜか make でライブラリが作成されない。

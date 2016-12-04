.PHONY: default
default: help ;

.PHONY: help
help:
	@echo "help"

.PHONY: clean
clean:
	rm -f $(TARGET) $(TEST_TARGET) $(OBJS) $(TEST_OBJS)

.PHONY: build
build:
	g++ ../src/*.cpp ../test/*.cpp -I ../include/ -I ../extsrc/googletest/include/ -L ../extsrc/googletest/build -lgtest_main -lgtest -pthread


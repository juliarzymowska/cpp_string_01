execs = string_01
tests = tests_string

all: $(execs) $(tests)
.PHONY: all

clean:
	rm $(execs)

test: $(execs) $(tests)
	@$(foreach test, $(tests), echo "RUNNING: $(test)" && ./$(test))

check:
	cppcheck --inline-suppr --enable=all --inconclusive --library=posix --suppress=missingIncludeSystem .

% : %.cc
	g++ -g -std=c++17 $< -o $@

string_01 : string_01.cc string_01.h
tests_string : tests_string.cc string_01.h

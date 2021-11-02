# first Draft
## Collaborate on libft tests, everything here is open to suggestions
* This is hopefully a way to both practice git collaboration and creat a comprehensive and efficent series of tests for the libft project.
* Its a work in progress as we all still have to actually do the project
### GOALS

1. have a comprehensive series of tests which give meaninful error message
2. have a main.c a .h and a testfunction.c for each lib function 
3. these sholud compile to .o files which are subsequently linked and compiled with your own libft like so:
4. gcc *.o -L<libftpath> -lft
5. functions should be named in a consistant manner like "test_<functionname>.c"
#### TO DO

* add makefile
* work out meaningful error message if a function is missing from your personal libft when tested

## HOW TO ADD TESTS

1. Create file in the root named 'test_ft_*FUNCTIONNAME*.c
2. Write the tests using predefined templates TESTF(function_name) in the beginning; TESTN(test_number) to initialize each test and TESTOK(test_number) or TESTFAILED(test_number) to validate results.
3. Add `void test_ft_*FUNCTIONNAME(void)` prototype to libft_tests.h header file
4. Add function call to `test_ft_*FUNCTIONNAME*()` in libft_tests_main.c file
5. Compile tests with `make re`
6. Run with `./test_ft`


##### Contact me here or on Discord: wdonnell
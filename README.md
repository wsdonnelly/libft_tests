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


## HOW TO INSTALL AND RUN TESTS

1. `git clone` repo to your machine
2. Change `LIBDIR` variable in the `Makefile` according to your folder structure. That should be the folder containing your libft.a file. 
3. Change the same path in `libft_tests.h` file  libft.h header include. 
4. Make and proceed with tests.
## HOW TO ADD TESTS

1. Create file in the root named `test_ft_FUNCTIONNAME.c`
2. Write the tests using predefined templates TESTF(function_name) in the beginning; TESTN(test_number) to initialize each test and TESTOK(test_number) or TESTFAILED(test_number) to validate results.
3. Add `void test_ft_FUNCTIONNAME(void)` prototype to libft_tests.h header file
4. Add function call to `test_ft_FUNCTIONNAME()` in libft_tests_main.c file
5. Compile tests with `make re`
6. Run with `./test_ft`

#### TO DO

* add more tests
* figure out a way to share libft.a across different users via global file/variable

##### Contact me here or on Discord: wdonnell
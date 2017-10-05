# `cmake` Code Generator

If you desire to build and execute these programs from the command line, this can be made easier with `cmake` by issuing the following commands:

```bash
$ cmake -G "Unix Makefiles" ../..
-- The C compiler identification is GNU 6.3.0
-- The CXX compiler identification is GNU 6.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/jim/CLionProjects/lab05/generator/unix
$ make
Scanning dependencies of target lab05
[  6%] Building CXX object CMakeFiles/lab05.dir/src/main/cpp/Main.cpp.o
[ 13%] Building CXX object CMakeFiles/lab05.dir/src/main/cpp/TopDownFibCalculator.cpp.o
[ 20%] Building CXX object CMakeFiles/lab05.dir/src/main/cpp/BottomUpFibCalculator.cpp.o
[ 26%] Linking CXX executable ../../out/lab05
[ 26%] Built target lab05
Scanning dependencies of target lab05Demo
[ 33%] Building CXX object CMakeFiles/lab05Demo.dir/src/main/cpp/Demo.cpp.o
[ 40%] Building CXX object CMakeFiles/lab05Demo.dir/src/main/cpp/TopDownFibCalculator.cpp.o
[ 46%] Building CXX object CMakeFiles/lab05Demo.dir/src/main/cpp/BottomUpFibCalculator.cpp.o
[ 53%] Linking CXX executable ../../out/lab05Demo
[ 53%] Built target lab05Demo
Scanning dependencies of target lab05Test
[ 60%] Building CXX object CMakeFiles/lab05Test.dir/src/test/cpp/UnitTestRunner.cpp.o
[ 66%] Building CXX object CMakeFiles/lab05Test.dir/src/main/cpp/TopDownFibCalculator.cpp.o
[ 73%] Building CXX object CMakeFiles/lab05Test.dir/src/main/cpp/BottomUpFibCalculator.cpp.o
[ 80%] Building CXX object CMakeFiles/lab05Test.dir/src/test/cpp/TestUtils.cpp.o
[ 86%] Building CXX object CMakeFiles/lab05Test.dir/src/test/cpp/TopDownFibCalculatorTest.cpp.o
[ 93%] Building CXX object CMakeFiles/lab05Test.dir/src/test/cpp/BottomUpFibCalculatorTest.cpp.o
[100%] Linking CXX executable ../../out/lab05Test
[100%] Built target lab05Test
$ 
```

And now you have three different executable files that you can execute:

* `lab05` - This will execute the code found in `Main.cpp`
* `lab05Demo` - This will execute the map demo code found in `Demo.cpp`
* `lab05Test` - This will execute the CPPUNIT tests found in the `src/test/cpp` folder

If you want to generate different types of project files, just type 

```bash
$ cmake -g "some gibberish" ../..
CMake Error: Could not create named generator some gibberish

Generators
  Unix Makefiles               = Generates standard UNIX makefiles.
  Ninja                        = Generates build.ninja files.
  Watcom WMake                 = Generates Watcom WMake makefiles.
  CodeBlocks - Ninja           = Generates CodeBlocks project files.
  CodeBlocks - Unix Makefiles  = Generates CodeBlocks project files.
  CodeLite - Ninja             = Generates CodeLite project files.
  CodeLite - Unix Makefiles    = Generates CodeLite project files.
  Sublime Text 2 - Ninja       = Generates Sublime Text 2 project files.
  Sublime Text 2 - Unix Makefiles
                               = Generates Sublime Text 2 project files.
  Kate - Ninja                 = Generates Kate project files.
  Kate - Unix Makefiles        = Generates Kate project files.
  Eclipse CDT4 - Ninja         = Generates Eclipse CDT 4.0 project files.
  Eclipse CDT4 - Unix Makefiles= Generates Eclipse CDT 4.0 project files.
  KDevelop3                    = Generates KDevelop 3 project files.
  KDevelop3 - Unix Makefiles   = Generates KDevelop 3 project files.

```

which of course will generate an error, but it'll also tell what generators are available on your system.

If you're a Windows user trying to generate Visual Studio solutions, you're best bet is to not use `cmake` that comes with Cygwin, but rather to install it natively on your Windows box. See [https://cmake.org/download/](https://cmake.org/download/)

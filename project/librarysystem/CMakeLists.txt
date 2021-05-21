# cmake_minimum_required(VERSION <specify CMake version here>)
project(librarysystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(librarysystem main.cpp Book.h Date.h Reader.h Book.cpp Reader.cpp Date.cpp File.h File.cpp User.h User.cpp Manager.h Manager.cpp Menu.h Menu.cpp Ladmin.h Ladmin.cpp Chinese.h Chinese.cpp Bookrecord.h Bookrecord.cpp)
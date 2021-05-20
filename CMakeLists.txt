cmake_minimum_required(VERSION 3.19)
project(QT)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(project)
include_directories(project/librarysystem)

find_package(Qt5Widgets REQUIRED)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
add_executable(QT
        project/librarysystem/Book.cpp
        project/librarysystem/Book.h
        project/librarysystem/Bookrecord.cpp
        project/librarysystem/Bookrecord.h
        project/librarysystem/Chinese.cpp
        project/librarysystem/Chinese.h
        project/librarysystem/Date.cpp
        project/librarysystem/Date.h
        project/librarysystem/File.cpp
        project/librarysystem/File.h
        project/librarysystem/Ladmin.cpp
        project/librarysystem/Ladmin.h
        project/librarysystem/Manager.cpp
        project/librarysystem/Manager.h
        project/librarysystem/Menu.cpp
        project/librarysystem/Menu.h
        project/librarysystem/Reader.cpp
        project/librarysystem/Reader.h
        project/librarysystem/User.cpp
        project/librarysystem/User.h
        cpp_re.cpp
        cpp_re.h
        forget.cpp
        forget.h
        home.cpp
        home.h
        library.cpp
        library.h
        main.cpp
        manage.cpp
        manage.h
        newbook.cpp
        newbook.h
        newmanage.cpp
        newmanage.h
        re_account.cpp
        re_account.h
        re_admin.cpp
        re_admin.h
        re_book.cpp
        re_book.h
        register_qt.cpp
        register_qt.h
        rent.cpp
        rent.h
        forget.ui
        home.ui
        library.ui
        newbook.ui
        newmanage.ui
        re_admin.ui
        re_account.ui
        re_book.ui
        register_qt.ui
        rent.ui)

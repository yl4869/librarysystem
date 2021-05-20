QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cpp_re.cpp \
    forget.cpp \
    home.cpp \
    main.cpp \
    library.cpp \
    manage.cpp \
    newbook.cpp \
    newmanage.cpp \
    project/librarysystem/Book.cpp \
    project/librarysystem/Bookrecord.cpp \
    project/librarysystem/Chinese.cpp \
    project/librarysystem/Date.cpp \
    project/librarysystem/File.cpp \
    project/librarysystem/Ladmin.cpp \
    project/librarysystem/Manager.cpp \
    project/librarysystem/Menu.cpp \
    project/librarysystem/Reader.cpp \
    project/librarysystem/User.cpp \
    re_account.cpp \
    re_admin.cpp \
    re_book.cpp \
    register_qt.cpp \
    rent.cpp

HEADERS += \
    cpp_re.h \
    forget.h \
    home.h \
    library.h \
    manage.h \
    newbook.h \
    newmanage.h \
    project/librarysystem/Book.h \
    project/librarysystem/Bookrecord.h \
    project/librarysystem/Chinese.h \
    project/librarysystem/Date.h \
    project/librarysystem/File.h \
    project/librarysystem/Ladmin.h \
    project/librarysystem/Manager.h \
    project/librarysystem/Menu.h \
    project/librarysystem/Reader.h \
    project/librarysystem/User.h \
    re_account.h \
    re_admin.h \
    re_book.h \
    register_qt.h \
    rent.h

FORMS += \
    forget.ui \
    home.ui \
    library.ui \
    manage.ui \
    newbook.ui \
    newmanage.ui \
    re_account.ui \
    re_admin.ui \
    re_book.ui \
    register_qt.ui \
    rent.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res/res.qrc

DISTFILES += \
    project/librarysystem/.idea/.gitignore \
    project/librarysystem/.idea/deployment.xml \
    project/librarysystem/.idea/librarysystem.iml \
    project/librarysystem/.idea/misc.xml \
    project/librarysystem/.idea/modules.xml \
    project/librarysystem/.idea/workspace.xml \
    project/librarysystem/CMakeLists.txt \
    project/librarysystem/CMakeLists.txt

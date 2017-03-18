QT+=opengl \
		gui \
		core
INCLUDEPATH+=include \
					 +=ui
OBJECTS_DIR=obj/
MOC_DIR=moc/
TARGET=LSystem
QMAKE_CXX=clang++ -fdiagnostics-fixit-info

CONFIG += console
CONFIG -= app_bundle
UI_HEADERS_DIR=ui
SOURCES += \
    src/main.cpp \
    src/MainWindow.cpp \
    src/GLWindow.cpp\
    src/LSystem.cpp\
    src/LSystemRule.cpp\
    src/LSystemParser.cpp\
    src/LSystemState.cpp

HEADERS += \
    include/MainWindow.h \
    include/GLWindow.h\
    include/LSystem.h\
    include/LSystemRule.h\
    include/LSystemParser.h\
    include/LSystemState.h

FORMS += \
    ui/MainWindow.ui

OTHER_FILES+= shaders/Phong.fs \
              shaders/Phong.vs \
              LSystem.txt


QMAKE_CXXFLAGS+= -msse -msse2 -msse3
macx:QMAKE_CXXFLAGS+= -arch x86_64
macx:INCLUDEPATH+=/usr/local/boost/
linux-g++:QMAKE_CXXFLAGS +=  -march=native
linux-g++-64:QMAKE_CXXFLAGS +=  -march=native
# define the _DEBUG flag for the graphics lib
DEFINES +=NGL_DEBUG

LIBS += -L/usr/local/lib
# add the ngl lib
LIBS +=  -L/$(HOME)/NGL/lib -l NGL

# now if we are under unix and not on a Mac (i.e. linux) define GLEW
linux-clang {
    DEFINES += LINUX
    LIBS+= -lGLEW
}
linux-g++ {
    DEFINES += LINUX
    LIBS+= -lGLEW
}
DEPENDPATH+=include
# if we are on a mac define DARWIN
macx:DEFINES += DARWIN
# this is where to look for includes
INCLUDEPATH += $$(HOME)/NGL/include/

win32: {
        DEFINES+=USING_GLEW
        INCLUDEPATH+=-I c:/boost_1_44_0
        INCLUDEPATH+=-I c:/boost

        INCLUDEPATH+= -I C:/NGL/Support/glew
        LIBS+= -L C:/NGL/lib
        LIBS+= -lmingw32
        DEFINES += WIN32
        DEFINES += USING_GLEW
        DEFINES +=GLEW_STATIC
        DEFINES+=_WIN32
        SOURCES+=C:/NGL/Support/glew/glew.c
        INCLUDEPATH+=C:/NGL/Support/glew/
}

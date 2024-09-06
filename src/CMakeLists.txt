set(SOURCE_FILES main.cpp functions.cpp functions.h)

add_library(functions functions.cpp)

add_executable(foostrlen ${SOURCE_FILES})
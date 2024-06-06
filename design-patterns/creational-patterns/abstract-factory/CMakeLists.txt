### adding source i header files
file(GLOB SOURCE_FILES src/*.cpp) # adding all .cpp files
file(GLOB HEADER_FILES include/*.hpp) # adding all .hpp files
# set(SOURCE_FILES src/main.cpp) # adding one-by-one
# set(HEADER_FILES include/factory.hpp) # adding one-by-one

### creating executable
add_executable(abstract-factory ${SOURCE_FILES} ${HEADER_FILES})

### setting the include directory
target_include_directories(abstract-factory PRIVATE include)

# adding tests
# add_subdirectory(tests)

cmake_minimum_required(VERSION 3.10)

project(HelloWorld C)

set(VERSION 1.0)
add_definitions(-DVERSION=\"${VERSION}\")

set(PROJECT_COMPILE_FLAGS -Wall -Wextra -pedantic -Werror)

add_executable(helloWorldExec main.c)

target_link_libraries(helloWorldExec libSyscall)

add_subdirectory(syscall)

# this is required to be able to include the lib via the diamond operator in main.c
target_include_directories(helloWorldExec PRIVATE syscall)

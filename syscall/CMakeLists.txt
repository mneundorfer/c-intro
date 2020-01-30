cmake_minimum_required(VERSION 3.10)

add_library(libSyscall
    systemcall.h
    systemcall.c
)

target_compile_options(libSyscall PRIVATE ${PROJECT_COMPILE_FLAGS})

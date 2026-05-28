cmake_minimum_required(VERSION 4.0)
project(Projekt)

set(CMAKE_CXX_STANDARD 20)

add_executable(Projekt main.cpp
        MyExceptions.h
        Bitmapa.h
        Przeksztalcenie.h
        BitmapaExt.h
        BitmapaExt.cpp
        Inwersja.h
        Inwersja.cpp
        Erozja.h
        Erozja.cpp
        Dylatacja.h
        Dylatacja.cpp
        Zerowanie.h
        Zerowanie.cpp
        Usrednianie.h
        Usrednianie.cpp
        ZlozeniePrzeksztalcen.h
        ZlozeniePrzeksztalcen.cpp)

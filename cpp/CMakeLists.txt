cmake_minimum_required(VERSION 3.8)
project(cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        contest2017/AmateurMeteorologist.cpp
        simulacion2015/navidad.cpp
        simulacion2015/palabras.cpp
        A110.cpp
        A112.cpp
        A116.cpp
        A118.cpp
        A131.cpp
        A133.cpp
        A158.cpp
        A160.cpp
        A231.cpp
        A236.cpp
        A263.cpp
        A266.cpp
        A271.cpp
        A281.cpp
        A282.cpp
        A337.cpp
        A339.cpp
        A467.cpp
        A50.cpp
        A546.cpp
        A58.cpp
        A69.cpp
        A71.cpp
        A96.cpp
        AncientBerland.cpp
        aryaC.cpp
        B158.cpp
        B266.cpp
        BinarySearch.cpp
        FizzBuzz.cpp
        hackerrankarray.cpp
        opponentsB.cpp
        palabras.cpp
        sashaA.cpp
        TheaterSquare.cpp
        Watermelon.cpp A41.cpp A41.h A580.cpp ellatigo.cpp A479.cpp A486.cpp)

add_executable(cpp ${SOURCE_FILES})
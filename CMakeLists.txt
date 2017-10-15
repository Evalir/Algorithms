cmake_minimum_required(VERSION 3.8)
project(Algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        acmlocal2017/AmateurMeteorologist.cpp
        codeforces/208.cpp
        codeforces/A110.cpp
        codeforces/A112.cpp
        codeforces/A116.cpp
        codeforces/A118.cpp
        codeforces/A131.cpp
        codeforces/A133.cpp
        codeforces/A158.cpp
        codeforces/A160.cpp
        codeforces/A231.cpp
        codeforces/A236.cpp
        codeforces/A263.cpp
        codeforces/A266.cpp
        codeforces/A271.cpp
        codeforces/A281.cpp
        codeforces/A282.cpp
        codeforces/A337.cpp
        codeforces/A339.cpp
        codeforces/A41.cpp
        codeforces/A41.h
        codeforces/A467.cpp
        codeforces/A479.cpp
        codeforces/A486.cpp
        codeforces/A50.cpp
        codeforces/A546.cpp
        codeforces/A58.cpp
        codeforces/A580.cpp
        codeforces/A69.cpp
        codeforces/A71.cpp
        codeforces/A96.cpp
        codeforces/AncientBerland.cpp
        codeforces/aryaC.cpp
        codeforces/B158.cpp
        codeforces/B266.cpp
        codeforces/BinarySearch.cpp
        codeforces/ellatigo.cpp
        codeforces/FizzBuzz.cpp
        codeforces/hackerrankarray.cpp
        codeforces/latigo.cpp
        codeforces/opponentsB.cpp
        codeforces/palabras.cpp
        codeforces/sashaA.cpp
        codeforces/TheaterSquare.cpp
        codeforces/Watermelon.cpp
        codeforces/Watermelon.out
        prepnacional2017/Ashark.cpp
        prepnacional2017/Clunch.cpp
        simulacion2015/navidad.cpp
        simulacion2015/palabras.cpp nacional2017/ATriangle.cpp learnCpp/CDsOp.cpp Problems/UVA/Hoax11136.cpp Problems/UVA/Prune12049.cpp)

add_executable(Algorithms ${SOURCE_FILES})
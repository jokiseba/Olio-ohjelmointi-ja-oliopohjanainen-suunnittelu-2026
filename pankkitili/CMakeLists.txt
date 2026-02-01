cmake_minimum_required(VERSION 3.16)

project(pankkitili LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pankkitili
    pankkitili.cpp
    pankkitili.h
    luottotili.h
    luottotili.cpp
    main.cpp
    asiakas.h
    asiakas.cpp)

include(GNUInstallDirs)
install(TARGETS pankkitili
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

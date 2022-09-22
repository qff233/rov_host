cmake_minimum_required(VERSION 3.8.2)

project(rov_host LANGUAGES CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig)

pkg_search_module(GTK REQUIRED gtkmm-4.0)

include_directories(rov_host)

set(sources
        rov_host/ui/main_window.cpp
        rov_host/ui/menu.cpp
        rov_host/main.cpp)

add_executable(rov_host ${sources})

target_link_libraries(rov_host ${GTK_LIBRARIES})
target_include_directories(rov_host PUBLIC ${GTK_INCLUDE_DIRS})
target_compile_options(rov_host PUBLIC ${GTK_CFLAGS_OTHER})

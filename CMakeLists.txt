cmake_minimum_required(VERSION 3.16)
project(chatgpt-mirror-selfhosted CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(chatgptmirrorselfhosted
    src/main.cpp
    src/server.cpp
    src/auth.cpp
)

target_include_directories(chatgptmirrorselfhosted PRIVATE include)

if(WIN32)
    target_link_libraries(chatgptmirrorselfhosted PRIVATE userenv)
endif()

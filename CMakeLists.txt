cmake_minimum_required(VERSION 3.14)
project(clabox)
add_executable(${PROJECT_NAME}
    "main.cpp"
)
target_include_directories(${PROJECT_NAME} PUBLIC
    "${CMAKE_INSTALL_PREFIX}/CLAPACK/include"
)
target_link_directories(${PROJECT_NAME} PUBLIC
    "${CMAKE_INSTALL_PREFIX}/CLAPACK/lib"
)
link_libraries(${PROJET_NAME}
    "blasd.lib"
    "lapackd.lib"
    "libf2cd.lib"
)

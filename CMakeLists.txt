cmake_minimum_required(VERSION 3.14)
project(clabox)
add_executable(${PROJECT_NAME}
    "main.c"
)

# resolve clapack installation
get_filename_component(DEFAULT_INSTALL_PATH "${CMAKE_INSTALL_PREFIX}" DIRECTORY)
message(STATUS "default install path: ${DEFAULT_INSTALL_PATH}")
target_include_directories(${PROJECT_NAME} PUBLIC
    "${DEFAULT_INSTALL_PATH}/CLAPACK/include"
)
message(STATUS "added include path '${DEFAULT_INSTALL_PATH}/CLAPACK/include'")
target_link_directories(${PROJECT_NAME} PUBLIC
    "${DEFAULT_INSTALL_PATH}/CLAPACK/lib"
)
message(STATUS "added library path '${DEFAULT_INSTALL_PATH}/CLAPACK/lib'")
target_link_libraries(${PROJECT_NAME} PUBLIC
    "blasd.lib"
    "lapackd.lib"
    "libf2cd.lib"
)

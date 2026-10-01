cmake_minimum_required(VERSION 3.25)

project(BackupTool VERSION 0.1.0 LANGUAGES CXX)

add_library(backup_core
        src/version.cpp
)

target_include_directories(backup_core PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(backup_core PUBLIC
        cxx_std_20
)

add_executable(backup_tool
        app/main.cpp
)

target_link_libraries(backup_tool PRIVATE
        backup_core
)
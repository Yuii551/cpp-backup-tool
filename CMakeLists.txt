cmake_minimum_required(VERSION 3.25)

project(BackupTool VERSION 0.1.0 LANGUAGES CXX)

add_executable(backup_tool
    app/main.cpp
)

target_compile_features(backup_tool PRIVATE cxx_std_20)
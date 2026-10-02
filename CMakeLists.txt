cmake_minimum_required(VERSION 3.25)

project(BackupTool VERSION 0.1.0 LANGUAGES CXX)

include(cmake/CompilerWarnings.cmake)

add_library(backup_core
        src/version.cpp
)

target_include_directories(backup_core PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(backup_core PUBLIC
        cxx_std_20
)

enable_project_warnings(backup_core)

add_executable(backup_tool
        app/main.cpp
)

target_link_libraries(backup_tool PRIVATE
        backup_core
)

enable_project_warnings(backup_tool)

include(CTest)

if(BUILD_TESTING)
    add_executable(backup_tests
            tests/version_tests.cpp
    )

    target_link_libraries(backup_tests PRIVATE
            backup_core
    )

    enable_project_warnings(backup_tests)

    add_test(
            NAME backup_version_test
            COMMAND backup_tests
    )
endif()
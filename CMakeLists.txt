cmake_minimum_required(VERSION 3.12)
project(cleet VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src)

file(GLOB MAIN_SOURCE CONFIGURE_DEPENDS
     "src/*.hpp"
     "src/*.cpp"
)

add_executable(cleet ${MAIN_SOURCE})

# TEST 
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB TEST_SOURCE CONFIGURE_DEPENDS
    "test/*.hpp"
    "test/*cpp"
)

add_executable(cleet_test ${TEST_SOURCE})

target_link_libraries(
    cleet_test

    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(cleet_test)
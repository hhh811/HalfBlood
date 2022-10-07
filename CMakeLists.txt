cmake_minimum_required(VERSION 3.9)

project(answer)

option(HALFBLOOD_BUILD_TESTS "Build unit tests for halfblood" ON)

add_subdirectory(answer)
add_subdirectory(leetcode)

add_executable(answer main.cpp)

target_link_libraries(answer libanswer)

# test
if (HALFBLOOD_BUILD_TESTS)
  enable_testing()
  add_subdirectory("third_party/googletest")
  add_executable(halfblood_tests)
  target_sources(halfblood_tests
      PRIVATE
          "util/demo_test.cpp"
  )
  target_link_libraries(halfblood_tests gtest gtest_main)

  add_test(NAME "halfblood_tests" COMMAND "halfblood_tests")
endif(HALFBLOOD_BUILD_TESTS)
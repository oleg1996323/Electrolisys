if(EXISTS "/home/oster/Electrolisys/build/grammar/antlr4_runtime/runtime/antlr4_tests[1]_tests.cmake")
  include("/home/oster/Electrolisys/build/grammar/antlr4_runtime/runtime/antlr4_tests[1]_tests.cmake")
else()
  add_test(antlr4_tests_NOT_BUILT antlr4_tests_NOT_BUILT)
endif()


aux_source_directory(. TEST_SRC_LIST)
message(STATUS ${TEST_SRC_LIST})
foreach(TEST_SRC ${TEST_SRC_LIST})
    STRING(REGEX REPLACE "^\\./|\\.c[a-zA-Z0-9_]*$" "" TEST_EXE_NAME ${TEST_SRC})
    message(STATUS "添加测试程序:${TEST_EXE_NAME}")

    add_executable(${TEST_EXE_NAME} ${TEST_SRC})
endforeach(TEST_SRC ${TEST_SRC_LIST})
# 查找所有题目目录
file(GLOB_RECURSE SUBDIRECTORIES "*/test.cpp")

# 遍历每个测试文件并添加到 CMake
foreach(test_file ${SUBDIRECTORIES})
    get_filename_component(test_dir ${test_file} DIRECTORY)
    get_filename_component(test_dir_name ${test_dir} NAME)
    string(REPLACE "_" ";" test_dir_name_list "${test_dir_name}")
    list(GET test_dir_name_list 0 test_name)

    message(STATUS ${test_dir_name})

    # 添加解法和测试
    file(GLOB_RECURSE SOLUTIONS "${test_dir}/solution.h")
    add_executable(${test_name} ${test_file} ${SOLUTIONS})
    target_link_libraries(${test_name} gtest gtest_main)
endforeach()
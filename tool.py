import argparse
import os
import shutil
import sys

def get_target_paths(base_path, number, title):
    """生成目标目录和文件路径"""
    target_name = f"no{number}_{title.replace(' ', '-')}"
    target_dir = os.path.join(base_path, target_name)
    target_solution = os.path.join(target_dir, "solution.hpp")
    target_test = os.path.join(target_dir, "test.cpp")
    return target_dir, target_solution, target_test

def validate_input(number, template_path):
    """验证输入参数和模板路径"""
    if number <= 0:
        print("错误：序号必须大于 0")
        sys.exit(1)
    if not os.path.exists(template_path):
        print("错误：未找到模板文件")
        sys.exit(1)

def ensure_directory_exists(target_dir):
    """确保目标目录存在，如果不存在则创建"""
    if not os.path.exists(target_dir):
        os.makedirs(target_dir)
        print(f"已创建目录 - {target_dir}")
    else:
        print(f"警告：目录已存在 - {target_dir}")

def copy_file_if_not_exists(template_path, target_path, file_name):
    """如果目标文件不存在，则从模板复制"""
    if os.path.exists(target_path):
        print(f"警告：文件已存在 - {file_name}")
        return False
    shutil.copy(os.path.join(template_path, f"{file_name}.txt"), target_path)
    print(f"已创建文件 - {file_name}")
    return True

def main():
    # 初始化路径
    home_path = os.path.dirname(__file__)
    template_path = os.path.join(home_path, "tests", "template")
    tests_path = os.path.join(home_path, "tests")

    # 解析命令行参数
    parser = argparse.ArgumentParser(description="一个简单的工具")
    parser.add_argument("number", type=int, help="序号")
    parser.add_argument("title", type=str, help="标题")
    args = parser.parse_args()

    # 验证输入
    validate_input(args.number, template_path)

    # 生成目标路径
    target_dir, target_solution, target_test = get_target_paths(tests_path, args.number, args.title)

    # 确保目标目录存在
    ensure_directory_exists(target_dir)

    # 分别复制不存在的文件
    copy_file_if_not_exists(template_path, target_solution, "solution")
    copy_file_if_not_exists(template_path, target_test, "test")

if __name__ == "__main__":
    main()
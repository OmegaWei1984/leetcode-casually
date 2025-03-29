#!/bin/python

import argparse
import os
import shutil
import sys
from pathlib import Path
import subprocess

def get_target_paths(base_path, number, title):
    # 生成目标目录和文件路径
    target_name = f"no{number}_{title.replace(' ', '-')}"
    target_dir = os.path.join(base_path, target_name)
    target_solution = os.path.join(target_dir, "solution.hpp")
    target_test = os.path.join(target_dir, "test.cpp")
    return target_dir, target_solution, target_test

def validate_input(number, template_path):
    # 验证输入参数和模板路径
    if number <= 0:
        print("错误：序号必须大于 0")
        sys.exit(1)
    if not os.path.exists(template_path):
        print("错误：未找到模板文件")
        sys.exit(1)

def ensure_directory_exists(target_dir):
    # 确保目标目录存在，如果不存在则创建
    if not os.path.exists(target_dir):
        os.makedirs(target_dir)
        print(f"已创建目录 - {target_dir}")
    else:
        print(f"警告：目录已存在 - {target_dir}")

def copy_file_if_not_exists(template_path, target_path, file_name):
    # 如果目标文件不存在，则从模板复制
    if os.path.exists(target_path):
        print(f"警告：文件已存在 - {file_name}")
        return False
    shutil.copy(os.path.join(template_path, f"{file_name}.txt"), target_path)
    print(f"已创建文件 - {file_name}")
    return True

def set_parser_new(parsers):
    # 子命令 new
    parser = parsers.add_parser("new", help="新建对应问题的 solution")
    parser.add_argument("number", type=int, help="序号")
    parser.add_argument("title", type=str, help="标题")
    parser.set_defaults(func=func_new)

def set_parser_test(parsers):
    # 子命令 new
    parser = parsers.add_parser("test", help="运行测试")
    parser.add_argument("number", type=int, help="序号")
    parser.set_defaults(func=func_test)

# 新建 Solution
def func_new(args):
    # 初始化路径
    home_path = os.path.dirname(__file__)
    template_path = os.path.join(home_path, "tests", "template")
    tests_path = os.path.join(home_path, "tests")

    # 验证输入
    validate_input(args.number, template_path)

    # 生成目标路径
    target_dir, target_solution, target_test = get_target_paths(tests_path, args.number, args.title)

    # 确保目标目录存在
    ensure_directory_exists(target_dir)

    # 分别复制不存在的文件
    copy_file_if_not_exists(template_path, target_solution, "solution")
    copy_file_if_not_exists(template_path, target_test, "test")

def func_test(args):
    print("just a test")
    # 初始化路径
    home_path = os.path.dirname(__file__)
    exe_file = f"no{args.number}"
    test_path = Path(home_path) / "build" / "tests" / exe_file
    print(test_path)
    if not test_path.is_file():
        print(f"编号为 {args.number} 的测试文件不存在")
        return
    if not os.access(test_path, os.X_OK):
        print(f"无法访问测试文件 {test_path}")
        return
    subprocess.run([str(test_path)])

def main():
    # 解析命令行参数
    parser = argparse.ArgumentParser(description="一个简单的辅助工具 🔧")
    subparsers = parser.add_subparsers(dest="cmd", help="可用的子命令")

    set_parser_new(subparsers)
    set_parser_test(subparsers)

    # 解析参数
    args = parser.parse_args()

    # 根据子命令调用对应的函数
    if hasattr(args, "func"):
        args.func(args)
    else:
        parser.print_help()

if __name__ == "__main__":
    main()

import argparse
import os
import shutil

home_path = os.path.dirname(__file__)
template_path = home_path + "/tests/template"
tests_path = home_path + "/tests"

def main():
    parser = argparse.ArgumentParser(description="a simple tool.")
    parser.add_argument("number", type=int, help="serial number")
    parser.add_argument("title", type=str, help="title")
    args = parser.parse_args()
    if args.number <= 0:
        print("invalid serial number")
        return
    # print(home_path)
    # print(template_path)
    if not os.path.exists(template_path):
        print("can not find template files")
        return
    title = args.title.replace(" ", "-")
    target_name = f"no{args.number}_{title}"
    target_dir_path = f"{tests_path}/{target_name}"
    target_solution_path = f"{target_dir_path}/solution.cpp"
    target_test_path = f"{target_dir_path}/test.cpp"
    # print(target_dir_path)
    exists_flag = 0
    if os.path.exists(target_dir_path):
        print(f"{target_name} already exists")
    else:
        exists_flag = exists_flag + (1<<0)
    if os.path.exists(target_solution_path):
        print(f"solution file already exists")
    else:
        exists_flag = exists_flag + (1<<1)
    if os.path.exists(target_test_path):
        print(f"test file already exists")
    else:
        exists_flag = exists_flag + (1<<2)
    if exists_flag == 0:
        return
    if exists_flag & (1<<0):
        print(target_dir_path)
        os.makedirs(target_dir_path)
    if exists_flag & (1<<1):
        shutil.copy(f"{template_path}/solution.txt", target_solution_path)
    if exists_flag & (1<<2):
        shutil.copy(f"{template_path}/test.txt", target_test_path)

if __name__ == "__main__":
    main()
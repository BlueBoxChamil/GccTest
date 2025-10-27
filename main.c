/*
 * @Author: error: git config user.name & please set dead value or install git
 * @Date: 2025-03-25 21:02:31
 * @LastEditTime: 2025-06-05 15:54:09
 * @FilePath: \main.c
 * @Description:
 * Copyright (c) 2025 by error: git config user.name & please set dead value or install git, All Rights Reserved.
 */
#include <stdio.h>
#include "lib1_func.h"
#include "lib2_func.h"

// 要实现的功能，在c的工程中调用一个c++生成的库
int main(int, char **)
{
    printf("Hello, from myPro!\n");
    // test_cpp_print();

    // printf("test2\n");
    lib1_print();
    lib2_print();
}

#!/bin/bash
# Qtaria Build Script



# 清理旧的构建文件
make clean 2>/dev/null || true

# 生成Makefile
qmake qtaria.pro

# 编译项目
make

# 检查编译是否成功
if [ $? -eq 0 ]; then
    echo "
编译成功！"
    echo "运行程序: ./qtaria"
else
    echo "
编译失败，请检查错误信息。"
    exit 1
fi

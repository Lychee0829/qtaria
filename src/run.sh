#!/bin/bash
# Qtaria Run Script

# 进入项目目录
cd /home/lychee0829/qtaria/src || { echo "无法进入项目目录"; exit 1; }

# 检查可执行文件是否存在
if [ ! -f "qtaria" ]; then
    echo "错误：qtaria 可执行文件不存在。请先运行 ./build.sh 进行编译。"
    exit 1
fi

# 运行程序
./qtaria
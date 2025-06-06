#!/bin/bash
# Qtaria Install Dependencies Script

# 安装必要的Qt开发库
sudo pacman -S --noconfirm qt5-base qt5-widgets qt5-network qt5-websockets || { echo "无法安装Qt依赖"; exit 1; }

# 安装OpenSSL兼容版本
sudo pacman -S --noconfirm openssl-1.1 || { echo "无法安装openssl-1.1"; exit 1; }

# 安装aria2
sudo pacman -S --noconfirm aria2 || { echo "无法安装aria2"; exit 1; }

# 创建libssl和libcrypto的兼容符号链接
sudo ln -sf /usr/lib/libssl.so.3 /usr/lib/libssl.so.1.0.0 || { echo "无法创建libssl符号链接"; exit 1; }
sudo ln -sf /usr/lib/libcrypto.so.3 /usr/lib/libcrypto.so.1.0.0 || { echo "无法创建libcrypto符号链接"; exit 1; }

echo "
依赖安装完成！"
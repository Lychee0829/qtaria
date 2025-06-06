#!/bin/bash
# Qtaria Uninstall Dependencies Script

# 删除libssl和libcrypto的兼容符号链接
sudo rm -f /usr/lib/libssl.so.1.0.0 /usr/lib/libcrypto.so.1.0.0 || { echo "无法删除符号链接"; exit 1; }

# 卸载安装的依赖
sudo pacman -R --noconfirm aria2 openssl-1.1 qt5-websockets qt5-network qt5-widgets qt5-base || { echo "无法卸载依赖包"; exit 1; }

echo "
依赖已成功卸载！"
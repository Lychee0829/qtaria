# Qtaria 项目构建与运行指南

本指南是在 Arch Linux 系统上构建和运行 Qtaria 项目的提示。
**注意：仅适用于Arch Linux相关发行版**
## 致谢

[Qtaria原项目](https://github.com/manox14/qtaria)

原项目贡献者如下：
1. [arunpyasi](https://github.com/openarun)
2. [born-jre](https://github.com/born-jre)
3. [Kool Arpan](https://github.com/kooolarpan)
4. [Pradip Dhakal](https://github.com/pradip001)
5. [nirooj56](https://github.com/nirooj56)
6. [prashant10651me](https://github.com/prashant10651me)



## 📦 依赖安装

在首次构建项目之前，请确保已安装所有必要的依赖项。您可以使用以下命令安装所需的依赖：

```bash
# 安装依赖
./install_deps.sh
```

该脚本会自动完成以下操作：
- 安装 Qt5 基础库（包括 Widgets、Network、WebSockets 等）
- 安装 OpenSSL 1.1 兼容版本
- 安装 aria2 下载管理器库
- 创建 `libssl.so.1.0.0` 和 `libcrypto.so.1.0.0` 的符号链接以兼容旧版依赖

> ⚠️ 注意：此脚本需要管理员权限来安装系统级依赖。

## 🛠️ 构建项目

要构建项目，请运行以下命令：

```bash
# 构建项目
./build.sh
```

该脚本会执行以下操作：
- 清理旧的构建文件（如果存在）
- 使用 `qmake` 生成 Makefile
- 编译整个项目

如果构建成功，终端将提示您可以通过 `./qtaria` 运行程序。

## ▶️ 运行程序

构建完成后，您可以使用以下命令运行程序：

```bash
# 运行程序
./run.sh
```

该脚本会检查可执行文件是否存在，并启动应用程序。

## 🔧 卸载依赖

如果您希望清理系统并卸载项目所依赖的软件包，可以运行：

```bash
# 卸载依赖
./uninstall_deps.sh
```

该脚本会：
- 删除之前创建的 `libssl.so.1.0.0` 和 `libcrypto.so.1.0.0` 符号链接
- 卸载 Qt5、OpenSSL 1.1 和 aria2 软件包

> ⚠️ 注意：这将删除系统中相关的开发库，请确保这些库没有被其他项目使用。

## 📝 注意事项

- 所有脚本都应在项目根目录 `/home/lychee0829/qtaria/src` 中运行。
- 如果更改项目路径，请手动修改脚本中的路径以匹配您的实际环境。
- 如果遇到任何问题，可以尝试查看编译输出或运行 `make clean` 后重新构建。


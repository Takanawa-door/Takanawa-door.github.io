---
title: GameLib::selector 文档
---

**标签：**文档 | GameLib

---

# 声明与功能

在 `gamelib/selector.hxx` 中：

```cpp
const size_t GameLib::selector(const std::vector<std::string>& options,
        HANDLE hOut, CONSOLE_SCREEN_BUFFER_INFOEX& csbi,
        CONSOLE_CURSOR_INFO& cci, const std::string& split = "\n") noexcept;
```

该函数提供了向用户交互的选项框，类似于列表，用户通过 h、j、k、l 键来选择选项，通过回车来选定。默认选中项永远是 `options[0]`。

# 参数

**`options`** 指定用户可以选择的项目。

**`hOut`** 指向当前活动缓冲区的句柄，通常是 `GetStdHandle(STD_OUTPUT_HANDLE)` 的值。

**`csbi`** 是一个 `CONSOLE_SCREEN_BUFFER_INFOEX` 对象，在调用本函数前应当初始化：`csbi.cbSize = sizeof csbi`。

**`cci`** 是一个 `CONSOLE_CURSOR_INFO` 对象，用于记录光标信息。

**`split`** 指定每一个选项之间分割的字符，推荐的选项有 `\n` 和 `\t`。

# 示例

```cpp
// 本文件将会使用 GameLib::selector 来获取用户输入选项。 
#include <iostream>
#include <gamelib/selector.hxx>

// 设置 Windows 相关结构
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFOEX csbi;
CONSOLE_CURSOR_INFO cci;

int main()
{
    csbi.cbSize = sizeof csbi; // 必要，初始化 csbi 用
    std::cout << "选择你的英雄\n";
    auto getOpt = GameLib::selector({ "Minecraft", "泰拉瑞亚",
        "Phigros" }, hOut, csbi, cci);

    return 0;
}
```

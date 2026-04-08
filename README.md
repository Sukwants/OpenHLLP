# OpenHLLP

本仓库提供同济大学《高级语言程序设计》课程编程作业的自测数据与参考程序。

## 项目结构

```plain
OpenHLLP/
├── include/
│   ├── testlib.h
│   └── LICENSE
├── problems/
│   ├── 3/
│   │   ├── 3-b1/
│   │   │   ├── 1.in
│   │   │   ├── 1.ans
│   │   │   │   ...
│   │   │   ├── checker.cpp (optional)
│   │   │   ├── generator.cpp (optional)
│   │   │   ├── README.md (optional)
│   │   │   ├── std.cpp
│   │   │   └── validator.cpp
│   │   └── 3-b2/
│   │       ...
│   └── 4/
│       ...
├── LICENSE
└── README.md
```

  - `problems/` 文件夹中为项目内容。
  - `problems/#/` 文件夹按题目编号中首个数分组
  - `problems/#/#-b#/` 文件夹为单个题目。
  - `#.in`/`#.ans` 文件为构造好的数据，`#.in` 为输入，`#.ans` 为标准答案，一般包含边角情况。

大多数情况下，只需取 `#.in`/`#.ans` 自用。

更多地，

  - `README.md` 文件中可以留下一些说明。
  - `std.cpp` 文件为参考答案程序，不要求满足作业限制。
  - `checker.cpp` 文件为答案检查器，使用 `testlib.h`，在需要特殊答案检查器时可用。
  - `generator.cpp` 文件为数据生成器，使用 `testlib.h`，一般生成随机数据，而不提供边角情况。
  - `validator.cpp` 文件为数据校验器，使用 `testlib.h`。

## 如何贡献

当前仅接受以 `@tongji.edu.cn` 结尾的邮箱地址提交的 commit，但不要求署真名。

### 内容更新

Pull Request 标题需以 `Update: ` 开头，挂 `content` 标签。

`#.in` 需通过 `validator.cpp` 校验，`#.ans` 需与 `std.cpp` 的输出一致。

请尽量保持代码的可读性，必要时添加注释，尤其在使用 AI 辅助编程时需注意。

std 代码无需满足作业限制，相反地，我们鼓励正常地书写 std 代码，以提供更好的参考。

### 仓库更新

Pull Request 需挂 `chore` 标签。

### 成为合作者

如果你对项目有持续的贡献，欢迎申请成为合作者，以便更高效地维护项目。
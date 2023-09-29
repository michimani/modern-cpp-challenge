Modern C++ Challenge
===

This repository contains my solutions to the problems in the book [Modern C++ Challenge](https://www.packtpub.com/application-development/modern-c-challenge) by Marius Bancila.

In Japanese: [O'Reilly Japan - Modern C++チャレンジ](https://www.oreilly.co.jp/books/9784873118697/)

## Original Repository

[PacktPublishing/The-Modern-Cpp-Challenge: The Modern C++ Challenge, published by Packt](https://github.com/PacktPublishing/The-Modern-Cpp-Challenge)

## My environment

```bash
$ clang --version

Apple clang version 15.0.0 (clang-1500.0.40.1)
Target: arm64-apple-darwin23.0.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```

## VS Code setting

`.vscode/tasks.json`

```json
{
  "tasks": [
    {
      "type": "cppbuild",
      "label": "C/C++: clang++ build active file",
      "command": "/usr/bin/clang++",
      "args": [
        "-fcolor-diagnostics",
        "-fansi-escape-codes",
        "-g",
        "${file}",
        "-o",
        "${fileDirname}/build/${fileBasenameNoExtension}"
      ],
      "options": {
        "cwd": "${fileDirname}"
      },
      "problemMatcher": [
        "$gcc"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "detail": ""
    }
  ],
  "version": "2.0.0"
}
```


# License

[MIT](https://github.com/michimani/modern-cpp-challenge/blob/main/LICENSE)

# Author

[michimani210](https://twitter.com/michimani210)


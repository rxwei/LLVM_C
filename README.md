# LLVM
LLVM/Clang's C bindings for Swift

## Package
Add a dependency:
```swift
.Package(url: "https://github.com/rxwei/LLVM_C", majorVersion: 2, minor: 1)
```

## Module
```swift
import LLVM_C
import Clang_C
```

You'll need to specify the path to your LLVM library at `swift build`. For example:

```bash
swift build -Xcc -I/usr/local/include -Xlinker -L/usr/local/lib
```

Or use `llvm-config`:

```bash
swift build -Xcc "`llvm-config --cflags`" -Xlinker "-I`llvm-config --libdir`"
```

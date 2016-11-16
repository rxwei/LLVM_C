# LLVM
LLVM C APIs for Swift

## Package
Add a dependency:
```swift
.Package(url: "https://github.com/rxwei/LLVM_C", majorVersion: 2, minor: 0)
```

## Module
```swift
import LLVM_C
```

You'll need to specify the path to your LLVM library at `swift build`. For example:
```
swift build -Xcc -I/usr/local/include -Xlinker -L/usr/local/lib
```

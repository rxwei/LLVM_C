# LLVM
Swift module map for LLVM (C APIs)

# Use it in your Swift package
Add a dependency:
```swift
.Package(url: "https://github.com/rxwei/LLVM", majorVersion: 0, minor: 1)
```

You'll need to specify the path to your LLVM headers and library at `swift build`. For example:
```
swift build -Xcc -I/usr/local/include -Xlinker -L/usr/local/lib
```

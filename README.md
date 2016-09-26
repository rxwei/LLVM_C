# LLVM
LLVM C APIs for Swift

## Package
Add a dependency:
```swift
.Package(url: "https://github.com/rxwei/LLVM_C", majorVersion: 1, minor: 0)
```

## Requirements
**LLVM** 3.8 or above

## Submodules
```swift
import LLVM_C.Analysis
import LLVM_C.BitReader
import LLVM_C.BitWriter
import LLVM_C.Core
import LLVM_C.Disassembler
import LLVM_C.ErrorHandling
import LLVM_C.ExecutionEngine
import LLVM_C.IRReader
import LLVM_C.Initialization
import LLVM_C.LinkTimeOptimizer
import LLVM_C.Linker
import LLVM_C.Object
import LLVM_C.OrcBindings
import LLVM_C.Support
import LLVM_C.Target
import LLVM_C.TargetMachine
import LLVM_C.Types
import LLVM_C.Transforms.IPO
import LLVM_C.Transforms.PassManagerBuilder
import LLVM_C.Transforms.Scalar
import LLVM_C.Transforms.Vectorize
```

You'll need to specify the path to your LLVM library at `swift build`. For example:
```
swift build -Xcc -I/usr/local/include -Xlinker -L/usr/local/lib
```


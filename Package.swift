import PackageDescription

let package = Package(
    name: "LLVM_C",
    providers: [
        .Brew("llvm"), .Apt("llvm")
    ]
)

import PackageDescription

let package = Package(
    name: "LLVM_C",
    pkgConfig: "llvm",
    providers: [
        .Brew("llvm"), .Apt("llvm")
    ]
)

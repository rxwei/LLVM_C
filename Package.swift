import PackageDescription

let package = Package(
    name: "LLVM",
    pkgConfig: "llvm",
    providers: [
        .Brew("llvm"), .Apt("llvm")
    ]
)

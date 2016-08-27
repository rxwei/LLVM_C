import PackageDescription

let package = Package(
    name: "LLVM",
    providers: [
        .Brew("llvm")
    ]
)

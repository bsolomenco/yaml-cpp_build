# yaml-cpp_build
yaml-cpp (https://github.com/jbeder/yaml-cpp)

1. yaml-cpp_bazel - build using bazel
    cd yaml-cpp_bazel
    git clone https://github.com/jbeder/yaml-cpp .
    bazel build //:yaml-cpp

2. yaml-cpp_bazel_gitrepo - build from git repo using bazel
    cd yaml-cpp_bazel_gitrepo
    bazel build //main:main

3. yaml-cpp_bazel_httparch - build from http archive using bazel
    cd yaml-cpp_bazel_httparch
    bazel build //main:main
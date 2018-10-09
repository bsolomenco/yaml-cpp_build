# yaml-cpp_build
build **yaml-cpp** libraries and link executable with them using bazel build system

1. **yaml-cpp_bazel** - build static (libyaml-cpp.a) and shared(libyaml-cpp.so) libraries using bazel
  * cd yaml-cpp_bazel
  * git clone https://github.com/jbeder/yaml-cpp yaml-cpp_repo
  * bazel build //:yaml-cpp

2. **yaml-cpp_bazel_gitrepo** - build executable using yaml-cpp from from git repo
  * cd yaml-cpp_bazel_gitrepo
  * bazel build //main:main

3. **yaml-cpp_bazel_httparch** - build executable using yaml-cpp from http archive
  * cd yaml-cpp_bazel_httparch
  * bazel build //main:main

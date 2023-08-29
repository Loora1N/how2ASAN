# how2ASAN

[ASAN](https://github.com/google/sanitizers/wiki/AddressSanitizer)（Address Sanitizer）是针对 C/C++ 的快速内存错误检测工具，在运行时检测 C/C++ 代码中的多种内存错误。ASAN 早先是 LLVM 中的特性，后被集成到 GCC 4.8 中，在 4.9 版本中加入了对 ARM 平台的支持。
支持一下几种类型的内存错误检测：

- [use-after-free](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerExampleUseAfterFree)
- [use-after-return](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerExampleUseAfterReturn)
- [use-after-scope](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerExampleUseAfterScope)
- [heap-buffer-overflow/heap-buffer-underflow](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerExampleHeapOutOfBounds)
- [stack-buffer-overflow/stack-buffer-underflow](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerExampleStackOutOfBounds)
- [global-buffer-overflow/global-buffer-underflow](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerExampleGlobalOutOfBounds)
- [Memory leaks](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer)
- [Initialization order bugs](https://link.zhihu.com/?target=https%3A//github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco)

本仓库旨在辅助理解ASAN底层原理，仅供研究参考

## ASAN usage

为了使用 AddressSanitizer，您需要使用 clang 和 -fsanitize=address 开关来编译和链接您的程序。

 - 解决找不到链接库的问题：
https://github.com/GaoHongchen/DIPDemo/issues/1
 - 如何编译
g++ test.cpp -o test `pkg-config --cflags --libs opencv`

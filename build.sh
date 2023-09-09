#!/bin/bash

source ~/.bashrc && source ~/.profile
export ARCH=arm64
export KBUILD_BUILD_HOST="debian"
export KBUILD_BUILD_USER="aarch-64"

make O=out ARCH=arm64 rosemary_defconfig
make O=out ARCH=arm64 menuconfig

PATH="${PWD}/los-clang/bin:${PATH}:${PWD}/binutils-32/bin:${PATH}:${PWD}/binutils-64/bin:${PATH}" \
make -j$(nproc --all) O=out \
                      ARCH=arm64 \
                      CC="clang" \
                      CLANG_TRIPLE=aarch64-linux-gnu- \
                      CROSS_COMPILE="${PWD}/binutils-64/bin/aarch64-linux-gnu-" \
                      CROSS_COMPILE_ARM32="${PWD}/binutils-32/bin/arm-linux-gnueabihf-" \
                      LD=ld.lld \
                      AS=llvm-as \
		              AR=llvm-ar \
			          NM=llvm-nm \
			          OBJCOPY=llvm-objcopy

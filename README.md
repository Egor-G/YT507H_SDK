Simplified SDK for Myir MYC-YT507H (Allwinner YT507-H)
for building bootable image with configurable kernel and clear rootfs partition

1)
wget https://releases.linaro.org/components/toolchain/binaries/5.3-2016.05/aarch64-linux-gnu/gcc-linaro-5.3.1-2016.05-x86_64_aarch64-linux-gnu.tar.xz build/toolchain

2)
./build.sh config
Choice [linux]
Choice [longan]
Choice [linux-4.9]
Choice [myir]
Choice [core]
Choice [default]
Choice [buildroot-201902]

3)
./build.sh && ./build.sh pack

Image file : out/myir_linux_core_uart0.img

4)
Use tools/Phoenixcard on Windows to write image to sd card

5)
Unpack your rootfs to ext4 partition and create link /init to your init process (/sbin/init for openwrt)


Kernel config:

cd kernel
make ARCH=arm64 sun50iw9p1smp_longan_defconfig
make ARCH=arm64 menuconfig
make ARCH=arm64 savedefconfig
cp -f defconfig arch/arm64/configs/sun50iw9p1smp_longan_defconfig


source .venv/bin/activate
source pigweed/activate.sh

export ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb
export GNUARMEMB_TOOLCHAIN_PATH=$(pwd)/pigweed/environment/cipd/packages/arm

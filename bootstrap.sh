python3 -m venv .venv
source .venv/bin/activate
pip install west
west init -l manifest
west update
pip install -r zephyr/scripts/requirements.txt
source pigweed/bootstrap.sh

export ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb
export GNUARMEMB_TOOLCHAIN_PATH=$(pwd)/pigweed/environment/cipd/packages/arm

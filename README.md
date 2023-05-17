# Zephyr RTOS + Pigweed template

## Setting up the development environment

On first setup:
```bash
$ python3 -m venv .venv
$ source .venv/bin/activate
$ pip install west
$ west init -l manifest
$ west update
$ pip install -r zephyr/scripts/requirements.txt
$ source pigweed/bootstrap.sh
$ source activate.sh
```

On following work days:
```bash
$ source .venv/bin/activate
$ source pigweed/activate.sh
$ source activate.sh
```

## Building the firmware

```bash
west build -p -b nrf52dk_nrf52832 sample_app
```

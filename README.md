# Zephyr RTOS + Pigweed template

## Setting up the development environment

On first setup:
```bash
$ source bootstrap.sh
```

On following work days:
```bash
$ source activate.sh
```

## Building the firmware

```bash
west build -p -b nrf52dk_nrf52832 sample_app
```

SPLIT_KEYBOARD = yes        # Use shared split_common code
LTO_ENABLE = yes            # Use link time optimization for smaller firmware

# Required for RP2040
WS2812_DRIVER = vendor

# Enable serial communication for split
SERIAL_DRIVER = vendor

# If you add a haptic board,
# enable it and set its driver here or in your keymap folder
# The Pimoroni board's driver is DRV2605L 
# HAPTIC_ENABLE = yes        # Enable haptic driver
# HAPTIC_DRIVER = drv2605l

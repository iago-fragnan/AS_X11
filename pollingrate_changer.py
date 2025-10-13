import usb.core
import usb.util
import sys

// Temporary script to change polling rate of the mouse

VID = 0x1D57
PID = 0xFA60

POLLING_RATES = {
    125:  (0x08, 0xF7),
    250:  (0x04, 0xFB),
    500:  (0x02, 0xFD),
    1000: (0x01, 0xFE),
}

def set_polling_rate(rate_hz):
    if rate_hz not in POLLING_RATES:
        raise ValueError("Invalid Polling Rate | 125, 250, 500, 1000 hz")

    b3, b4 = POLLING_RATES[rate_hz]
    data = [0x06, 0x09, 0x01, b3, b4, 0x00, 0x00, 0x00, 0x00]

    print(f"Sending {rate_hz}hz...")

    dev = usb.core.find(idVendor=VID, idProduct=PID)
    if dev is None:
        sys.exit("Device not found!")

    interface = 2

    try:
        if dev.is_kernel_driver_active(interface):
            dev.detach_kernel_driver(interface)
    except Exception:
        pass

    dev.ctrl_transfer(
        0x21,
        0x09,
        0x0306,
        interface,
        data,
        timeout=200
    )

    print(f"Polling rate changed to {rate_hz}hz.")

set_polling_rate(500)

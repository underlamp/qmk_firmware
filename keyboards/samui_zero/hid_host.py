import hid


def pad_message(payload: bytes) -> bytes:
    if len(payload) > EP_SIZE:
        raise ('payload is too large: maximum payload is', str(EP_SIZE))
    return payload + b'\x00' * (EP_SIZE - len(payload))


class Keyboard:
    def __init__(self, ep_size: int, vendor_id: int, product_id: int, usage_page: int, usage_id: int) -> None:
        self.device = None
        self.ep_size = ep_size

        for device in hid.enumerate():
            if device['vendor_id'] == vendor_id and device['product_id'] == product_id \
                and device['usage_page'] == usage_page and device['usage'] == usage_id:
                self.device = hid.Device(path=device['path'])

        if self.device == None:
            print("error: could not find the keyboard")
            exit(1)

    def print_device_info(self):
        print("== Keyboard information ==")
        print("Manufacturer:", self.device.manufacturer)
        print("Product:", self.device.product)

    def send(self, payload: bytes):
        self.device.write(pad_message(payload))

    def read(self) -> bytes:
        return self.device.read(self.ep_size)

    def transceive(self, payload: bytes) -> bytes:
        """Send and read information from the device.

        Args:
            payload (bytes): The message to send to the device. The message must not be larger than `self.ep_size`.

        Returns:
            bytes: The message received from the device.
        """
        self.send(payload)
        return self.read(self.ep_size)

    def close(self):
        self.device.close()


EP_SIZE = 32
vid = 0xFEED
pid = 0xC0B2
usage_page = 0xff60
usage_id = 0x61

keyboard = Keyboard(ep_size=EP_SIZE,\
                    vendor_id=vid,\
                    product_id=pid,\
                    usage_page=usage_page,\
                    usage_id=usage_id)
keyboard.print_device_info()
keyboard.close()

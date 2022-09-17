import hid
from time import sleep


def pad_message(payload: bytes, max_message_len: int) -> bytes:
    if len(payload) > max_message_len:
        raise ('payload is too large: maximum payload is', str(max_message_len))
    return payload + b'\x00' * (max_message_len - len(payload))


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
        self.device.write(pad_message(payload, self.ep_size))

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
        return self.read()

    def close(self):
        self.device.close()

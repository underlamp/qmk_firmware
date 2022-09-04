import hid

EP_SIZE: int = 32


def pad_message(payload: bytes) -> bytes:
    if len(payload) > EP_SIZE:
        raise ('payload is too large: maximum payload is', str(EP_SIZE))
    return payload + b'\x00' * (EP_SIZE - len(payload))


def to_bytes(data: str) -> bytes:
    return data.encode()


vid = 0xFEED
pid = 0xC0B2
usage_page = 0xff60
usage_id = 0x61

keyboard: hid.Device = None

for device in hid.enumerate():
    if device['vendor_id'] == vid and device['product_id'] == pid \
        and device['usage_page'] == usage_page and device['usage'] == usage_id:
        keyboard = hid.Device(path=device['path'])

if keyboard == None:
    print("Keyboard was not found.")
    exit(1)

print("Keyboard found!")
print("Product:", keyboard.product)
print("Manufacturer:", keyboard.manufacturer)

message = pad_message(b'hello world')
print("sending:", message)
keyboard.write(message)
print("reading...")
received = keyboard.read(EP_SIZE)
print("received:", received)

keyboard.close()
print("device closed")

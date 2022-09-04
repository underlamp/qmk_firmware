import hid

vid = 0xFEED
pid = 0xC0B2

with hid.Device(vid, pid) as h:
    print("Connected to", h.product, h.manufacturer)
    h.write(b'hello world')


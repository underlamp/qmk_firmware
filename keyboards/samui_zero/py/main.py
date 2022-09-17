import pc
import hid_host
from time import sleep

EP_SIZE = 32
VID = 0xFEED
PID = 0xC0B2
USAGE_PAGE = 0xff60
USAGE_ID = 0x61

def percent_format(n: float) -> str:
    txt = '{:06.2f}'
    return txt.format(n)

if __name__ == "__main__":
    keyboard = hid_host.Keyboard(ep_size=EP_SIZE,\
                        vendor_id=VID,\
                        product_id=PID,\
                        usage_page=USAGE_PAGE,\
                        usage_id=USAGE_ID)
    keyboard.print_device_info()

    computer = pc.ComputerHost()

    while True:
        cpu = percent_format(computer.get_cpu_percent())
        mem = percent_format(computer.get_vmem_percent())

        cpu_message = 'cpu' + cpu
        mem_message = 'mem' + mem

        print(keyboard.transceive(cpu_message.encode()))
        print(keyboard.transceive(mem_message.encode()))
        sleep(1)

    keyboard.close()


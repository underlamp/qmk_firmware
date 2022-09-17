import psutil

class ComputerHost:
    def __init__(self) -> None:
        pass

    def get_cpu_percent(self) -> float:
        return psutil.cpu_percent(0.1)

    def get_vmem_percent(self) -> float:
        return psutil.virtual_memory().percent


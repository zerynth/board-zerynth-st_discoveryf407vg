from base import *
from devices import *

class STDiscoveryF407VGser(Board):
    @staticmethod
    def match(dev):
        return dev["vid"] == "0483" and dev["pid"]=="5740"
        #"jtag_chipid_command": "reset halt; stm32f2x unlock 0; reset halt; mww 0x40023C08 0x08192A3B; mww 0x40023C08 0x4C5D6E7F; mww 0x40023C14 0x0fffaaed; mdw 0x1fff7a10; mdw 0x1fff7a14; mdw 0x1fff7a18",

    def reset(self):
        pass

    def burn(self,bin,outfn=None):
        pass
    
    def __init__(self,info={},dev={}):
        super().__init__(info,dev)
        self._info["name"] = "ST Discovery BRD F407VG Serial"
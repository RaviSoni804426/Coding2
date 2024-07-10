class complex():
    def __init__(self,rel,img):
        self.real=rel
        self.imginary=img
    def __add__(self,other):
        return complex(self.real+other.real, self.imginary+other.imginary)
    def __sub__(self, other):
        return complex(self.real-other.real, self.imginary-other.imginary)
    def __mul__(self,other):
        return complex(self.real*other.real, self.imginary*other.imginary)
a=complex(2,3)
b=complex(5,7)
c=a+b
d=a-b
e=a*b
print(c.real,c.imginary)
print(d.real, d.imginary)
print(e.real, e.imginary)


class Engine:
    def __init__(self,power):
        self.power=power
class door:
    def __init__(self,material):
        self.material=material
class car:
    def __init__(self,engine,door):







   
    

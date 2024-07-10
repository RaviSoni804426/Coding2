# class students:
#     def __init__(self,id,name):
#         self.id=id
#         self.name =name
# x=students(95,"ravi")
# print(x.id)
# print(x.name)
# class students:
#     exams_given=[ ]
#     def __init__(self,id,name):
#         self.rollno=id
#         self.college="Pw"
# st1=students(95,"ravi")
# st2=students(96,"rohit")
# st1.exams_given=[ "jee"]
# st2.exams_given=[ "macht"]
# st1.college="IOI"
# print("rollno of st1 is",st1.rollno)  
# print("exam given by st1 are:",st1.exams_given)
# print(st1.college)
# print("rollno of st2 is",st2.rollno)
# print(st2.college)
# class Employee:
#     holidays=["new year"]
#     def __init__(self,id,dept,salary):
#         self.id=id
#         self.dept=dept
#         self.salary=salary
#     def get_tax(self):
#        return self.salary*0.1
# @classmethod
# def get_holidays(cls):
#     return cls.holidays



# emp1=Employee(101,"IT",100000)
# emp2=Employee(102,"HR",200000)
# print(emp1.get_tax())
# print(emp2.get_tax())
# print(Employee.get_holidays())
#rotate angle,dot product,distance from origin,unitvector,isequal,cross product,distance from point p1 to point p2,matrix multiplication,addition,substraction.


import math 
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def rotate(self, angle):
        cos_angle = math.cos(angle)
        sin_angle = math.sin(angle)
        rotated_x = self.x * cos_angle - self.y * sin_angle
        rotated_y = self.x * sin_angle + self.y * cos_angle
        return Point(rotated_x, rotated_y)

    def dot_product(self, other):
        return self.x * other.x + self.y * other.y

    def distance_from_origin(self):
        return math.sqrt(self.x**2 + self.y**2)

    def unit_Point(self):
        magnitude = self.distance_from_origin()
        if magnitude != 0:
            return Point(self.x / magnitude, self.y / magnitude)
        else:
            return Point (0, 0)

    def is_equal(self, other):
        return self.x == other.x and self.y == other.y

    def cross_product(self, other):
        return self.x * other.y - self.y * other.x

    def distance_from_point(self, other):
        return math.sqrt((self.x - other.x)**2 + (self.y - other.y)**2)

# Example usage
v1 = Point(3, 4)
v2 = Point(1, 2)

rotated_v1 = v1.rotate(math.pi / 2)
dot_product = v1.dot_product(v2)
distance_from_origin = v1.distance_from_origin()
unit_v1 = v1.unit_Point()
is_equal = v1.is_equal(v2)
cross_product = v1.cross_product(v2)
distance_from_point = v1.distance_from_point(v2)

print("Rotated Point:", rotated_v1)
print("Dot product:", dot_product)
print("Distance from origin:", distance_from_origin)
print("Unit Point:", unit_v1)
print("Equality check:", is_equal)
print("Cross product:", cross_product)
print("Distance from point:", distance_from_point)

class matrix:
    def __init__ (self,[ ])
    m1.multiply=m1
    


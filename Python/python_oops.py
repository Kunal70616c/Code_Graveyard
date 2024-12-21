#Creating Class
class Bike:
    def __init__(self, brand : str, rating : str) -> None:
        self.brand = brand
        self.rating = rating
 
# Creating isinstance
bmx : Bike = Bike('BMX' , 'Best')

fox : Bike = Bike('FOX' , 'Good')

#print
print(bmx.brand)
print(bmx.rating)
print(fox.rating)
print(fox.brand)

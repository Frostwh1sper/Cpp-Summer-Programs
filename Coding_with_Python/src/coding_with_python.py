"""
Author: Patrick Glenning
Date: 27 Aug 2014
Purpose: Messing around with python code
"""
# Import system libraries

#functions

#classes
class Hero(object):
    def __init__(self, name, price):
        self.name = name
        self.price = price

class Warrior(Hero):
    role = "Warrior"

class Support(Hero):
    role = "Support"

class Specialist(Hero):
    role = "Specialist"

class Assassin(Hero):
    role = "Assassin"
    
    
#Begin Execution
murky = Specialist("Murky", 10000)
gazlowe = Specialist("Gazlowe", 4000)
zagara = Specialist("Zagara", 4000)
sgthammer = Specialist("Sgt Hammer", 10000)
nazeebo = Specialist("Nazeebo", 10000)
abathur = Specialist("Abathur", 10000)
muradin = Warrior("Muradin", 2000)
etc = Warrior("E.T.C.", 4000)
sonya = Warrior("Sonya", 4000)
arthas = Warrior("Arthas", 7000)
diablo = Warrior("Diablo", 7000)
tyrael = Warrior("Tyrael", 7000)
stitches = Warrior("Stitches", 10000)
valla = Assassin("Valla", 2000)
raynor = Assassin("Raynor", 2000)
illidan = Assassin("Illidan", 4000)
tychus = Assassin("Tychus", 4000)
kerrigan = Assassin("Kerrigan", 7000)
falstad = Assassin("Falstad", 7000)
nova = Assassin("Nova", 10000)
zeratul = Assassin("Zeratul", 10000)
malfurion = Support("Malfurion", 2000)
tassadar = Support("Tassadar", 4000)
lili = Support("Li Li", 4000)
uther = Support("Uther", 7000)
rehgar = Support("Rehger", 7000)
tyrande = Support("Tyrande", 7000)
brightwing = Support("Brightwing", 10000)
while True:
    choice = raw_input("Which character would you like to see the info for? (type exit to exit the program) ")
    if choice == 'Li Li':
        choice = lili
    elif choice == "Sgt Hammer":
        choice = sgthammer
    elif choice == "Murky":
        choice = murky
    elif choice == "Gazlowe":
        choice = gazlowe
    elif choice == "Zagara":
        choice = zagara
    elif choice == "Nazeebo":
        choice = nazeebo
    elif choice == "Abathur":
        choice = abathur
    elif choice == "Muradin":
        choice = muradin
    elif choice == "E.T.C.":
        choice = etc
    elif choice == "Sonya":
        choice = sonya
    elif choice == "Arthas":
        choice = arthas
    elif choice == "Diablo":
        choice = diablo
    elif choice == "Tyrael":
        choice = tyrael
    elif choice == "Stitches":
        choice = stitches
    elif choice == "Valla":
        choice = valla
    elif choice == "Raynor":
        choice = raynor
    elif choice == "Illidan":
        choice = illidan
    elif choice == "Tychus":
        choice = tychus
    elif choice == "Kerrigan":
        choice = kerrigan
    elif choice == "Falstad":
        choice = falstad
    elif choice == "Nova":
        choice = nova
    elif choice == "Zeratul":
        choice = zeratul
    elif choice == "Malfurion":
        choice = malfurion
    elif choice == "Tassadar":
        choice = tassadar
    elif choice == "Uther":
        choice = uther
    elif choice == "Rehger":
        choice = rehgar
    elif choice == "Tyrande":
        choice = tyrande
    elif choice == "Brightwing":
        choice = brightwing
    elif choice == "exit" or choice == "Exit":
        break
    else:
        print "Invalid hero selection."

    print "Hero:", choice.name
    print "Role:", choice.role
    print "Price:", choice.price
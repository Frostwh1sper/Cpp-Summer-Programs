"""
Author: Patrick Glenning
Date: 27 Aug 2014
Purpose: Messing around with python code
"""
# Import system libraries

#functions
def print_hero_info(choice):
    print "Hero:", choice.name
    print "Universe:", choice.universe
    print "Role:", choice.role
    print "Price:", choice.price

#classes
class Hero(object):
    def __init__(self, name, price, universe):
        self.name = name
        self.price = price
        self.universe = universe

class Warrior(Hero):
    role = "Warrior"

class Support(Hero):
    role = "Support"

class Specialist(Hero):
    role = "Specialist"

class Assassin(Hero):
    role = "Assassin"
    
    
#Begin Execution
murky = Specialist("Murky", 10000, "Warcraft")
gazlowe = Specialist("Gazlowe", 4000, "Warcraft")
zagara = Specialist("Zagara", 4000, "Starcraft")
sgthammer = Specialist("Sgt Hammer", 10000, "Starcraft")
nazeebo = Specialist("Nazeebo", 10000, "Diablo")
abathur = Specialist("Abathur", 10000, "Starcraft")
muradin = Warrior("Muradin", 2000, "Warcraft")
etc = Warrior("E.T.C.", 4000, "Warcraft")
sonya = Warrior("Sonya", 4000, "Diablo")
arthas = Warrior("Arthas", 7000, "Warcraft")
diablo = Warrior("Diablo", 7000, "Diablo")
tyrael = Warrior("Tyrael", 7000, "Diablo")
stitches = Warrior("Stitches", 10000, "Warcraft")
valla = Assassin("Valla", 2000, "Diablo")
raynor = Assassin("Raynor", 2000, "Starcraft")
illidan = Assassin("Illidan", 4000, "Warcraft")
tychus = Assassin("Tychus", 4000, "Starcraft")
kerrigan = Assassin("Kerrigan", 7000, "Starcraft")
falstad = Assassin("Falstad", 7000, "Warcraft")
nova = Assassin("Nova", 10000, "Starcraft")
zeratul = Assassin("Zeratul", 10000, "Starcraft")
malfurion = Support("Malfurion", 2000, "Warcraft")
tassadar = Support("Tassadar", 4000, "Starcraft")
lili = Support("Li Li", 4000, "Warcraft")
uther = Support("Uther", 7000, "Warcraft")
rehgar = Support("Rehger", 7000, "Warcraft")
tyrande = Support("Tyrande", 7000, "Warcraft")
brightwing = Support("Brightwing", 10000, "Warcraft")
while True:
    choice = raw_input("Which character would you like to see the info for? (type exit to exit the program) ")
    if choice == 'Li Li':
        choice = lili
        print_hero_info(choice)
    elif choice == "Sgt Hammer":
        choice = sgthammer
        print_hero_info(choice)
    elif choice == "Murky":
        choice = murky
        print_hero_info(choice)
    elif choice == "Gazlowe":
        choice = gazlowe
        print_hero_info(choice)
    elif choice == "Zagara":
        choice = zagara
        print_hero_info(choice)
    elif choice == "Nazeebo":
        choice = nazeebo
        print_hero_info(choice)
    elif choice == "Abathur":
        choice = abathur
        print_hero_info(choice)
    elif choice == "Muradin":
        choice = muradin
        print_hero_info(choice)
    elif choice == "E.T.C.":
        choice = etc
        print_hero_info(choice)
    elif choice == "Sonya":
        choice = sonya
        print_hero_info(choice)
    elif choice == "Arthas":
        choice = arthas
        print_hero_info(choice)
    elif choice == "Diablo":
        choice = diablo
        print_hero_info(choice)
    elif choice == "Tyrael":
        choice = tyrael
        print_hero_info(choice)
    elif choice == "Stitches":
        choice = stitches
        print_hero_info(choice)
    elif choice == "Valla":
        choice = valla
        print_hero_info(choice)
    elif choice == "Raynor":
        choice = raynor
        print_hero_info(choice)
    elif choice == "Illidan":
        choice = illidan
        print_hero_info(choice)
    elif choice == "Tychus":
        choice = tychus
        print_hero_info(choice)
    elif choice == "Kerrigan":
        choice = kerrigan
        print_hero_info(choice)
    elif choice == "Falstad":
        choice = falstad
        print_hero_info(choice)
    elif choice == "Nova":
        choice = nova
        print_hero_info(choice)
    elif choice == "Zeratul":
        choice = zeratul
        print_hero_info(choice)
    elif choice == "Malfurion":
        choice = malfurion
        print_hero_info(choice)
    elif choice == "Tassadar":
        choice = tassadar
        print_hero_info(choice)
    elif choice == "Uther":
        choice = uther
        print_hero_info(choice)
    elif choice == "Rehgar":
        choice = rehgar
        print_hero_info(choice)
    elif choice == "Tyrande":
        choice = tyrande
        print_hero_info(choice)
    elif choice == "Brightwing":
        choice = brightwing
        print_hero_info(choice)
    elif choice == "exit" or choice == "Exit":
        break
    else:
        print "Invalid hero selection."

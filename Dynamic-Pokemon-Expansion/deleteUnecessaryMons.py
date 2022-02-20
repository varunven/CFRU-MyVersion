from bs4 import BeautifulSoup
import requests
import os
import shutil

keepset = {"grookey", "thwackey", "rillaboom", "scorbunny", "raboot", "cinderace",
           "sobble", "drizzile", "inteleon", "sirfetch'd", "obstagoon"}
# bigger than 1110 otherwise (1110 is inteleon)
keepspritenumset = {1154, 1157}

gen8dex = "https://www.serebii.net/swordshield/pokemon.shtml"
req = requests.get(gen8dex)
soup = BeautifulSoup(req.text, "html.parser")
pokemons = soup.find_all('td', class_='pkmn')
unwanted_pokemon_list = []
unwanted_pokemon_nums = []
unwanted_pokemon_set = set()
for x in range(len(pokemons)):
    i = str(pokemons[x])
    split_into_sections = i.split('>')
    two = split_into_sections[1]
    three = split_into_sections[2]
    name_part = two.split("/")[2]
    name = name_part[0:len(name_part)-1]
    num_part = three.split(".png")[0].split("/")
    num = num_part[len(num_part)-1]
    if(name not in keepset):
        unwanted_pokemon_nums.append(num)
        unwanted_pokemon_list.append(name)
        unwanted_pokemon_set.add(name)


def remove_unwanted_mons_audio():
    audio = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/audio"
    for x in unwanted_pokemon_list:
        move_to_new_folder(audio+"/gCry"+x+"_flags.txt", "audiobackup")
        move_to_new_folder(audio+"/gCry"+x+".wav", "audiobackup")


def remove_unwanted_mons_back_sprite():
    back_sprite = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/graphics/backspr"
    for x in os.listdir(back_sprite):
        xnum = x.split("gBackShinySprite")[1][0:4]
        if(xnum.isdigit() and (int(xnum) > 1110 or int(xnum) == 1083 or int(xnum) == 1084) and int(xnum) not in keepspritenumset):
            move_to_new_folder(x, "backsprbackup")
        elif(xnum == "Giga"):
            move_to_new_folder(x, "backsprbackup")


def remove_unwanted_mons_front_sprite():
    front_sprite = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/graphics/frontspr"
    for x in os.listdir(front_sprite):
        xnum = x.split("gFrontShinySprite")[1][0:4]
        if(xnum.isdigit() and (int(xnum) > 1110 or int(xnum) == 1083 or int(xnum) == 1084) and int(xnum) not in keepspritenumset):
            move_to_new_folder(x, "frontsprbackup")
        elif(xnum == "Giga"):
            move_to_new_folder(x, "frontsprbackup")


def remove_unwanted_mons_icon():
    icons = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/graphics/pokeicon"
    for x in os.listdir(icons):
        xnum = x.split("gIconSprite")[1][0:4]
        if(xnum.isdigit() and (int(xnum) > 1110 or int(xnum) == 1083 or int(xnum) == 1084) and int(xnum) not in keepspritenumset):
            move_to_new_folder(x, "pokeiconbackup")
        elif(xnum == "Giga"):
            move_to_new_folder(x, "pokeiconbackup")


def move_to_new_folder(file, newfolder):
    shutil.move(file, newfolder)
    # all other files are deleted manually- refer to "toeliminate.txt"

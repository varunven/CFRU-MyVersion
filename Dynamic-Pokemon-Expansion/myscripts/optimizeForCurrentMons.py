from bs4 import BeautifulSoup
import requests
import os
import shutil

keepset = {"grookey", "thwackey", "rillaboom", "scorbunny", "raboot", "cinderace",
           "sobble", "drizzile", "inteleon", "sirfetch'd", "obstagoon"}
# bigger than 1110 otherwise (1110 is inteleon)
keepspritenumset = {1154, 1157}
unwanted_pokemon_set = set()
unwanted_pokemon_nums = set()

# creates the list/set of unwanted mons from the icons folder


def generate_unwanted():
    gen8dex = "https://www.serebii.net/swordshield/pokemon.shtml"
    req = requests.get(gen8dex)
    soup = BeautifulSoup(req.text, "html.parser")
    pokemons = soup.find_all('td', class_='pkmn')
    unwanted_pokemon_set = set()
    unwanted_pokemon_nums = set()
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
            name = name.capitalize()
            if(name == "Mr.rime"):
                name = "MrRime"
            unwanted_pokemon_nums.add(num)
            unwanted_pokemon_set.add(name)
    return unwanted_pokemon_set, unwanted_pokemon_nums


unwanted_pokemon_set, unwanted_pokemon_nums = generate_unwanted()

# removes the unwanted mons from the audio folder


def remove_unwanted_mons_audio():
    audio = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/audio/"
    for x in unwanted_pokemon_set:
        if(x == "Toxtricity"):
            move_to_new_folder(audio+"gCry"+x+"Amped" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Amped" +
                               ".wav", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"LowKey" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"LowKey" +
                               ".wav", audio+"audiobackup/")
        elif(x == "Indeedee"):
            move_to_new_folder(audio+"gCry"+x+"Male" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Male" +
                               ".wav", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Female" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Female" +
                               ".wav", audio+"audiobackup/")
        elif(x == "Urshifu"):
            move_to_new_folder(audio+"gCry"+x+"Rapid" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Rapid" +
                               ".wav", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Single" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Single" +
                               ".wav", audio+"audiobackup/")
        elif(x == "Zacian" or x == "Zamazenta"):
            move_to_new_folder(audio+"gCry"+x +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+".wav", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Crowned" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"Crowned" +
                               ".wav", audio+"audiobackup/")
        elif(x == "Calyrex"):
            move_to_new_folder(audio+"gCry"+x+"_flags.txt",
                               audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+".wav", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"IceRider" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"IceRider" +
                               ".wav", audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+"ShadowRider" +
                               "_flags.txt", audio+"audiobackup/")
            move_to_new_folder(
                audio+"gCry"+x+"ShadowRider"+".wav", audio+"audiobackup/")
        else:
            move_to_new_folder(audio+"gCry"+x+"_flags.txt",
                               audio+"audiobackup/")
            move_to_new_folder(audio+"gCry"+x+".wav", audio+"audiobackup/")

# removes the unwanted mons from the backspr folder- REPEATABLE


def remove_unwanted_mons_back_sprite():
    back_sprite = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/graphics/backspr/"
    for x in os.listdir(back_sprite):
        if(x == "backsprbackup"):
            continue
        xnum = x.split("gBackShinySprite")[1][0:4]
        if(xnum.isdigit() and (int(xnum) > 1110 or int(xnum) == 1083 or int(xnum) == 1084) and int(xnum) not in keepspritenumset):
            move_to_new_folder(back_sprite+x, back_sprite+"backsprbackup/")
        elif(xnum == "Giga"):
            move_to_new_folder(back_sprite+x, back_sprite+"backsprbackup/")

# removes the unwanted mons from the frontspr folder - REPEATABLE


def remove_unwanted_mons_front_sprite():
    front_sprite = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/graphics/frontspr/"
    for x in os.listdir(front_sprite):
        if(x == "frontsprbackup"):
            continue
        xnum = x.split("gFrontSprite")[1][0:4]
        if(xnum.isdigit() and (int(xnum) > 1110 or int(xnum) == 1083 or int(xnum) == 1084) and int(xnum) not in keepspritenumset):
            move_to_new_folder(front_sprite+x, front_sprite+"frontsprbackup/")
        elif(xnum == "Giga"):
            move_to_new_folder(front_sprite+x, front_sprite+"frontsprbackup/")

# removes the unwanted mons from the icons folder - REPEATABLE


def remove_unwanted_mons_icon():
    icons = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/graphics/pokeicon/"
    for x in os.listdir(icons):
        if(x == "pokeiconbackup"):
            continue
        xnum = x.split("gIconSprite")[1][0:4]
        if(xnum.isdigit() and (int(xnum) > 1110 or int(xnum) == 1083 or int(xnum) == 1084) and int(xnum) not in keepspritenumset):
            move_to_new_folder(icons+x, icons+"pokeiconbackup/")
        elif(xnum == "Giga"):
            move_to_new_folder(icons+x, icons+"pokeiconbackup/")

# moves given file to given folder


def move_to_new_folder(file, newfolder):
    shutil.move(file, newfolder)

# Changes tm_compatability files- only run once, or delete end of file and rerun


def add_new_line_to_end_tms():
    tms = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/src/tm_compatibility"
    for tm in os.listdir(tms):
        file = tms+"/"+tm
        with open(file, "a") as txt:
            if(tm == "89 - U-Turn.txt"):
                txt.write("AERODACTYL\n")
            elif(tm == "79 - Dark Pulse.txt"):
                txt.write(
                    "UNFEZANT\nSCEPTILE\nGOTHITELLE\nSEVIPER\nVESPIQUEN\nMAGMORTAR\n")
            elif(tm == "75 - Swords Dance.txt"):
                txt.write("GIRAFARIG\n")
            elif(tm == "60 - Drain Punch.txt"):
                txt.write("THROH\n")
            elif(tm == "4 - Calm Mind.txt"):
                txt.write("JOLTEON\nILLUMISE\n")
            elif(tm == "35 - Flamethower.txt"):
                txt.write("PARASECT\BELLOSSOM\nSUNFLORA\nCHERRIM")
            elif(tm == "38 - Fire Blast.txt"):
                txt.write("PARASECT\BELLOSSOM\nSWALOT\nSUNFLORA\nCHERRIM")
            elif(tm == "24 - Thunderbolt.txt"):
                txt.write("TYPHLOSION\n\SWALOT\n")
            elif(tm == "2 - Dragon Claw.txt"):
                txt.write("LAPRAS\nHUNTAIL\nTROPIUS\n")
            elif(tm == "13 - Ice Beam.txt"):
                txt.write("RAIKOU\n\SWALOT\n")
            elif(tm == "52 - Focus Blast.txt"):
                txt.write("PIDGEOT\n")
            elif(tm == "12 - Taunt.txt"):
                txt.write("PIDGEOT\nPACHIRISU\n")
            elif(tm == "53 - Energy Ball.txt"):
                txt.write("VOLTORB\nELECTRODE\n")
            elif(tm == "69 - Rock Polish.txt"):
                txt.write("MAROWAK\nMAROWAK_A\n")
            elif(tm == "102 - Dazzling Gleam.txt"):
                txt.write("PERSIAN\nCHIMECHO\nLUVDISC\n")
            elif(tm == "51 - Roost.txt"):
                txt.write("EMPOLEON\n")

# Changes tutor_compatability files- only run once, or delete end of file and rerun


def add_new_line_to_end_tutors():
    tms = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/src/tutor_compatibility"
    for tm in os.listdir(tms):
        file = tms+"/"+tm
        with open(file, "a") as txt:
            if(tm == "118 - Psychic Fangs.txt"):
                txt.write("ARCANINE\n")
            elif(tm == "115 - Play Rough.txt"):
                txt.write("TAUROS\n")
            elif(tm == "108 - Crunch.txt"):
                txt.write("TAUROS\n")
            elif(tm == "104 - Aura Sphere.txt"):
                txt.write("GOLDUCK\nESPEON\nUNFEZANT\nGIRAFARIG\nBEEHEYEM\n")
            elif(tm == "95 - Heavy Slam.txt"):
                txt.write("HAXORUS\nBLASTOISE\n")
            elif(tm == "91 - Fire Fang.txt"):
                txt.write("FLOATZEL\n")
            elif(tm == "89 - Thunder Fang.txt"):
                txt.write("FLOATZEL\n")
            elif(tm == "77 - Nasty Plot.txt"):
                txt.write("SCEPTILE\nSEVIPER\n")
            elif(tm == "75 - Dragon Dance.txt"):
                txt.write("MEGANIUM\nHUNTAIL\n")
            elif(tm == "74 - Toxic Spikes.txt"):
                txt.write("KLEFKI\n")
            elif(tm == "73 - Spikes.txt"):
                txt.write("CLAYDOL\nPROBOPASS\nBASTIODON\nCARBINK\n")
            elif(tm == "54 - Knock Off.txt"):
                txt.write("DUSKNOIR\nVESPIQUEN\nBEWEAR\n")
            elif(tm == "53 - Superpower.txt"):
                txt.write("LEDIAN\nELECTIVIRE\nZEBSTRIKA\n")
            elif(tm == "52 - Hyper Voice.txt"):
                txt.write(
                    "ENTEI\nMAGMORTAR\nSIMISAGE\nSIMISEAR\nSIMIPOUR\nTROPIUS\nARCHEOPS\nPOLIWRATH\nGOLDUCK\nSWALOT\n")
            elif(tm == "49 - Gunk Shot.txt"):
                txt.write("VICTREEBEL\nARIADOS\n")
            elif(tm == "48 - Earth Power.txt"):
                txt.write("ENTEI\nTYPHLOSION\nARBOK\n")
            elif(tm == "44- Outrage.txt"):
                txt.write("HUNTAIL\n")
            elif(tm == "26 - Iron Head.txt"):
                txt.write("HAXORUS\n")

# Changes Pokdex_Orders.txt and updates it, copy paste result into Pokedex_Orders.c


def fix_pokedex_orders():
    dex = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/src/Pokedex_Orders.txt"
    mons = "C:/Users/dswhi/Github Projects/CFRU-MyVersion/Dynamic-Pokemon-Expansion/removed_pokemon.txt"
    monset = set()
    for line in open(mons, "r").readlines():
        monset.add(line.strip())
    replace = ""
    with open(dex, "r+") as f:
        for line in f.readlines():
            data = line.strip()
            if(data in monset):
                data = "\n"
            replace = replace + data + "\n"
    f.close()
    fout = open(dex, "w")
    fout.write(replace)
    fout.close()


# remove_unwanted_mons_audio()
# remove_unwanted_mons_back_sprite() DONE
# remove_unwanted_mons_front_sprite() DONE
# remove_unwanted_mons_icon() DONE
# add_new_line_to_end_tms() DONE
# add_new_line_to_end_tutors() DONE
# fix_pokedex_orders()

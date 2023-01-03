import os
from script_constants import *

# Changes tutor_compatability files- only run once, or delete end of file and rerun


def add_new_line_to_end_tms(update_tm_list=False):
    if(update_tm_list):
        for tm in os.listdir(TMS_FILEPATH):
            with open(TMS_FILEPATH+tm, "a") as txt:
                if(tm == UTURN_FILE):
                    txt.write(UTURN_POKEMON)
                elif(tm == DARKPULSE_FILE):
                    txt.write(DARKPULSE_POKEMON)
                elif(tm == SWORDSDANCE_FILE):
                    txt.write(SWORDSDANCE_POKEMON)
                elif(tm == DRAINPUNCH_FILE):
                    txt.write(DRAINPUNCH_POKEMON)
                elif(tm == CALMMIND_FILE):
                    txt.write(CALMMIND_POKEMON)
                elif(tm == FLAMETHROWER_FILE):
                    txt.write(FLAMETHROWER_POKEMON)
                elif(tm == FIREBLAST_FILE):
                    txt.write(FIREBLAST_POKEMON)
                elif(tm == THUNDERBOLT_FILE):
                    txt.write(THUNDERBOLT_POKEMON)
                elif(tm == DRAGONCLAW_FILE):
                    txt.write(DRAGONCLAW_POKEMON)
                elif(tm == ICEBEAM_FILE):
                    txt.write(ICEBEAM_POKEMON)
                elif(tm == FOCUSBLAST_FILE):
                    txt.write(FOCUSBLAST_POKEMON)
                elif(tm == TAUNT_FILE):
                    txt.write(TAUNT_POKEMON)
                elif(tm == ENERGYBALL_FILE):
                    txt.write(ENERGYBALL_POKEMON)
                elif(tm == ROCKPOLISH_FILE):
                    txt.write(ROCKPOLISH_POKEMON)
                elif(tm == DAZZLINGGLEAM_FILE):
                    txt.write(DAZZLINGGLEAM_POKEMON)
                elif(tm == ROOST_FILE):
                    txt.write(ROOST_POKEMON)


update_tm_list = True
add_new_line_to_end_tms(update_tm_list)

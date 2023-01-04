import os
from script_constants import *

# Changes tutor_compatability files- only run once, or delete end of file and rerun


def add_new_line_to_end_tutors(update_tutor_list=False):
    if(update_tutor_list):
        for tutor in os.listdir(TUTORS_FILEPATH):
            with open(TUTORS_FILEPATH+tutor, "a") as txt:
                if(tutor == PSYCHICFANGS_FILE):
                    txt.write(PSYCHICFANGS_POKEMON)
                elif(tutor == PLAYROUGH_FILE):
                    txt.write(PLAYROUGH_POKEMON)
                elif(tutor == CRUNCH_FILE):
                    txt.write(CRUNCH_POKEMON)
                elif(tutor == AURASPHERE_FILE):
                    txt.write(AURASPHERE_POKEMON)
                elif(tutor == HEAVYSLAM_FILE):
                    txt.write(HEAVYSLAM_POKEMON)
                elif(tutor == FIREFANG_FILE):
                    txt.write(FIREFANG_POKEMON)
                elif(tutor == THUNDERFANG_FILE):
                    txt.write(THUNDERFANG_POKEMON)
                elif(tutor == NASTYPLOT_FILE):
                    txt.write(NASTYPLOT_POKEMON)
                elif(tutor == DRAGONDANCE_FILE):
                    txt.write(DRAGONDANCE_POKEMON)
                elif(tutor == TOXICSPIKES_FILE):
                    txt.write(TOXICSPIKES_POKEMON)
                elif(tutor == SPIKES_FILE):
                    txt.write(SPIKES_POKEMON)
                elif(tutor == KNOCKOFF_FILE):
                    txt.write(KNOCKOFF_POKEMON)
                elif(tutor == SUPERPOWER_FILE):
                    txt.write(SUPERPOWER_POKEMON)
                elif(tutor == HYPERVOICE_FILE):
                    txt.write(HYPERVOICE_POKEMON)
                elif(tutor == GUNKSHOT_FILE):
                    txt.write(GUNKSHOT_POKEMON)
                elif(tutor == EARTHPOWER_FILE):
                    txt.write(EARTHPOWER_POKEMON)
                elif(tutor == OUTRAGE_FILE):
                    txt.write(OUTRAGE_POKEMON)
                elif(tutor == IRONHEAD_FILE):
                    txt.write(IRONHEAD_POKEMON)
                elif(tutor == CLOSECOMBAT_FILE):
                    txt.write(CLOSECOMBAT_POKEMON)


update_tutor_list = True
add_new_line_to_end_tutors(update_tutor_list)

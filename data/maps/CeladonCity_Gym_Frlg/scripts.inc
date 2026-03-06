# 1 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Erika::
# 6 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    lock
# 7 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    faceplayer
# 8 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_Gym_EventScript_ErikaPostBattle
# 10 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 11 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    @ --- PARTY SIZE CHECK ---
# 12 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    getpartysize
# 13 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 5
# 14 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeladonCity_Gym_EventScript_StartBattle
# 15 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 16 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_ErikaIntro, MSGBOX_DEFAULT
# 17 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_RulesExplain, MSGBOX_YESNO
# 18 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, NO
# 19 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeladonCity_Gym_EventScript_Refused
# 20 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 21 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    special ShowPokemonStorageSystemPC
# 22 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    waitstate
# 23 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 24 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    getpartysize
# 25 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 5
# 26 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeladonCity_Gym_EventScript_StartBattle_FromPC
# 27 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto CeladonCity_Gym_EventScript_StillNot5
# 28 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    @ -------------------------
# 29 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 30 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_StartBattle::
# 31 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    setstartingstatus STARTING_STATUS_GRASSY_TERRAIN
# 32 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 33 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
# 34 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_ERIKA, 4
# 35 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 36 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    release
# 37 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 38 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 39 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_StartBattle_FromPC::
# 40 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    setstartingstatus STARTING_STATUS_GRASSY_TERRAIN
# 41 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaReady, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 42 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
# 43 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_ERIKA, 4
# 44 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 45 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    release
# 46 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 47 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 48 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Refused::
# 49 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_Refused, MSGBOX_DEFAULT
# 50 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    release
# 51 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 52 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 53 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_StillNot5::
# 54 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_StillNot5, MSGBOX_DEFAULT
# 55 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    release
# 56 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 57 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 58 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_DefeatedErika::
# 59 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_ERIKA, 1
# 60 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 61 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    setflag FLAG_DEFEATED_ERIKA
# 62 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    setflag FLAG_BADGE04_GET
# 63 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    set_gym_trainers_frlg 4
# 64 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto CeladonCity_Gym_EventScript_GiveTM19
# 65 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 66 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 67 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19::
# 68 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
# 69 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    checkitemspace ITEM_TM19
# 70 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
# 71 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 72 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    setflag FLAG_GOT_TM19_FROM_ERIKA
# 73 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_ExplainTM19
# 74 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 75 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_OfferPCRetrieve, MSGBOX_YESNO
# 76 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, NO
# 77 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeladonCity_Gym_EventScript_EndInteract
# 78 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    special ShowPokemonStorageSystemPC
# 79 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    waitstate
# 80 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 81 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_EndInteract::
# 82 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    release
# 83 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 84 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 85 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_NoRoomForTM19::
# 86 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
# 87 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    release
# 88 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 89 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 90 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Kay::
# 91 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 92 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 94 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 95 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Lisa::
# 96 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 97 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 98 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 100 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Tina::
# 102 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 103 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 105 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 106 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Bridget::
# 107 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 108 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 110 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 111 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Tamia::
# 112 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 113 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 114 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 116 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 117 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Lori::
# 118 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 119 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 121 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 122 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Mary::
# 123 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 124 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 126 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 127 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue::
# 128 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	lockall
# 129 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
# 130 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
# 131 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	releaseall
# 132 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 133 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 134 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_ErikaPostBattle::
# 135 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 136 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    release
# 137 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    end
# 138 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 139 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatuePostVictory::
# 140 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
# 141 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	releaseall
# 142 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 143 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 144 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaIntro::
# 145 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Hello…\n"
# 146 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Lovely weather, isn't it?\l"
# 147 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "It's so pleasant…\p"
# 148 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Oh, dear…\n"
# 149 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must have dozed off. Welcome.\p"
# 150 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My name is ERIKA.\n"
# 151 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I am the LEADER of CELADON GYM.\p"
# 152 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I am a student of the art of\n"
# 153 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "flower arranging.\p"
# 154 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My POKéMON are solely of the\n"
# 155 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "GRASS type.\p"
# 156 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Oh, I'm sorry, I had no idea that\n"
# 157 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "you wished to challenge me.\p"
# 158 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Very well, but I shall not lose.{PLAY_BGM MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 159 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 160 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaDefeat::
# 161 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 162 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I concede defeat.\l"
# 163 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You are remarkably strong.\p"
# 164 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must confer on you the\n"
# 165 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "RAINBOWBADGE.$"
# 166 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 167 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaPostBattle::
# 168 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You are cataloging POKéMON?\n"
# 169 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must say I'm impressed.\p"
# 170 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I would never collect POKéMON if\n"
# 171 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "they were unattractive.$"
# 172 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 173 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis::
# 174 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "The RAINBOWBADGE will make\n"
# 175 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 obey.\p"
# 176 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "It also allows POKéMON to use\n"
# 177 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "STRENGTH in and out of battle.\p"
# 178 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Please also take this with you.$"
# 179 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 180 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ReceivedTM19FromErika::
# 181 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM19\n"
# 182 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "from ERIKA.$"
# 183 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 184 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ExplainTM19::
# 185 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "TM19 contains GIGA DRAIN.\p"
# 186 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Half the damage it inflicts is\n"
# 187 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "drained to heal your POKéMON.\p"
# 188 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Wouldn't you agree that it's a\n"
# 189 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "wonderful move?$"
# 190 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 191 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ShouldMakeRoomForThis::
# 192 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You should make room for this.$"
# 193 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 194 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayIntro::
# 195 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I should tell you about this GYM.\p"
# 196 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Only real ladies are allowed in\n"
# 197 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "here!$"
# 198 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 199 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayDefeat::
# 200 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're too rough!$"
# 201 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 202 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayPostBattle::
# 203 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Bleaah!\n"
# 204 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I hope ERIKA wipes you out!$"
# 205 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 206 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetIntro::
# 207 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, welcome.\n"
# 208 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I was getting bored.$"
# 209 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 210 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetDefeat::
# 211 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My makeup!$"
# 212 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 213 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetPostBattle::
# 214 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON are tough\n"
# 215 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "against the WATER type.\p"
# 216 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "They also have an edge on ROCK-\n"
# 217 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "and GROUND-type POKéMON.$"
# 218 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 219 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaIntro::
# 220 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Weren't you peeking in here\n"
# 221 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "earlier?$"
# 222 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 223 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaDefeat::
# 224 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're an eye-opener!$"
# 225 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 226 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaPostBattle::
# 227 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, you were looking at ERIKA…\n"
# 228 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You weren't looking at me…$"
# 229 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 230 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaIntro::
# 231 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Look, look!\n"
# 232 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "See my POKéMON!\p"
# 233 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I like the GRASS type.\n"
# 234 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I like how they're easy to raise.$"
# 235 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 236 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaDefeat::
# 237 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "No!$"
# 238 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 239 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaPostBattle::
# 240 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "We only use GRASS-type POKéMON at\n"
# 241 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "our GYM.\p"
# 242 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Why? We also use them for making\n"
# 243 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "flower arrangements!$"
# 244 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 245 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaIntro::
# 246 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, hey!\p"
# 247 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "We don't like BUG- or FIRE-type\n"
# 248 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "POKéMON in here!$"
# 249 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 250 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaDefeat::
# 251 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 252 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You!$"
# 253 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 254 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaPostBattle::
# 255 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Our LEADER ERIKA might be quiet,\n"
# 256 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "but she's famous around here.$"
# 257 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 258 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriIntro::
# 259 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Pleased to meet you.\n"
# 260 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My hobby is POKéMON training.$"
# 261 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 262 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriDefeat::
# 263 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 264 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Splendid!$"
# 265 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 266 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriPostBattle::
# 267 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I have a blind date coming up.\n"
# 268 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I have to learn to be polite,\l"
# 269 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "especially if I have to battle.$"
# 270 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 271 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryIntro::
# 272 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Welcome to CELADON GYM!\p"
# 273 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You'd better not underestimate\n"
# 274 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "the nice ladies here.$"
# 275 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 276 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryDefeat::
# 277 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 278 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Beaten!$"
# 279 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 280 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryPostBattle::
# 281 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I didn't bring my best POKéMON.\n"
# 282 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Wait until next time!$"
# 283 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 284 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_GymStatue::
# 285 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
# 286 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ERIKA\p"
# 287 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 288 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 289 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 290 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_GymStatuePlayerWon::
# 291 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
# 292 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ERIKA\p"
# 293 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 294 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 295 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 296 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_RulesExplain::
# 297 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "However, Gym battles require you to\n"
# 298 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "use the same amount of Pokemon.\p"
# 299 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "It would be unfair to overwhelm my\n"
# 300 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "plants with numbers.\p"
# 301 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "Do you want to open the Storage\n"
# 302 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "System to organize your party?$"
# 303 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 304 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_Refused::
# 305 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "Please come back when you have\n"
# 306 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "exactly five Pokémon.\p"
# 307 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "My flowers will be waiting.$"
# 308 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 309 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_StillNot5::
# 310 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "Oh, my… You still don't have\n"
# 311 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "exactly five Pokémon.\p"
# 312 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "I cannot accept your challenge yet.$"
# 313 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 314 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_OfferPCRetrieve::
# 315 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "You fought beautifully.\p"
# 316 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "Do you want to open the Storage\n"
# 317 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "System to organize your party?$"
# 318 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 319 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaReady::
# 320 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "I see you have arranged your party.\n"
# 321 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "Very well then.\p"
# 322 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
    .string "Shall we begin the match?{PLAY_BGM MUS_RG_ENCOUNTER_GYM_LEADER}$"

# 1 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .byte 0
# 4 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Misty::
# 6 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    lock
# 7 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    faceplayer
# 8 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_MistyPostBattle
# 10 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 11 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    getpartysize
# 12 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 4
# 13 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeruleanCity_Gym_EventScript_StartBattle
# 14 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 15 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_MistyIntro, MSGBOX_DEFAULT
# 16 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_RulesExplain, MSGBOX_YESNO
# 17 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, NO
# 18 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeruleanCity_Gym_EventScript_Refused
# 19 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 20 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    special ShowPokemonStorageSystemPC
# 21 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    waitstate
# 22 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 23 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    getpartysize
# 24 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 4
# 25 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeruleanCity_Gym_EventScript_StartBattle_FromPC
# 26 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto CeruleanCity_Gym_EventScript_StillNot4
# 27 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 28 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_StartBattle::
# 29 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 30 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 31 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_ExplainTM03
# 32 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 33 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 34 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 35 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_StartBattle_FromPC::
# 36 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyReady, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 37 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 38 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_ExplainTM03
# 39 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 40 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 42 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Refused::
# 43 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_Refused, MSGBOX_DEFAULT
# 44 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 45 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 46 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 47 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_StillNot4::
# 48 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_StillNot4, MSGBOX_DEFAULT
# 49 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 50 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 51 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 52 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_MistyDefeated::
# 53 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_MISTY, 1
# 54 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    setflag FLAG_DEFEATED_MISTY
# 55 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    setflag FLAG_BADGE02_GET
# 56 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    setrespawn HEAL_LOCATION_CERULEAN_CITY
# 57 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    set_gym_trainers_frlg 2
# 58 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto CeruleanCity_Gym_EventScript_GiveTM03
# 59 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 60 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 61 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03::
# 62 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 63 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    checkitemspace ITEM_TM03
# 64 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
# 65 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 66 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    setflag FLAG_GOT_TM03_FROM_MISTY
# 67 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_ExplainTM03
# 68 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 69 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_OfferPCRetrieve, MSGBOX_YESNO
# 70 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, NO
# 71 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_eq CeruleanCity_Gym_EventScript_EndInteract
# 72 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    special ShowPokemonStorageSystemPC
# 73 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    waitstate
# 74 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 75 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_EndInteract::
# 76 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 77 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 78 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 79 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_MistyPostBattle::
# 80 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 81 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_ExplainTM03
# 82 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 83 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 84 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 85 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 86 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 87 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 88 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 89 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 90 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Diana::
# 91 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 92 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 94 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 95 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Luis::
# 96 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 97 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_MISTY, 2
# 98 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 100 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy::
# 102 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    lock
# 103 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    faceplayer
# 104 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 105 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 106 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 107 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 108 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 109 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 110 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 111 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    release
# 112 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 113 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 114 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue::
# 115 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    lockall
# 116 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
# 117 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_GymStatue
# 118 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    releaseall
# 119 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 120 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 121 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 122 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 123 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    releaseall
# 124 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    end
# 125 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 126 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyIntro::
# 127 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Hi, you're a new face!\p"
# 128 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Only those TRAINERS who have a\n"
# 129 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "policy about POKéMON can turn pro.\p"
# 130 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What is your approach when you\n"
# 131 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "catch and train POKéMON?\p"
# 132 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "My policy is an all-out offensive\n"
# 133 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "with WATER-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 134 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 135 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainTM03::
# 136 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "TM03 teaches WATER PULSE.\p"
# 137 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Use it on an aquatic POKéMON!$"
# 138 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 139 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainCascadeBadge::
# 140 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The CASCADEBADGE makes all\n"
# 141 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 obey.\p"
# 142 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 143 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "got in trades.\p"
# 144 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "There's more. You can now use CUT\n"
# 145 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "anytime, even out of battle.\p"
# 146 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can CUT down small trees to\n"
# 147 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "open new pathways.\p"
# 148 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can also have my favorite TM.$"
# 149 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 150 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ReceivedTM03FromMisty::
# 151 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM03\n"
# 152 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "from MISTY.$"
# 153 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 154 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_BetterMakeRoomForThis::
# 155 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You better make room for this!$"
# 156 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 157 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyDefeat::
# 158 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
# 159 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You're too much!\p"
# 160 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "All right!\p"
# 161 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can have the CASCADEBADGE to\n"
# 162 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "show you beat me.$"
# 163 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 164 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaIntro::
# 165 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What? You?\n"
# 166 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm more than good enough for you!\p"
# 167 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY won't have to be bothered.$"
# 168 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 169 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaDefeat::
# 170 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You overwhelmed me!$"
# 171 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 172 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaPostBattle::
# 173 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You have to face other TRAINERS\n"
# 174 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "to see how good you really are.$"
# 175 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 176 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisIntro::
# 177 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Splash!\p"
# 178 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm first up!\n"
# 179 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let's do it!$"
# 180 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisDefeat::
# 182 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That can't be!$"
# 183 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 184 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisPostBattle::
# 185 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY is a TRAINER who's going to\n"
# 186 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "keep improving.\p"
# 187 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "She won't lose to someone like you!$"
# 188 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 189 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymGuyAdvice::
# 190 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 191 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 192 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let me give you some advice!\p"
# 193 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The LEADER, MISTY, is a pro who\n"
# 194 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "uses WATER-type POKéMON.\p"
# 195 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can drain all their water with\n"
# 196 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON.\p"
# 197 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Or, you might use ELECTRIC-type\n"
# 198 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "POKéMON and zap them!$"
# 199 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 200 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_WeMakePrettyGoodTeam::
# 201 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You beat MISTY!\n"
# 202 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "See, what'd I tell ya?\p"
# 203 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You and me, kid, we make a pretty\n"
# 204 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "darn-good team!$"
# 205 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 206 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatue::
# 207 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
# 208 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "LEADER: MISTY\p"
# 209 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 210 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 211 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 212 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatuePlayerWon::
# 213 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
# 214 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "LEADER: MISTY\p"
# 215 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 216 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 217 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 218 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_RulesExplain::
# 219 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "However, there are rules we have\n"
# 220 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "to follow.\p"
# 221 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Gym battles require challengers\n"
# 222 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "use the same amount of Pokemon.\p"
# 223 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "I won't accept an unfair fight.\p"
# 224 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Would you like to access the PC to\n"
# 225 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "organize your party?$"
# 226 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 227 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_Refused::
# 228 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Come back when you have exactly\n"
# 229 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "four Pokémon!\p"
# 230 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "I only battle serious Trainers.$"
# 231 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 232 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_StillNot4::
# 233 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Hey! You still don't have exactly\n"
# 234 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "four Pokémon.\p"
# 235 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "I can't battle you yet!\n"
# 236 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Don't keep me waiting!$"
# 237 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 238 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyReady::
# 239 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "I see you've finally adjusted your\n"
# 240 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "party.\p"
# 241 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Then let's not waste any more time!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 242 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 243 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_OfferPCRetrieve::
# 244 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "That was a good match.\p"
# 245 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Would you like to access the PC to\n"
# 246 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "organize your party?$"

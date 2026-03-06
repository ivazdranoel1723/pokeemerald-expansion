# 1 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .byte 0
# 4 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Brock::
# 6 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    lock
# 7 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    faceplayer
# 8 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_BrockPostBattle
# 10 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 11 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    getpartysize
# 12 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 4          @ Brock has 4 Pokémon
# 13 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_eq PewterCity_Gym_EventScript_StartBattle
# 14 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 15 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_BrockIntro, MSGBOX_DEFAULT
# 16 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_RulesExplain, MSGBOX_YESNO
# 17 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, NO
# 18 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_eq PewterCity_Gym_EventScript_Refused
# 19 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 20 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    special ShowPokemonStorageSystemPC
# 21 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    waitstate
# 22 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 23 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    getpartysize
# 24 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 4
# 25 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_eq PewterCity_Gym_EventScript_StartBattle_FromPC
# 26 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto PewterCity_Gym_EventScript_StillNot4
# 27 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 28 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_StartBattle::
# 29 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 30 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 31 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_BrockPostBattle
# 32 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 33 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 34 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 35 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_StartBattle_FromPC::
# 36 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockReady, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 37 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 38 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_BrockPostBattle
# 39 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 40 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 41 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 42 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Refused::
# 43 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_Refused, MSGBOX_DEFAULT
# 44 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 45 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 47 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_BrockPostBattle::
# 48 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_BrockPostBattle
# 49 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 50 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 51 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 52 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_StillNot4::
# 53 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_StillNot4, MSGBOX_DEFAULT
# 54 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 55 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 56 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 57 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_DefeatedBrock::
# 58 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_BROCK, 1
# 59 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    setflag FLAG_DEFEATED_BROCK
# 60 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    setflag FLAG_BADGE01_GET
# 61 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 62 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 63 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 64 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    set_gym_trainers_frlg 1
# 65 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto PewterCity_Gym_EventScript_GiveTM39
# 66 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 67 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 68 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39::
# 69 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_TakeThisWithYou
# 70 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    checkitemspace ITEM_TM39
# 71 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 72 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 73 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    setflag FLAG_GOT_TM39_FROM_BROCK
# 74 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_ExplainTM39
# 75 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 76 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 77 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 78 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_NoRoomForTM39::
# 79 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 80 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 81 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 82 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 83 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Liam::
# 84 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 85 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 87 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 88 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy::
# 89 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    lock
# 90 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    faceplayer
# 91 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 92 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 93 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 94 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
# 95 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 96 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 97 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyPostVictory::
# 98 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_YoureChampMaterial
# 99 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 100 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 101 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 102 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 103 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_LetsGetHappening
# 104 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto PewterCity_Gym_EventScript_GymGuyAdvice
# 105 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 106 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 107 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 108 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 109 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto PewterCity_Gym_EventScript_GymGuyAdvice
# 110 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 111 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 112 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyAdvice::
# 113 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 114 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    release
# 115 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 116 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 117 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatue::
# 118 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    lockall
# 119 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
# 120 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_GymStatue
# 121 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    releaseall
# 122 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 123 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 124 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatuePostVictory::
# 125 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 126 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    releaseall
# 127 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    end
# 128 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 129 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockIntro::
# 130 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, you're here. I'm BROCK.\n"
# 131 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'm PEWTER's GYM LEADER.\p"
# 132 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My rock-hard willpower is evident\n"
# 133 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "even in my POKéMON.\p"
# 134 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My POKéMON are all rock hard, and\n"
# 135 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "have true-grit determination.\p"
# 136 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's right - my POKéMON are all\n"
# 137 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the ROCK type!\p"
# 138 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fuhaha! You're going to challenge\n"
# 139 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "me knowing that you'll lose?\p"
# 140 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's the TRAINER's honor that\n"
# 141 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "compels you to challenge me.\p"
# 142 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fine, then!\n"
# 143 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Show me your best!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 144 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 145 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockDefeat::
# 146 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I took you for granted, and so\n"
# 147 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I lost.\p"
# 148 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "As proof of your victory, I confer\n"
# 149 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "on you this…the official POKéMON\l"
# 150 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE BOULDERBADGE.\p"
# 151 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
# 152 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
# 153 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
# 154 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your POKéMON more powerful.\p"
# 155 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It also enables the use of the\n"
# 156 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH outside of battle.\p"
# 157 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Of course, a POKéMON must know the\n"
# 158 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH to use it.$"
# 159 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 160 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TakeThisWithYou::
# 161 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
# 162 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Take this with you.$"
# 163 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 164 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ReceivedTM39FromBrock::
# 165 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM39\n"
# 166 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK.$"
# 167 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 168 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ExplainTM39::
# 169 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM, Technical Machine, contains a\n"
# 170 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "technique for POKéMON.\p"
# 171 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Using a TM teaches the move it\n"
# 172 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "contains to a POKéMON.\p"
# 173 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM is good for only one use.\p"
# 174 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, when you use one, pick the\n"
# 175 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON carefully.\p"
# 176 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Anyways…\n"
# 177 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "TM39 contains ROCK TOMB.\p"
# 178 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It hurls boulders at the foe and\n"
# 179 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "lowers its SPEED.$"
# 180 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockPostBattle::
# 182 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "There are all kinds of TRAINERS in\n"
# 183 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "this huge world of ours.\p"
# 184 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You appear to be very gifted as a\n"
# 185 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 186 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So let me make a suggestion.\p"
# 187 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Go to the GYM in CERULEAN and test\n"
# 188 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your abilities.$"
# 189 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 190 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_DontHaveRoomForThis::
# 191 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You don't have room for this.$"
# 192 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 193 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamIntro::
# 194 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Stop right there, kid!\p"
# 195 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're ten thousand light-years \n"
# 196 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from facing BROCK!$"
# 197 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 198 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamDefeat::
# 199 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Darn!\p"
# 200 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Light-years isn't time…\n"
# 201 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It measures distance!$"
# 202 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 203 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamPostBattle::
# 204 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're pretty hot.\n"
# 205 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "…But not as hot as BROCK!$"
# 206 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 207 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetMeTakeYouToTheTop::
# 208 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Hiya!\n"
# 209 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you want to dream big?\p"
# 210 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you dare to dream of becoming\n"
# 211 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the POKéMON champ?\p"
# 212 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'm no TRAINER, but I can advise\n"
# 213 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you on how to win.\p"
# 214 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let me take you to the top!$"
# 215 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 216 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetsGetHappening::
# 217 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "All right!\n"
# 218 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 219 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 220 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TryDifferentPartyOrders::
# 221 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "The first POKéMON out in a match is\n"
# 222 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "at the left of the POKéMON LIST.\p"
# 223 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "By changing the order of POKéMON,\n"
# 224 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you may gain an advantage.\p"
# 225 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Try different orders to suit your\n"
# 226 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "opponent's party.$"
# 227 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 228 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ItsFreeLetsGetHappening::
# 229 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It's a free service!\n"
# 230 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 231 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 232 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_YoureChampMaterial::
# 233 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Just as I thought!\n"
# 234 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're POKéMON champ material!$"
# 235 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 236 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatue::
# 237 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 238 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 239 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 240 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 241 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 242 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatuePlayerWon::
# 243 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 244 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 245 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 246 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 247 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 248 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_RulesExplain::
# 249 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "However, there is a condition.\p"
# 250 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "Gym battles require challengers to\n"
# 251 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "use the same amount of Pokemon.\p"
# 252 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "A true Trainer must show adaptability\n"
# 253 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "within limits.\p"
# 254 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "Would you like to access the PC to\n"
# 255 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "organize your team?$"
# 256 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 257 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_Refused::
# 258 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "Come back when you have exactly\n"
# 259 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "four Pokémon.\p"
# 260 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "Discipline is the foundation of\n"
# 261 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "victory.$"
# 262 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 263 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_StillNot4::
# 264 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "You still don't have exactly\n"
# 265 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "four Pokémon.\p"
# 266 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "I cannot battle a Trainer who\n"
# 267 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "ignores the rules.$"
# 268 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 269 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockReady::
# 270 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "I see you've prepared your team.\n"
# 271 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "Your determination is solid.\p"
# 272 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    .string "Now, show me your rock-hard will!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

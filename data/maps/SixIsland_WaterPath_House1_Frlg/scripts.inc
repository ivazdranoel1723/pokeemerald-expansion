# 1 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Frlg_MapScripts::
# 3 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 5 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty::
# 6 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HERACROSS
# 9 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 10 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty
# 11 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 12 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
# 13 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special ChoosePartyMon
# 14 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	waitstate
# 15 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 16 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_ge VAR_RESULT, PARTY_SIZE, SixIsland_WaterPath_House1_EventScript_DontShowMon
# 17 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special CompareHeracrossSize
# 18 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SixIsland_WaterPath_House1_EventScript_ShownNonHeracross
# 19 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross
# 20 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 21 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 4, SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross
# 22 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 23 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 24 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 25 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty::
# 26 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
# 27 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 28 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 29 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 30 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_DontShowMon::
# 31 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 32 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 33 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 34 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownNonHeracross::
# 35 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
# 36 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 37 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 38 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 39 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross::
# 40 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 41 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest
# 42 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 43 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 44 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 45 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross::
# 46 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 47 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore
# 48 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 49 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 50 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 51 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownBigHeracross::
# 52 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
# 53 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward
# 54 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	giveitem ITEM_NEST_BALL
# 55 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall
# 56 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
# 57 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 58 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 59 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 60 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall::
# 61 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
# 62 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 63 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 64 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 65 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecord::
# 66 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lockall
# 67 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty
# 68 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
# 69 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
# 70 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 71 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 72 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty::
# 73 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 74 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches
# 75 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
# 76 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 77 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 78 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross::
# 79 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Hera, hera, HERACROSS!\n"
# 80 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Big and shiny, it's the bug boss!\l"
# 81 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Love it, need it, HERACROSS!$"
# 82 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 83 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_MayIMeasureHeracross::
# 84 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeeek!\n"
# 85 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "That's a HERACROSS!\p"
# 86 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Please, please, may I measure how\n"
# 87 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "big it is?$"
# 88 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 89 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward::
# 90 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeek, it's {STR_VAR_2} inches!\n"
# 91 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I've never seen anything like this!\l"
# 92 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "You deserve a reward!$"
# 93 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 94 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne::
# 95 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I want to see a much, much bigger\n"
# 96 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS than that one.\p"
# 97 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, how I adore them, big\n"
# 98 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS!$"
# 99 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 100 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore::
# 101 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Huh? This {STR_VAR_2}-inch measurement…\n"
# 102 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, boo! It's the same as before.$"
# 103 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 104 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest::
# 105 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, it's just {STR_VAR_2} inches.\n"
# 106 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The HERACROSS before was bigger.\p"
# 107 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It was {STR_VAR_3} inches, the biggest\n"
# 108 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS you've brought me.$"
# 109 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 110 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ThisWontDo::
# 111 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, no! This won't do!\p"
# 112 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS looks much more macho\n"
# 113 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "and cool, and has a lovely horn!$"
# 114 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 115 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_YourBagIsFull::
# 116 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Your BAG is full.\n"
# 117 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "My reward won't fit.$"
# 118 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 119 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches::
# 120 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The biggest HERACROSS that I have\n"
# 121 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "ever seen measured so far is:\p"
# 122 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "{STR_VAR_3} inches!$"
# 123 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 124 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort::
# 125 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
# 126 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It has spaces for writing in\n"
# 127 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "records of some kind.$"

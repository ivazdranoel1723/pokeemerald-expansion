# 1 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 3 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 4 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ HAS_TINY_MUSHROOMS, FLAG_TEMP_3
# 5 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ HAS_BOTH_MUSHROOMS, FLAG_TEMP_4
# 6 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 7 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Frlg_MapScripts::
# 8 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.byte 0
# 9 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 10 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_MoveManiac::
# 11 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	lock
# 12 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 14 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 15 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 16 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 17 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
# 18 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 19 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 20 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 21 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 22 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms::
# 23 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 24 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasBigMushroom
# 25 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 2
# 26 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasTinyMushrooms
# 27 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms
# 28 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_CheckAlsoHasBigMushroom
# 29 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 30 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 31 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 32 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms::
# 33 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_SetHasBothMushrooms
# 34 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 35 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 36 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 37 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasBigMushroom::
# 38 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_SetHasBothMushrooms
# 39 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 40 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 41 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 42 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_AskTutorMon::
# 43 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
# 44 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_House_EventScript_EndTutorMove
# 45 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 46 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 47 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 48 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor::
# 49 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TutorWhichMon
# 50 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special ChooseMonForMoveRelearner
# 51 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitstate
# 52 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, TwoIsland_House_EventScript_EndTutorMove
# 53 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 54 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_CantTutorEgg
# 55 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_0x8005, 0, TwoIsland_House_EventScript_NoMoveToTutorMon
# 56 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach
# 57 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 58 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 59 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach::
# 60 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachWhichMove
# 61 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special TeachMoveRelearnerMove
# 62 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitstate
# 63 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_0x8004, 0, TwoIsland_House_EventScript_ChooseMonToTutor
# 64 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, TwoIsland_House_EventScript_ChooseMushroom
# 65 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_GiveBigMushroom
# 66 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_GiveTinyMushrooms
# 67 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 68 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 69 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_GiveBigMushroom::
# 70 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 71 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 72 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
# 73 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 74 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 75 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 76 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 77 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_GiveTinyMushrooms::
# 78 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
# 79 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 80 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
# 81 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 82 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 83 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 84 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 85 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMushroom::
# 86 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
# 87 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitmessage
# 88 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_MUSHROOMS, TRUE
# 89 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 0, TwoIsland_House_EventScript_GiveTinyMushrooms
# 91 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 1, TwoIsland_House_EventScript_GiveBigMushroom
# 92 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 93 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 94 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_NoMoveToTutorMon::
# 95 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
# 96 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 97 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 98 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 99 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CantTutorEgg::
# 100 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_CantTeachAnEgg
# 101 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 102 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 103 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 104 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_EndTutorMove::
# 105 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
# 106 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	release
# 107 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 108 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 109 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasBigMushroom::
# 110 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 111 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 112 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 113 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasTinyMushrooms::
# 114 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 115 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 116 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 117 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasBothMushrooms::
# 118 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 119 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 120 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 121 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TeachMonMoveForMushroom::
# 122 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm the POKéMON MOVE MANIAC.\p"
# 123 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I know every single move that\n"
# 124 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "POKéMON learn growing up.\p"
# 125 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm also a mushroom maniac.\p"
# 126 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Bring me two TINYMUSHROOMS,\n"
# 127 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "or one BIG MUSHROOM.\p"
# 128 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If you do that for me, I'll teach\n"
# 129 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "a move to one POKéMON.$"
# 130 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 131 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_WantMeToTeachMove::
# 132 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sniff, sniff…\n"
# 133 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hm! You smell of MUSHROOMS!\p"
# 134 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Do you want me to teach a move\n"
# 135 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "to a POKéMON of yours?$"
# 136 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 137 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TutorWhichMon::
# 138 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 139 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 140 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TeachWhichMove::
# 141 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which move should I teach?$"
# 142 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 143 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_NoMoveICanTeachThatMon::
# 144 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sorry…\p"
# 145 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "It doesn't appear as if I have a\n"
# 146 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "move I can teach that POKéMON.$"
# 147 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 148 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_IllNeedMushroomOrTwo::
# 149 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Then, I'll need a MUSHROOM or two.\n"
# 150 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "What are you going to give me?$"
# 151 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 152 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_HandedOverTwoTinyMushrooms::
# 153 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over two\n"
# 154 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "TINYMUSHROOMS in exchange.$"
# 155 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 156 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_HandedOverOneBigMushroom::
# 157 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over one\n"
# 158 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "BIG MUSHROOM in exchange.$"
# 159 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 160 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove::
# 161 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If your POKéMON need to learn a\n"
# 162 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "move, I need a MUSHROOM or two.$"
# 163 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 164 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_CantTeachAnEgg::
# 165 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hunh? There isn't a single move\n"
# 166 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "that I can teach an EGG.$"

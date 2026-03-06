# 1 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_NameRater::
# 6 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	lock
# 7 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
# 9 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseMon
# 10 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
# 11 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 12 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 13 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseMon::
# 14 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
# 15 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	waitstate
# 17 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_lt VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_CheckCanRateMon
# 18 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_DontRateNickname
# 19 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 20 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 21 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_DontRateNickname::
# 22 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
# 23 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 24 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 25 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 26 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon::
# 27 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 28 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, LavenderTown_House2_EventScript_CantNicknameEgg
# 29 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 30 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special IsMonOTIDNotPlayers
# 31 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
# 32 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 33 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 34 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
# 35 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
# 36 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseNewNickname
# 37 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
# 38 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 39 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 40 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CantNicknameEgg::
# 41 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
# 42 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 43 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 44 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 45 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CantNicknameTradeMon::
# 46 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
# 47 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 48 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 49 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 50 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseNewNickname::
# 51 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
# 52 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 53 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 54 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 55 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_ChoseNewNickname
# 56 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
# 57 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 58 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 59 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 60 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChoseNewNickname::
# 61 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
# 62 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 63 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 64 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 65 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_WantMeToRateNicknames::
# 66 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Hello, hello!\n"
# 67 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I am the official NAME RATER!\p"
# 68 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Want me to rate the nicknames of\n"
# 69 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "your POKéMON?$"
# 70 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 71 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_CritiqueWhichMonsNickname::
# 72 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Which POKéMON's nickname should\n"
# 73 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I critique?$"
# 74 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 75 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_GiveItANicerName::
# 76 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
# 77 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is a decent nickname!\p"
# 78 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "But, would you like me to give it\n"
# 79 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "a nicer name?\p"
# 80 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How about it?$"
# 81 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 82 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_WhatShallNewNicknameBe::
# 83 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 84 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "nickname be?$"
# 85 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 86 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_FromNowOnShallBeKnownAsName::
# 87 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 88 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 89 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "It is a better name than before!\n"
# 90 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How fortunate for you!$"
# 91 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 92 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_ISeeComeVisitAgain::
# 93 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I see.\n"
# 94 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Do come visit again.$"
# 95 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 96 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName::
# 97 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 98 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 99 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "It looks no different from before,\n"
# 100 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 101 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How fortunate for you!$"
# 102 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 103 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_TrulyImpeccableName::
# 104 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
# 105 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is a truly impeccable name!\p"
# 106 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Take good care of {STR_VAR_1}!$"
# 107 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 108 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_ThatIsMerelyAnEgg::
# 109 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Now, now.\n"
# 110 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is merely an EGG!$"

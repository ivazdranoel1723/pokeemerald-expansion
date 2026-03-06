# 1 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_MoveDeleter::
# 6 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	lock
# 7 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
# 9 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 10 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
# 11 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 12 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 13 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter::
# 14 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMonShouldForgetMove
# 15 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	waitstate
# 17 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FuchsiaCity_House3_EventScript_CancelForgetMove
# 18 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 19 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_House3_EventScript_CantForgetMoveEgg
# 20 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special GetNumMovesSelectedMonHas
# 21 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House3_EventScript_CantForgetOnlyMove
# 22 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten
# 23 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 25 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 26 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 27 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 28 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 29 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ForgetMove
# 30 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
# 31 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 32 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 33 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ForgetMove::
# 34 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterForgetMove
# 35 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 36 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	waitfanfare
# 37 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely
# 38 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 39 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 40 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 41 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CantForgetOnlyMove::
# 42 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 43 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonOnlyKnowsOneMove
# 44 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 45 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 46 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 47 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CantForgetMoveEgg::
# 48 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_NoEggShouldKnowMoves
# 49 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 50 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 51 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 52 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CancelForgetMove::
# 53 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves
# 54 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 55 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 56 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 57 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WouldYouLikeToForgetMove::
# 58 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Uh…\n"
# 59 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
# 60 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "I can make POKéMON forget their\n"
# 61 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "moves.\p"
# 62 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Would you like me to do that?$"
# 63 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 64 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WhichMonShouldForgetMove::
# 65 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which POKéMON should forget a\n"
# 66 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "move?$"
# 67 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 68 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten::
# 69 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which move should be forgotten?$"
# 70 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 71 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonOnlyKnowsOneMove::
# 72 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_1} seems to know only one\n"
# 73 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "move…$"
# 74 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 75 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten::
# 76 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 77 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "That move should be forgotten?$"
# 78 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 79 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely::
# 80 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "It worked to perfection!\p"
# 81 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 82 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 83 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 84 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves::
# 85 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Come again if there are other\n"
# 86 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "moves to be forgotten.$"
# 87 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 88 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_NoEggShouldKnowMoves::
# 89 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "What?\n"
# 90 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "No EGG should know any moves.$"

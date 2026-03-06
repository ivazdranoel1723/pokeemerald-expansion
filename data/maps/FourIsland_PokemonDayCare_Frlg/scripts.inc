# 1 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_Frlg_MapScripts::
# 3 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 5 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 6 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	lock
# 7 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 9 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_PokemonDayCare_EggWaiting
# 10 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_OneMonInDaycare
# 11 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_PokemonDayCare_TwoMonsInDaycare
# 12 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 13 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 14 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
# 15 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 16 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 17 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 18 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise::
# 19 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 20 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FourIsland_PokemonDayCare_OnlyOneMonInParty
# 21 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 22 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ChooseSendDaycareMon
# 24 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitstate
# 25 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FourIsland_PokemonDayCare_ComeAgain
# 26 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 27 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FourIsland_PokemonDayCare_OnlyOneAliveMonInParty
# 28 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 29 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 30 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 31 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 32 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
# 33 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 34 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	callnative UpdateFollowingPokemon
# 35 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 36 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 37 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CanRaiseOneMore
# 38 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 39 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 40 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 41 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_ComeAgain::
# 42 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 43 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 44 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 45 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 46 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore::
# 47 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 48 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 49 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 50 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 51 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 52 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneMonInParty::
# 53 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
# 54 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 55 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 56 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 57 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneAliveMonInParty::
# 58 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
# 59 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 60 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 61 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 62 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EggWaiting::
# 63 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
# 64 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 65 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 66 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 67 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_MonHasGrownXLevels::
# 68 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
# 69 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	return
# 70 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 71 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained::
# 72 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 73 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call_if_ne VAR_RESULT, 0, FourIsland_PokemonDayCare_MonHasGrownXLevels
# 74 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	return
# 75 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 76 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare::
# 77 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 78 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 79 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 80 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 81 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 82 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 83 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 84 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 85 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 86 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 87 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon::
# 88 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 89 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FourIsland_PokemonDayCare_NoRoomInParty
# 90 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 91 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 92 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CostPrompt
# 93 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 94 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitstate
# 95 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 96 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, FourIsland_PokemonDayCare_ComeAgain
# 97 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
# 98 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 99 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 100 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt::
# 101 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special GetDaycareCost
# 102 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 103 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_CheckEnoughMoney
# 104 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 105 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 106 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 107 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney::
# 108 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 109 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_RetrieveMon
# 110 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
# 111 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 112 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 113 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 114 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon::
# 115 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 116 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmovement 0
# 117 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 118 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 119 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playse SE_SHOP
# 120 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 121 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 122 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 123 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 124 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 125 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 126 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
# 127 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 128 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_AskRetrieveOtherMon
# 129 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 130 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 131 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 132 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon::
# 133 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 134 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 135 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 136 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 137 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 138 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_NoRoomInParty::
# 139 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
# 140 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 141 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 142 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 143 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon::
# 144 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 145 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 146 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_right
# 147 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 148 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 149 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_left
# 150 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 151 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 152 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_up
# 153 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	walk_slow_up
# 154 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_invisible
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 156 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 157 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 158 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 159 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 160 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_down
# 161 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_visible
# 162 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	walk_slow_down
# 163 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	step_end
# 164 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 165 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
@ Unused. Possibly a commented script, or a typo end added to the above Movement script
# 166 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedEnd::
# 167 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 168 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 169 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 170 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 171 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 172 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 173 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 174 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 175 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 176 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 177 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 178 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 179 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 180 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 181 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
@ Unused
# 182 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 183 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 184 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitstate
# 185 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, FourIsland_PokemonDayCare_ComeAgain
# 186 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 187 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 188 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 189 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 190 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 191 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end

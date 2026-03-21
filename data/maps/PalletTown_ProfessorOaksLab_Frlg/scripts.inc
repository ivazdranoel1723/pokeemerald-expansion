# 1 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 3 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 4 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 5 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 6 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 7 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 8 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 9 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Frlg_MapScripts::
# 10 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 11 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 12 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 13 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.byte 0
# 14 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 15 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 17 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 18 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 19 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 20 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 21 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 22 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 23 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 24 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 25 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 26 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 27 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 28 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 29 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 33 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_RG_OAK
# 35 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 36 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 37 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 38 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 39 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 42 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 43 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 44 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 46 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 48 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 49 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 51 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 52 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 53 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 54 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 55 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 57 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 58 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 59 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 60 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 62 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 63 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 69 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 71 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 72 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 76 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 77 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 78 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 82 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 83 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 84 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 86 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 89 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 91 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 98 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 99 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 60
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_Birchs_Bag
# 227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_PIN
# 346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 25
# 371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    end
# 518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    end
# 521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    end
# 524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 70
# 538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Unused
# 600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Unused
# 628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	checkitem ITEM_POKE_BALL
# 657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 687 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 698 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 701 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 702 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 711 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 712 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 713 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 714 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 717 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 718 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 720 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 722 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 723 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 726 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 727 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 728 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 729 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 731 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 732 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 733 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 734 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 735 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 736 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 737 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 738 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 739 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 741 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 742 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 743 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 744 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 745 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 746 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 747 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 748 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 749 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 750 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 751 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 752 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 753 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 754 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 755 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 757 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 759 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 760 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 762 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 764 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 765 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 766 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 767 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 768 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 769 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 770 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 771 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 772 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 773 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 774 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 777 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 778 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 779 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 781 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 782 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 784 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 785 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 786 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 787 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 789 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 791 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 792 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 793 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 794 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 795 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 796 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 798 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 799 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 800 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 801 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 803 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 804 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 805 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 806 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 808 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Birchs_Bag::
# 809 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 810 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	callnative StartNewPokeballCaseUI
# 811 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitstate
# 812 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_ProfessorOaksLab_EventScript_BirchsBag_AlreadyUsed
# 813 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_MUDKIP_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedMudkip
# 814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_TREECKO_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedTreecko
# 815 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_TORCHIC_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedTorchic
# 816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_CHIKORITA_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedChikorita
# 817 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_TOTODILE_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedTotodile
# 818 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_CYNDAQUIL_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedCyndaquil
# 819 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_BULBASAUR_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedBulbasaur
# 820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_CHARMANDER_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedCharmander
# 821 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_CHOSE_SQUIRTLE_BALL, PalletTown_ProfessorOaksLab_EventScript_ReceivedSquirtle
# 822 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 823 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 824 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 825 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedSquirtle::
# 826 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUIRTLE
# 827 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 828 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 829 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 830 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 832 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 833 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 834 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalBulbasaur
# 835 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 836 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 837 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedTotodile::
# 838 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOTODILE
# 839 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 840 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 841 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 843 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 844 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 845 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 846 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalBulbasaur
# 847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 848 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 849 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedMudkip::
# 850 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MUDKIP
# 851 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 852 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 853 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 854 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 856 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 857 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 858 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalBulbasaur
# 859 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 860 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 861 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedCharmander::
# 862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHARMANDER
# 863 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 864 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 866 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 867 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 868 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 869 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalSquirtle
# 871 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 872 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 873 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedCyndaquil::
# 874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 875 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 876 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 877 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 879 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 880 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 881 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 882 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalSquirtle
# 883 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 884 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 885 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedTorchic::
# 886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TORCHIC
# 887 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 888 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 889 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 890 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 892 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 893 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 894 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalSquirtle
# 895 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 896 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 897 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedBulbasaur::
# 898 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
# 899 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 900 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 901 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 902 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 903 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 905 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 906 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalCharmander
# 907 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 908 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 909 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedChikorita::
# 910 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 912 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 913 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 914 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 915 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 916 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 917 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 918 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalCharmander
# 919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 920 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 921 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceivedTreecko::
# 922 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TREECKO
# 923 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 924 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 926 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 927 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 928 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_SetRivalCharmander
# 931 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 932 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 933 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BirchsBag_AlreadyUsed::
# 934 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BirchsBagEmpty
# 935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 936 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 937 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 938 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_SetRivalSquirtle::
# 939 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 940 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBag
# 941 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_SetRivalCharmander::
# 943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 944 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBag
# 945 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 946 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_SetRivalBulbasaur::
# 947 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 948 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBag
# 949 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 950 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBag::
# 951 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBag
# 952 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 953 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalReceivesStarter
# 954 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 955 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBag::
# 956 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 958 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 959 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 960 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalReceivesStarter::
# 961 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 963 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 964 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RIVAL_STARTER_SPECIES
# 965 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 966 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 967 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 969 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 970 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 971 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 972 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 974 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 975 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 976 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 978 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 979 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 980 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 981 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 982 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 983 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 984 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 985 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 987 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 988 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3
# 989 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 990 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 991 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 992 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special HealPlayerParty
# 994 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 995 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 996 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 997 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 998 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 999 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 1000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 1001 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_EXIT
# 1002 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 1003 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 1004 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 1005 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1006 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 1009 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 1010 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 1011 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 1012 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1013 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1014 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 1015 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 1016 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 1017 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 1018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1019 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1020 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 1021 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 1022 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 1023 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 1024 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1025 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1026 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 1027 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1028 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1029 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1031 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1032 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1033 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1034 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1036 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 1037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1038 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1039 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1040 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1041 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1042 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1043 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1044 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1045 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1046 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 1047 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1048 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1049 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1050 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1051 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1052 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1053 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1054 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1056 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1057 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 1058 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1059 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1060 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 1061 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1063 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1064 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1065 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 1066 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1067 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1068 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 1069 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1070 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1071 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1072 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1073 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 1074 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1075 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 1076 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1077 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1078 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1079 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1080 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 1081 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1082 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 1083 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1084 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 1085 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 1086 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 1087 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1088 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1089 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 1090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 1091 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 1092 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1093 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 1094 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 1095 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 1096 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 1097 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1098 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1099 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 1100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 1101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 1103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 1106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 1107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 1109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 1112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 1113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 1115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 1118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 1119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 1120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 1123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 1131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 1138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 1144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 1145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 1146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 1147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 1150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 1151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 1153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 1156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 1157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 1159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 1162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 1163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 1165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 1168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 1169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 1170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 1173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 1181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 1188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 1194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 1195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 1196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 1197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 1200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 1201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 1203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 1206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 1207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 1209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 1212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 1213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 1215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 1218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 1219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 1220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 1223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 1231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    walk_down
# 1235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 1238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 1294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 1305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: What, it's only {PLAYER}?\n"
# 1306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps isn't around.$"
# 1307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 1309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
# 1310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'm fed up with waiting!$"
# 1311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 1313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
# 1314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What about me?$"
# 1315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 1317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
# 1318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "greedy like you. I'm mature!\p"
# 1319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go ahead and choose, {PLAYER}!$"
# 1320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 1322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"
# 1323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 1325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
# 1326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 1327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 1329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
# 1330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tougher than yours.$"
# 1331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 1333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
# 1334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Let's check out our POKéMON!\p"
# 1335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Come on, I'll take you on!$"
# 1336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 1338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "WHAT?\n"
# 1339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Unbelievable!\l"
# 1340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I picked the wrong POKéMON!$"
# 1341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Also used for early Route 22 battle
# 1343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
Text_RivalVictory::
# 1344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Yeah!\n"
# 1345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Am I great or what?$"
# 1346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 1348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
# 1349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON battle to toughen it up!\p"
# 1350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}! Gramps!\n"
# 1351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Smell you later!$"
# 1352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 1354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!$"
# 1355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 1357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I almost forgot!\n"
# 1358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What did you call me for?$"
# 1359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 1361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
# 1362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Leave it all to me!$"
# 1363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 1365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
# 1366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "won't be necessary for this.\p"
# 1367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I know! I'll borrow a TOWN MAP\n"
# 1368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from my sis!\p"
# 1369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll tell her not to lend you one,\n"
# 1370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}! Hahaha!\p"
# 1371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't bother coming around to\n"
# 1372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "my place after this!$"
# 1373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 1375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "OAK: {RIVAL}?\n"
# 1376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Let me think…\p"
# 1377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Oh, that's right, I told you to\n"
# 1378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "come! Just wait!\p"
# 1379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Here, {PLAYER}.\p"
# 1380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "There are several POKéMON here.\p"
# 1381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Haha!\p"
# 1382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Some are from KANTO, of course…\n"
# 1383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "but others were sent by my\n"
# 1384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "colleagues in JOHTO and HOENN.\p"
# 1385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "They’re all fine young POKéMON,\n"
# 1386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "full of potential.\p"
# 1387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "When I was young, I was a serious\n"
# 1388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "POKéMON TRAINER.\p"
# 1389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "But now, in my old age, I’ve taken\n"
# 1390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "to raising a wider variety.\p"
# 1391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "You can have one.\n"
# 1392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "Go on, choose!$"
# 1393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBePatientRival::
# 1395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
# 1396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You can have one, too!$"
# 1397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 1399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
# 1400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Inside those three POKé BALLS are\n"
# 1401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 1402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Which one will you choose for\n"
# 1403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "yourself?$"
# 1404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 1406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Hey!\n"
# 1407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't go away yet!$"
# 1408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 1410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This POKéMON is really quite\n"
# 1411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "energetic!$"
# 1412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 1414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 1415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 1416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 1418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: If a wild POKéMON appears,\n"
# 1419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your POKéMON can battle it.\p"
# 1420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "With it at your side, you should be\n"
# 1421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "able to reach the next town.$"
# 1422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 1424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
# 1425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON by making it battle.\p"
# 1426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It has to battle for it to grow.$"
# 1427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 1429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
# 1430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is my old POKéMON?\p"
# 1431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Well, it seems to be growing more\n"
# 1432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "attached to you.\p"
# 1433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You must be talented as a POKéMON\n"
# 1434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 1435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What's that?\n"
# 1436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You have something for me?$"
# 1437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 1439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"
# 1440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 1442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! \n"
# 1443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's the custom POKé BALL!\p"
# 1444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I had it on order.\n"
# 1445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Thank you!$"
# 1446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 1448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, right!\n"
# 1449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I have a request for you two.$"
# 1450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 1452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "On the desk there is my invention,\n"
# 1453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéDEX!\p"
# 1454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It automatically records data on\n"
# 1455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON you've seen or caught.\p"
# 1456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's a high-tech encyclopedia!$"
# 1457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 1459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL}.\n"
# 1460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Take these with you.$"
# 1461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 1463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
# 1464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK.$"
# 1465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 1467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: You can't get detailed data\n"
# 1468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "on POKéMON by just seeing them.\p"
# 1469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You must catch them to obtain\n"
# 1470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "complete data.\p"
# 1471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, here are some tools for\n"
# 1472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "catching wild POKéMON.$"
# 1473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 1475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received five POKé BALLS.$"
# 1476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 1478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "When a wild POKéMON appears,\n"
# 1479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "it's fair game.\p"
# 1480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Just throw a POKé BALL at it and\n"
# 1481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "try to catch it!\p"
# 1482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This won't always work, however.\p"
# 1483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A healthy POKéMON can escape.\n"
# 1484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You have to be lucky!$"
# 1485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 1487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "To make a complete guide on all\n"
# 1488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéMON in the world…\p"
# 1489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That was my dream!\p"
# 1490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "But, I'm too old.\n"
# 1491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I can't get the job done.\p"
# 1492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, I want you two to fulfill my\n"
# 1493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "dream for me.\p"
# 1494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Get moving, you two.\p"
# 1495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a great undertaking in\n"
# 1496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON history!$"
# 1497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait::
# 1499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON around the world wait for\n"
# 1500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "you, {PLAYER}!$"
# 1501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 1503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
# 1504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is your POKéDEX shaping up?\p"
# 1505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} has already caught some\n"
# 1506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON and added to the data.\p"
# 1507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, let's have a look at\n"
# 1508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your POKéDEX.\p"
# 1509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…What's the matter?\n"
# 1510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You've added no new data at all.\p"
# 1511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll give you these, so do try a\n"
# 1512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "little harder.$"
# 1513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime::
# 1515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Come see me sometime.\p"
# 1516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "After all, I want to know how your\n"
# 1517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEX is coming along.$"
# 1518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 1520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
# 1521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "pages are blank.$"
# 1522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 1524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Those are POKé BALLS.\n"
# 1525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "They contain POKéMON!$"
# 1526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 1528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"
# 1529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 1531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"
# 1532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 1534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
# 1535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Use it regularly.$"
# 1536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 1538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "All POKéMON types have strong and\n"
# 1539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "weak points against others.$"
# 1540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 1542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There's an e-mail message here.\p"
# 1543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…\p"
# 1544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Finally!\n"
# 1545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The ultimate TRAINERS of the\l"
# 1546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE are ready to\l"
# 1547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "take on all comers!\p"
# 1548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Bring your best POKéMON and see\n"
# 1549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "how you rate as a TRAINER!\p"
# 1550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE HQ\n"
# 1551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "INDIGO PLATEAU\p"
# 1552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK, please visit us!\n"
# 1553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…$"
# 1554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide::
# 1556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
# 1557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "AIDE.$"
# 1558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 1560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hi, {PLAYER}. I bet you've become\n"
# 1561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "good friends with your POKéMON.\p"
# 1562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "By the way, did you know about\n"
# 1563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "DAISY?\p"
# 1564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "If you show DAISY your POKéMON,\n"
# 1565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "she can tell how much it likes you.\p"
# 1566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Occasionally, she will even groom\n"
# 1567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a POKéMON for you.\p"
# 1568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a secret, so please don't\n"
# 1569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tell anyone.$"
# 1570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow::
# 1572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
# 1573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "radio show soon.\p"
# 1574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The program will be called PROF.\n"
# 1575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK's POKéMON SEMINAR.$"
# 1576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 1578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
# 1579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "but he's the authority on POKéMON.\p"
# 1580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Many POKéMON TRAINERS hold him in\n"
# 1581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "high regard.$"
# 1582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 1584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, now this is excellent!\p"
# 1585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I have another important\n"
# 1586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "favor to ask of you.\p"
# 1587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I need you to listen closely.$"
# 1588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 1590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Recently, there have been sightings\n"
# 1591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "of many rare POKéMON species.\p"
# 1592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'm talking about POKéMON that\n"
# 1593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "have never been seen in KANTO.\p"
# 1594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I would love to go see things for\n"
# 1595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "myself, but I'm much too old.\p"
# 1596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Since I can't do it, {PLAYER}, I'd\n"
# 1597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "like you to go in my place.$"
# 1598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 1600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
# 1601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps, what's with favoring\n"
# 1602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} over me all the time?\p"
# 1603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I went and collected more POKéMON,\n"
# 1604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and faster, too.\p"
# 1605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You should just let me handle\n"
# 1606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "everything.$"
# 1607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 1609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: I know, I know.\n"
# 1610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Of course I need your help, too.\p"
# 1611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, I need to see both your\n"
# 1612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEXES.$"
# 1613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 1615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
# 1616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "units.$"
# 1617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 1619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 1620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 1621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…And that's done!\p"
# 1622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now these units can record data on\n"
# 1623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a lot more POKéMON.$"
# 1624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 1626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"
# 1627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 1629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
# 1630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This time, you really must work\n"
# 1631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "towards filling your POKéDEXES.\p"
# 1632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I urge you to make them the best\n"
# 1633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and the most complete of all time!\p"
# 1634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Truly, this is a monumentally great\n"
# 1635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "undertaking in POKéMON history!$"
# 1636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 1638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
# 1639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't get so excited.\p"
# 1640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll get the POKéDEX completed,\n"
# 1641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "don't you worry about a thing.\p"
# 1642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I think I'll try looking around\n"
# 1643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "ONE ISLAND first…\p"
# 1644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Anyways, I'm outta here!$"
# 1645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_BirchsBagEmpty::
# 1647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    .string "The bag is empty now.$"

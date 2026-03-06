# 1 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ FOUND_FIRST_SWITCH, FLAG_TEMP_1
# 3 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ SWITCH1_ID,         VAR_0x8004
# 4 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ SWITCH2_ID,         VAR_0x8005
# 5 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ TRASH_CAN_ID,       VAR_0x8008
# 6 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 7 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Frlg_MapScripts::
# 8 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
# 9 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
# 10 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.byte 0
# 11 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 12 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnLoad::
# 13 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_SetOneBeamOff
# 14 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
# 15 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 16 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 17 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetOneBeamOff::
# 18 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 19 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 20 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 21 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 22 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 23 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 24 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 25 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 26 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 27 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
# 28 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 29 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 30 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOff::
# 31 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 32 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 33 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
# 34 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 35 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 36 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 37 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 38 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
# 39 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 40 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
# 41 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 42 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 43 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnTransition::
# 44 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_InitTrashCans
# 45 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 46 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 47 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_InitTrashCans::
# 48 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, Common_EventScript_NopReturn
# 49 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 50 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 51 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 52 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 53 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 54 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan1::
# 55 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 56 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 1
# 57 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 58 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 59 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 60 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan2::
# 61 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 62 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 2
# 63 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 64 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 65 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 66 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan3::
# 67 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 68 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 3
# 69 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 70 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 71 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 72 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan4::
# 73 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 74 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 4
# 75 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 76 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 77 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 78 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan5::
# 79 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 80 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 5
# 81 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 82 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 83 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 84 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan6::
# 85 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 86 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 6
# 87 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 88 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 89 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 90 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan7::
# 91 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 92 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 7
# 93 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 94 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 95 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 96 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan8::
# 97 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 98 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 8
# 99 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 100 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 101 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 102 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan9::
# 103 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 104 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 9
# 105 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 106 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 107 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 108 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan10::
# 109 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 110 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 10
# 111 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 112 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 113 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 114 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan11::
# 115 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 116 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 11
# 117 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 118 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 119 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 120 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan12::
# 121 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 122 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 12
# 123 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 124 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 125 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 126 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan13::
# 127 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 128 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 13
# 129 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 130 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 131 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 132 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan14::
# 133 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 134 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 14
# 135 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 136 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 137 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 138 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan15::
# 139 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 140 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 15
# 141 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 142 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 143 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 144 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan::
# 145 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH1_ID, VAR_TEMP_0
# 146 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH2_ID, VAR_TEMP_1
# 147 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_LocksAlreadyOpen
# 148 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrySwitchTwo
# 149 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq SWITCH1_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchOne
# 150 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 151 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 152 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 153 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 154 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchOne::
# 155 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 156 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_PIN
# 157 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 158 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 159 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 160 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FOUND_FIRST_SWITCH
# 161 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 162 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 163 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 164 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrySwitchTwo::
# 165 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq SWITCH2_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchTwo
# 166 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
# 167 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FOUND_FIRST_SWITCH
# 168 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 169 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 170 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 171 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 172 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 173 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 174 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 175 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 176 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchTwo::
# 177 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 178 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	closemessage
# 179 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 180 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 181 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 182 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 183 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
# 184 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 185 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 186 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 187 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LocksAlreadyOpen::
# 188 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 189 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 190 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 191 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 192 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOn::
# 193 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 194 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 195 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
# 196 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 197 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 198 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 199 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 200 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
# 201 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 202 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
# 203 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 204 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 205 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge::
# 206 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    lock
# 207 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    faceplayer
# 208 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 209 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_LtSurgePostBattle
# 210 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 211 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    @ --- PARTY SIZE CHECK ---
# 212 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    getpartysize
# 213 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 5
# 214 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_eq VermilionCity_Gym_EventScript_StartBattle
# 215 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 216 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_LtSurgeIntro, MSGBOX_DEFAULT
# 217 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_RulesExplain, MSGBOX_YESNO
# 218 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, NO
# 219 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_eq VermilionCity_Gym_EventScript_Refused
# 220 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 221 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    special ShowPokemonStorageSystemPC
# 222 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    waitstate
# 223 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 224 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    getpartysize
# 225 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, 5
# 226 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_eq VermilionCity_Gym_EventScript_StartBattle_FromPC
# 227 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto VermilionCity_Gym_EventScript_StillNot5
# 228 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    @ -------------------------
# 229 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 230 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_StartBattle::
# 231 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    setstartingstatus STARTING_STATUS_ELECTRIC_TERRAIN
# 232 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 233 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_GiveTM34
# 234 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 235 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    release
# 236 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 237 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 238 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_StartBattle_FromPC::
# 239 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    setstartingstatus STARTING_STATUS_ELECTRIC_TERRAIN
# 240 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeReady, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 241 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_GiveTM34
# 242 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 243 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    release
# 244 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 245 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 246 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Refused::
# 247 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_Refused, MSGBOX_DEFAULT
# 248 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    release
# 249 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 250 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 251 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_StillNot5::
# 252 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_StillNot5, MSGBOX_DEFAULT
# 253 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    release
# 254 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 255 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 256 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 257 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    famechecker FAMECHECKER_LTSURGE, 1
# 258 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    call_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_ShowOaksAide
# 259 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 260 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    setflag FLAG_DEFEATED_LT_SURGE
# 261 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    setflag FLAG_BADGE03_GET
# 262 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    set_gym_trainers_frlg 3
# 263 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto VermilionCity_Gym_EventScript_GiveTM34
# 264 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 265 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 266 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_ShowOaksAide::
# 267 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 268 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    return
# 269 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 270 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34::
# 271 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 272 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    checkitemspace ITEM_TM34
# 273 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_NoRoomForTM34
# 274 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 275 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    setflag FLAG_GOT_TM34_FROM_SURGE
# 276 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_ExplainTM34
# 277 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 278 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_OfferPCRetrieve, MSGBOX_YESNO
# 279 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    compare VAR_RESULT, NO
# 280 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    goto_if_eq VermilionCity_Gym_EventScript_EndInteract
# 281 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    special ShowPokemonStorageSystemPC
# 282 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    waitstate
# 283 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 284 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_EndInteract::
# 285 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    release
# 286 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 287 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 288 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_NoRoomForTM34::
# 289 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 290 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    release
# 291 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 292 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 293 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 294 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Dwayne::
# 295 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 296 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 297 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 299 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 300 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Baily::
# 301 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Text_BailyIntro, VermilionCity_Gym_Text_BailyDefeat
# 302 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 304 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 305 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Tucker::
# 306 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Text_TuckerIntro, VermilionCity_Gym_Text_TuckerDefeat, VermilionCity_Gym_EventScript_DefeatedTucker
# 307 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 308 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 310 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 311 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedTucker::
# 312 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
# 313 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 314 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 315 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 316 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy::
# 317 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lock
# 318 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	faceplayer
# 319 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuyPostVictory
# 320 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 321 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 322 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 323 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 324 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 325 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 326 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 327 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 328 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 329 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatue::
# 330 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 331 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
# 332 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
# 333 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 334 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 335 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 336 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 337 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
# 338 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 339 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 340 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 341 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LtSurgePostBattle::
# 342 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 343 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    release
# 344 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    end
# 345 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 346 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeIntro::
# 347 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey, kid! What do you think you're\n"
# 348 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "doing here?\p"
# 349 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You won't live long in combat!\n"
# 350 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Not with your puny power!\p"
# 351 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I tell you, kid, electric POKéMON\n"
# 352 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "saved me during the war!\p"
# 353 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "They zapped my enemies into\n"
# 354 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "paralysis!\p"
# 355 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The same as I'll do to you!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 356 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 357 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgePostBattle::
# 358 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "A little word of advice, kid!\p"
# 359 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Electricity is sure powerful!\p"
# 360 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "But, it's useless against GROUND-\n"
# 361 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "type POKéMON!$"
# 362 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 363 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis::
# 364 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The THUNDERBADGE cranks up your\n"
# 365 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON's SPEED!\p"
# 366 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It also lets your POKéMON FLY\n"
# 367 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "lightning-quick anytime, kid!\p"
# 368 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're special, kid!\n"
# 369 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Take this!$"
# 370 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 371 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ReceivedTM34FromLtSurge::
# 372 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM34\n"
# 373 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "from LT. SURGE.$"
# 374 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 375 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainTM34::
# 376 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "TM34 contains SHOCK WAVE!\p"
# 377 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Teach it to an ELECTRIC POKéMON!$"
# 378 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 379 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_MakeRoomInYourBag::
# 380 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo, kid, make room in your BAG!$"
# 381 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 382 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeDefeat::
# 383 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Now that's a shocker!\p"
# 384 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're the real deal, kid!\p"
# 385 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fine, then, take the THUNDERBADGE!$"
# 386 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 387 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerIntro::
# 388 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When I was in the Army, LT. SURGE\n"
# 389 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "was my strict CO.\p"
# 390 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He was a hard taskmaster.$"
# 391 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 392 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerDefeat::
# 393 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Stop!\n"
# 394 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're very good!$"
# 395 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 396 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerPostBattle::
# 397 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It's not easy opening that door.\p"
# 398 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE was always famous for\n"
# 399 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "his cautious nature in the Army.$"
# 400 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 401 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyIntro::
# 402 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I'm a lightweight, but I'm good\n"
# 403 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "with electricity!\p"
# 404 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "That's why I joined this GYM.$"
# 405 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 406 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyDefeat::
# 407 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fried!$"
# 408 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 409 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyPostBattle::
# 410 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Okay, I'll talk!\p"
# 411 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE said he hid door\n"
# 412 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "switches inside something.$"
# 413 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 414 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwayneIntro::
# 415 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "This is no place for kids!\n"
# 416 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Not even if you're good!$"
# 417 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 418 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwayneDefeat::
# 419 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
# 420 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Surprised me!$"
# 421 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 422 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwaynePostBattle::
# 423 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE installed the traps in\n"
# 424 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "the GYM himself.\p"
# 425 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He set up double locks everywhere.\n"
# 426 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Let me give you a hint.\p"
# 427 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When you open the first lock, the\n"
# 428 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "second lock is right next to it.$"
# 429 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 430 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyAdvice::
# 431 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 432 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 433 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE has a nickname.\p"
# 434 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "People refer to him as the\n"
# 435 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Lightning American!\p"
# 436 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's an expert on electric\n"
# 437 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 438 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "BIRD/WATER-type POKéMON match\n"
# 439 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "poorly against the ELECTRIC type.\p"
# 440 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Beware of paralysis, too.\p"
# 441 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE is very cautious.\p"
# 442 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's locked himself in, so it won't\n"
# 443 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "be easy getting to him.$"
# 444 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 445 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyPostVictory::
# 446 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Whew!\n"
# 447 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "That match was electric!$"
# 448 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 449 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatue::
# 450 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
# 451 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\p"
# 452 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 453 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 454 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 455 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatuePlayerWon::
# 456 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
# 457 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\p"
# 458 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 459 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 460 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 461 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_NopeOnlyTrashHere::
# 462 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
# 463 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "There's only trash here.$"
# 464 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 465 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened::
# 466 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey! There's a switch under the\n"
# 467 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "trash! Turn it on!\p"
# 468 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The first electric lock opened!$"
# 469 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 470 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_SecondLockOpened::
# 471 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The second electric lock opened!\n"
# 472 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The motorized door opened!$"
# 473 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 474 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_OnlyTrashLocksWereReset::
# 475 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
# 476 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "There's only trash here.\p"
# 477 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey!\n"
# 478 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The electric locks were reset!$"
# 479 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 480 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_RulesExplain::
# 481 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "But listen up, rookie!\n"
# 482 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "This is a battlefield!\p"
# 483 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Gym battles require challengers\n"
# 484 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "use the same amount of Pokemon.\p"
# 485 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "I don't waste my time on\n"
# 486 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "undisciplined squads.\p"
# 487 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Do you want to access the Storage\n"
# 488 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "System to organize your unit?$"
# 489 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 490 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_Refused::
# 491 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Dismissed!\p"
# 492 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Come back when you learn to\n"
# 493 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "follow orders!$"
# 494 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 495 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_StillNot5::
# 496 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Maggot!\p"
# 497 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "You still don't have exactly\n"
# 498 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "five Pokémon!\p"
# 499 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "This is insubordination!\n"
# 500 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Get out of my face!$"
# 501 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 502 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_OfferPCRetrieve::
# 503 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "You've earned my respect, soldier.\p"
# 504 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Do you want to access the Storage\n"
# 505 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "System to retrieve your team?$"
# 506 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 507 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeReady::
# 508 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "At ease!\n"
# 509 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "You've organized your squad.\p"
# 510 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Now, prepare to feel the voltage!\n"
# 511 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Ten-hut!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

# 1 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_BadgeGuy::
# 6 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
# 9 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 10 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 11 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 12 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge::
# 13 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	message CeruleanCity_House1_Text_DescribeWhichBadge
# 14 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BADGES
# 16 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 17 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitstate
# 18 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 0, CeruleanCity_House1_EventScript_DescribeBoulderBadge
# 20 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 1, CeruleanCity_House1_EventScript_DescribeCascadeBadge
# 21 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 2, CeruleanCity_House1_EventScript_DescribeThunderBadge
# 22 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 3, CeruleanCity_House1_EventScript_DescribeRainbowBadge
# 23 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 4, CeruleanCity_House1_EventScript_DescribeSoulBadge
# 24 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 5, CeruleanCity_House1_EventScript_DescribeMarshBadge
# 25 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 6, CeruleanCity_House1_EventScript_DescribeVolcanoBadge
# 26 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 7, CeruleanCity_House1_EventScript_DescribeEarthBadge
# 27 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 8, CeruleanCity_House1_EventScript_StopDescribingBadges
# 28 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 127, CeruleanCity_House1_EventScript_StopDescribingBadges
# 29 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 30 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 31 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeBoulderBadge::
# 32 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AttackStatFlash
# 33 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 34 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 35 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 36 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeCascadeBadge::
# 37 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
# 38 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 39 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 40 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 41 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeThunderBadge::
# 42 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpeedStatFly
# 43 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 44 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 45 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 46 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeRainbowBadge::
# 47 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
# 48 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 49 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 50 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 51 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeSoulBadge::
# 52 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
# 53 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 54 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 55 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 56 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeMarshBadge::
# 57 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
# 58 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 59 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 60 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 61 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeVolcanoBadge::
# 62 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
# 63 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 64 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 65 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 66 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeEarthBadge::
# 67 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
# 68 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 69 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 70 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 71 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_StopDescribingBadges::
# 72 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
# 73 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	release
# 74 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 75 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 76 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_BadgesHaveAmazingSecrets::
# 77 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Only skilled TRAINERS can collect\n"
# 78 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON BADGES.\p"
# 79 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "I see you have at least one.\p"
# 80 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Those BADGES have amazing secrets,\n"
# 81 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "did you know?$"
# 82 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 83 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_DescribeWhichBadge::
# 84 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Now then…\p"
# 85 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Which of the eight BADGES should\n"
# 86 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "I describe?$"
# 87 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 88 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ComeVisitAnytime::
# 89 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Come visit me anytime you wish.$"
# 90 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 91 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_AttackStatFlash::
# 92 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The ATTACK stat of all your\n"
# 93 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 94 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 95 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "FLASH outside of battle.$"
# 96 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 97 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv30Cut::
# 98 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 will obey\n"
# 99 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 100 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 101 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 102 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 103 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 104 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 105 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "CUT outside of battle.$"
# 106 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 107 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_SpeedStatFly::
# 108 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SPEED stat of all your\n"
# 109 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 110 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 111 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "FLY outside of battle.$"
# 112 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 113 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv50Strength::
# 114 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 will obey\n"
# 115 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 116 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 117 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 118 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 119 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 120 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 121 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "STRENGTH outside of battle.$"
# 122 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 123 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_DefenseStatSurf::
# 124 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The DEFENSE stat of all your\n"
# 125 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 126 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 127 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "SURF outside of battle.$"
# 128 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 129 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv70RockSmash::
# 130 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 70 will obey\n"
# 131 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 132 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 133 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 134 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 135 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 136 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 137 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "ROCK SMASH outside of battle.$"
# 138 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 139 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_SpStatsWaterfall::
# 140 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SP. ATK and SP. DEF stats of\n"
# 141 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "all your POKéMON rise a little bit.\p"
# 142 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 143 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "WATERFALL outside of battle.$"
# 144 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 145 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_AllMonsWillObeyYou::
# 146 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "All POKéMON will obey you!$"

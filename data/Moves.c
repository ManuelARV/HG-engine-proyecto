#include "../include/move_data.h"

const MoveSourceEntry sMoveSource[NUM_OF_MOVES + 1] = {
    [MOVE_NONE] = {
        .names = {
            .name = "-",
            .capsName = "-",
            .fullName = "(!)",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 0,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "\\n\\n\\n\\n",
    },

    [MOVE_POUND] = {
        .names = {
            .name = "Destructor",
            .capsName = "DESTRUCTOR",
            .fullName = "Destructor",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Golpea con las\\npatas o la cola.",
    },

    [MOVE_KARATE_CHOP] = {
        .names = {
            .name = "Golpe Karate",
            .capsName = "GOLPE KARATE",
            .fullName = "Golpe Karate",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Da un golpe cortante.\\nSuele ser crítico.",
    },

    [MOVE_DOUBLE_SLAP] = {
        .names = {
            .name = "Doblebofetón",
            .capsName = "DOBLEBOFETÓN",
            .fullName = "Doblebofetón",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 15,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Abofetea de dos a\\ncinco veces seguidas.",
    },

    [MOVE_COMET_PUNCH] = {
        .names = {
            .name = "Puño Cometa",
            .capsName = "PUÑO COMETA",
            .fullName = "Puño Cometa",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 18,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Pega de dos a cinco\\nveces seguidas.",
    },

    [MOVE_MEGA_PUNCH] = {
        .names = {
            .name = "Megapuño",
            .capsName = "MEGAPUÑO",
            .fullName = "Megapuño",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Un puñetazo de\\ngran potencia.",
    },

    [MOVE_PAY_DAY] = {
        .names = {
            .name = "Día de Pago",
            .capsName = "DÍA DE PAGO",
            .fullName = "Día de Pago",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_PRIZE_MONEY,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Arroja monedas que\\nluego recupera.",
    },

    [MOVE_FIRE_PUNCH] = {
        .names = {
            .name = "Puño Fuego",
            .capsName = "PUÑO FUEGO",
            .fullName = "Puño Fuego",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Puñetazo ardiente.\\nPuede quemar.",
    },

    [MOVE_ICE_PUNCH] = {
        .names = {
            .name = "Puño Hielo",
            .capsName = "PUÑO HIELO",
            .fullName = "Puño Hielo",
        },
        .data = {
            .effect = MOVE_EFFECT_FREEZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Puñetazo helado.\\nPuede congelar.",
    },

    [MOVE_THUNDER_PUNCH] = {
        .names = {
            .name = "Puño Trueno",
            .capsName = "PUÑO TRUENO",
            .fullName = "Puño Trueno",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Puñetazo eléctrico.\\nPuede paralizar.",
    },

    [MOVE_SCRATCH] = {
        .names = {
            .name = "Arañazo",
            .capsName = "ARAÑAZO",
            .fullName = "Arañazo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Araña con afiladas\\ngarras.",
    },

    [MOVE_VICE_GRIP] = {
        .names = {
            .name = "Agarre",
            .capsName = "AGARRE",
            .fullName = "Agarre",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 55,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Atrapa con potentes\\npinzas.",
    },

    [MOVE_GUILLOTINE] = {
        .names = {
            .name = "Guillotina",
            .capsName = "GUILLOTINA",
            .fullName = "Guillotina",
        },
        .data = {
            .effect = MOVE_EFFECT_ONE_HIT_KO,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 30,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Pinzas que debilitan\\nal oponente de un\\ngolpe si aciertan.",
    },

    [MOVE_RAZOR_WIND] = {
        .names = {
            .name = "V. Cortante",
            .capsName = "V. CORTANTE",
            .fullName = "V. Cortante",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_HIGH_CRIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Primer turno:\\nprepara.\\nSegundo turno:\\nataca.\\nSuele ser crítico.",
    },

    [MOVE_SWORDS_DANCE] = {
        .names = {
            .name = "Danza Espada",
            .capsName = "DANZA ESPADA",
            .fullName = "Danza Espada",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Baile frenético que\\naumenta mucho\\nel Ataque.",
    },

    [MOVE_CUT] = {
        .names = {
            .name = "Corte",
            .capsName = "CORTE",
            .fullName = "Corte",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_NORMAL,
            .accuracy = 95,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Corta con garras,\\nguadañas, etc.\\nTambién sirve para\\ncortar árboles\\ny plantas.",
    },

    [MOVE_GUST] = {
        .names = {
            .name = "Tornado",
            .capsName = "TORNADO",
            .fullName = "Tornado",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_DAMAGE_FLY_OR_BOUNCE,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Crea un tornado\\ncon las alas y lo\\nlanza contra el\\nenemigo.",
    },

    [MOVE_WING_ATTACK] = {
        .names = {
            .name = "Ataque Ala",
            .capsName = "ATAQUE ALA",
            .fullName = "Ataque Ala",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea al objetivo con\\nunas grandes alas.",
    },

    [MOVE_WHIRLWIND] = {
        .names = {
            .name = "Remolino",
            .capsName = "REMOLINO",
            .fullName = "Remolino",
        },
        .data = {
            .effect = MOVE_EFFECT_FORCE_SWITCH,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -6,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Se lleva al rival, que\\nes cambiado por otro\\nPokémon. Si es un\\nPokémon salvaje,\\nacaba el combate.",
    },

    [MOVE_FLY] = {
        .names = {
            .name = "Vuelo",
            .capsName = "VUELO",
            .fullName = "Vuelo",
        },
        .data = {
            .effect = MOVE_EFFECT_FLY,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_FLYING,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Primer turno: vuela.\\nSegundo turno:\\nataca. Fuera de\\ncombate, permite ir\\na sitios ya conocidos.",
    },

    [MOVE_BIND] = {
        .names = {
            .name = "Atadura",
            .capsName = "ATADURA",
            .fullName = "Atadura",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 15,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ata y oprime de dos\\na cinco turnos.",
    },

    [MOVE_SLAM] = {
        .names = {
            .name = "Portazo",
            .capsName = "PORTAZO",
            .fullName = "Portazo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 75,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Golpea con las\\nextremidades.",
    },

    [MOVE_VINE_WHIP] = {
        .names = {
            .name = "Látigo Cepa",
            .capsName = "LÁTIGO CEPA",
            .fullName = "Látigo Cepa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 45,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Azota al enemigo\\ncon ramas finas.",
    },

    [MOVE_STOMP] = {
        .names = {
            .name = "Pisotón",
            .capsName = "PISOTÓN",
            .fullName = "Pisotón",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_MINIMIZE_DOUBLE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Tremendo pisotón\\nque puede hacer\\nretroceder al rival.",
    },

    [MOVE_DOUBLE_KICK] = {
        .names = {
            .name = "Doble Patada",
            .capsName = "DOBLE PATADA",
            .fullName = "Doble Patada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_PHYSICAL,
            .power = 30,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Una patada doble.\\nGolpea dos veces.",
    },

    [MOVE_MEGA_KICK] = {
        .names = {
            .name = "Megapatada",
            .capsName = "MEGAPATADA",
            .fullName = "Megapatada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_NORMAL,
            .accuracy = 75,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Patada de extrema\\nfuerza.",
    },

    [MOVE_JUMP_KICK] = {
        .names = {
            .name = "Patada Salto",
            .capsName = "PATADA SALTO",
            .fullName = "Patada Salto",
        },
        .data = {
            .effect = MOVE_EFFECT_CRASH_ON_MISS,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIGHTING,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Da un salto y pega\\nuna patada. Si falla,\\nse autolesiona.",
    },

    [MOVE_ROLLING_KICK] = {
        .names = {
            .name = "Patada Giro",
            .capsName = "PATADA GIRO",
            .fullName = "Patada Giro",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FIGHTING,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Una patada rápida\\ny circular. Puede\\ntambién hacer\\nretroceder\\nal enemigo.",
    },

    [MOVE_SAND_ATTACK] = {
        .names = {
            .name = "Ataque Arena",
            .capsName = "ATAQUE ARENA",
            .fullName = "Ataque Arena",
        },
        .data = {
            .effect = MOVE_EFFECT_ACC_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Arroja arena a la\\ncara y baja la\\nprecisión.",
    },

    [MOVE_HEADBUTT] = {
        .names = {
            .name = "Golpe Cabeza",
            .capsName = "GOLPE CABEZA",
            .fullName = "Golpe Cabeza",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataca con la cabeza.\\nPuede hacer que el\\nenemigo retroceda y\\nque caigan Pokémon\\nal sacudir árboles.",
    },

    [MOVE_HORN_ATTACK] = {
        .names = {
            .name = "Cornada",
            .capsName = "CORNADA",
            .fullName = "Cornada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca al enemigo con\\nafilados cuernos.",
    },

    [MOVE_FURY_ATTACK] = {
        .names = {
            .name = "Ataque Furia",
            .capsName = "ATAQUE FURIA",
            .fullName = "Ataque Furia",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 15,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Cornea al enemigo de\\ndos a cinco veces.",
    },

    [MOVE_HORN_DRILL] = {
        .names = {
            .name = "Perforador",
            .capsName = "PERFORADOR",
            .fullName = "Perforador",
        },
        .data = {
            .effect = MOVE_EFFECT_ONE_HIT_KO,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 30,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque taladro.\\nFulmina en un golpe.",
    },

    [MOVE_TACKLE] = {
        .names = {
            .name = "Placaje",
            .capsName = "PLACAJE",
            .fullName = "Placaje",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Embiste con todo\\nel cuerpo.",
    },

    [MOVE_BODY_SLAM] = {
        .names = {
            .name = "Golpe Cuerpo",
            .capsName = "GOLPE CUERPO",
            .fullName = "Golpe Cuerpo",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Salta sobre el rival\\ncon todo su peso.\\nPuede paralizar.",
    },

    [MOVE_WRAP] = {
        .names = {
            .name = "Repetición",
            .capsName = "REPETICIÓN",
            .fullName = "Repetición",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 15,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Oprime al rival de dos\\na cinco turnos con\\nramas, etc.",
    },

    [MOVE_TAKE_DOWN] = {
        .names = {
            .name = "Derribo",
            .capsName = "DERRIBO",
            .fullName = "Derribo",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_QUARTER,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Carga desmedida\\nque también hiere\\nal agresor.",
    },

    [MOVE_THRASH] = {
        .names = {
            .name = "Golpe",
            .capsName = "GOLPE",
            .fullName = "Golpe",
        },
        .data = {
            .effect = MOVE_EFFECT_CONTINUE_AND_CONFUSE_SELF,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_RANDOM_OPPONENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataca de dos a tres\\nturnos y acaba\\nconfundiendo\\nal agresor.",
    },

    [MOVE_DOUBLE_EDGE] = {
        .names = {
            .name = "Doble Filo",
            .capsName = "DOBLE FILO",
            .fullName = "Doble Filo",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_THIRD,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataque arriesgado\\nque también hiere\\nal agresor.",
    },

    [MOVE_TAIL_WHIP] = {
        .names = {
            .name = "Látigo",
            .capsName = "LÁTIGO",
            .fullName = "Látigo",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Agita la cola para\\nbajar la Defensa\\ndel contrincante.",
    },

    [MOVE_POISON_STING] = {
        .names = {
            .name = "Picotazo Ven",
            .capsName = "PICOTAZO VEN",
            .fullName = "Picotazo Ven",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 15,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Puede envenenar al\\nenemigo con púas\\ntóxicas.",
    },

    [MOVE_TWINEEDLE] = {
        .names = {
            .name = "Dobleataque",
            .capsName = "DOBLEATAQUE",
            .fullName = "Dobleataque",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Clava aguijones al\\nrival dos veces.\\nPuede envenenar.",
    },

    [MOVE_PIN_MISSILE] = {
        .names = {
            .name = "Pin Misil",
            .capsName = "PIN MISIL",
            .fullName = "Pin Misil",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_BUG,
            .accuracy = 95,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza finas púas que\\nhieren de dos a\\ncinco veces.",
    },

    [MOVE_LEER] = {
        .names = {
            .name = "Malicioso",
            .capsName = "MALICIOSO",
            .fullName = "Malicioso",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_COOL,
        },
        .description = "Intimida al enemigo\\npara bajar su\\nDefensa.",
    },

    [MOVE_BITE] = {
        .names = {
            .name = "Mordisco",
            .capsName = "MORDISCO",
            .fullName = "Mordisco",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Un voraz bocado\\nque puede hacer\\nretroceder al rival.",
    },

    [MOVE_GROWL] = {
        .names = {
            .name = "Gruñido",
            .capsName = "GRUÑIDO",
            .fullName = "Gruñido",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Dulce gruñido que\\nreduce el Ataque\\ndel contrincante.",
    },

    [MOVE_ROAR] = {
        .names = {
            .name = "Rugido",
            .capsName = "RUGIDO",
            .fullName = "Rugido",
        },
        .data = {
            .effect = MOVE_EFFECT_FORCE_SWITCH,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -6,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_COOL,
        },
        .description = "Se lleva al rival, que\\nes cambiado por otro\\nPokémon. Si es un\\nPokémon salvaje,\\nacaba el combate.",
    },

    [MOVE_SING] = {
        .names = {
            .name = "Canto",
            .capsName = "CANTO",
            .fullName = "Canto",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 55,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Cancioncilla que\\nhace dormir\\nprofundamente\\nal enemigo.",
    },

    [MOVE_SUPERSONIC] = {
        .names = {
            .name = "Supersónico",
            .capsName = "SUPERSÓNICO",
            .fullName = "Supersónico",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_CONFUSE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 55,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Raras ondas sónicas\\nque confunden.",
    },

    [MOVE_SONIC_BOOM] = {
        .names = {
            .name = "Bomba Sónica",
            .capsName = "BOMBA SÓNICA",
            .fullName = "Bomba Sónica",
        },
        .data = {
            .effect = MOVE_EFFECT_10_DAMAGE_FLAT,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza ondas de\\nchoque que restan\\n20 PS.",
    },

    [MOVE_DISABLE] = {
        .names = {
            .name = "Anulación",
            .capsName = "ANULACIÓN",
            .fullName = "Anulación",
        },
        .data = {
            .effect = MOVE_EFFECT_DISABLE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Desactiva el último\\nmovimiento del enemigo\\ndurante varios\\nturnos.",
    },

    [MOVE_ACID] = {
        .names = {
            .name = "Ácido",
            .capsName = "ÁCIDO",
            .fullName = "Ácido",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Rocía ácido corrosivo.\\nPuede bajar la\\nDefensa Especial.",
    },

    [MOVE_EMBER] = {
        .names = {
            .name = "Ascuas",
            .capsName = "ASCUAS",
            .fullName = "Ascuas",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataque con llamas\\npequeñas que\\npueden causar\\nquemaduras.",
    },

    [MOVE_FLAMETHROWER] = {
        .names = {
            .name = "Lanzallamas",
            .capsName = "LANZALLAMAS",
            .fullName = "Lanzallamas",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataque con una\\ngran ráfaga de\\nfuego que puede\\ncausar quemaduras.",
    },

    [MOVE_MIST] = {
        .names = {
            .name = "Neblina",
            .capsName = "NEBLINA",
            .fullName = "Neblina",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_STAT_REDUCTION,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Rodea de fina niebla\\nal usuario y protege\\nlas características\\nde su equipo durante\\ncinco turnos.",
    },

    [MOVE_WATER_GUN] = {
        .names = {
            .name = "Pistola Agua",
            .capsName = "PISTOLA AGUA",
            .fullName = "Pistola Agua",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_CUTE,
        },
        .description = "Ataca disparando\\nagua con gran\\npotencia.",
    },

    [MOVE_HYDRO_PUMP] = {
        .names = {
            .name = "Hidrobomba",
            .capsName = "HIDROBOMBA",
            .fullName = "Hidrobomba",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_WATER,
            .accuracy = 80,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Lanza una gran masa\\nde agua a presión\\npara atacar.",
    },

    [MOVE_SURF] = {
        .names = {
            .name = "Surf",
            .capsName = "SURF",
            .fullName = "Surf",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_DAMAGE_DIVE,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Inunda el campo de\\nbatalla con una\\nola gigante. Fuera de\\ncombate sirve para\\ncruzar el agua.",
    },

    [MOVE_ICE_BEAM] = {
        .names = {
            .name = "Rayo Hielo",
            .capsName = "RAYO HIELO",
            .fullName = "Rayo Hielo",
        },
        .data = {
            .effect = MOVE_EFFECT_FREEZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Rayo de hielo que\\npuede llegar a\\ncongelar.",
    },

    [MOVE_BLIZZARD] = {
        .names = {
            .name = "Ventisca",
            .capsName = "VENTISCA",
            .fullName = "Ventisca",
        },
        .data = {
            .effect = MOVE_EFFECT_BLIZZARD,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_ICE,
            .accuracy = 70,
            .pp = 5,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Tormenta de hielo\\nque puede llegar\\na congelar.",
    },

    [MOVE_PSYBEAM] = {
        .names = {
            .name = "Psicorrayo",
            .capsName = "PSICORRAYO",
            .fullName = "Psicorrayo",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Extraño rayo que\\npuede causar\\nconfusión.",
    },

    [MOVE_BUBBLE_BEAM] = {
        .names = {
            .name = "Rayo Burbuja",
            .capsName = "RAYO BURBUJA",
            .fullName = "Rayo Burbuja",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Diluvio de burbujas\\nque puede bajar\\nla Velocidad.",
    },

    [MOVE_AURORA_BEAM] = {
        .names = {
            .name = "Rayo Aurora",
            .capsName = "RAYO AURORA",
            .fullName = "Rayo Aurora",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Rayo multicolor que\\npuede reducir\\nel Ataque.",
    },

    [MOVE_HYPER_BEAM] = {
        .names = {
            .name = "Hiperrayo",
            .capsName = "HIPERRAYO",
            .fullName = "Hiperrayo",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Es eficaz, pero\\ndeja inmóvil al\\natacante un turno.",
    },

    [MOVE_PECK] = {
        .names = {
            .name = "Picotazo",
            .capsName = "PICOTAZO",
            .fullName = "Picotazo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 35,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Ensarta al rival con\\nun cuerno o pico\\npunzante.",
    },

    [MOVE_DRILL_PECK] = {
        .names = {
            .name = "Pico Taladro",
            .capsName = "PICO TALADRO",
            .fullName = "Pico Taladro",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Picotazo giratorio\\ny perforador muy\\npotente.",
    },

    [MOVE_SUBMISSION] = {
        .names = {
            .name = "Sumisión",
            .capsName = "SUMISIÓN",
            .fullName = "Sumisión",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_QUARTER,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_FIGHTING,
            .accuracy = 80,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Tira al enemigo al\\nsuelo. También hiere\\nal agresor.",
    },

    [MOVE_LOW_KICK] = {
        .names = {
            .name = "Patada Baja",
            .capsName = "PATADA BAJA",
            .fullName = "Patada Baja",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_POWER_WITH_WEIGHT,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Patada baja.\\nCuanto más pesa\\nel enemigo, más\\ndaño causa.",
    },

    [MOVE_COUNTER] = {
        .names = {
            .name = "Contador",
            .capsName = "CONTADOR",
            .fullName = "Contador",
        },
        .data = {
            .effect = MOVE_EFFECT_COUNTER,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = -5,
            .flags = FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Devuelve un golpe\\nfísico por duplicado.",
    },

    [MOVE_SEISMIC_TOSS] = {
        .names = {
            .name = "Mov. Sísmico",
            .capsName = "MOV. SÍSMICO",
            .fullName = "Mov. Sísmico",
        },
        .data = {
            .effect = MOVE_EFFECT_LEVEL_DAMAGE_FLAT,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "La gravedad derriba\\nal enemigo. Se\\nrestarán tantos\\nPS como nivel tenga\\nel agresor.",
    },

    [MOVE_STRENGTH] = {
        .names = {
            .name = "Fuerza",
            .capsName = "FUERZA",
            .fullName = "Fuerza",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Potente puñetazo.\\nFuera de combate\\nsirve para mover\\npiedras.",
    },

    [MOVE_ABSORB] = {
        .names = {
            .name = "Absorber",
            .capsName = "ABSORBER",
            .fullName = "Absorber",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_SPECIAL,
            .power = 20,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Absorbe la mitad del\\ndaño producido.",
    },

    [MOVE_MEGA_DRAIN] = {
        .names = {
            .name = "Megaagotar",
            .capsName = "MEGAAGOTAR",
            .fullName = "Megaagotar",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Absorbe la mitad del\\ndaño producido.",
    },

    [MOVE_LEECH_SEED] = {
        .names = {
            .name = "Drenadoras",
            .capsName = "DRENADORAS",
            .fullName = "Drenadoras",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_LEECH_SEED,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_SMART,
        },
        .description = "Planta tres semillas\\nque absorben PS\\nen cada turno.",
    },

    [MOVE_GROWTH] = {
        .names = {
            .name = "Desarrollo",
            .capsName = "DESARROLLO",
            .fullName = "Desarrollo",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = ((CHAMPIONS_TYPE_CHANGES) ? (TYPE_GRASS) : (TYPE_NORMAL)),
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Crece a marchas\\nforzadas y aumenta\\nel Ataque Especial.",
    },

    [MOVE_RAZOR_LEAF] = {
        .names = {
            .name = "Hoja Afilada",
            .capsName = "HOJA AFILADA",
            .fullName = "Hoja Afilada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 55,
            .type = TYPE_GRASS,
            .accuracy = 95,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Corta con hojas\\nafiladas.\\nSuele ser crítico.",
    },

    [MOVE_SOLAR_BEAM] = {
        .names = {
            .name = "Rayo Solar",
            .capsName = "RAYO SOLAR",
            .fullName = "Rayo Solar",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_SUN_SKIPS,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Primer turno:\\nabsorbe luz.\\nSegundo turno:\\nataca.",
    },

    [MOVE_POISON_POWDER] = {
        .names = {
            .name = "Polvo Veneno",
            .capsName = "POLVO VENENO",
            .fullName = "Polvo Veneno",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_POISON,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 75,
            .pp = 35,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Polvo tóxico que\\nenvenena al\\nenemigo.",
    },

    [MOVE_STUN_SPORE] = {
        .names = {
            .name = "Paralizador",
            .capsName = "PARALIZADOR",
            .fullName = "Paralizador",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_PARALYZE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 75,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Esparce polvo que\\nparaliza al enemigo.",
    },

    [MOVE_SLEEP_POWDER] = {
        .names = {
            .name = "Somnífero",
            .capsName = "SOMNÍFERO",
            .fullName = "Somnífero",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 75,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Esparce polvo que\\nduerme al enemigo.",
    },

    [MOVE_PETAL_DANCE] = {
        .names = {
            .name = "Danza Pétalo",
            .capsName = "DANZA PÉTALO",
            .fullName = "Danza Pétalo",
        },
        .data = {
            .effect = MOVE_EFFECT_CONTINUE_AND_CONFUSE_SELF,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_RANDOM_OPPONENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Lanza pétalos de\\ndos a tres turnos y\\nacaba confundiendo\\nal atacante.",
    },

    [MOVE_STRING_SHOT] = {
        .names = {
            .name = "Disp. Demora",
            .capsName = "DISP. DEMORA",
            .fullName = "Disp. Demora",
        },
        .data = {
            .effect = MOVE_EFFECT_SPEED_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 95,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Lanza seda al\\nenemigo y reduce\\nsu Velocidad.",
    },

    [MOVE_DRAGON_RAGE] = {
        .names = {
            .name = "Furia Dragón",
            .capsName = "FURIA DRAGÓN",
            .fullName = "Furia Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_40_DAMAGE_FLAT,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Ráfaga de ondas de\\nchoque que quitan\\n40 PS.",
    },

    [MOVE_FIRE_SPIN] = {
        .names = {
            .name = "Giro Fuego",
            .capsName = "GIRO FUEGO",
            .fullName = "Giro Fuego",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_SPECIAL,
            .power = 35,
            .type = TYPE_FIRE,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Un aro de fuego que\\natrapa de dos a\\ncinco turnos.",
    },

    [MOVE_THUNDER_SHOCK] = {
        .names = {
            .name = "Impactrueno",
            .capsName = "IMPACTRUENO",
            .fullName = "Impactrueno",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque eléctrico que\\npuede paralizar\\nal enemigo.",
    },

    [MOVE_THUNDERBOLT] = {
        .names = {
            .name = "Rayo",
            .capsName = "RAYO",
            .fullName = "Rayo",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Potente ataque\\neléctrico que\\npuede paralizar\\nal enemigo.",
    },

    [MOVE_THUNDER_WAVE] = {
        .names = {
            .name = "Onda Trueno",
            .capsName = "ONDA TRUENO",
            .fullName = "Onda Trueno",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_PARALYZE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 90,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_COOL,
        },
        .description = "Una ligera descarga\\nque paraliza al\\nenemigo si lo\\nalcanza.",
    },

    [MOVE_THUNDER] = {
        .names = {
            .name = "Trueno",
            .capsName = "TRUENO",
            .fullName = "Trueno",
        },
        .data = {
            .effect = MOVE_EFFECT_THUNDER,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_ELECTRIC,
            .accuracy = 70,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Un rayo que puede\\nparalizar al enemigo.",
    },

    [MOVE_ROCK_THROW] = {
        .names = {
            .name = "Lanzarrocas",
            .capsName = "LANZARROCAS",
            .fullName = "Lanzarrocas",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_ROCK,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Tira pequeñas rocas\\nal enemigo.",
    },

    [MOVE_EARTHQUAKE] = {
        .names = {
            .name = "Terremoto",
            .capsName = "TERREMOTO",
            .fullName = "Terremoto",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_DAMAGE_DIG,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Un terremoto que\\nafecta a los demás\\nPokémon en\\ncombate.",
    },

    [MOVE_FISSURE] = {
        .names = {
            .name = "Fisura",
            .capsName = "FISURA",
            .fullName = "Fisura",
        },
        .data = {
            .effect = MOVE_EFFECT_ONE_HIT_KO,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_GROUND,
            .accuracy = 30,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Abre una grieta en\\nel suelo y mete al\\nrival en ella.\\nFulmina en un golpe.",
    },

    [MOVE_DIG] = {
        .names = {
            .name = "Excavar",
            .capsName = "EXCAVAR",
            .fullName = "Excavar",
        },
        .data = {
            .effect = MOVE_EFFECT_DIG,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Primer turno: cava.\\nSegundo turno:\\nataca. También sirve\\npara salir de ciertas\\nzonas.",
    },

    [MOVE_TOXIC] = {
        .names = {
            .name = "Tóxico",
            .capsName = "TÓXICO",
            .fullName = "Tóxico",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_BADLY_POISON,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Envenena gravemente\\nal rival y causa un\\ndaño mayor en cada\\nturno.",
    },

    [MOVE_CONFUSION] = {
        .names = {
            .name = "Confusión",
            .capsName = "CONFUSIÓN",
            .fullName = "Confusión",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataque psíquico que\\npuede causar\\nconfusión.",
    },

    [MOVE_PSYCHIC] = {
        .names = {
            .name = "Psíquico",
            .capsName = "PSÍQUICO",
            .fullName = "Psíquico",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Fuerte ataque\\npsíquico que puede\\nbajar la Defensa\\nEspecial.",
    },

    [MOVE_HYPNOSIS] = {
        .names = {
            .name = "Hipnosis",
            .capsName = "HIPNOSIS",
            .fullName = "Hipnosis",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 60,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataque hipnótico\\nque hace dormir\\nprofundamente\\nal enemigo.",
    },

    [MOVE_MEDITATE] = {
        .names = {
            .name = "Meditación",
            .capsName = "MEDITACIÓN",
            .fullName = "Meditación",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El usuario reposa y\\nmedita para potenciar\\nel Ataque.",
    },

    [MOVE_AGILITY] = {
        .names = {
            .name = "Agilidad",
            .capsName = "AGILIDAD",
            .fullName = "Agilidad",
        },
        .data = {
            .effect = MOVE_EFFECT_SPEED_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Relaja el cuerpo\\npara ganar mucha\\nVelocidad.",
    },

    [MOVE_QUICK_ATTACK] = {
        .names = {
            .name = "At. Rápido",
            .capsName = "AT. RÁPIDO",
            .fullName = "At. Rápido",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque rápido que\\npermite golpear\\nen primer lugar.",
    },

    [MOVE_RAGE] = {
        .names = {
            .name = "Furia",
            .capsName = "FURIA",
            .fullName = "Furia",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ATK_WHEN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 20,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_COOL,
        },
        .description = "Cuando se usa,\\nsu fuerza de ataque\\naumenta cada vez\\nque te golpean.",
    },

    [MOVE_TELEPORT] = {
        .names = {
            .name = "Teletransp",
            .capsName = "TELETRANSP",
            .fullName = "Teletransp",
        },
        .data = {
            .effect = MOVE_EFFECT_FLEE_FROM_WILD_BATTLE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = -6,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Permite huir al\\ninstante o viajar\\nal último Centro\\nPokémon visitado.",
    },

    [MOVE_NIGHT_SHADE] = {
        .names = {
            .name = "Tinieblas",
            .capsName = "TINIEBLAS",
            .fullName = "Tinieblas",
        },
        .data = {
            .effect = MOVE_EFFECT_LEVEL_DAMAGE_FLAT,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Produce un espejismo\\nante el enemigo, que\\npierde tantos PS\\ncomo nivel tenga\\nel agresor.",
    },

    [MOVE_MIMIC] = {
        .names = {
            .name = "Mimético",
            .capsName = "MIMÉTICO",
            .fullName = "Mimético",
        },
        .data = {
            .effect = MOVE_EFFECT_COPY_MOVE_FOR_BATTLE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Copia el último\\nmovimiento usado\\npor el enemigo.",
    },

    [MOVE_SCREECH] = {
        .names = {
            .name = "Chirrido",
            .capsName = "CHIRRIDO",
            .fullName = "Chirrido",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_SMART,
        },
        .description = "Alarido agudo que\\nreduce mucho la\\nDefensa del rival.",
    },

    [MOVE_DOUBLE_TEAM] = {
        .names = {
            .name = "Doble Equipo",
            .capsName = "DOBLE EQUIPO",
            .fullName = "Doble Equipo",
        },
        .data = {
            .effect = MOVE_EFFECT_EVA_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Crea copias de sí\\nmismo para mejorar\\nla evasión.",
    },

    [MOVE_RECOVER] = {
        .names = {
            .name = "Recuperación",
            .capsName = "RECUPERACIÓN",
            .fullName = "Recuperación",
        },
        .data = {
            .effect = MOVE_EFFECT_RESTORE_HALF_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_SMART,
        },
        .description = "Restaura hasta\\nla mitad de los\\nPS máximos.",
    },

    [MOVE_HARDEN] = {
        .names = {
            .name = "Fortaleza",
            .capsName = "FORTALEZA",
            .fullName = "Fortaleza",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Tensa la musculatura\\npara aumentar\\nla Defensa.",
    },

    [MOVE_MINIMIZE] = {
        .names = {
            .name = "Reducción",
            .capsName = "REDUCCIÓN",
            .fullName = "Reducción",
        },
        .data = {
            .effect = MOVE_EFFECT_EVA_UP_2_MINIMIZE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario mengua\\npara aumentar\\nla evasión.",
    },

    [MOVE_SMOKESCREEN] = {
        .names = {
            .name = "Pantallahumo",
            .capsName = "PANTALLAHUMO",
            .fullName = "Pantallahumo",
        },
        .data = {
            .effect = MOVE_EFFECT_ACC_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_SMART,
        },
        .description = "Baja la precisión del\\nenemigo con una\\nnube de humo o tinta.",
    },

    [MOVE_CONFUSE_RAY] = {
        .names = {
            .name = "Rayo Confuso",
            .capsName = "RAYO CONFUSO",
            .fullName = "Rayo Confuso",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_CONFUSE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_SMART,
        },
        .description = "Rayo siniestro que\\nconfunde al enemigo.",
    },

    [MOVE_WITHDRAW] = {
        .names = {
            .name = "Refugio",
            .capsName = "REFUGIO",
            .fullName = "Refugio",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario se protege\\nen su coraza y sube\\nla Defensa.",
    },

    [MOVE_DEFENSE_CURL] = {
        .names = {
            .name = "Rizo Defensa",
            .capsName = "RIZO DEFENSA",
            .fullName = "Rizo Defensa",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP_DOUBLE_ROLLOUT_POWER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Se enrosca para\\nocultar su punto\\ndébil. Sube la\\nDefensa.",
    },

    [MOVE_BARRIER] = {
        .names = {
            .name = "Barrera",
            .capsName = "BARRERA",
            .fullName = "Barrera",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_COOL,
        },
        .description = "Crea una barrera\\npara aumentar\\nmucho la Defensa.",
    },

    [MOVE_LIGHT_SCREEN] = {
        .names = {
            .name = "Pantalla Luz",
            .capsName = "PANTALLA LUZ",
            .fullName = "Pantalla Luz",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_LIGHT_SCREEN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Pared de luz que\\nreduce durante\\ncinco turnos el daño\\nproducido por los\\nAtaques Especiales.",
    },

    [MOVE_HAZE] = {
        .names = {
            .name = "Niebla",
            .capsName = "NIEBLA",
            .fullName = "Niebla",
        },
        .data = {
            .effect = MOVE_EFFECT_RESET_STAT_CHANGES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Neblina que elimina\\nlos cambios de\\ncaracterísticas de\\ntodos los Pokémon\\ndel combate.",
    },

    [MOVE_REFLECT] = {
        .names = {
            .name = "Reflejo",
            .capsName = "REFLEJO",
            .fullName = "Reflejo",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_REFLECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_SMART,
        },
        .description = "Pared de luz que\\nreduce durante\\ncinco turnos el daño\\nproducido por\\nlos ataques físicos.",
    },

    [MOVE_FOCUS_ENERGY] = {
        .names = {
            .name = "Foco Energía",
            .capsName = "FOCO ENERGÍA",
            .fullName = "Foco Energía",
        },
        .data = {
            .effect = MOVE_EFFECT_CRIT_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_COOL,
        },
        .description = "Concentra energía\\npara aumentar las\\nposibilidades de\\nun golpe crítico.",
    },

    [MOVE_BIDE] = {
        .names = {
            .name = "Venganza",
            .capsName = "VENGANZA",
            .fullName = "Venganza",
        },
        .data = {
            .effect = MOVE_EFFECT_BIDE,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 1,
            .flags = FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Espera dos turnos\\npara atacar con el\\ndoble de potencia\\ndel daño recibido.",
    },

    [MOVE_METRONOME] = {
        .names = {
            .name = "Metrónomo",
            .capsName = "METRÓNOMO",
            .fullName = "Metrónomo",
        },
        .data = {
            .effect = MOVE_EFFECT_CALL_RANDOM_MOVE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario mueve\\nun dedo y estimula\\nel cerebro para\\nusar al azar casi\\ncualquier movimiento.",
    },

    [MOVE_MIRROR_MOVE] = {
        .names = {
            .name = "Mov. Espejo",
            .capsName = "MOV. ESPEJO",
            .fullName = "Mov. Espejo",
        },
        .data = {
            .effect = MOVE_EFFECT_COPY_MOVE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_SMART,
        },
        .description = "Contraataca con el\\nmismo golpe\\nempleado por\\nel contrincante.",
    },

    [MOVE_SELF_DESTRUCT] = {
        .names = {
            .name = "Autodestruc",
            .capsName = "AUTODESTRUC",
            .fullName = "Autodestruc",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_DEFENSE,
            .split = SPLIT_PHYSICAL,
            .power = 200,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El atacante explota\\ny hiere a todos los\\ncontendientes.\\nEl usuario se debilita\\nde inmediato.",
    },

    [MOVE_EGG_BOMB] = {
        .names = {
            .name = "Bomba Huevo",
            .capsName = "BOMBA HUEVO",
            .fullName = "Bomba Huevo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_NORMAL,
            .accuracy = 75,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Arroja un Huevo\\nal enemigo con\\ngran fuerza.",
    },

    [MOVE_LICK] = {
        .names = {
            .name = "Lengüetazo",
            .capsName = "LENGÜETAZO",
            .fullName = "Lengüetazo",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 30,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Usa la lengua para\\natacar. Puede causar\\nparálisis.",
    },

    [MOVE_SMOG] = {
        .names = {
            .name = "Polución",
            .capsName = "POLUCIÓN",
            .fullName = "Polución",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_SPECIAL,
            .power = 30,
            .type = TYPE_POISON,
            .accuracy = 70,
            .pp = 20,
            .effectChance = 40,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "El rival es atacado\\ncon gases tóxicos\\nque pueden llegar\\na envenenar.",
    },

    [MOVE_SLUDGE] = {
        .names = {
            .name = "Residuos",
            .capsName = "RESIDUOS",
            .fullName = "Residuos",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Arroja residuos\\nal rival. Puede\\nllegar a envenenar.",
    },

    [MOVE_BONE_CLUB] = {
        .names = {
            .name = "Hueso Palo",
            .capsName = "HUESO PALO",
            .fullName = "Hueso Palo",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_GROUND,
            .accuracy = 85,
            .pp = 20,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Aporrea con un\\nhueso. Puede\\nhacer retroceder\\nal enemigo.",
    },

    [MOVE_FIRE_BLAST] = {
        .names = {
            .name = "Llamarada",
            .capsName = "LLAMARADA",
            .fullName = "Llamarada",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_FIRE,
            .accuracy = 85,
            .pp = 5,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Llama intensa que\\nlo chamusca todo\\ny puede causar\\nquemaduras.",
    },

    [MOVE_WATERFALL] = {
        .names = {
            .name = "Cascada",
            .capsName = "CASCADA",
            .fullName = "Cascada",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Embiste con gran\\nimpulso que puede\\nhacer retroceder.\\nFuera de combate\\nremonta cascadas.",
    },

    [MOVE_CLAMP] = {
        .names = {
            .name = "Tenaza",
            .capsName = "TENAZA",
            .fullName = "Tenaza",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 35,
            .type = TYPE_WATER,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Atrapa y atenaza\\ncon fuerza de dos\\na cinco turnos.",
    },

    [MOVE_SWIFT] = {
        .names = {
            .name = "Rapidez",
            .capsName = "RAPIDEZ",
            .fullName = "Rapidez",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza rayos en forma\\nde estrella que no\\nfallan nunca.",
    },

    [MOVE_SKULL_BASH] = {
        .names = {
            .name = "Cabezazo",
            .capsName = "CABEZAZO",
            .fullName = "Cabezazo",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_DEF_UP,
            .split = SPLIT_PHYSICAL,
            .power = 130,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Primer turno:\\nse prepara y sube\\nla Defensa.\\nSegundo turno:\\nda el cabezazo.",
    },

    [MOVE_SPIKE_CANNON] = {
        .names = {
            .name = "Clavo Cañón",
            .capsName = "CLAVO CAÑÓN",
            .fullName = "Clavo Cañón",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 20,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza finas púas\\nque hieren de dos\\na cinco veces.",
    },

    [MOVE_CONSTRICT] = {
        .names = {
            .name = "Restricción",
            .capsName = "RESTRICCIÓN",
            .fullName = "Restricción",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 35,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Constriñe para herir\\ny puede bajar\\nla Velocidad.",
    },

    [MOVE_AMNESIA] = {
        .names = {
            .name = "Amnesia",
            .capsName = "AMNESIA",
            .fullName = "Amnesia",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_DEF_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario olvida sus\\npreocupaciones y\\naumenta mucho la\\nDefensa Especial.",
    },

    [MOVE_KINESIS] = {
        .names = {
            .name = "Kinético",
            .capsName = "KINÉTICO",
            .fullName = "Kinético",
        },
        .data = {
            .effect = MOVE_EFFECT_ACC_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 80,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_SMART,
        },
        .description = "Dobla una cuchara\\npara distraer al rival\\ny bajar su nivel de\\nprecisión.",
    },

    [MOVE_SOFT_BOILED] = {
        .names = {
            .name = "Amortiguador",
            .capsName = "AMORTIGUADOR",
            .fullName = "Amortiguador",
        },
        .data = {
            .effect = MOVE_EFFECT_RESTORE_HALF_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Restaura la mitad\\nde los PS máximos\\ndel usuario. Puede\\nusarse en un aliado\\nfuera de combate.",
    },

    [MOVE_HIGH_JUMP_KICK] = {
        .names = {
            .name = "Pat. S. Alta",
            .capsName = "PAT. S. ALTA",
            .fullName = "Pat. S. Alta",
        },
        .data = {
            .effect = MOVE_EFFECT_CRASH_ON_MISS,
            .split = SPLIT_PHYSICAL,
            .power = 130,
            .type = TYPE_FIGHTING,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Salta muy alto y\\nlanza una patada.\\nSi falla, dañará\\nal usuario.",
    },

    [MOVE_GLARE] = {
        .names = {
            .name = "Deslumbrar",
            .capsName = "DESLUMBRAR",
            .fullName = "Deslumbrar",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_PARALYZE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Intimida y asusta\\nal rival con la\\nmirada hasta\\ndejarlo paralizado.",
    },

    [MOVE_DREAM_EATER] = {
        .names = {
            .name = "Come Sueños",
            .capsName = "COME SUEÑOS",
            .fullName = "Come Sueños",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_DAMAGE_SLEEP,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Restaura al usuario\\nla mitad del daño\\ncausado a un rival\\ndormido.",
    },

    [MOVE_POISON_GAS] = {
        .names = {
            .name = "Gas Venenoso",
            .capsName = "GAS VENENOSO",
            .fullName = "Gas Venenoso",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_POISON,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 90,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Lanza una nube\\nde gas tóxico\\nal enemigo.\\nProduce\\nenvenenamiento.",
    },

    [MOVE_BARRAGE] = {
        .names = {
            .name = "Presa",
            .capsName = "PRESA",
            .fullName = "Presa",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 15,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Arroja esferas al\\nrival entre dos y\\ncinco veces seguidas.",
    },

    [MOVE_LEECH_LIFE] = {
        .names = {
            .name = "Chupavidas",
            .capsName = "CHUPAVIDAS",
            .fullName = "Chupavidas",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Restaura al usuario\\nla mitad del daño\\ncausado al rival.",
    },

    [MOVE_LOVELY_KISS] = {
        .names = {
            .name = "Beso Amoroso",
            .capsName = "BESO AMOROSO",
            .fullName = "Beso Amoroso",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 75,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Con una cara que\\nasusta, da un beso\\nal enemigo y lo\\nadormece.",
    },

    [MOVE_SKY_ATTACK] = {
        .names = {
            .name = "Ataque Aéreo",
            .capsName = "ATAQUE AÉREO",
            .fullName = "Ataque Aéreo",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_HIGH_CRIT_FLINCH,
            .split = SPLIT_PHYSICAL,
            .power = 140,
            .type = TYPE_FLYING,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque en dos turnos\\nque suele ser\\ncrítico. Puede hacer\\nretroceder al rival.",
    },

    [MOVE_TRANSFORM] = {
        .names = {
            .name = "Transform",
            .capsName = "TRANSFORM",
            .fullName = "Transform",
        },
        .data = {
            .effect = MOVE_EFFECT_TRANSFORM,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "El atacante se\\ntransforma en\\nuna copia del rival,\\ncon los mismos\\nmovimientos.",
    },

    [MOVE_BUBBLE] = {
        .names = {
            .name = "Burbuja",
            .capsName = "BURBUJA",
            .fullName = "Burbuja",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Lanza burbujas al\\ncontrincante y puede\\nreducir su Velocidad.",
    },

    [MOVE_DIZZY_PUNCH] = {
        .names = {
            .name = "Puño Mareo",
            .capsName = "PUÑO MAREO",
            .fullName = "Puño Mareo",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_COOL,
        },
        .description = "Rítmicos puñetazos\\nque pueden causar\\nconfusión.",
    },

    [MOVE_SPORE] = {
        .names = {
            .name = "Espora",
            .capsName = "ESPORA",
            .fullName = "Espora",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Esparce esporas que\\ninducen al sueño.",
    },

    [MOVE_FLASH] = {
        .names = {
            .name = "Destello",
            .capsName = "DESTELLO",
            .fullName = "Destello",
        },
        .data = {
            .effect = MOVE_EFFECT_ACC_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Luz cegadora que\\nbaja la precisión.\\nFuera de combate\\nsirve para iluminar.",
    },

    [MOVE_PSYWAVE] = {
        .names = {
            .name = "Psicoonda",
            .capsName = "PSICOONDA",
            .fullName = "Psicoonda",
        },
        .data = {
            .effect = MOVE_EFFECT_RANDOM_DAMAGE_1_TO_150_LEVEL,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataque con onda de\\nenergía de intensidad\\nvariable.",
    },

    [MOVE_SPLASH] = {
        .names = {
            .name = "Salpicadura",
            .capsName = "SALPICADURA",
            .fullName = "Salpicadura",
        },
        .data = {
            .effect = MOVE_EFFECT_DO_NOTHING,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_CUTE,
        },
        .description = "No tiene ningún\\nefecto. Solo salpica.",
    },

    [MOVE_ACID_ARMOR] = {
        .names = {
            .name = "Armad. Ácida",
            .capsName = "ARMAD. ÁCIDA",
            .fullName = "Armad. Ácida",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Transforma la\\nestructura celular\\npara hacerse líquido\\ny aumenta mucho\\nla Defensa.",
    },

    [MOVE_CRABHAMMER] = {
        .names = {
            .name = "Martillazo",
            .capsName = "MARTILLAZO",
            .fullName = "Martillazo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_WATER,
            .accuracy = ((CHAMPIONS_ACC_CHANGES) ? (95) : (90)),
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Golpea con fuerza\\ncon unas pinzas.\\nSuele ser crítico.",
    },

    [MOVE_EXPLOSION] = {
        .names = {
            .name = "Explosión",
            .capsName = "EXPLOSIÓN",
            .fullName = "Explosión",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_DEFENSE,
            .split = SPLIT_PHYSICAL,
            .power = 250,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El atacante explota\\ny hiere a todos\\nlos contendientes.\\nEl usuario se debilita\\nde inmediato.",
    },

    [MOVE_FURY_SWIPES] = {
        .names = {
            .name = "Golpes Furia",
            .capsName = "GOLPES FURIA",
            .fullName = "Golpes Furia",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 18,
            .type = TYPE_NORMAL,
            .accuracy = 80,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Araña rápidamente de\\ndos a cinco veces.",
    },

    [MOVE_BONEMERANG] = {
        .names = {
            .name = "Huesomerang",
            .capsName = "HUESOMERANG",
            .fullName = "Huesomerang",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_GROUND,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Lanza un hueso a modo\\nde bumerán que golpea\\ndos veces.",
    },

    [MOVE_REST] = {
        .names = {
            .name = "Descanso",
            .capsName = "DESCANSO",
            .fullName = "Descanso",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HEALTH_AND_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Te duerme durante\\ndos turnos para\\ncurarte totalmente.",
    },

    [MOVE_ROCK_SLIDE] = {
        .names = {
            .name = "Avalancha",
            .capsName = "AVALANCHA",
            .fullName = "Avalancha",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_ROCK,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Lanza grandes\\npedruscos. Puede\\nhacer retroceder\\nal enemigo.",
    },

    [MOVE_HYPER_FANG] = {
        .names = {
            .name = "Hip.Colmillo",
            .capsName = "HIP.COLMILLO",
            .fullName = "Hip.Colmillo",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque con finos\\ncolmillos. Puede\\nhacer retroceder\\nal enemigo.",
    },

    [MOVE_SHARPEN] = {
        .names = {
            .name = "Afilar",
            .capsName = "AFILAR",
            .fullName = "Afilar",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_CUTE,
        },
        .description = "El perfil del atacante\\nse hace más afilado\\ny su Ataque mejora.",
    },

    [MOVE_CONVERSION] = {
        .names = {
            .name = "Conversión",
            .capsName = "CONVERSIÓN",
            .fullName = "Conversión",
        },
        .data = {
            .effect = MOVE_EFFECT_CONVERSION,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Cambia el tipo del\\nusuario por el de uno\\nde sus movimientos.",
    },

    [MOVE_TRI_ATTACK] = {
        .names = {
            .name = "Triataque",
            .capsName = "TRIATAQUE",
            .fullName = "Triataque",
        },
        .data = {
            .effect = MOVE_EFFECT_RANDOM_PRIMARY_STATUS_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataque triple que\\npuede paralizar,\\nquemar o congelar\\nal rival.",
    },

    [MOVE_SUPER_FANG] = {
        .names = {
            .name = "Superdiente",
            .capsName = "SUPERDIENTE",
            .fullName = "Superdiente",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_HP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Finos colmillos que\\nreducen a la mitad\\nlos PS del rival.",
    },

    [MOVE_SLASH] = {
        .names = {
            .name = "Cuchillada",
            .capsName = "CUCHILLADA",
            .fullName = "Cuchillada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Acuchilla con pinzas,\\netc. Suele dar\\nun golpe crítico.",
    },

    [MOVE_SUBSTITUTE] = {
        .names = {
            .name = "Sustituto",
            .capsName = "SUSTITUTO",
            .fullName = "Sustituto",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_SUBSTITUTE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Utiliza parte de los\\nPS propios para crear\\nun sustituto que\\nactúa como señuelo.",
    },

    [MOVE_STRUGGLE] = {
        .names = {
            .name = "Combate",
            .capsName = "COMBATE",
            .fullName = "Combate",
        },
        .data = {
            .effect = MOVE_EFFECT_STRUGGLE,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Solo se usa como\\núltimo recurso al\\nacabarse los PP.\\nHiere un poco\\nal agresor.",
    },

    [MOVE_SKETCH] = {
        .names = {
            .name = "Esquema",
            .capsName = "ESQUEMA",
            .fullName = "Esquema",
        },
        .data = {
            .effect = MOVE_EFFECT_LEARN_MOVE_PERMANENT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Copia el último\\nmovimiento del\\nrival. Es de un\\nsolo uso.",
    },

    [MOVE_TRIPLE_KICK] = {
        .names = {
            .name = "Triplepatada",
            .capsName = "TRIPLEPATADA",
            .fullName = "Triplepatada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_THREE_TIMES_INCREMENT_BASE_POWER_10,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_FIGHTING,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Patea hasta tres\\nveces seguidas y\\ncada vez más fuerte.",
    },

    [MOVE_THIEF] = {
        .names = {
            .name = "Ladrón",
            .capsName = "LADRÓN",
            .fullName = "Ladrón",
        },
        .data = {
            .effect = MOVE_EFFECT_STEAL_HELD_ITEM,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataca y le quita al\\nrival el objeto que\\nlleve. Si el agresor\\nlleva un objeto, no\\nrobará el del rival.",
    },

    [MOVE_SPIDER_WEB] = {
        .names = {
            .name = "Telaraña",
            .capsName = "TELARAÑA",
            .fullName = "Telaraña",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ESCAPE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_SMART,
        },
        .description = "Enreda al rival para\\nevitar que abandone\\nla batalla.",
    },

    [MOVE_MIND_READER] = {
        .names = {
            .name = "Telépata",
            .capsName = "TELÉPATA",
            .fullName = "Telépata",
        },
        .data = {
            .effect = MOVE_EFFECT_NEXT_ATTACK_ALWAYS_HITS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "El usuario adivina\\nlos movimientos\\ndel rival para hacer\\nque su siguiente\\nataque no falle.",
    },

    [MOVE_NIGHTMARE] = {
        .names = {
            .name = "Pesadilla",
            .capsName = "PESADILLA",
            .fullName = "Pesadilla",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_NIGHTMARE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "El rival dormido\\nsufre una pesadilla\\nque le hace perder\\nPS en cada turno.",
    },

    [MOVE_FLAME_WHEEL] = {
        .names = {
            .name = "Rueda Fuego",
            .capsName = "RUEDA FUEGO",
            .fullName = "Rueda Fuego",
        },
        .data = {
            .effect = MOVE_EFFECT_THAW_AND_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca envuelto\\nen fuego. Puede\\ncausar quemaduras.",
    },

    [MOVE_SNORE] = {
        .names = {
            .name = "Ronquido",
            .capsName = "RONQUIDO",
            .fullName = "Ronquido",
        },
        .data = {
            .effect = MOVE_EFFECT_DAMAGE_WHILE_ASLEEP,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_CUTE,
        },
        .description = "Fuerte ronquido\\nque debe usarse\\ndormido. Puede\\nhacer retroceder\\nal enemigo.",
    },

    [MOVE_CURSE] = {
        .names = {
            .name = "Maldición",
            .capsName = "MALDICIÓN",
            .fullName = "Maldición",
        },
        .data = {
            .effect = MOVE_EFFECT_CURSE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_TOUGH,
        },
        .description = "En el tipo Fantasma\\ntiene un efecto\\ndistinto.",
    },

    [MOVE_FLAIL] = {
        .names = {
            .name = "Azote",
            .capsName = "AZOTE",
            .fullName = "Azote",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_POWER_WITH_LESS_HP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Ataque frenético.\\nCuantos menos\\nPS tenga el usuario,\\nmás daño produce.",
    },

    [MOVE_CONVERSION_2] = {
        .names = {
            .name = "Conversión2",
            .capsName = "CONVERSIÓN2",
            .fullName = "Conversión2",
        },
        .data = {
            .effect = MOVE_EFFECT_CONVERSION2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Cambia el tipo para\\nhacerse resistente\\nal último tipo de\\nataque recibido.",
    },

    [MOVE_AEROBLAST] = {
        .names = {
            .name = "Aerochorro",
            .capsName = "AEROCHORRO",
            .fullName = "Aerochorro",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FLYING,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza un chorro de\\naire que suele dar\\nun golpe crítico.",
    },

    [MOVE_COTTON_SPORE] = {
        .names = {
            .name = "Esporagodón",
            .capsName = "ESPORAGODÓN",
            .fullName = "Esporagodón",
        },
        .data = {
            .effect = MOVE_EFFECT_SPEED_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Adhiere esporas al\\nrival para reducir\\nmucho su Velocidad.",
    },

    [MOVE_REVERSAL] = {
        .names = {
            .name = "Inversión",
            .capsName = "INVERSIÓN",
            .fullName = "Inversión",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_POWER_WITH_LESS_HP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque desesperado\\nque causa más daño\\ncuantos menos PS\\ntenga el usuario.",
    },

    [MOVE_SPITE] = {
        .names = {
            .name = "Rencor",
            .capsName = "RENCOR",
            .fullName = "Rencor",
        },
        .data = {
            .effect = MOVE_EFFECT_DECREASE_LAST_MOVE_PP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Da rienda suelta a su\\nrencor para reducir\\ncuatro PP del último\\nmovimiento usado\\npor el rival.",
    },

    [MOVE_POWDER_SNOW] = {
        .names = {
            .name = "Nieve Polvo",
            .capsName = "NIEVE POLVO",
            .fullName = "Nieve Polvo",
        },
        .data = {
            .effect = MOVE_EFFECT_FREEZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Lanza una nevada\\nque puede llegar\\na congelar.",
    },

    [MOVE_PROTECT] = {
        .names = {
            .name = "Protección",
            .capsName = "PROTECCIÓN",
            .fullName = "Protección",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (10)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_CUTE,
        },
        .description = "Frena todos los\\nataques, pero puede\\nfallar si se usa\\nrepetidamente.",
    },

    [MOVE_MACH_PUNCH] = {
        .names = {
            .name = "Ultrapuño",
            .capsName = "ULTRAPUÑO",
            .fullName = "Ultrapuño",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Puñetazo que se da\\nrápido para golpear\\nprimero.",
    },

    [MOVE_SCARY_FACE] = {
        .names = {
            .name = "Cara Susto",
            .capsName = "CARA SUSTO",
            .fullName = "Cara Susto",
        },
        .data = {
            .effect = MOVE_EFFECT_SPEED_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Asusta al enemigo\\npara reducir mucho\\nsu Velocidad.",
    },

    [MOVE_FEINT_ATTACK] = {
        .names = {
            .name = "Finta",
            .capsName = "FINTA",
            .fullName = "Finta",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Engaña al enemigo\\npara acercarse y\\ndar un puñetazo\\nque no falla.",
    },

    [MOVE_SWEET_KISS] = {
        .names = {
            .name = "Beso Dulce",
            .capsName = "BESO DULCE",
            .fullName = "Beso Dulce",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_CONFUSE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 75,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Da un beso con\\ntal dulzura que\\ncausa confusión.",
    },

    [MOVE_BELLY_DRUM] = {
        .names = {
            .name = "Tambor",
            .capsName = "TAMBOR",
            .fullName = "Tambor",
        },
        .data = {
            .effect = MOVE_EFFECT_MAX_ATK_LOSE_HALF_MAX_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Reduce la mitad de\\nlos PS máximos para\\nmejorar al máximo\\nel Ataque.",
    },

    [MOVE_SLUDGE_BOMB] = {
        .names = {
            .name = "Bomba Lodo",
            .capsName = "BOMBA LODO",
            .fullName = "Bomba Lodo",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Explosión de lodo\\nque puede llegar\\na envenenar.",
    },

    [MOVE_MUD_SLAP] = {
        .names = {
            .name = "Bofetón Lodo",
            .capsName = "BOFETÓN LODO",
            .fullName = "Bofetón Lodo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ACCURACY_HIT,
            .split = SPLIT_SPECIAL,
            .power = 20,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_CUTE,
        },
        .description = "Echa lodo en la\\ncara para bajar\\nla precisión.",
    },

    [MOVE_OCTAZOOKA] = {
        .names = {
            .name = "Pulpocañón",
            .capsName = "PULPOCAÑÓN",
            .fullName = "Pulpocañón",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ACCURACY_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_WATER,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Dispara tinta a la\\ncara. Puede bajar\\nla precisión.",
    },

    [MOVE_SPIKES] = {
        .names = {
            .name = "Púas",
            .capsName = "PÚAS",
            .fullName = "Púas",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_SPIKES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GROUND,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_OPPONENT_SIDE,
            .priority = 0,
            .flags = FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_SMART,
        },
        .description = "Esparce púas que\\nhieren al rival que\\nentre en combate.",
    },

    [MOVE_ZAP_CANNON] = {
        .names = {
            .name = "Electrocañón",
            .capsName = "ELECTROCAÑÓN",
            .fullName = "Electrocañón",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_ELECTRIC,
            .accuracy = 50,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Dispara una descarga\\neléctrica que causa\\ndaño y parálisis.",
    },

    [MOVE_FORESIGHT] = {
        .names = {
            .name = "Profecía",
            .capsName = "PROFECÍA",
            .fullName = "Profecía",
        },
        .data = {
            .effect = MOVE_EFFECT_IGNORE_EVASION_REMOVE_GHOST_IMMUNE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Permite atacar con\\ncualquier movimiento\\na rivales de tipo\\nFantasma y golpear\\na Pokémon evasivos.",
    },

    [MOVE_DESTINY_BOND] = {
        .names = {
            .name = "Mismodestino",
            .capsName = "MISMODESTINO",
            .fullName = "Mismodestino",
        },
        .data = {
            .effect = MOVE_EFFECT_KO_MON_THAT_DEFEATED_USER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Si el usuario se\\ndebilita, el enemigo\\nse debilita también.",
    },

    [MOVE_PERISH_SONG] = {
        .names = {
            .name = "Canto Mortal",
            .capsName = "CANTO MORTAL",
            .fullName = "Canto Mortal",
        },
        .data = {
            .effect = MOVE_EFFECT_ALL_FAINT_3_TURNS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Si un Pokémon escucha\\neste canto y no es\\ncambiado por otro en\\ntres turnos, acaba\\ndebilitándose.",
    },

    [MOVE_ICY_WIND] = {
        .names = {
            .name = "Viento Hielo",
            .capsName = "VIENTO HIELO",
            .fullName = "Viento Hielo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_SPECIAL,
            .power = 55,
            .type = TYPE_ICE,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataque con aire\\nhelado que baja\\nla Velocidad.",
    },

    [MOVE_DETECT] = {
        .names = {
            .name = "Detección",
            .capsName = "DETECCIÓN",
            .fullName = "Detección",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_COOL,
        },
        .description = "Frena todos los\\nataques, pero puede\\nfallar si se usa\\nrepetidamente.",
    },

    [MOVE_BONE_RUSH] = {
        .names = {
            .name = "Ataque Óseo",
            .capsName = "ATAQUE ÓSEO",
            .fullName = "Ataque Óseo",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (30) : (25)),
            .type = TYPE_GROUND,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Hueso en ristre,\\naporrea al enemigo\\nde dos a cinco veces.",
    },

    [MOVE_LOCK_ON] = {
        .names = {
            .name = "Fijar Blanco",
            .capsName = "FIJAR BLANCO",
            .fullName = "Fijar Blanco",
        },
        .data = {
            .effect = MOVE_EFFECT_NEXT_ATTACK_ALWAYS_HITS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Fija el blanco para\\nque el siguiente\\nataque no falle.",
    },

    [MOVE_OUTRAGE] = {
        .names = {
            .name = "Enfado",
            .capsName = "ENFADO",
            .fullName = "Enfado",
        },
        .data = {
            .effect = MOVE_EFFECT_CONTINUE_AND_CONFUSE_SELF,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_RANDOM_OPPONENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Embestida que dura\\ndos o tres turnos y\\nconfunde al atacante.",
    },

    [MOVE_SANDSTORM] = {
        .names = {
            .name = "Torm. Arena",
            .capsName = "TORM. ARENA",
            .fullName = "Torm. Arena",
        },
        .data = {
            .effect = MOVE_EFFECT_WEATHER_SANDSTORM,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (10)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Tormenta de arena\\nque dura cinco turnos\\ny hiere a todos,\\nexcepto a los tipos\\nRoca, Tierra y Acero.",
    },

    [MOVE_GIGA_DRAIN] = {
        .names = {
            .name = "Gigadrenado",
            .capsName = "GIGADRENADO",
            .fullName = "Gigadrenado",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_SPECIAL,
            .power = 75,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Absorbe la mitad del\\ndaño producido.",
    },

    [MOVE_ENDURE] = {
        .names = {
            .name = "Aguante",
            .capsName = "AGUANTE",
            .fullName = "Aguante",
        },
        .data = {
            .effect = MOVE_EFFECT_SURVIVE_WITH_1_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Resiste cualquier\\nataque y deja\\nal menos un PS.\\nPuede fallar si se\\nusa repetidamente.",
    },

    [MOVE_CHARM] = {
        .names = {
            .name = "Encanto",
            .capsName = "ENCANTO",
            .fullName = "Encanto",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Engatusa al rival y\\nreduce bastante\\nsu Ataque.",
    },

    [MOVE_ROLLOUT] = {
        .names = {
            .name = "Desenrollar",
            .capsName = "DESENROLLAR",
            .fullName = "Desenrollar",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_EACH_TURN_LOCK_INTO,
            .split = SPLIT_PHYSICAL,
            .power = 30,
            .type = TYPE_ROCK,
            .accuracy = 90,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "El atacante rueda\\ncontra el rival\\ndurante cinco turnos,\\ncada vez con\\nmayor fuerza.",
    },

    [MOVE_FALSE_SWIPE] = {
        .names = {
            .name = "Falsotortazo",
            .capsName = "FALSOTORTAZO",
            .fullName = "Falsotortazo",
        },
        .data = {
            .effect = MOVE_EFFECT_LEAVE_WITH_1_HP,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque moderado que\\nno debilita al enemigo\\ny le deja al menos\\nun PS.",
    },

    [MOVE_SWAGGER] = {
        .names = {
            .name = "Contoneo",
            .capsName = "CONTONEO",
            .fullName = "Contoneo",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_UP_2_STATUS_CONFUSION,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Provoca confusión\\nen el enemigo, pero\\ntambién sube mucho\\nsu Ataque.",
    },

    [MOVE_MILK_DRINK] = {
        .names = {
            .name = "Batido",
            .capsName = "BATIDO",
            .fullName = "Batido",
        },
        .data = {
            .effect = MOVE_EFFECT_RESTORE_HALF_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Restaura hasta la\\nmitad de los PS\\nmáximos. Fuera de\\ncombate, puede\\nusarse en aliados.",
    },

    [MOVE_SPARK] = {
        .names = {
            .name = "Chispa",
            .capsName = "CHISPA",
            .fullName = "Chispa",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque eléctrico\\nque puede llegar\\na paralizar.",
    },

    [MOVE_FURY_CUTTER] = {
        .names = {
            .name = "Cortefuria",
            .capsName = "CORTEFURIA",
            .fullName = "Cortefuria",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_EACH_TURN,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_BUG,
            .accuracy = 95,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque con garras\\no guadaña que crece\\nen intensidad si se\\nusa repetidas veces.",
    },

    [MOVE_STEEL_WING] = {
        .names = {
            .name = "Ala de Acero",
            .capsName = "ALA DE ACERO",
            .fullName = "Ala de Acero",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_DEF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_STEEL,
            .accuracy = 90,
            .pp = 25,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Alas macizas que\\ngolpean al rival y\\npueden subir\\nla Defensa.",
    },

    [MOVE_MEAN_LOOK] = {
        .names = {
            .name = "Mal de Ojo",
            .capsName = "MAL DE OJO",
            .fullName = "Mal de Ojo",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ESCAPE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Mal de ojo que\\nimpide al rival huir\\nde la batalla.",
    },

    [MOVE_ATTRACT] = {
        .names = {
            .name = "Atracción",
            .capsName = "ATRACCIÓN",
            .fullName = "Atracción",
        },
        .data = {
            .effect = MOVE_EFFECT_INFATUATE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Si el enemigo es\\ndel sexo opuesto,\\nse enamorará y\\nbajará la posibilidad\\nde que ataque.",
    },

    [MOVE_SLEEP_TALK] = {
        .names = {
            .name = "Sonámbulo",
            .capsName = "SONÁMBULO",
            .fullName = "Sonámbulo",
        },
        .data = {
            .effect = MOVE_EFFECT_USE_RANDOM_LEARNED_MOVE_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_CUTE,
        },
        .description = "Mientras duerme,\\nusa uno de sus\\nmovimientos\\nelegido al azar.",
    },

    [MOVE_HEAL_BELL] = {
        .names = {
            .name = "Campana Cura",
            .capsName = "CAMPANA CURA",
            .fullName = "Campana Cura",
        },
        .data = {
            .effect = MOVE_EFFECT_CURE_PARTY_STATUS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Tañido que cura\\nlos problemas de\\nestado de todos los\\nPokémon del grupo.",
    },

    [MOVE_RETURN] = {
        .names = {
            .name = "Retroceso",
            .capsName = "RETROCESO",
            .fullName = "Retroceso",
        },
        .data = {
            .effect = MOVE_EFFECT_POWER_BASED_ON_FRIENDSHIP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Cuanto mayor sea\\nla amistad con el\\nEntrenador, más\\npoderoso será\\neste ataque.",
    },

    [MOVE_PRESENT] = {
        .names = {
            .name = "Presente",
            .capsName = "PRESENTE",
            .fullName = "Presente",
        },
        .data = {
            .effect = MOVE_EFFECT_RANDOM_POWER_MAYBE_HEAL,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_CUTE,
        },
        .description = "Regalo con bomba\\ntrampa. A veces\\nrestaura los PS.",
    },

    [MOVE_FRUSTRATION] = {
        .names = {
            .name = "Frustración",
            .capsName = "FRUSTRACIÓN",
            .fullName = "Frustración",
        },
        .data = {
            .effect = MOVE_EFFECT_POWER_BASED_ON_LOW_FRIENDSHIP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Cuanto menor sea\\nla amistad con el\\nEntrenador, más\\npoderoso será\\neste ataque.",
    },

    [MOVE_SAFEGUARD] = {
        .names = {
            .name = "Velo Sagrado",
            .capsName = "VELO SAGRADO",
            .fullName = "Velo Sagrado",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_STATUS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Crea un campo\\nprotector que evita\\nproblemas de estado\\ndurante cinco turnos.",
    },

    [MOVE_PAIN_SPLIT] = {
        .names = {
            .name = "Divide Dolor",
            .capsName = "DIVIDE DOLOR",
            .fullName = "Divide Dolor",
        },
        .data = {
            .effect = MOVE_EFFECT_AVERAGE_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_SMART,
        },
        .description = "Suma los PS del\\nusuario a los de\\notro Pokémon y\\nlos reparte a\\npartes iguales.",
    },

    [MOVE_SACRED_FIRE] = {
        .names = {
            .name = "Fuegosagrado",
            .capsName = "FUEGOSAGRADO",
            .fullName = "Fuegosagrado",
        },
        .data = {
            .effect = MOVE_EFFECT_THAW_AND_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIRE,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Fuego místico de\\ngran intensidad\\nque puede causar\\nquemaduras.",
    },

    [MOVE_MAGNITUDE] = {
        .names = {
            .name = "Magnitud",
            .capsName = "MAGNITUD",
            .fullName = "Magnitud",
        },
        .data = {
            .effect = MOVE_EFFECT_RANDOM_POWER_10_CASES,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Sacudida sísmica\\nde intensidad\\nvariable que afecta a\\nlos demás Pokémon\\nen combate.",
    },

    [MOVE_DYNAMIC_PUNCH] = {
        .names = {
            .name = "Puñodinámico",
            .capsName = "PUÑODINÁMICO",
            .fullName = "Puñodinámico",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIGHTING,
            .accuracy = 50,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Puñetazo con toda la\\nfuerza concentrada.\\nCausa confusión\\nsi atina.",
    },

    [MOVE_MEGAHORN] = {
        .names = {
            .name = "Megacuerno",
            .capsName = "MEGACUERNO",
            .fullName = "Megacuerno",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_BUG,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Violenta embestida\\ncon cuernos\\nimponentes.",
    },

    [MOVE_DRAGON_BREATH] = {
        .names = {
            .name = "Dragoaliento",
            .capsName = "DRAGOALIENTO",
            .fullName = "Dragoaliento",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Poderosa ráfaga\\nde aliento que\\ngolpea al enemigo\\ny puede paralizarlo.",
    },

    [MOVE_BATON_PASS] = {
        .names = {
            .name = "Relevo",
            .capsName = "RELEVO",
            .fullName = "Relevo",
        },
        .data = {
            .effect = MOVE_EFFECT_PASS_STATS_AND_STATUS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_CUTE,
        },
        .description = "Cambia el puesto\\ncon un compañero\\ny le pasa los cambios\\nde características.",
    },

    [MOVE_ENCORE] = {
        .names = {
            .name = "Otra Vez",
            .capsName = "OTRA VEZ",
            .fullName = "Otra Vez",
        },
        .data = {
            .effect = MOVE_EFFECT_ENCORE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "El rival repite el\\núltimo movimiento\\nde tres a siete\\nturnos.",
    },

    [MOVE_PURSUIT] = {
        .names = {
            .name = "Persecución",
            .capsName = "PERSECUCIÓN",
            .fullName = "Persecución",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_BEFORE_SWITCH,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Hace el doble de daño\\nal rival que pide\\nel relevo.",
    },

    [MOVE_RAPID_SPIN] = {
        .names = {
            .name = "Giro Rápido",
            .capsName = "GIRO RÁPIDO",
            .fullName = "Giro Rápido",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_HAZARDS_AND_BINDING,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque giratorio\\nque puede eliminar\\nmovimientos como\\nAtadura, Repetición,\\nDrenadoras y Púas.",
    },

    [MOVE_SWEET_SCENT] = {
        .names = {
            .name = "Dulce Aroma",
            .capsName = "DULCE AROMA",
            .fullName = "Dulce Aroma",
        },
        .data = {
            .effect = MOVE_EFFECT_EVA_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Engatusa al rival para\\nreducir su evasión.\\nTambién atrae\\nPokémon salvajes.",
    },

    [MOVE_IRON_TAIL] = {
        .names = {
            .name = "Cola Férrea",
            .capsName = "COLA FÉRREA",
            .fullName = "Cola Férrea",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_STEEL,
            .accuracy = 75,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con una cola\\nférrea y puede bajar\\nla Defensa.",
    },

    [MOVE_METAL_CLAW] = {
        .names = {
            .name = "Garra Metal",
            .capsName = "GARRA METAL",
            .fullName = "Garra Metal",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_STEEL,
            .accuracy = 95,
            .pp = 35,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque con garras\\nde acero que puede\\naumentar el Ataque.",
    },

    [MOVE_VITAL_THROW] = {
        .names = {
            .name = "Tiro Vital",
            .capsName = "TIRO VITAL",
            .fullName = "Tiro Vital",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_NEG_1_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Permite al rival\\natacar primero,\\npero no falla.",
    },

    [MOVE_MORNING_SUN] = {
        .names = {
            .name = "Sol Matinal",
            .capsName = "SOL MATINAL",
            .fullName = "Sol Matinal",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_HALF_DIFFERENT_IN_WEATHER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Restaura PS.\\nLa cantidad varía\\nsegún el tiempo\\nque haga.",
    },

    [MOVE_SYNTHESIS] = {
        .names = {
            .name = "Síntesis",
            .capsName = "SÍNTESIS",
            .fullName = "Síntesis",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_HALF_DIFFERENT_IN_WEATHER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_SMART,
        },
        .description = "Restaura PS.\\nLa cantidad varía\\nsegún el tiempo\\nque haga.",
    },

    [MOVE_MOONLIGHT] = {
        .names = {
            .name = "Luz Lunar",
            .capsName = "LUZ LUNAR",
            .fullName = "Luz Lunar",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_HALF_DIFFERENT_IN_WEATHER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Restaura PS.\\nLa cantidad varía\\nsegún el tiempo\\nque haga.",
    },

    [MOVE_HIDDEN_POWER] = {
        .names = {
            .name = "Poder Oculto",
            .capsName = "PODER OCULTO",
            .fullName = "Poder Oculto",
        },
        .data = {
            .effect = MOVE_EFFECT_RANDOM_TYPE_BASED_ON_IVS,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataque único cuyo\\ntipo y eficacia varían\\nsegún el agresor.",
    },

    [MOVE_CROSS_CHOP] = {
        .names = {
            .name = "Tajo Cruzado",
            .capsName = "TAJO CRUZADO",
            .fullName = "Tajo Cruzado",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIGHTING,
            .accuracy = 80,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Corte doble que\\nsuele propinar\\nun golpe crítico.",
    },

    [MOVE_TWISTER] = {
        .names = {
            .name = "Ciclón",
            .capsName = "CICLÓN",
            .fullName = "Ciclón",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_DOUBLE_DAMAGE_FLY_OR_BOUNCE,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Crea un violento\\ntornado para hacer\\ntrizas al rival. Puede\\nhacerle retroceder.",
    },

    [MOVE_RAIN_DANCE] = {
        .names = {
            .name = "Danza Lluvia",
            .capsName = "DANZA LLUVIA",
            .fullName = "Danza Lluvia",
        },
        .data = {
            .effect = MOVE_EFFECT_WEATHER_RAIN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Genera una fuerte\\nlluvia que refuerza\\nlos ataques de\\ntipo Agua durante\\ncinco turnos.",
    },

    [MOVE_SUNNY_DAY] = {
        .names = {
            .name = "Día Soleado",
            .capsName = "DÍA SOLEADO",
            .fullName = "Día Soleado",
        },
        .data = {
            .effect = MOVE_EFFECT_WEATHER_SUN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIRE,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El sol se intensifica\\ny sube los ataques\\nde tipo Fuego\\ndurante cinco turnos.",
    },

    [MOVE_CRUNCH] = {
        .names = {
            .name = "Triturar",
            .capsName = "TRITURAR",
            .fullName = "Triturar",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Tritura con afilados\\ncolmillos y puede\\nbajar la Defensa\\ndel enemigo.",
    },

    [MOVE_MIRROR_COAT] = {
        .names = {
            .name = "Manto Espejo",
            .capsName = "MANTO ESPEJO",
            .fullName = "Manto Espejo",
        },
        .data = {
            .effect = MOVE_EFFECT_MIRROR_COAT,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = -5,
            .flags = FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Responde a un\\nAtaque Especial\\ncon doble fuerza.",
    },

    [MOVE_PSYCH_UP] = {
        .names = {
            .name = "Más Psique",
            .capsName = "MÁS PSIQUE",
            .fullName = "Más Psique",
        },
        .data = {
            .effect = MOVE_EFFECT_COPY_STAT_CHANGES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_SMART,
        },
        .description = "El usuario se\\nautohipnotiza para\\ncopiar los cambios de\\nlas características\\ndel rival.",
    },

    [MOVE_EXTREME_SPEED] = {
        .names = {
            .name = "Vel. Extrema",
            .capsName = "VEL. EXTREMA",
            .fullName = "Vel. Extrema",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 2,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque muy rápido\\nque siempre se\\nrealiza el primero.",
    },

    [MOVE_ANCIENT_POWER] = {
        .names = {
            .name = "Poder Pasado",
            .capsName = "PODER PASADO",
            .fullName = "Poder Pasado",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ALL_STATS_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_ROCK,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataque prehistórico\\nque puede subir todas\\nlas características.",
    },

    [MOVE_SHADOW_BALL] = {
        .names = {
            .name = "Bola Sombra",
            .capsName = "BOLA SOMBRA",
            .fullName = "Bola Sombra",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Lanza una bola\\noscura que puede\\nbajar la Defensa\\nEspecial.",
    },

    [MOVE_FUTURE_SIGHT] = {
        .names = {
            .name = "Premonición",
            .capsName = "PREMONICIÓN",
            .fullName = "Premonición",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_IN_3_TURNS,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Concentra energía\\npsíquica para\\ngolpear al enemigo\\ndos turnos después.",
    },

    [MOVE_ROCK_SMASH] = {
        .names = {
            .name = "Golpe Roca",
            .capsName = "GOLPE ROCA",
            .fullName = "Golpe Roca",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataque demoledor\\nque puede bajar la\\nDefensa. Fuera de\\ncombate sirve para\\nmachacar rocas.",
    },

    [MOVE_WHIRLPOOL] = {
        .names = {
            .name = "Torbellino",
            .capsName = "TORBELLINO",
            .fullName = "Torbellino",
        },
        .data = {
            .effect = MOVE_EFFECT_WHIRLPOOL,
            .split = SPLIT_SPECIAL,
            .power = 35,
            .type = TYPE_WATER,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Atrapa al rival en un\\ntorbellino que dura\\nde dos a cinco turnos.\\nSe puede usar para\\ncruzar remolinos.",
    },

    [MOVE_BEAT_UP] = {
        .names = {
            .name = "Paliza",
            .capsName = "PALIZA",
            .fullName = "Paliza",
        },
        .data = {
            .effect = MOVE_EFFECT_BEAT_UP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataque de todo el\\nequipo Pokémon.\\nCuantos más haya,\\nmás veces ataca.",
    },

    [MOVE_FAKE_OUT] = {
        .names = {
            .name = "Sorpresa",
            .capsName = "SORPRESA",
            .fullName = "Sorpresa",
        },
        .data = {
            .effect = MOVE_EFFECT_ALWAYS_FLINCH_FIRST_TURN_ONLY,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 3,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Ataca primero y,\\nademás, hace\\nretroceder al rival.\\nSolo sirve en el\\nprimer turno.",
    },

    [MOVE_UPROAR] = {
        .names = {
            .name = "Alboroto",
            .capsName = "ALBOROTO",
            .fullName = "Alboroto",
        },
        .data = {
            .effect = MOVE_EFFECT_UPROAR,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_RANDOM_OPPONENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_CUTE,
        },
        .description = "Ataca de forma\\nalborotada de dos\\na cinco turnos.\\nMantiene despiertos\\na todos.",
    },

    [MOVE_STOCKPILE] = {
        .names = {
            .name = "Reserva",
            .capsName = "RESERVA",
            .fullName = "Reserva",
        },
        .data = {
            .effect = MOVE_EFFECT_STOCKPILE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Acumula energía y\\nsube la Defensa y\\nla Defensa Especial.\\nPuede utilizarse hasta\\ntres veces.",
    },

    [MOVE_SPIT_UP] = {
        .names = {
            .name = "Escupir",
            .capsName = "ESCUPIR",
            .fullName = "Escupir",
        },
        .data = {
            .effect = MOVE_EFFECT_SPIT_UP,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Libera de una vez la\\nenergía acumulada\\ncon Reserva.",
    },

    [MOVE_SWALLOW] = {
        .names = {
            .name = "Tragar",
            .capsName = "TRAGAR",
            .fullName = "Tragar",
        },
        .data = {
            .effect = MOVE_EFFECT_SWALLOW,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Absorbe la energía\\nacumulada con\\nReserva y\\nrestaura PS.",
    },

    [MOVE_HEAT_WAVE] = {
        .names = {
            .name = "Onda Ígnea",
            .capsName = "ONDA ÍGNEA",
            .fullName = "Onda Ígnea",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 95,
            .type = TYPE_FIRE,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Provoca un viento\\nabrasador que puede\\nquemar al rival.",
    },

    [MOVE_HAIL] = {
        .names = {
            .name = "Granizo",
            .capsName = "GRANIZO",
            .fullName = "Granizo",
        },
        .data = {
            .effect = MOVE_EFFECT_WEATHER_HAIL,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Tormenta de granizo\\nque dura cinco\\nturnos. Hiere a\\ntodos, excepto a\\nlos de tipo Hielo.",
    },

    [MOVE_TORMENT] = {
        .names = {
            .name = "Tormento",
            .capsName = "TORMENTO",
            .fullName = "Tormento",
        },
        .data = {
            .effect = MOVE_EFFECT_TORMENT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Atormenta y enfurece\\nal rival, que no puede\\nusar dos veces\\nseguidas el mismo\\nmovimiento.",
    },

    [MOVE_FLATTER] = {
        .names = {
            .name = "Camelo",
            .capsName = "CAMELO",
            .fullName = "Camelo",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_UP_CAUSE_CONFUSION,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Halaga al enemigo y\\nlo confunde, pero\\ntambién sube su\\nAtaque Especial.",
    },

    [MOVE_WILL_O_WISP] = {
        .names = {
            .name = "Fuego Fatuo",
            .capsName = "FUEGO FATUO",
            .fullName = "Fuego Fatuo",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_BURN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIRE,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Llama siniestra\\nmorada que produce\\nquemaduras.",
    },

    [MOVE_MEMENTO] = {
        .names = {
            .name = "Legado",
            .capsName = "LEGADO",
            .fullName = "Legado",
        },
        .data = {
            .effect = MOVE_EFFECT_FAINT_AND_ATK_SP_ATK_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "El usuario se debilita,\\npero baja mucho el\\nAtaque y el Ataque\\nEspecial del\\ncontrincante.",
    },

    [MOVE_FACADE] = {
        .names = {
            .name = "Imagen",
            .capsName = "IMAGEN",
            .fullName = "Imagen",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_WHEN_STATUSED,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Ataca con el doble de\\npotencia si el usuario\\nestá quemado,\\nparalizado o\\nenvenenado.",
    },

    [MOVE_FOCUS_PUNCH] = {
        .names = {
            .name = "Puño Certero",
            .capsName = "PUÑO CERTERO",
            .fullName = "Puño Certero",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_LAST_WHIFF_IF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 150,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -3,
            .flags = FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Se concentra para\\ndar un puñetazo.\\nFalla si se sufre\\nun golpe antes de\\nsu uso.",
    },

    [MOVE_SMELLING_SALTS] = {
        .names = {
            .name = "Estímulo",
            .capsName = "ESTÍMULO",
            .fullName = "Estímulo",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_AND_CURE_PARALYSIS,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_SMART,
        },
        .description = "Hace doble daño a\\nrivales paralizados,\\npero también cura\\nla parálisis.",
    },

    [MOVE_FOLLOW_ME] = {
        .names = {
            .name = "Señuelo",
            .capsName = "SEÑUELO",
            .fullName = "Señuelo",
        },
        .data = {
            .effect = MOVE_EFFECT_MAKE_GLOBAL_TARGET,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 2,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Llama la atención\\npara concentrar\\nlos ataques de todos\\nlos enemigos.",
    },

    [MOVE_NATURE_POWER] = {
        .names = {
            .name = "Adaptación",
            .capsName = "ADAPTACIÓN",
            .fullName = "Adaptación",
        },
        .data = {
            .effect = MOVE_EFFECT_NATURE_POWER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Usa el poder de la\\nnaturaleza. Su efecto\\nvaría según el sitio.",
    },

    [MOVE_CHARGE] = {
        .names = {
            .name = "Carga",
            .capsName = "CARGA",
            .fullName = "Carga",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_DEF_UP_DOUBLE_ELECTRIC_POWER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_SMART,
        },
        .description = "Recarga energía\\npara potenciar el\\nsiguiente movimiento\\nEléctrico. También\\nsube la Def. Esp.",
    },

    [MOVE_TAUNT] = {
        .names = {
            .name = "Mofa",
            .capsName = "MOFA",
            .fullName = "Mofa",
        },
        .data = {
            .effect = MOVE_EFFECT_TAUNT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_SMART,
        },
        .description = "Enfurece al rival\\npara que solo\\nuse movimientos\\nde ataque de dos\\na cuatro turnos.",
    },

    [MOVE_HELPING_HAND] = {
        .names = {
            .name = "Refuerzo",
            .capsName = "REFUERZO",
            .fullName = "Refuerzo",
        },
        .data = {
            .effect = MOVE_EFFECT_BOOST_ALLY_POWER_BY_50_PERCENT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALLY,
            .priority = 5,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Refuerza los ataques\\nde un aliado en un\\ncombate doble.",
    },

    [MOVE_TRICK] = {
        .names = {
            .name = "Truco",
            .capsName = "TRUCO",
            .fullName = "Truco",
        },
        .data = {
            .effect = MOVE_EFFECT_SWITCH_HELD_ITEMS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Engaña al rival\\ndesprevenido\\ne intercambia\\nobjetos.",
    },

    [MOVE_ROLE_PLAY] = {
        .names = {
            .name = "Imitación",
            .capsName = "IMITACIÓN",
            .fullName = "Imitación",
        },
        .data = {
            .effect = MOVE_EFFECT_COPY_ABILITY,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Imita al rival por\\ncompleto y copia\\nsu habilidad.",
    },

    [MOVE_WISH] = {
        .names = {
            .name = "Deseo",
            .capsName = "DESEO",
            .fullName = "pidió un Deseo",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_IN_3_TURNS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Cumple el deseo de\\nrestaurar hasta la\\nmitad de los PS\\nmáximos en el\\nsiguiente turno.",
    },

    [MOVE_ASSIST] = {
        .names = {
            .name = "Ayuda",
            .capsName = "AYUDA",
            .fullName = "Ayuda",
        },
        .data = {
            .effect = MOVE_EFFECT_USE_RANDOM_ALLY_MOVE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Usa un movimiento de\\nun miembro del equipo\\nelegido al azar.",
    },

    [MOVE_INGRAIN] = {
        .names = {
            .name = "Arraigo",
            .capsName = "ARRAIGO",
            .fullName = "Arraigo",
        },
        .data = {
            .effect = MOVE_EFFECT_GROUND_TRAP_USER_CONTINUOUS_HEAL,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_SMART,
        },
        .description = "Echa raíces para\\nrecuperar PS en\\ncada turno, pero\\nimpide el relevo.",
    },

    [MOVE_SUPERPOWER] = {
        .names = {
            .name = "Fuerza Bruta",
            .capsName = "FUERZA BRUTA",
            .fullName = "Fuerza Bruta",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_ATK_DEF_DOWN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataque de gran\\npotencia, pero que\\nreduce el Ataque y la\\nDefensa del agresor.",
    },

    [MOVE_MAGIC_COAT] = {
        .names = {
            .name = "Capa Mágica",
            .capsName = "CAPA MÁGICA",
            .fullName = "Capa Mágica",
        },
        .data = {
            .effect = MOVE_EFFECT_MAGIC_COAT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Barrera capaz de\\ndevolver al agresor\\nmovimientos como\\nDrenadoras y que\\nalteran el estado.",
    },

    [MOVE_RECYCLE] = {
        .names = {
            .name = "Reciclaje",
            .capsName = "RECICLAJE",
            .fullName = "Reciclaje",
        },
        .data = {
            .effect = MOVE_EFFECT_RECYCLE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Los objetos equipados\\nque sean de un solo\\nuso serán reciclados\\ntras ser empleados\\nen combate.",
    },

    [MOVE_REVENGE] = {
        .names = {
            .name = "Desquite",
            .capsName = "DESQUITE",
            .fullName = "Desquite",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_DAMAGE_IF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -4,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataque que produce\\ndoble daño si el\\nenemigo te hiere en\\nel mismo turno.",
    },

    [MOVE_BRICK_BREAK] = {
        .names = {
            .name = "Demolición",
            .capsName = "DEMOLICIÓN",
            .fullName = "Demolición",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_SCREENS,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Potente ataque que\\ntambién es capaz de\\ndestruir barreras\\ncomo Pantalla Luz\\ny Reflejo.",
    },

    [MOVE_YAWN] = {
        .names = {
            .name = "Bostezo",
            .capsName = "BOSTEZO",
            .fullName = "Bostezo",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP_NEXT_TURN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Gran bostezo que\\ninduce al sueño al\\nrival en el siguiente\\nturno.",
    },

    [MOVE_KNOCK_OFF] = {
        .names = {
            .name = "Desarme",
            .capsName = "DESARME",
            .fullName = "Desarme",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_HELD_ITEM,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Impide al rival usar\\nel objeto que lleva\\ndurante el combate.",
    },

    [MOVE_ENDEAVOR] = {
        .names = {
            .name = "Esfuerzo",
            .capsName = "ESFUERZO",
            .fullName = "Esfuerzo",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_HP_EQUAL_TO_USER,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Reduce los PS del\\nrival para que igualen\\na los del atacante.",
    },

    [MOVE_ERUPTION] = {
        .names = {
            .name = "Estallido",
            .capsName = "ESTALLIDO",
            .fullName = "Estallido",
        },
        .data = {
            .effect = MOVE_EFFECT_DECREASE_POWER_WITH_LESS_USER_HP,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Furia explosiva.\\nCuanto menor sea\\nel número de PS del\\nusuario, menos daño\\nhará el ataque.",
    },

    [MOVE_SKILL_SWAP] = {
        .names = {
            .name = "Intercambio",
            .capsName = "INTERCAMBIO",
            .fullName = "Intercambio",
        },
        .data = {
            .effect = MOVE_EFFECT_SWITCH_ABILITIES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Usa el poder psíquico\\npara intercambiar\\nhabilidades con el\\nenemigo.",
    },

    [MOVE_IMPRISON] = {
        .names = {
            .name = "Cerca",
            .capsName = "CERCA",
            .fullName = "Cerca",
        },
        .data = {
            .effect = MOVE_EFFECT_MAKE_SHARED_MOVES_UNUSEABLE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Impide al rival usar\\nataques conocidos\\npor el usuario.",
    },

    [MOVE_REFRESH] = {
        .names = {
            .name = "Alivio",
            .capsName = "ALIVIO",
            .fullName = "Alivio",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_STATUS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Descansa para\\ncurar parálisis,\\nenvenenamientos\\ny quemaduras.",
    },

    [MOVE_GRUDGE] = {
        .names = {
            .name = "Rabia",
            .capsName = "RABIA",
            .fullName = "Rabia",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_ALL_PP_ON_DEFEAT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Si el usuario se\\ndebilita, elimina todos\\nlos PP del último\\nataque del rival.",
    },

    [MOVE_SNATCH] = {
        .names = {
            .name = "Robo",
            .capsName = "ROBO",
            .fullName = "Robo",
        },
        .data = {
            .effect = MOVE_EFFECT_STEAL_STATUS_MOVE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_SMART,
        },
        .description = "Roba el efecto de\\nmovimientos de\\ncuración o de cambio\\nde características\\nque el rival use.",
    },

    [MOVE_SECRET_POWER] = {
        .names = {
            .name = "Daño Secreto",
            .capsName = "DAÑO SECRETO",
            .fullName = "Daño Secreto",
        },
        .data = {
            .effect = MOVE_EFFECT_SECRET_POWER,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataque con poder\\nsecreto cuyos\\nefectos varían según\\nla zona.",
    },

    [MOVE_DIVE] = {
        .names = {
            .name = "Buceo",
            .capsName = "BUCEO",
            .fullName = "Buceo",
        },
        .data = {
            .effect = MOVE_EFFECT_DIVE,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Primer turno: bucea.\\nSegundo turno:\\ngolpea.",
    },

    [MOVE_ARM_THRUST] = {
        .names = {
            .name = "Empujón",
            .capsName = "EMPUJÓN",
            .fullName = "Empujón",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 15,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Empujones directos\\nque golpean de dos a\\ncinco veces seguidas.",
    },

    [MOVE_CAMOUFLAGE] = {
        .names = {
            .name = "Camuflaje",
            .capsName = "CAMUFLAJE",
            .fullName = "Camuflaje",
        },
        .data = {
            .effect = MOVE_EFFECT_CAMOUFLAGE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_SMART,
        },
        .description = "Modifica el tipo del\\nPokémon según la\\nzona donde esté.",
    },

    [MOVE_TAIL_GLOW] = {
        .names = {
            .name = "Ráfaga",
            .capsName = "RÁFAGA",
            .fullName = "Ráfaga",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_UP_3,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Se concentra en\\nuna ráfaga de luz\\nque sube muchísimo\\nel Ataque Especial.",
    },

    [MOVE_LUSTER_PURGE] = {
        .names = {
            .name = "Resplandor",
            .capsName = "RESPLANDOR",
            .fullName = "Resplandor",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 95,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Fogonazo de luz que\\npuede bajar la\\nDefensa Especial.",
    },

    [MOVE_MIST_BALL] = {
        .names = {
            .name = "Bola Neblina",
            .capsName = "BOLA NEBLINA",
            .fullName = "Bola Neblina",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 95,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Banco de niebla que\\npuede bajar el\\nAtaque Especial.",
    },

    [MOVE_FEATHER_DANCE] = {
        .names = {
            .name = "Danza Pluma",
            .capsName = "DANZA PLUMA",
            .fullName = "Danza Pluma",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Envuelve al rival\\ncon plumón para\\nreducir mucho\\nsu Ataque.",
    },

    [MOVE_TEETER_DANCE] = {
        .names = {
            .name = "Danza Caos",
            .capsName = "DANZA CAOS",
            .fullName = "Danza Caos",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_ALL_ADJACENT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Danza histérica que\\nconfunde al resto\\nde Pokémon que\\nhay en escena.",
    },

    [MOVE_BLAZE_KICK] = {
        .names = {
            .name = "Patada Ígnea",
            .capsName = "PATADA ÍGNEA",
            .fullName = "Patada Ígnea",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_FIRE,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Patada que suele\\nser un golpe crítico\\ny puede causar\\nquemaduras.",
    },

    [MOVE_MUD_SPORT] = {
        .names = {
            .name = "Chapoteolodo",
            .capsName = "CHAPOTEOLODO",
            .fullName = "Chapoteolodo",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_ELECTRIC_DAMAGE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GROUND,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario se cubre\\nde lodo y debilita los\\nmovimientos eléctricos\\nmientras está\\nen combate.",
    },

    [MOVE_ICE_BALL] = {
        .names = {
            .name = "Bola Hielo",
            .capsName = "BOLA HIELO",
            .fullName = "Bola Hielo",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_EACH_TURN_LOCK_INTO,
            .split = SPLIT_PHYSICAL,
            .power = 30,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Embiste al rival\\ndurante cinco turnos\\ny gana fuerza\\nen cada uno.",
    },

    [MOVE_NEEDLE_ARM] = {
        .names = {
            .name = "Brazo Pincho",
            .capsName = "BRAZO PINCHO",
            .fullName = "Brazo Pincho",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Pega con brazos de\\npinchos y puede\\nhacer retroceder\\nal enemigo.",
    },

    [MOVE_SLACK_OFF] = {
        .names = {
            .name = "Relajo",
            .capsName = "RELAJO",
            .fullName = "Relajo",
        },
        .data = {
            .effect = MOVE_EFFECT_RESTORE_HALF_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario se relaja\\ny restaura la mitad\\nde sus PS máximos.",
    },

    [MOVE_HYPER_VOICE] = {
        .names = {
            .name = "Vozarrón",
            .capsName = "VOZARRÓN",
            .fullName = "Vozarrón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Grito desgarrador que\\ninflige daño al rival.",
    },

    [MOVE_POISON_FANG] = {
        .names = {
            .name = "Colmillo Ven",
            .capsName = "COLMILLO VEN",
            .fullName = "Colmillo Ven",
        },
        .data = {
            .effect = MOVE_EFFECT_BADLY_POISON_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Colmillos tóxicos que\\npueden envenenar\\ngravemente al rival.",
    },

    [MOVE_CRUSH_CLAW] = {
        .names = {
            .name = "Garra Brutal",
            .capsName = "GARRA BRUTAL",
            .fullName = "Garra Brutal",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_NORMAL,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Hace trizas al\\nenemigo con garras\\nafiladas y puede\\nbajar la Defensa.",
    },

    [MOVE_BLAST_BURN] = {
        .names = {
            .name = "Anillo Ígneo",
            .capsName = "ANILLO ÍGNEO",
            .fullName = "Anillo Ígneo",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_FIRE,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Explosión de fuego.\\nEl atacante debe\\ndescansar el\\nsiguiente turno.",
    },

    [MOVE_HYDRO_CANNON] = {
        .names = {
            .name = "Hidrocañón",
            .capsName = "HIDROCAÑÓN",
            .fullName = "Hidrocañón",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_WATER,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Disparo de agua.\\nEl atacante debe\\ndescansar el\\nsiguiente turno.",
    },

    [MOVE_METEOR_MASH] = {
        .names = {
            .name = "Puño Meteoro",
            .capsName = "PUÑO METEORO",
            .fullName = "Puño Meteoro",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_STEEL,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Puñetazo que impacta\\ncomo un meteorito y\\nsuele subir el Ataque\\ndel agresor.",
    },

    [MOVE_ASTONISH] = {
        .names = {
            .name = "Impresionar",
            .capsName = "IMPRESIONAR",
            .fullName = "Impresionar",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 30,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Impresiona tanto\\nque puede hacer\\nretroceder al rival.",
    },

    [MOVE_WEATHER_BALL] = {
        .names = {
            .name = "Meteorobola",
            .capsName = "METEOROBOLA",
            .fullName = "Meteorobola",
        },
        .data = {
            .effect = MOVE_EFFECT_CHANGE_TYPE_WITH_WEATHER,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "El tipo y fuerza del\\nataque varían según\\nel tiempo que haga.",
    },

    [MOVE_AROMATHERAPY] = {
        .names = {
            .name = "Aromaterapia",
            .capsName = "AROMATERAPIA",
            .fullName = "Aromaterapia",
        },
        .data = {
            .effect = MOVE_EFFECT_CURE_PARTY_STATUS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_SMART,
        },
        .description = "Cura todos los\\nproblemas de\\nestado del equipo\\ncon un suave aroma.",
    },

    [MOVE_FAKE_TEARS] = {
        .names = {
            .name = "Llanto Falso",
            .capsName = "LLANTO FALSO",
            .fullName = "Llanto Falso",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_DEF_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Lágrimas de cocodrilo\\nque bajan mucho la\\nDefensa Especial\\ndel enemigo.",
    },

    [MOVE_AIR_CUTTER] = {
        .names = {
            .name = "Aire Afilado",
            .capsName = "AIRE AFILADO",
            .fullName = "Aire Afilado",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_FLYING,
            .accuracy = 95,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Viento cortante que\\nazota. Suele ser\\nun golpe crítico.",
    },

    [MOVE_OVERHEAT] = {
        .names = {
            .name = "Sofoco",
            .capsName = "SOFOCO",
            .fullName = "Sofoco",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SP_ATK_DOWN_2,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_FIRE,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataque en toda regla\\nque baja mucho el\\nAtaque Especial\\ndel agresor.",
    },

    [MOVE_ODOR_SLEUTH] = {
        .names = {
            .name = "Rastreo",
            .capsName = "RASTREO",
            .fullName = "Rastreo",
        },
        .data = {
            .effect = MOVE_EFFECT_IGNORE_EVASION_REMOVE_GHOST_IMMUNE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Permite atacar con\\ncualquier movimiento\\na rivales de tipo\\nFantasma y golpear a\\nPokémon evasivos.",
    },

    [MOVE_ROCK_TOMB] = {
        .names = {
            .name = "Tumba Rocas",
            .capsName = "TUMBA ROCAS",
            .fullName = "Tumba Rocas",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_ROCK,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Tira rocas que\\ndetienen al rival y\\nbajan su Velocidad.",
    },

    [MOVE_SILVER_WIND] = {
        .names = {
            .name = "Viento Plata",
            .capsName = "VIENTO PLATA",
            .fullName = "Viento Plata",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ALL_STATS_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Fuerte viento con\\npolvo de escamas.\\nPuede subir todas\\nlas características\\ndel atacante.",
    },

    [MOVE_METAL_SOUND] = {
        .names = {
            .name = "Eco Metálico",
            .capsName = "ECO METÁLICO",
            .fullName = "Eco Metálico",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_DEF_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 85,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_LOWER_VOLTAGES,
            .contestType = CONTEST_SMART,
        },
        .description = "Horrible chirrido\\nmetálico que baja\\nmucho la Defensa\\nEspecial.",
    },

    [MOVE_GRASS_WHISTLE] = {
        .names = {
            .name = "Silbato",
            .capsName = "SILBATO",
            .fullName = "Silbato",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 55,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "Agradable melodía que\\nadormece al rival.",
    },

    [MOVE_TICKLE] = {
        .names = {
            .name = "Cosquillas",
            .capsName = "COSQUILLAS",
            .fullName = "Cosquillas",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DEF_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_CUTE,
        },
        .description = "Hace reír para bajar\\nel Ataque y la\\nDefensa.",
    },

    [MOVE_COSMIC_POWER] = {
        .names = {
            .name = "Masa Cósmica",
            .capsName = "MASA CÓSMICA",
            .fullName = "Masa Cósmica",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_SP_DEF_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_COOL,
        },
        .description = "Sube la Defensa y la\\nDefensa Especial\\npropias con energía\\nmística.",
    },

    [MOVE_WATER_SPOUT] = {
        .names = {
            .name = "Salpicar",
            .capsName = "SALPICAR",
            .fullName = "Salpicar",
        },
        .data = {
            .effect = MOVE_EFFECT_DECREASE_POWER_WITH_LESS_USER_HP,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Chorro de agua.\\nCuantos menos PS\\ntenga el usuario,\\nmenos dañino será.",
    },

    [MOVE_SIGNAL_BEAM] = {
        .names = {
            .name = "Doble Rayo",
            .capsName = "DOBLE RAYO",
            .fullName = "Doble Rayo",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 75,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Rayo siniestro de\\nluz. Puede causar\\nconfusión.",
    },

    [MOVE_SHADOW_PUNCH] = {
        .names = {
            .name = "Puño Sombra",
            .capsName = "PUÑO SOMBRA",
            .fullName = "Puño Sombra",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Puñetazo ineludible\\nprocedente de las\\nsombras.",
    },

    [MOVE_EXTRASENSORY] = {
        .names = {
            .name = "Paranormal",
            .capsName = "PARANORMAL",
            .fullName = "Paranormal",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Energía muy extraña\\nque puede hacer\\nretroceder al\\nenemigo.",
    },

    [MOVE_SKY_UPPERCUT] = {
        .names = {
            .name = "Gancho Alto",
            .capsName = "GANCHO ALTO",
            .fullName = "Gancho Alto",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_FLY,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_FIGHTING,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Gancho ascendente\\nde gran ímpetu.",
    },

    [MOVE_SAND_TOMB] = {
        .names = {
            .name = "Bucle Arena",
            .capsName = "BUCLE ARENA",
            .fullName = "Bucle Arena",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 35,
            .type = TYPE_GROUND,
            .accuracy = 85,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_SMART,
        },
        .description = "Enreda en un remolino\\nde arena de dos a\\ncinco turnos.",
    },

    [MOVE_SHEER_COLD] = {
        .names = {
            .name = "Frío Polar",
            .capsName = "FRÍO POLAR",
            .fullName = "Frío Polar",
        },
        .data = {
            .effect = MOVE_EFFECT_ONE_HIT_KO,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_ICE,
            .accuracy = 30,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_ALL_SAME_JUDGE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataque de frío polar\\nque debilita al rival\\nsi le alcanza.",
    },

    [MOVE_MUDDY_WATER] = {
        .names = {
            .name = "Agua Lodosa",
            .capsName = "AGUA LODOSA",
            .fullName = "Agua Lodosa",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ACCURACY_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_WATER,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataque con agua\\nlodosa que puede\\nbajar la precisión.",
    },

    [MOVE_BULLET_SEED] = {
        .names = {
            .name = "Recurrente",
            .capsName = "RECURRENTE",
            .fullName = "Recurrente",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Dispara rápido de dos\\na cinco ráfagas de\\nsemillas de manera\\nconsecutiva.",
    },

    [MOVE_AERIAL_ACE] = {
        .names = {
            .name = "Golpe Aéreo",
            .capsName = "GOLPE AÉREO",
            .fullName = "Golpe Aéreo",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "El usuario lanza un\\nataque muy rápido\\ne ineludible.",
    },

    [MOVE_ICICLE_SPEAR] = {
        .names = {
            .name = "Carámbano",
            .capsName = "CARÁMBANO",
            .fullName = "Carámbano",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca lanzando de\\ndos a cinco ráfagas\\nconsecutivas\\nde carámbanos.",
    },

    [MOVE_IRON_DEFENSE] = {
        .names = {
            .name = "Def. Férrea",
            .capsName = "DEF. FÉRREA",
            .fullName = "Def. Férrea",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Fortalece el cuerpo\\ncomo si fuera hierro\\ny sube mucho la\\nDefensa.",
    },

    [MOVE_BLOCK] = {
        .names = {
            .name = "Bloqueo",
            .capsName = "BLOQUEO",
            .fullName = "Bloqueo",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ESCAPE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Le corta el paso\\nal rival con los\\nbrazos para que\\nno pueda escapar.",
    },

    [MOVE_HOWL] = {
        .names = {
            .name = "Aullido",
            .capsName = "AULLIDO",
            .fullName = "Aullido",
        },
        .data = {
            .effect = MOVE_EFFECT_HOWL,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_COOL,
        },
        .description = "Aullido que sube el\\nánimo y aumenta\\nel Ataque.",
    },

    [MOVE_DRAGON_CLAW] = {
        .names = {
            .name = "Garra Dragón",
            .capsName = "GARRA DRAGÓN",
            .fullName = "Garra Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Araña al rival con\\ngarras afiladas.",
    },

    [MOVE_FRENZY_PLANT] = {
        .names = {
            .name = "Planta Feroz",
            .capsName = "PLANTA FEROZ",
            .fullName = "Planta Feroz",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_GRASS,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea con una enorme\\nplanta. El atacante\\nno puede moverse en\\nel siguiente turno.",
    },

    [MOVE_BULK_UP] = {
        .names = {
            .name = "Corpulencia",
            .capsName = "CORPULENCIA",
            .fullName = "Corpulencia",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DEF_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Robustece el cuerpo\\npara subir el Ataque\\ny la Defensa.",
    },

    [MOVE_BOUNCE] = {
        .names = {
            .name = "Bote",
            .capsName = "BOTE",
            .fullName = "Bote",
        },
        .data = {
            .effect = MOVE_EFFECT_BOUNCE,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_FLYING,
            .accuracy = 85,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Primer turno: bota.\\nSegundo turno:\\ngolpea.\\nPuede paralizar.",
    },

    [MOVE_MUD_SHOT] = {
        .names = {
            .name = "Disp. Lodo",
            .capsName = "DISP. LODO",
            .fullName = "Disp. Lodo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_SPECIAL,
            .power = 55,
            .type = TYPE_GROUND,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "El usuario lanza lodo\\nal rival y reduce su\\nVelocidad.",
    },

    [MOVE_POISON_TAIL] = {
        .names = {
            .name = "Cola Veneno",
            .capsName = "COLA VENENO",
            .fullName = "Cola Veneno",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL_POISON_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Puede envenenar y\\ndar un golpe crítico.",
    },

    [MOVE_COVET] = {
        .names = {
            .name = "Antojo",
            .capsName = "ANTOJO",
            .fullName = "Antojo",
        },
        .data = {
            .effect = MOVE_EFFECT_STEAL_HELD_ITEM,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Se acerca con\\nternura al rival,\\npero le ataca\\npudiendo robar\\nel objeto que lleve.",
    },

    [MOVE_VOLT_TACKLE] = {
        .names = {
            .name = "Placaje Eléc",
            .capsName = "PLACAJE ELÉC",
            .fullName = "Placaje Eléc",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Placaje de alto riesgo\\nque hiere también\\nal atacante.",
    },

    [MOVE_MAGICAL_LEAF] = {
        .names = {
            .name = "Hoja Mágica",
            .capsName = "HOJA MÁGICA",
            .fullName = "Hoja Mágica",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Esparce extrañas\\nhojas que persiguen\\nal enemigo. No\\nse puede esquivar.",
    },

    [MOVE_WATER_SPORT] = {
        .names = {
            .name = "Hidrochorro",
            .capsName = "HIDROCHORRO",
            .fullName = "Hidrochorro",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_FIRE_DAMAGE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario se moja\\ny, mientras esté\\nen combate, los\\nmovimientos de tipo\\nFuego se debilitan.",
    },

    [MOVE_CALM_MIND] = {
        .names = {
            .name = "Paz Mental",
            .capsName = "PAZ MENTAL",
            .fullName = "Paz Mental",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_SP_DEF_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_SMART,
        },
        .description = "Aumenta la\\nconcentración y\\ncalma el espíritu para\\nsubir el At. Especial y\\nla Def. Especial.",
    },

    [MOVE_LEAF_BLADE] = {
        .names = {
            .name = "Hoja Aguda",
            .capsName = "HOJA AGUDA",
            .fullName = "Hoja Aguda",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Acuchilla con una\\nhoja fina. Suele dar\\nun golpe crítico.",
    },

    [MOVE_DRAGON_DANCE] = {
        .names = {
            .name = "Danza Dragón",
            .capsName = "DANZA DRAGÓN",
            .fullName = "Danza Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_SPEED_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DRAGON,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_COOL,
        },
        .description = "Danza mística que\\nsube el Ataque\\ny la Velocidad.",
    },

    [MOVE_ROCK_BLAST] = {
        .names = {
            .name = "Pedrada",
            .capsName = "PEDRADA",
            .fullName = "Pedrada",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_ROCK,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Lanza pedruscos al\\nrival de dos a cinco\\nveces consecutivas.",
    },

    [MOVE_SHOCK_WAVE] = {
        .names = {
            .name = "Onda Voltio",
            .capsName = "ONDA VOLTIO",
            .fullName = "Onda Voltio",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque eléctrico muy\\nrápido e ineludible.",
    },

    [MOVE_WATER_PULSE] = {
        .names = {
            .name = "Hidropulso",
            .capsName = "HIDROPULSO",
            .fullName = "Hidropulso",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Potente chorro\\nde agua que puede\\nconfundir al rival.",
    },

    [MOVE_DOOM_DESIRE] = {
        .names = {
            .name = "Deseo Oculto",
            .capsName = "DESEO OCULTO",
            .fullName = "Deseo Oculto",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_IN_3_TURNS,
            .split = SPLIT_SPECIAL,
            .power = 140,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Concentra un haz\\nde luz y ataca dos\\nturnos después.",
    },

    [MOVE_PSYCHO_BOOST] = {
        .names = {
            .name = "Psicoataque",
            .capsName = "PSICOATAQUE",
            .fullName = "Psicoataque",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SP_ATK_DOWN_2,
            .split = SPLIT_SPECIAL,
            .power = 140,
            .type = TYPE_PSYCHIC,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Es tremendamente\\npotente, pero baja\\nmucho el Ataque\\nEspecial del usuario.",
    },

    [MOVE_ROOST] = {
        .names = {
            .name = "Respiro",
            .capsName = "RESPIRO",
            .fullName = "Respiro",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_HALF_REMOVE_FLYING_TYPE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_COOL,
        },
        .description = "Aterriza sobre la\\nsuperficie para\\ndescansar.\\nRecupera como máximo\\nla mitad de los PS.",
    },

    [MOVE_GRAVITY] = {
        .names = {
            .name = "Gravedad",
            .capsName = "GRAVEDAD",
            .fullName = "Gravedad",
        },
        .data = {
            .effect = MOVE_EFFECT_GRAVITY,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "La gravedad aumenta\\ndurante cinco turnos,\\nlo que impide acciones\\nque impliquen volar\\no levitar.",
    },

    [MOVE_MIRACLE_EYE] = {
        .names = {
            .name = "Gran Ojo",
            .capsName = "GRAN OJO",
            .fullName = "Gran Ojo",
        },
        .data = {
            .effect = MOVE_EFFECT_IGNORE_EVATION_REMOVE_DARK_IMMUNE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Permite atacar con \\ncualquier movimiento\\na rivales de tipo\\nSiniestro y golpear\\na Pokémon evasivos.",
    },

    [MOVE_WAKE_UP_SLAP] = {
        .names = {
            .name = "Espabila",
            .capsName = "ESPABILA",
            .fullName = "Espabila",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_HEAL_SLEEP,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_SMART,
        },
        .description = "Inflige gran daño\\na rivales dormidos.\\nSin embargo, el\\nbofetón también\\nles despierta.",
    },

    [MOVE_HAMMER_ARM] = {
        .names = {
            .name = "Machada",
            .capsName = "MACHADA",
            .fullName = "Machada",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SPEED_DOWN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIGHTING,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_NEXT_TURN,
            .contestType = CONTEST_COOL,
        },
        .description = "Gira con fuerza el\\npuño y da un gran\\ngolpe. No obstante,\\nbaja la Velocidad.",
    },

    [MOVE_GYRO_BALL] = {
        .names = {
            .name = "Giro Bola",
            .capsName = "GIRO BOLA",
            .fullName = "Giro Bola",
        },
        .data = {
            .effect = MOVE_EFFECT_POWER_BASED_ON_LOW_SPEED,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Embiste al rival con\\nun potente ataque\\ngiratorio. Cuanto más\\nlento es el usuario,\\nmás daño causa.",
    },

    [MOVE_HEALING_WISH] = {
        .names = {
            .name = "Deseo Cura",
            .capsName = "DESEO CURA",
            .fullName = "Deseo Cura",
        },
        .data = {
            .effect = MOVE_EFFECT_FAINT_AND_FULL_HEAL_NEXT_MON,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_CUTE,
        },
        .description = "El Pokémon cae\\ndebilitado, pero su\\nsustituto recupera\\nsu estado y los PS.",
    },

    [MOVE_BRINE] = {
        .names = {
            .name = "Salmuera",
            .capsName = "SALMUERA",
            .fullName = "Salmuera",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_WHEN_BELOW_HALF,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Si al rival le queda\\nla mitad o menos\\nde sus PS, el ataque\\nserá el doble\\nde fuerte.",
    },

    [MOVE_NATURAL_GIFT] = {
        .names = {
            .name = "Don Natural",
            .capsName = "DON NATURAL",
            .fullName = "Don Natural",
        },
        .data = {
            .effect = MOVE_EFFECT_NATURAL_GIFT,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "La Baya que lleva\\npresta su fuerza para\\natacar. El tipo de\\nataque y su fuerza\\ndependen de la Baya.",
    },

    [MOVE_FEINT] = {
        .names = {
            .name = "Amago",
            .capsName = "AMAGO",
            .fullName = "Amago",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_PROTECT,
            .split = SPLIT_PHYSICAL,
            .power = 30,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 2,
            .flags = FLAG_MIRROR_MOVE,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Permite golpear a\\nenemigos que usan\\nProtección o\\nDetección y anula\\ndichos movimientos.",
    },

    [MOVE_PLUCK] = {
        .names = {
            .name = "Picoteo",
            .capsName = "PICOTEO",
            .fullName = "Picoteo",
        },
        .data = {
            .effect = MOVE_EFFECT_EAT_BERRY,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Picotea al rival. Si\\neste sostiene una\\nBaya, la picotea\\ntambién y obtiene\\nsus efectos.",
    },

    [MOVE_TAILWIND] = {
        .names = {
            .name = "Viento Afín",
            .capsName = "VIENTO AFÍN",
            .fullName = "Viento Afín",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_SPEED_3_TURNS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Crea un fuerte\\nremolino que aumenta\\nla Velocidad de los\\nPokémon de tu equipo\\ndurante tres turnos.",
    },

    [MOVE_ACUPRESSURE] = {
        .names = {
            .name = "Acupresión",
            .capsName = "ACUPRESIÓN",
            .fullName = "Acupresión",
        },
        .data = {
            .effect = MOVE_EFFECT_RANDOM_STAT_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_USER_SIDE,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_COOL,
        },
        .description = "La presión en puntos\\nclave del cuerpo\\npotencia una de sus\\ncaracterísticas.",
    },

    [MOVE_METAL_BURST] = {
        .names = {
            .name = "Repr. Metal",
            .capsName = "REPR. METAL",
            .fullName = "Repr. Metal",
        },
        .data = {
            .effect = MOVE_EFFECT_METAL_BURST,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Devuelve al enemigo\\nel último ataque\\nrecibido, pero con\\nmucha más fuerza.",
    },

    [MOVE_U_TURN] = {
        .names = {
            .name = "Ida y Vuelta",
            .capsName = "IDA Y VUELTA",
            .fullName = "Ida y Vuelta",
        },
        .data = {
            .effect = MOVE_EFFECT_SWITCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_CUTE,
        },
        .description = "Tras atacar, vuelve a\\ntoda prisa para dar\\npaso a otro Pokémon\\ndel equipo.",
    },

    [MOVE_CLOSE_COMBAT] = {
        .names = {
            .name = "A Bocajarro",
            .capsName = "A BOCAJARRO",
            .fullName = "A Bocajarro",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_DEF_SP_DEF_DOWN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Lucha abiertamente\\ncontra el rival sin\\ndefenderse. También\\nreduce la Defensa y la\\nDef. Esp. del usuario.",
    },

    [MOVE_PAYBACK] = {
        .names = {
            .name = "Vendetta",
            .capsName = "VENDETTA",
            .fullName = "Vendetta",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_IF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_UNIQUE_JUDGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Si un Pokémon usa\\nun movimiento antes,\\ncontraataca con el\\ndoble de fuerza.",
    },

    [MOVE_ASSURANCE] = {
        .names = {
            .name = "Buena Baza",
            .capsName = "BUENA BAZA",
            .fullName = "Buena Baza",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_IF_TARGET_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Si el rival ya ha\\nsufrido daño en\\nese turno, la fuerza\\ndel ataque se duplica.",
    },

    [MOVE_EMBARGO] = {
        .names = {
            .name = "Embargo",
            .capsName = "EMBARGO",
            .fullName = "Embargo",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ITEM_USE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Impide al rival usar\\nel objeto que lleva.\\nSu Entrenador\\ntampoco puede usar\\nobjetos sobre él.",
    },

    [MOVE_FLING] = {
        .names = {
            .name = "Lanzamiento",
            .capsName = "LANZAMIENTO",
            .fullName = "Lanzamiento",
        },
        .data = {
            .effect = MOVE_EFFECT_FLING,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Lanza contra el rival\\nel objeto que lleva.\\nLa fuerza del ataque\\ny su efecto varían\\nsegún el objeto.",
    },

    [MOVE_PSYCHO_SHIFT] = {
        .names = {
            .name = "Psico-cambio",
            .capsName = "PSICO-CAMBIO",
            .fullName = "Psico-cambio",
        },
        .data = {
            .effect = MOVE_EFFECT_TRANSFER_STATUS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa su poder mental\\npara transferir al\\nrival sus problemas\\nde estado.",
    },

    [MOVE_TRUMP_CARD] = {
        .names = {
            .name = "As Oculto",
            .capsName = "AS OCULTO",
            .fullName = "As Oculto",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGHER_POWER_WHEN_LOW_PP,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_COOL,
        },
        .description = "Cuantos menos PP\\ntenga el movimiento,\\nmayor será la fuerza\\npara atacar.",
    },

    [MOVE_HEAL_BLOCK] = {
        .names = {
            .name = "Anticura",
            .capsName = "ANTICURA",
            .fullName = "Anticura",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_HEALING,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Impide al rival usar\\nmovimientos de cura\\ndurante cinco turnos.",
    },

    [MOVE_WRING_OUT] = {
        .names = {
            .name = "Estrujón",
            .capsName = "ESTRUJÓN",
            .fullName = "Estrujón",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_POWER_WITH_MORE_HP,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Abraza fuerte al rival\\ny lo estruja. Cuantos\\nmás PS tenga el\\nrival, más fuerza\\ntendrá el ataque.",
    },

    [MOVE_POWER_TRICK] = {
        .names = {
            .name = "Truco Fuerza",
            .capsName = "TRUCO FUERZA",
            .fullName = "Truco Fuerza",
        },
        .data = {
            .effect = MOVE_EFFECT_SWAP_ATK_DEF,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa sus poderes\\nmentales para\\nintercambiar su\\ncaracterística de\\nAtaque por Defensa.",
    },

    [MOVE_GASTRO_ACID] = {
        .names = {
            .name = "Bilis",
            .capsName = "BILIS",
            .fullName = "Bilis",
        },
        .data = {
            .effect = MOVE_EFFECT_SUPRESS_ABILITY,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El usuario arroja\\nsus jugos biliares al\\nrival, lo que anula el\\nefecto de la\\nhabilidad en uso.",
    },

    [MOVE_LUCKY_CHANT] = {
        .names = {
            .name = "Conjuro",
            .capsName = "CONJURO",
            .fullName = "Conjuro",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_CRITS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Lanza al cielo un\\nconjuro que impide\\nal rival asestar\\ngolpes críticos.",
    },

    [MOVE_ME_FIRST] = {
        .names = {
            .name = "Yo Primero",
            .capsName = "YO PRIMERO",
            .fullName = "Yo Primero",
        },
        .data = {
            .effect = MOVE_EFFECT_USE_MOVE_FIRST,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FRONT,
            .priority = 0,
            .flags = FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Trata de adelantarse\\nal movimiento que\\npretende usar el rival\\ny lo lanza primero\\ncon más fuerza.",
    },

    [MOVE_COPYCAT] = {
        .names = {
            .name = "Copión",
            .capsName = "COPIÓN",
            .fullName = "Copión",
        },
        .data = {
            .effect = MOVE_EFFECT_USE_LAST_USED_MOVE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Imita el movimiento\\nusado justo antes.\\nEl movimiento falla\\nsi no se ha usado\\naún ninguno.",
    },

    [MOVE_POWER_SWAP] = {
        .names = {
            .name = "Cambia Fue.",
            .capsName = "CAMBIA FUE.",
            .fullName = "Cambia Fue.",
        },
        .data = {
            .effect = MOVE_EFFECT_SWAP_ATK_SP_ATK_STAT_CHANGES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El usuario emplea\\nsu poder mental para\\nintercambiar cambios\\nen Ataque y Ataque\\nEspecial con el rival.",
    },

    [MOVE_GUARD_SWAP] = {
        .names = {
            .name = "Cambia Def.",
            .capsName = "CAMBIA DEF.",
            .fullName = "Cambia Def.",
        },
        .data = {
            .effect = MOVE_EFFECT_SWAP_DEF_SP_DEF_STAT_CHANGES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario emplea\\nsu poder mental para\\nintercambiar cambios\\nen Defensa y Defensa\\nEspecial con el rival.",
    },

    [MOVE_PUNISHMENT] = {
        .names = {
            .name = "Castigo",
            .capsName = "CASTIGO",
            .fullName = "Castigo",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_POWER_WITH_MORE_STAT_UP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "La fuerza del ataque\\naumenta cuanto más\\nse ha fortalecido el\\nrival con cambios de\\ncaracterísticas.",
    },

    [MOVE_LAST_RESORT] = {
        .names = {
            .name = "Última Baza",
            .capsName = "ÚLTIMA BAZA",
            .fullName = "Última Baza",
        },
        .data = {
            .effect = MOVE_EFFECT_FAIL_IF_NOT_USED_ALL_OTHER_MOVES,
            .split = SPLIT_PHYSICAL,
            .power = 140,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LATE_BOOST,
            .contestType = CONTEST_CUTE,
        },
        .description = "Este movimiento solo\\npuede usarse tras\\nhaber usado todos\\nlos demás conocidos\\npor el Pokémon.",
    },

    [MOVE_WORRY_SEED] = {
        .names = {
            .name = "Abatidoras",
            .capsName = "ABATIDORAS",
            .fullName = "Abatidoras",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_ABILITY_TO_INSOMNIA,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Se planta una semilla\\nen el rival que le\\ncausa pesar. Evita\\nel sueño gracias a\\nla habilidad Insomnio.",
    },

    [MOVE_SUCKER_PUNCH] = {
        .names = {
            .name = "Golpe Bajo",
            .capsName = "GOLPE BAJO",
            .fullName = "Golpe Bajo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_FIRST_IF_TARGET_ATTACKING,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Permite atacar\\nprimero. Falla si el\\nrival no está\\npreparando\\nningún ataque.",
    },

    [MOVE_TOXIC_SPIKES] = {
        .names = {
            .name = "Púas Tóxicas",
            .capsName = "PÚAS TÓXICAS",
            .fullName = "Púas Tóxicas",
        },
        .data = {
            .effect = MOVE_EFFECT_TOXIC_SPIKES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_OPPONENT_SIDE,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_SMART,
        },
        .description = "Lanza una trampa de\\npúas tóxicas a los\\npies del rival. El\\nveneno afecta a los\\nPokémon que entran.",
    },

    [MOVE_HEART_SWAP] = {
        .names = {
            .name = "Cambia Almas",
            .capsName = "CAMBIA ALMAS",
            .fullName = "Cambia Almas",
        },
        .data = {
            .effect = MOVE_EFFECT_SWAP_STAT_CHANGES,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa la fuerza mental\\npara intercambiar\\ncon el rival los\\ncambios en las\\ncaracterísticas.",
    },

    [MOVE_AQUA_RING] = {
        .names = {
            .name = "Acua Aro",
            .capsName = "ACUA ARO",
            .fullName = "Acua Aro",
        },
        .data = {
            .effect = MOVE_EFFECT_RESTORE_HP_EVERY_TURN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Un manto de agua\\ncubre al Pokémon\\nque lo usa. Recupera\\nalgunos PS en\\ncada turno.",
    },

    [MOVE_MAGNET_RISE] = {
        .names = {
            .name = "Levitón",
            .capsName = "LEVITÓN",
            .fullName = "Levitón",
        },
        .data = {
            .effect = MOVE_EFFECT_GIVE_GROUND_IMMUNITY,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Levita gracias a un\\ncampo magnético\\ngenerado por\\nelectricidad durante\\ncinco turnos.",
    },

    [MOVE_FLARE_BLITZ] = {
        .names = {
            .name = "Envite Ígneo",
            .capsName = "ENVITE ÍGNEO",
            .fullName = "Envite Ígneo",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "El Pokémon se\\ncubre de llamas y\\ncarga contra el rival,\\naunque él también\\nrecibe daños.",
    },

    [MOVE_FORCE_PALM] = {
        .names = {
            .name = "Palmeo",
            .capsName = "PALMEO",
            .fullName = "Palmeo",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca al rival con una\\nonda de choque y\\npuede llegar a\\nparalizarlo.",
    },

    [MOVE_AURA_SPHERE] = {
        .names = {
            .name = "Esfera Aural",
            .capsName = "ESFERA AURAL",
            .fullName = "Esfera Aural",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Libera una descarga\\nde la fuerza del aura\\ndesde su interior.\\nEs infalible.",
    },

    [MOVE_ROCK_POLISH] = {
        .names = {
            .name = "Pulimento",
            .capsName = "PULIMENTO",
            .fullName = "Pulimento",
        },
        .data = {
            .effect = MOVE_EFFECT_SPEED_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Reduce la resistencia\\npuliendo su cuerpo.\\nAumenta la Velocidad\\nconsiderablemente.",
    },

    [MOVE_POISON_JAB] = {
        .names = {
            .name = "Puya Nociva",
            .capsName = "PUYA NOCIVA",
            .fullName = "Puya Nociva",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Pincha al rival con\\nun tentáculo o brazo\\nenvenenado. Puede\\nllegar a envenenar\\nal rival.",
    },

    [MOVE_DARK_PULSE] = {
        .names = {
            .name = "Pulso Umbrío",
            .capsName = "PULSO UMBRÍO",
            .fullName = "Pulso Umbrío",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Libera una horrible\\naura llena de malos\\npensamientos y\\npuede hacer\\nretroceder al rival.",
    },

    [MOVE_NIGHT_SLASH] = {
        .names = {
            .name = "Tajo Umbrío",
            .capsName = "TAJO UMBRÍO",
            .fullName = "Tajo Umbrío",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (20) : (15)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca al rival a la\\nprimera oportunidad.\\nSuele ser crítico.",
    },

    [MOVE_AQUA_TAIL] = {
        .names = {
            .name = "Acua Cola",
            .capsName = "ACUA COLA",
            .fullName = "Acua Cola",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_WATER,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_CUTE,
        },
        .description = "Ataca agitando la\\ncola como si fuera\\nuna ola rabiosa en\\nuna fiera tormenta.",
    },

    [MOVE_SEED_BOMB] = {
        .names = {
            .name = "Bomba Germen",
            .capsName = "BOMBA GERMEN",
            .fullName = "Bomba Germen",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Lanza al enemigo\\nuna descarga de\\nsemillas explosivas\\ndesde arriba.\\n",
    },

    [MOVE_AIR_SLASH] = {
        .names = {
            .name = "Tajo Aéreo",
            .capsName = "TAJO AÉREO",
            .fullName = "Tajo Aéreo",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_SPECIAL,
            .power = 75,
            .type = TYPE_FLYING,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con una hoja\\nde aire que corta\\nhasta los cielos.\\nTambién puede hacer\\nretroceder al rival.",
    },

    [MOVE_X_SCISSOR] = {
        .names = {
            .name = "Tijera X",
            .capsName = "TIJERA X",
            .fullName = "Tijera X",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Cruza las guadañas\\no las garras para\\natacar al rival\\ncomo si fueran\\nunas tijeras.",
    },

    [MOVE_BUG_BUZZ] = {
        .names = {
            .name = "Zumbido",
            .capsName = "ZUMBIDO",
            .fullName = "Zumbido",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "El movimiento de las\\nalas crea una onda\\nsónica dañina. Puede\\ntambién disminuir la\\nDef. Esp. del rival.",
    },

    [MOVE_DRAGON_PULSE] = {
        .names = {
            .name = "Pulso Dragón",
            .capsName = "PULSO DRAGÓN",
            .fullName = "Pulso Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 85,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Abre mucho la boca\\ny libera una onda\\nde choque que\\nataca al rival.",
    },

    [MOVE_DRAGON_RUSH] = {
        .names = {
            .name = "Carga Dragón",
            .capsName = "CARGA DRAGÓN",
            .fullName = "Carga Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_DRAGON,
            .accuracy = 75,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca de forma brutal\\nmientras intimida al\\nrival. También puede\\nhacerlo retroceder.",
    },

    [MOVE_POWER_GEM] = {
        .names = {
            .name = "Joya de Luz",
            .capsName = "JOYA DE LUZ",
            .fullName = "Joya de Luz",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_ROCK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca con un rayo\\nde luz que centellea\\ncomo si lo formaran\\nmiles de joyas.",
    },

    [MOVE_DRAIN_PUNCH] = {
        .names = {
            .name = "Puño Drenaje",
            .capsName = "PUÑO DRENAJE",
            .fullName = "Puño Drenaje",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_CHAIN_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Un golpe que drena\\nenergía. El Pokémon\\nrecupera la mitad de\\nlos PS arrebatados\\nal rival.",
    },

    [MOVE_VACUUM_WAVE] = {
        .names = {
            .name = "Onda Vacío",
            .capsName = "ONDA VACÍO",
            .fullName = "Onda Vacío",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Gira los puños y\\nlibera una onda de\\nvacío contra el rival.\\nEste movimiento\\nsiempre va primero.",
    },

    [MOVE_FOCUS_BLAST] = {
        .names = {
            .name = "Onda Certera",
            .capsName = "ONDA CERTERA",
            .fullName = "Onda Certera",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_FIGHTING,
            .accuracy = 70,
            .pp = 5,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Agudiza la\\nconcentración mental\\ny libera su poder.\\nPuede disminuir la\\nDef. Esp. del rival.",
    },

    [MOVE_ENERGY_BALL] = {
        .names = {
            .name = "Energibola",
            .capsName = "ENERGIBOLA",
            .fullName = "Energibola",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Aúna fuerzas de la\\nnaturaleza y libera\\nsu ataque. Puede\\ndisminuir la Defensa\\nEspecial del rival.",
    },

    [MOVE_BRAVE_BIRD] = {
        .names = {
            .name = "Pájaro Osado",
            .capsName = "PÁJARO OSADO",
            .fullName = "Pájaro Osado",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_THIRD,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Pliega sus alas y\\nataca con un vuelo\\nrasante. El Pokémon\\nque lo usa también\\nresulta dañado.",
    },

    [MOVE_EARTH_POWER] = {
        .names = {
            .name = "Tierra Viva",
            .capsName = "TIERRA VIVA",
            .fullName = "Tierra Viva",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "La tierra a los pies\\ndel rival erupciona\\nviolentamente. Puede\\ndisminuir la Defensa\\nEspecial del rival.",
    },

    [MOVE_SWITCHEROO] = {
        .names = {
            .name = "Trapicheo",
            .capsName = "TRAPICHEO",
            .fullName = "Trapicheo",
        },
        .data = {
            .effect = MOVE_EFFECT_SWITCH_HELD_ITEMS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_COOL,
        },
        .description = "Intercambia con el\\nrival los objetos que\\nllevan tan rápido\\nque es imposible\\nverlo a simple vista.",
    },

    [MOVE_GIGA_IMPACT] = {
        .names = {
            .name = "Giga Impacto",
            .capsName = "GIGA IMPACTO",
            .fullName = "Giga Impacto",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_PHYSICAL,
            .power = 150,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Carga contra el rival\\nusando toda la\\nfuerza que tiene.\\nEl Pokémon descansa\\nel turno siguiente.",
    },

    [MOVE_NASTY_PLOT] = {
        .names = {
            .name = "Maquinación",
            .capsName = "MAQUINACIÓN",
            .fullName = "Maquinación",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_CUTE,
        },
        .description = "Estimula su cerebro\\npensando en cosas\\nmalas. Aumenta\\nconsiderablemente\\nel Ataque Especial.",
    },

    [MOVE_BULLET_PUNCH] = {
        .names = {
            .name = "Puño Bala",
            .capsName = "PUÑO BALA",
            .fullName = "Puño Bala",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataca con un fuerte\\npuñetazo tan rápido\\ncomo un proyectil.\\nEste movimiento\\nsiempre va primero.",
    },

    [MOVE_AVALANCHE] = {
        .names = {
            .name = "Alud",
            .capsName = "ALUD",
            .fullName = "Alud",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_DAMAGE_IF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -4,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_COOL,
        },
        .description = "Este ataque inflige el\\ndoble de daño a un\\nrival que haya\\ngolpeado al usuario\\nen ese mismo turno.",
    },

    [MOVE_ICE_SHARD] = {
        .names = {
            .name = "Canto Helado",
            .capsName = "CANTO HELADO",
            .fullName = "Canto Helado",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Crea bolas de hielo\\ny las lanza a gran\\nvelocidad. Este\\nmovimiento siempre\\nva primero.",
    },

    [MOVE_SHADOW_CLAW] = {
        .names = {
            .name = "Garra Umbría",
            .capsName = "GARRA UMBRÍA",
            .fullName = "Garra Umbría",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Ataca con una garra\\nafilada hecha de\\nsombras.\\nSuele ser crítico.",
    },

    [MOVE_THUNDER_FANG] = {
        .names = {
            .name = "Colm. Rayo",
            .capsName = "COLM. RAYO",
            .fullName = "Colm. Rayo",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_ELECTRIC,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Usa colmillos\\nelectrificados para\\nmorder. Puede hacer\\nque el rival retroceda\\no se paralice.",
    },

    [MOVE_ICE_FANG] = {
        .names = {
            .name = "Colm. Hielo",
            .capsName = "COLM. HIELO",
            .fullName = "Colm. Hielo",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_FREEZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_ICE,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa colmillos helados\\npara morder.\\nPuede hacer que el\\nrival retroceda o\\nse congele.",
    },

    [MOVE_FIRE_FANG] = {
        .names = {
            .name = "Colm. Ígneo",
            .capsName = "COLM. ÍGNEO",
            .fullName = "Colm. Ígneo",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_FIRE,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Usa colmillos en\\nllamas para morder.\\nPuede hacer que el\\nrival retroceda o\\nreciba quemaduras.",
    },

    [MOVE_SHADOW_SNEAK] = {
        .names = {
            .name = "Sombra Vil",
            .capsName = "SOMBRA VIL",
            .fullName = "Sombra Vil",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Extiende su sombra\\ny ataca al rival por\\nla espalda.\\nEste movimiento\\nsiempre va primero.",
    },

    [MOVE_MUD_BOMB] = {
        .names = {
            .name = "Bomba Fango",
            .capsName = "BOMBA FANGO",
            .fullName = "Bomba Fango",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ACCURACY_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_GROUND,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataca lanzando una\\ncompacta bola de\\nfango. Puede bajar\\nla precisión del\\nobjetivo.",
    },

    [MOVE_PSYCHO_CUT] = {
        .names = {
            .name = "Psico-corte",
            .capsName = "PSICO-CORTE",
            .fullName = "Psico-corte",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca al rival con\\ncuchillas formadas\\npor energía psíquica.\\nSuele ser crítico.",
    },

    [MOVE_ZEN_HEADBUTT] = {
        .names = {
            .name = "Cabezazo Zen",
            .capsName = "CABEZAZO ZEN",
            .fullName = "Cabezazo Zen",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Concentra su energía\\npsíquica en la cabeza\\npara golpear.\\nPuede hacer que el\\nrival retroceda.",
    },

    [MOVE_MIRROR_SHOT] = {
        .names = {
            .name = "Disp. Espejo",
            .capsName = "DISP. ESPEJO",
            .fullName = "Disp. Espejo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ACCURACY_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_STEEL,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "El usuario libera un\\nhaz de energía desde\\nsu bruñido cuerpo.\\nPuede bajar la\\nprecisión.",
    },

    [MOVE_FLASH_CANNON] = {
        .names = {
            .name = "Foco Respl.",
            .capsName = "FOCO RESPL.",
            .fullName = "Foco Respl.",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "El usuario concentra\\ntoda la luz del cuerpo\\ny la libera. Puede\\nbajar la Defensa\\nEspecial del rival.",
    },

    [MOVE_ROCK_CLIMB] = {
        .names = {
            .name = "Treparrocas",
            .capsName = "TREPARROCAS",
            .fullName = "Treparrocas",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 20,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque de derribo\\nque puede confundir\\nal rival. También sirve\\npara trepar por\\nparedes escarpadas.",
    },

    [MOVE_DEFOG] = {
        .names = {
            .name = "Despejar",
            .capsName = "DESPEJAR",
            .fullName = "Despejar",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_HAZARDS_SCREENS_EVA_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Baja la evasión del\\nrival. También puede\\nusarse para reducir\\nel efecto de Púas y\\nPantalla Luz del rival.",
    },

    [MOVE_TRICK_ROOM] = {
        .names = {
            .name = "Espacio Raro",
            .capsName = "ESPACIO RARO",
            .fullName = "Espacio Raro",
        },
        .data = {
            .effect = MOVE_EFFECT_TRICK_ROOM,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = -7,
            .flags = FLAG_MIRROR_MOVE,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_CUTE,
        },
        .description = "Se crea un espacio\\nextraño en el que\\nlos Pokémon lentos\\nse mueven primero\\ndurante cinco turnos.",
    },

    [MOVE_DRACO_METEOR] = {
        .names = {
            .name = "Cometa Draco",
            .capsName = "COMETA DRACO",
            .fullName = "Cometa Draco",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SP_ATK_DOWN_2,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_DRAGON,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Hace que grandes\\ncometas caigan del\\ncielo. Baja mucho\\nel Ataque Especial\\nde quien lo usa.",
    },

    [MOVE_DISCHARGE] = {
        .names = {
            .name = "Chispazo",
            .capsName = "CHISPAZO",
            .fullName = "Chispazo",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Una deslumbradora\\nonda eléctrica afecta\\na los demás Pokémon\\ndel combate. Puede\\nparalizar.",
    },

    [MOVE_LAVA_PLUME] = {
        .names = {
            .name = "Humareda",
            .capsName = "HUMAREDA",
            .fullName = "Humareda",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Un infierno de llamas\\ndaña a los demás\\nPokémon en combate.\\nPuede quemar.",
    },

    [MOVE_LEAF_STORM] = {
        .names = {
            .name = "Lluevehojas",
            .capsName = "LLUEVEHOJAS",
            .fullName = "Lluevehojas",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SP_ATK_DOWN_2,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_GRASS,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "Cae una lluvia de\\nhojas afiladas. Baja\\nmucho el Ataque\\nEspecial de quien\\nlo usa.",
    },

    [MOVE_POWER_WHIP] = {
        .names = {
            .name = "Latigazo",
            .capsName = "LATIGAZO",
            .fullName = "Latigazo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_GRASS,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El usuario agita\\nviolentamente sus\\nhojas o tentáculos\\npara golpear al rival.",
    },

    [MOVE_ROCK_WRECKER] = {
        .names = {
            .name = "Romperrocas",
            .capsName = "ROMPERROCAS",
            .fullName = "Romperrocas",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_PHYSICAL,
            .power = 150,
            .type = TYPE_ROCK,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Lanza una piedra\\nenorme contra\\nel rival, pero tiene\\nque descansar\\nel siguiente turno.",
    },

    [MOVE_CROSS_POISON] = {
        .names = {
            .name = "Veneno X",
            .capsName = "VENENO X",
            .fullName = "Veneno X",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL_POISON_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Tajo que puede\\nenvenenar al rival.\\nSuele ser crítico.",
    },

    [MOVE_GUNK_SHOT] = {
        .names = {
            .name = "Lanza Mugre",
            .capsName = "LANZA MUGRE",
            .fullName = "Lanza Mugre",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_POISON,
            .accuracy = 80,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza contra el rival\\nasquerosa basura.\\nPuede envenenar\\nal objetivo.",
    },

    [MOVE_IRON_HEAD] = {
        .names = {
            .name = "Cabezahierro",
            .capsName = "CABEZAHIERRO",
            .fullName = "Cabezahierro",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = ((CHAMPIONS_EFFECT_CHANCE_CHANGES) ? (20) : (30)),
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataca con su dura\\ncabeza de hierro.\\nPuede hacer que\\nel rival retroceda.",
    },

    [MOVE_MAGNET_BOMB] = {
        .names = {
            .name = "Bomba Imán",
            .capsName = "BOMBA IMÁN",
            .fullName = "Bomba Imán",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza una bomba de\\nhierro que se pega\\nal adversario. No se\\npuede esquivar.",
    },

    [MOVE_STONE_EDGE] = {
        .names = {
            .name = "Roca Afilada",
            .capsName = "ROCA AFILADA",
            .fullName = "Roca Afilada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_ROCK,
            .accuracy = 80,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Clava piedras muy\\nafiladas al rival.\\nSuele ser crítico.",
    },

    [MOVE_CAPTIVATE] = {
        .names = {
            .name = "Seducción",
            .capsName = "SEDUCCIÓN",
            .fullName = "Seducción",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_DOWN_2_OPPOSITE_GENDER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Si el rival es del\\nsexo opuesto, queda\\nembelesado y baja\\nmucho su Ataque\\nEspecial.",
    },

    [MOVE_STEALTH_ROCK] = {
        .names = {
            .name = "Trampa Rocas",
            .capsName = "TRAMPA ROCAS",
            .fullName = "Trampa Rocas",
        },
        .data = {
            .effect = MOVE_EFFECT_STEALTH_ROCK,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_OPPONENT_SIDE,
            .priority = 0,
            .flags = FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_DOWN,
            .contestType = CONTEST_COOL,
        },
        .description = "Una trampa de rocas\\nque flota en el aire y\\ndaña a los rivales que\\nentran en combate.",
    },

    [MOVE_GRASS_KNOT] = {
        .names = {
            .name = "Hierba Lazo",
            .capsName = "HIERBA LAZO",
            .fullName = "Hierba Lazo",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_POWER_WITH_WEIGHT,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Enreda al enemigo\\ncon hierba y lo\\nderriba. Cuanto más\\npesado es el rival,\\nmás daño inflige.",
    },

    [MOVE_CHATTER] = {
        .names = {
            .name = "Cháchara",
            .capsName = "CHÁCHARA",
            .fullName = "Cháchara",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_PITY_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataca con una onda\\nsónica compuesta\\npor palabras que ha\\naprendido. Puede\\nconfundir al rival.",
    },

    [MOVE_JUDGMENT] = {
        .names = {
            .name = "Sentencia",
            .capsName = "SENTENCIA",
            .fullName = "Sentencia",
        },
        .data = {
            .effect = MOVE_EFFECT_JUDGMENT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_RANDOMIZE_NEXT_TURN,
            .contestType = CONTEST_SMART,
        },
        .description = "Emite incontables\\nhaces de luz. Varía\\nsegún el tipo de tabla\\nque lleve el usuario.",
    },

    [MOVE_BUG_BITE] = {
        .names = {
            .name = "Picadura",
            .capsName = "PICADURA",
            .fullName = "Picadura",
        },
        .data = {
            .effect = MOVE_EFFECT_EAT_BERRY,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_STEAL_VOLTAGE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Pica al rival. Si el\\nadversario lleva una\\nBaya, el agresor se la\\ncome y se beneficia\\nde su efecto.",
    },

    [MOVE_CHARGE_BEAM] = {
        .names = {
            .name = "Rayo Carga",
            .capsName = "RAYO CARGA",
            .fullName = "Rayo Carga",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_ELECTRIC,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 70,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Lanza un rayo\\neléctrico contra el\\nrival. Puede subir\\nel Ataque Especial\\nde quien lo usa.",
    },

    [MOVE_WOOD_HAMMER] = {
        .names = {
            .name = "Mazazo",
            .capsName = "MAZAZO",
            .fullName = "Mazazo",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_THIRD,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Arremete contra el\\nrival con su robusto\\ncuerpo. El agresor\\ntambién sufre\\nbastante daño.",
    },

    [MOVE_AQUA_JET] = {
        .names = {
            .name = "Acua Jet",
            .capsName = "ACUA JET",
            .fullName = "Acua Jet",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_NEXT_TURN,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Arremete contra el\\nrival a una velocidad\\nvertiginosa. Se\\nadelanta a otros\\nmovimientos.",
    },

    [MOVE_ATTACK_ORDER] = {
        .names = {
            .name = "Al Ataque",
            .capsName = "AL ATAQUE",
            .fullName = "Al Ataque",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "El usuario llama a\\nsus amigos para\\nque ataquen al rival.\\nSuele ser crítico.",
    },

    [MOVE_DEFEND_ORDER] = {
        .names = {
            .name = "A Defender",
            .capsName = "A DEFENDER",
            .fullName = "A Defender",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_SP_DEF_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_SMART,
        },
        .description = "El usuario llama a sus\\namigos para que\\nformen un escudo\\nviviente. Sube la\\nDef. y la Def. Esp.",
    },

    [MOVE_HEAL_ORDER] = {
        .names = {
            .name = "Auxilio",
            .capsName = "AUXILIO",
            .fullName = "Auxilio",
        },
        .data = {
            .effect = MOVE_EFFECT_RESTORE_HALF_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_SMART,
        },
        .description = "El usuario llama a\\nsus amigos para que\\nlo curen. Recupera\\nhasta la mitad de\\nlos PS máximos.",
    },

    [MOVE_HEAD_SMASH] = {
        .names = {
            .name = "Testarazo",
            .capsName = "TESTARAZO",
            .fullName = "Testarazo",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_HALF,
            .split = SPLIT_PHYSICAL,
            .power = 150,
            .type = TYPE_ROCK,
            .accuracy = 80,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "El usuario arriesga\\nsu vida y lanza un\\ncabezazo con toda\\nsu fuerza. El agresor\\ntambién sufre daño.",
    },

    [MOVE_DOUBLE_HIT] = {
        .names = {
            .name = "Doble Golpe",
            .capsName = "DOBLE GOLPE",
            .fullName = "Doble Golpe",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_PHYSICAL,
            .power = 35,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_SMART,
        },
        .description = "Golpea al rival dos\\nveces seguidas con\\nla cola u otras\\npartes de su cuerpo.\\n",
    },

    [MOVE_ROAR_OF_TIME] = {
        .names = {
            .name = "Distorsión",
            .capsName = "DISTORSIÓN",
            .fullName = "Distorsión",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_DRAGON,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca al rival usando\\ntal energía que el\\ntiempo se distorsiona.\\nEl agresor descansa\\nel siguiente turno.",
    },

    [MOVE_SPACIAL_REND] = {
        .names = {
            .name = "Corte Vacío",
            .capsName = "CORTE VACÍO",
            .fullName = "Corte Vacío",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_DRAGON,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_VOLTAGE_HEARTS,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Desgarra al rival y\\nel espacio a su\\nalrededor. Suele\\nser crítico.",
    },

    [MOVE_LUNAR_DANCE] = {
        .names = {
            .name = "Danza Lunar",
            .capsName = "DANZA LUNAR",
            .fullName = "Danza Lunar",
        },
        .data = {
            .effect = MOVE_EFFECT_FAINT_FULL_RESTORE_NEXT_MON,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "El usuario se debilita,\\npero el Pokémon que\\nlo sustituye recupera\\nsu estado, los PS y\\nlos PP.",
    },

    [MOVE_CRUSH_GRIP] = {
        .names = {
            .name = "Agarrón",
            .capsName = "AGARRÓN",
            .fullName = "Agarrón",
        },
        .data = {
            .effect = MOVE_EFFECT_INCREASE_POWER_WITH_MORE_HP,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_ON_FINALE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Estruja al rival con\\ngran fuerza. Cuantos\\nmás PS le queden al\\nrival, más fuerte\\nserá el ataque.",
    },

    [MOVE_MAGMA_STORM] = {
        .names = {
            .name = "Lluvia Ígnea",
            .capsName = "LLUVIA ÍGNEA",
            .fullName = "Lluvia Ígnea",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FIRE,
            .accuracy = 75,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_SUCCESSIVE,
            .contestType = CONTEST_TOUGH,
        },
        .description = "El rival queda\\natrapado en una\\ntormenta de fuego\\nque dura de dos\\na cinco turnos.",
    },

    [MOVE_DARK_VOID] = {
        .names = {
            .name = "Brecha Negra",
            .capsName = "BRECHA NEGRA",
            .fullName = "Brecha Negra",
        },
        .data = {
            .effect = MOVE_EFFECT_STATUS_SLEEP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 50,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_KEEP_VOLTAGE_UP,
            .contestType = CONTEST_SMART,
        },
        .description = "El rival es enviado a\\nun mundo de tinieblas\\nque lo hace dormir.",
    },

    [MOVE_SEED_FLARE] = {
        .names = {
            .name = "Fogonazo",
            .capsName = "FOGONAZO",
            .fullName = "Fogonazo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_2_HIT,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_GRASS,
            .accuracy = 85,
            .pp = 5,
            .effectChance = 40,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_HIDE_SHADOW,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_COOL,
        },
        .description = "Una onda de choque\\nse libera del cuerpo.\\nPuede bajar la\\nDefensa Especial\\ndel objetivo.",
    },

    [MOVE_OMINOUS_WIND] = {
        .names = {
            .name = "Vien. Aciago",
            .capsName = "VIEN. ACIAGO",
            .fullName = "Vien. Aciago",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ALL_STATS_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_DOUBLE_NEXT_SCORE,
            .contestType = CONTEST_SMART,
        },
        .description = "Produce un viento\\nhorripilante. Puede\\nsubir de golpe todas\\nlas características\\ndel usuario.",
    },

    [MOVE_SHADOW_FORCE] = {
        .names = {
            .name = "Golpe Umbrío",
            .capsName = "GOLPE UMBRÍO",
            .fullName = "Golpe Umbrío",
        },
        .data = {
            .effect = MOVE_EFFECT_SHADOW_FORCE,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_CONTACT,
        },
        .contest = {
            .appeal = APPEAL_AFTER_MAX_VOLTAGE_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "En el primer turno,\\ndesaparece. En el\\nsegundo, golpea al\\nrival aunque se esté\\nprotegiendo.",
    },

    [MOVE_468] = {
        .names = {
            .name = "-",
            .capsName = "-",
            .fullName = "-",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "--",
    },

    [MOVE_469] = {
        .names = {
            .name = "-",
            .capsName = "-",
            .fullName = "-",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_FIRST_HEARTS,
            .contestType = CONTEST_CUTE,
        },
        .description = "--",
    },

    [MOVE_470] = {
        .names = {
            .name = "-",
            .capsName = "-",
            .fullName = "-",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LAST_HEARTS,
            .contestType = CONTEST_SMART,
        },
        .description = "--",
    },

    [MOVE_HONE_CLAWS] = {
        .names = {
            .name = "Afilagarras",
            .capsName = "AFILAGARRAS",
            .fullName = "Afilagarras",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_ACC_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Se afila las garras para\\naumentar su Ataque y su\\nPrecisión.\\n",
    },

    [MOVE_WIDE_GUARD] = {
        .names = {
            .name = "Vasta Guard.",
            .capsName = "VASTA GUARD.",
            .fullName = "Vasta Guardia",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT_USER_SIDE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 3,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Bloquea los ataques de\\nobjetivo múltiple\\ndurante un turno.\\n",
    },

    [MOVE_GUARD_SPLIT] = {
        .names = {
            .name = "Isoguardia",
            .capsName = "ISOGUARDIA",
            .fullName = "Isoguardia",
        },
        .data = {
            .effect = MOVE_EFFECT_GUARD_SPLIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Hace la media de su\\nDefensa y Defensa\\nEspecial con las del\\nrival y las comparte.\\n",
    },

    [MOVE_POWER_SPLIT] = {
        .names = {
            .name = "Isofuerza",
            .capsName = "ISOFUERZA",
            .fullName = "Isofuerza",
        },
        .data = {
            .effect = MOVE_EFFECT_POWER_SPLIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Hace la media de su\\nAtaque y Ataque\\nEspecial con los del\\nrival y los comparte.\\n",
    },

    [MOVE_WONDER_ROOM] = {
        .names = {
            .name = "Zona Extraña",
            .capsName = "ZONA EXTRAÑA",
            .fullName = "Zona Extraña",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Espacio misterioso donde\\nse intercambian la\\nDefensa y la Defensa\\nEspecial 5 turnos.\\n",
    },

    [MOVE_PSYSHOCK] = {
        .names = {
            .name = "Psicocarga",
            .capsName = "PSICOCARGA",
            .fullName = "Psicocarga",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Onda psíquica que causa\\ndaño físico al\\nobjetivo.\\n",
    },

    [MOVE_VENOSHOCK] = {
        .names = {
            .name = "Carga Tóxica",
            .capsName = "CARGA TÓXICA",
            .fullName = "Carga Tóxica",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_ON_POISONED,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Cubre al rival con un\\nlíquido venenoso.\\nDuplica su potencia si\\nya está envenenado.\\n",
    },

    [MOVE_AUTOTOMIZE] = {
        .names = {
            .name = "Aligerar",
            .capsName = "ALIGERAR",
            .fullName = "Aligerar",
        },
        .data = {
            .effect = MOVE_EFFECT_AUTOTOMIZE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Se desprende de partes\\nprescindibles y sube\\nmucho su Velocidad.\\n",
    },

    [MOVE_RAGE_POWDER] = {
        .names = {
            .name = "Polvo Ira",
            .capsName = "POLVO IRA",
            .fullName = "Polvo Ira",
        },
        .data = {
            .effect = MOVE_EFFECT_MAKE_GLOBAL_TARGET,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 2,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Polvo que enerva a los\\nrivales y hace que\\ncentren en él sus\\nmovimientos.\\n",
    },

    [MOVE_TELEKINESIS] = {
        .names = {
            .name = "Telequinesis",
            .capsName = "TELEQUINESIS",
            .fullName = "Telequinesis",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Hace flotar al rival y\\nlo convierte en un\\nblanco fácil durante\\ntres turnos.\\n",
    },

    [MOVE_MAGIC_ROOM] = {
        .names = {
            .name = "Zona Mágica",
            .capsName = "ZONA MÁGICA",
            .fullName = "Zona Mágica",
        },
        .data = {
            .effect = MOVE_EFFECT_MAGIC_ROOM,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Espacio misterioso que\\ninutiliza todos los\\nobjetos durante cinco\\nturnos.\\n",
    },

    [MOVE_SMACK_DOWN] = {
        .names = {
            .name = "Antiaéreo",
            .capsName = "ANTIAÉREO",
            .fullName = "Antiaéreo",
        },
        .data = {
            .effect = MOVE_EFFECT_SMACK_DOWN,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_ROCK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Lanza una piedra o\\nproyectil. Si el rival\\nestá en el aire, lo\\nderriba.\\n",
    },

    [MOVE_STORM_THROW] = {
        .names = {
            .name = "Llave Corsé",
            .capsName = "LLAVE CORSÉ",
            .fullName = "Llave Corsé",
        },
        .data = {
            .effect = MOVE_EFFECT_ALWAYS_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza un golpe\\ndevastador. Siempre\\nasesta un golpe\\ncrítico.\\n",
    },

    [MOVE_FLAME_BURST] = {
        .names = {
            .name = "Pirotecnia",
            .capsName = "PIROTECNIA",
            .fullName = "Pirotecnia",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Llamarada que afecta\\ntambién a los Pokémon\\nadyacentes.\\n",
    },

    [MOVE_SLUDGE_WAVE] = {
        .names = {
            .name = "Onda Tóxica",
            .capsName = "ONDA TÓXICA",
            .fullName = "Onda Tóxica",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_SPECIAL,
            .power = 95,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Onda tóxica que daña a\\nlos adyacentes. Puede\\nenvenenar.\\n",
    },

    [MOVE_QUIVER_DANCE] = {
        .names = {
            .name = "Danza Aleteo",
            .capsName = "DANZA ALETEO",
            .fullName = "Danza Aleteo",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_SP_DEF_SPEED_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Danza mística que sube\\nel Ataque Especial, la\\nDefensa Especial y la\\nVelocidad.\\n",
    },

    [MOVE_HEAVY_SLAM] = {
        .names = {
            .name = "Cuerpo Pes.",
            .capsName = "CUERPO PES.",
            .fullName = "Cuerpo Pesado",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAVY_SLAM,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Golpea con todo su\\ncuerpo. Cuanto mayor\\nsea su peso frente al\\ndel rival, más potencia.\\n",
    },

    [MOVE_SYNCHRONOISE] = {
        .names = {
            .name = "Sincrorruido",
            .capsName = "SINCRORRUIDO",
            .fullName = "Sincrorruido",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Extraña onda que daña a\\nlos adyacentes del\\nmismo tipo que quien\\nla ejecuta.\\n",
    },

    [MOVE_ELECTRO_BALL] = {
        .names = {
            .name = "Bola Voltio",
            .capsName = "BOLA VOLTIO",
            .fullName = "Bola Voltio",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Bola eléctrica. Cuanto\\nmayor sea tu Velocidad\\nfrente a la del rival,\\nmás potencia.\\n",
    },

    [MOVE_SOAK] = {
        .names = {
            .name = "Empapar",
            .capsName = "EMPAPAR",
            .fullName = "Empapar",
        },
        .data = {
            .effect = MOVE_EFFECT_CHANGE_TO_WATER_TYPE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Tromba de agua que\\ntransforma al objetivo\\nen un Pokémon de tipo\\nAgua.\\n",
    },

    [MOVE_FLAME_CHARGE] = {
        .names = {
            .name = "Nitrocarga",
            .capsName = "NITROCARGA",
            .fullName = "Nitrocarga",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Llamas que golpean al\\nobjetivo y aumentan la\\nVelocidad del usuario.\\n",
    },

    [MOVE_COIL] = {
        .names = {
            .name = "Enrosque",
            .capsName = "ENROSQUE",
            .fullName = "Enrosque",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DEF_ACC_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Se concentra y aumenta\\nsu Ataque, su Defensa\\ny su Precisión.\\n",
    },

    [MOVE_LOW_SWEEP] = {
        .names = {
            .name = "Puntapié",
            .capsName = "PUNTAPIÉ",
            .fullName = "Puntapié",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Ataque rápido a los\\npies del rival que le\\nhace perder Velocidad.\\n",
    },

    [MOVE_ACID_SPRAY] = {
        .names = {
            .name = "Bomba Ácida",
            .capsName = "BOMBA ÁCIDA",
            .fullName = "Bomba Ácida",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_2_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Líquido corrosivo que\\nreduce mucho la\\nDefensa Especial del\\nobjetivo.\\n",
    },

    [MOVE_FOUL_PLAY] = {
        .names = {
            .name = "Juego Sucio",
            .capsName = "JUEGO SUCIO",
            .fullName = "Juego Sucio",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 95,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Usa la fuerza del rival\\npara atacarlo. Cuanto\\nmás Ataque tenga, más\\ndaño provoca.\\n",
    },

    [MOVE_SIMPLE_BEAM] = {
        .names = {
            .name = "Onda Simple",
            .capsName = "ONDA SIMPLE",
            .fullName = "Onda Simple",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_ABILITY_TO_SIMPLE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Onda psíquica que hace\\nque la habilidad del\\nrival pase a ser\\nSimple.\\n",
    },

    [MOVE_ENTRAINMENT] = {
        .names = {
            .name = "Danza Amiga",
            .capsName = "DANZA AMIGA",
            .fullName = "Danza Amiga",
        },
        .data = {
            .effect = MOVE_EFFECT_ENTRAINMENT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Danza que induce a\\nimitarla y cambia su\\nhabilidad por la del\\nusuario.\\n",
    },

    [MOVE_AFTER_YOU] = {
        .names = {
            .name = "Cede Paso",
            .capsName = "CEDE PASO",
            .fullName = "Cede Paso",
        },
        .data = {
            .effect = MOVE_EFFECT_AFTER_YOU,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Si el usuario es el más\\nrápido, permite al\\nrival usar un movimiento\\njusto tras él.\\n",
    },

    [MOVE_ROUND] = {
        .names = {
            .name = "Canon",
            .capsName = "CANON",
            .fullName = "Canon",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Entona una canción que\\ndaña. Si otro Pokémon\\nlo usa en el mismo\\nturno, la potencia\\nsube.\\n",
    },

    [MOVE_ECHOED_VOICE] = {
        .names = {
            .name = "Eco Voz",
            .capsName = "ECO VOZ",
            .fullName = "Eco Voz",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Susurro que aumenta de\\npotencia conforme se va\\nutilizando.\\n",
    },

    [MOVE_CHIP_AWAY] = {
        .names = {
            .name = "Guardia Baja",
            .capsName = "GUARDIA BAJA",
            .fullName = "Guardia Baja",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Busca los puntos\\ndébiles del objetivo e\\nignora sus cambios de\\ncaracterísticas.\\n",
    },

    [MOVE_CLEAR_SMOG] = {
        .names = {
            .name = "Niebla Clara",
            .capsName = "NIEBLA CLARA",
            .fullName = "Niebla Clara",
        },
        .data = {
            .effect = MOVE_EFFECT_CLEAR_SMOG,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Bola de lodo que\\nelimina cualquier\\ncambio en las\\ncaracterísticas.\\n",
    },

    [MOVE_STORED_POWER] = {
        .names = {
            .name = "Poder Res.",
            .capsName = "PODER RES.",
            .fullName = "Poder Reserva",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 20,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Acumula poder. Cuanto\\nmás suban tus\\ncaracterísticas, mayor\\npotencia.\\n",
    },

    [MOVE_QUICK_GUARD] = {
        .names = {
            .name = "Anticipo",
            .capsName = "ANTICIPO",
            .fullName = "Anticipo",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT_USER_SIDE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 3,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Protege a sí mismo y a\\nsus aliados de\\nmovimientos con\\nprioridad.\\n",
    },

    [MOVE_ALLY_SWITCH] = {
        .names = {
            .name = "Cambio Banda",
            .capsName = "CAMBIO BANDA",
            .fullName = "Cambio de Banda",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 2,
            .flags = FLAG_KEEP_HP_BAR | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Cambia su posición con\\nla de un aliado sobre\\nel terreno de combate.\\n",
    },

    [MOVE_SCALD] = {
        .names = {
            .name = "Escaldar",
            .capsName = "ESCALDAR",
            .fullName = "Escaldar",
        },
        .data = {
            .effect = MOVE_EFFECT_THAW_AND_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Arroja agua hirviendo al\\nobjetivo. Puede causar\\nquemaduras.\\n",
    },

    [MOVE_SHELL_SMASH] = {
        .names = {
            .name = "Rompecoraza",
            .capsName = "ROMPECORAZA",
            .fullName = "Rompecoraza",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_SP_ATK_SPEED_UP_2_DEF_SP_DEF_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Rompe su coraza: baja\\nsus Defensas, pero sube\\nmucho el Ataque, el\\nAtaque Especial y la\\nVelocidad.\\n",
    },

    [MOVE_HEAL_PULSE] = {
        .names = {
            .name = "Pulso Cura",
            .capsName = "PULSO CURA",
            .fullName = "Pulso Cura",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_TARGET,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Onda curativa que\\nrestaura la mitad de\\nlos PS máximos del\\nobjetivo.\\n",
    },

    [MOVE_HEX] = {
        .names = {
            .name = "Infortunio",
            .capsName = "INFORTUNIO",
            .fullName = "Infortunio",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_DAMAGE_ON_STATUS,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Causa un gran daño a los\\nobjetivos que sufren\\nproblemas de estado.\\n",
    },

    [MOVE_SKY_DROP] = {
        .names = {
            .name = "Caída Libre",
            .capsName = "CAÍDA LIBRE",
            .fullName = "Caída Libre",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Lanza al rival al aire y\\nlo hace caer. Mientras\\nestá arriba, no puede\\nmoverse.\\n",
    },

    [MOVE_SHIFT_GEAR] = {
        .names = {
            .name = "Camb. Marcha",
            .capsName = "CAMB. MARCHA",
            .fullName = "Cambio de Marcha",
        },
        .data = {
            .effect = MOVE_EFFECT_SPEED_UP_2_ATK_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Hace girar los\\ngranajes y aumenta su\\nAtaque y mucho su\\nVelocidad.\\n",
    },

    [MOVE_CIRCLE_THROW] = {
        .names = {
            .name = "Llave Giro",
            .capsName = "LLAVE GIRO",
            .fullName = "Llave Giro",
        },
        .data = {
            .effect = MOVE_EFFECT_FORCE_SWITCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FIGHTING,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -6,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza por los aires al\\nrival y hace que salga\\notro. Si es salvaje,\\nacaba el combate.\\n",
    },

    [MOVE_INCINERATE] = {
        .names = {
            .name = "Calcinación",
            .capsName = "CALCINACIÓN",
            .fullName = "Calcinación",
        },
        .data = {
            .effect = MOVE_EFFECT_INCINERATE,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Llamas que golpean al\\nrival. Si lleva una\\nbaya, se quemará y ya\\nno podrá usarla.\\n",
    },

    [MOVE_QUASH] = {
        .names = {
            .name = "Último Lugar",
            .capsName = "ÚLTIMO LUGAR",
            .fullName = "Último Lugar",
        },
        .data = {
            .effect = MOVE_EFFECT_QUASH,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Consigue que el objetivo\\nsea el último en\\nmoverse.\\n",
    },

    [MOVE_ACROBATICS] = {
        .names = {
            .name = "Acrobacia",
            .capsName = "ACROBACIA",
            .fullName = "Acróbata",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_WITHOUT_ITEM,
            .split = SPLIT_PHYSICAL,
            .power = 55,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea ágilmente. Si no\\nlleva ningún objeto, el\\ndaño es mayor.\\n",
    },

    [MOVE_REFLECT_TYPE] = {
        .names = {
            .name = "Clonatipo",
            .capsName = "CLONATIPO",
            .fullName = "Clonatipo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Cambia su tipo al mismo\\nque el del objetivo.\\n",
    },

    [MOVE_RETALIATE] = {
        .names = {
            .name = "Represalia",
            .capsName = "REPRESALIA",
            .fullName = "Represalia",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Venga a los aliados\\ncaídos. Si en el turno\\nanterior cayó alguno,\\nsube su potencia.\\n",
    },

    [MOVE_FINAL_GAMBIT] = {
        .names = {
            .name = "Sacrificio",
            .capsName = "SACRIFICIO",
            .fullName = "Sacrificio",
        },
        .data = {
            .effect = MOVE_EFFECT_FINAL_GAMBIT,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "El usuario se sacrifica\\ncausando un daño igual\\na sus PS perdidos.\\n",
    },

    [MOVE_BESTOW] = {
        .names = {
            .name = "Ofrenda",
            .capsName = "OFRENDA",
            .fullName = "Ofrenda",
        },
        .data = {
            .effect = MOVE_EFFECT_GIVE_HELD_ITEM,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Entrega el objeto que\\nlleva al objetivo si\\neste no tiene ninguno.\\n",
    },

    [MOVE_INFERNO] = {
        .names = {
            .name = "Infierno",
            .capsName = "INFIERNO",
            .fullName = "Infierno",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FIRE,
            .accuracy = 50,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Gran ráfaga de fuego que\\ncausa quemaduras.\\n",
    },

    [MOVE_WATER_PLEDGE] = {
        .names = {
            .name = "Voto Agua",
            .capsName = "VOTO AGUA",
            .fullName = "Voto Agua",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca con columnas de\\nagua. Con Voto Fuego\\ncrea un arcoíris y sube\\nsu potencia.\\n",
    },

    [MOVE_FIRE_PLEDGE] = {
        .names = {
            .name = "Voto Fuego",
            .capsName = "VOTO FUEGO",
            .fullName = "Voto Fuego",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca con columnas de\\nfuego. Con Voto Planta\\ncrea un mar de llamas\\ny sube su potencia.\\n",
    },

    [MOVE_GRASS_PLEDGE] = {
        .names = {
            .name = "Voto Planta",
            .capsName = "VOTO PLANTA",
            .fullName = "Voto Planta",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca con columnas de\\nhojas. Con Voto Agua\\ncrea un pantano y sube\\nsu potencia.\\n",
    },

    [MOVE_VOLT_SWITCH] = {
        .names = {
            .name = "Voltiocambio",
            .capsName = "VOLTIOCAMBIO",
            .fullName = "Voltiocambio",
        },
        .data = {
            .effect = MOVE_EFFECT_SWITCH_HIT,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Tras atacar, vuelve a\\ntoda prisa para dar\\npaso a otro Pokémon.\\n",
    },

    [MOVE_STRUGGLE_BUG] = {
        .names = {
            .name = "Estoicismo",
            .capsName = "ESTOICISMO",
            .fullName = "Estoicismo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Opone resistencia y\\nataca. También reduce\\nel Ataque Especial.\\n",
    },

    [MOVE_BULLDOZE] = {
        .names = {
            .name = "Terratemblor",
            .capsName = "TERRATEMBLOR",
            .fullName = "Terratemblor",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Sacudida sísmica que\\nafecta a los adyacentes\\ny reduce su Velocidad.\\n",
    },

    [MOVE_FROST_BREATH] = {
        .names = {
            .name = "Vaho Gélido",
            .capsName = "VAHO GÉLIDO",
            .fullName = "Vaho Gélido",
        },
        .data = {
            .effect = MOVE_EFFECT_ALWAYS_CRITICAL,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Aliento gélido que\\nsiempre asesta un\\ngolpe crítico.\\n",
    },

    [MOVE_DRAGON_TAIL] = {
        .names = {
            .name = "Cola Dragón",
            .capsName = "COLA DRAGÓN",
            .fullName = "Cola Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_FORCE_SWITCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_DRAGON,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -6,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataca y obliga al rival\\na cambiarse por otro.\\nSi es salvaje, acaba el\\ncombate.\\n",
    },

    [MOVE_WORK_UP] = {
        .names = {
            .name = "Avivar",
            .capsName = "AVIVAR",
            .fullName = "Avivar",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_SP_ATK_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Se concentra y aumenta\\nsu Ataque y su Ataque\\nEspecial.\\n",
    },

    [MOVE_ELECTROWEB] = {
        .names = {
            .name = "Electrotela",
            .capsName = "ELECTROTELA",
            .fullName = "Electrotela",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_SPECIAL,
            .power = 55,
            .type = TYPE_ELECTRIC,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Telaraña eléctrica que\\natrapa y daña. Reduce\\nla Velocidad.\\n",
    },

    [MOVE_WILD_CHARGE] = {
        .names = {
            .name = "Voltio Cruel",
            .capsName = "VOLTIO CRUEL",
            .fullName = "Voltio Cruel",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_THIRD,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Se envuelve de\\nelectricidad y carga,\\npero se hiere un poco.\\n",
    },

    [MOVE_DRILL_RUN] = {
        .names = {
            .name = "Taladradora",
            .capsName = "TALADRADORA",
            .fullName = "Taladradora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_GROUND,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Golpea usando su cuerpo\\ncomo un taladro. Suele\\nser crítico.\\n",
    },

    [MOVE_DUAL_CHOP] = {
        .names = {
            .name = "Golpe Bis",
            .capsName = "GOLPE BIS",
            .fullName = "Golpe Bis",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_DRAGON,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Golpea dos veces\\nseguidas con las partes\\nmás recías del cuerpo.\\n",
    },

    [MOVE_HEART_STAMP] = {
        .names = {
            .name = "Arrumaco",
            .capsName = "ARRUMACO",
            .fullName = "Arrumaco",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Despista con gestos\\nadorables y asesta un\\ngolpe que puede hacer\\nretroceder.\\n",
    },

    [MOVE_HORN_LEECH] = {
        .names = {
            .name = "Asta Drenaje",
            .capsName = "ASTA DRENAJE",
            .fullName = "Asta Drenaje",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ensarta con su\\ncornamenta y absorbe\\nenergía. Recupera la\\nmitad del daño.\\n",
    },

    [MOVE_SACRED_SWORD] = {
        .names = {
            .name = "Espada Santa",
            .capsName = "ESPADA SANTA",
            .fullName = "Espada Santa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con una espada e\\nignora los cambios en\\nlas características del\\nobjetivo.\\n",
    },

    [MOVE_RAZOR_SHELL] = {
        .names = {
            .name = "Concha Filo",
            .capsName = "CONCHA FILO",
            .fullName = "Concha Filo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_WATER,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con una afilada\\nvieira y puede reducir\\nla Defensa.\\n",
    },

    [MOVE_HEAT_CRASH] = {
        .names = {
            .name = "Golpe Calor",
            .capsName = "GOLPE CALOR",
            .fullName = "Golpe Calor",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAVY_SLAM,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ataca con su cuerpo\\nardiente. Cuanto más\\npeso frente al rival,\\nmás potencia.\\n",
    },

    [MOVE_LEAF_TORNADO] = {
        .names = {
            .name = "Ciclón Hojas",
            .capsName = "CICLÓN HOJAS",
            .fullName = "Ciclón de Hojas",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ACCURACY_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_GRASS,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Tritura con afiladas\\nhojas y puede bajar la\\nPrecisión.\\n",
    },

    [MOVE_STEAMROLLER] = {
        .names = {
            .name = "Rodillo Púas",
            .capsName = "RODILLO PÚAS",
            .fullName = "Rodillo de Púas",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_MINIMIZE_DOUBLE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Se hace una bola y\\narrolla al rival con su\\ncuerpo. Puede hacerlo\\nretroceder.\\n",
    },

    [MOVE_COTTON_GUARD] = {
        .names = {
            .name = "Rizo Algodón",
            .capsName = "RIZO ALGODÓN",
            .fullName = "Rizo Algodón",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP_3,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_SNATCH,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Se cubre con una madeja\\nprotectora que aumenta\\nmuchísimo la Defensa.\\n",
    },

    [MOVE_NIGHT_DAZE] = {
        .names = {
            .name = "Pulso Noche",
            .capsName = "PULSO NOCHE",
            .fullName = "Pulso Noche",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ACCURACY_HIT,
            .split = SPLIT_SPECIAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (90) : (85)),
            .type = TYPE_DARK,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 40,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Onda siniestra que puede\\nreducir la Precisión del\\nobjetivo.\\n",
    },

    [MOVE_PSYSTRIKE] = {
        .names = {
            .name = "Onda Mental",
            .capsName = "ONDA MENTAL",
            .fullName = "Onda Mental",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Onda psíquica que causa\\ndaño físico al\\nobjetivo.\\n",
    },

    [MOVE_TAIL_SLAP] = {
        .names = {
            .name = "Plumerazo",
            .capsName = "PLUMERAZO",
            .fullName = "Plumerazo",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_NORMAL,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Golpea con la cola de dos\\na cinco veces seguidas.\\n",
    },

    [MOVE_HURRICANE] = {
        .names = {
            .name = "Vendaval",
            .capsName = "VENDAVAL",
            .fullName = "Vendaval",
        },
        .data = {
            .effect = MOVE_EFFECT_HURRICANE,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_FLYING,
            .accuracy = 70,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Fuerte torbellino que\\nenvuelve al objetivo y\\npuede confundirlo.\\n",
    },

    [MOVE_HEAD_CHARGE] = {
        .names = {
            .name = "Ariete",
            .capsName = "ARIETE",
            .fullName = "Ariete",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_THIRD,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Tremendo cabezazo. El\\nusuario se hiere\\nligeramente.\\n",
    },

    [MOVE_GEAR_GRIND] = {
        .names = {
            .name = "Rueda Doble",
            .capsName = "RUEDA DOBLE",
            .fullName = "Rueda Doble",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (60) : (50)),
            .type = TYPE_STEEL,
            .accuracy = ((CHAMPIONS_POWER_CHANGES) ? (90) : (85)),
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Lanza dos engranajes de\\nhierro y golpea dos\\nveces seguidas.\\n",
    },

    [MOVE_SEARING_SHOT] = {
        .names = {
            .name = "Bomba Ígnea",
            .capsName = "BOMBA ÍGNEA",
            .fullName = "Bomba Ígnea",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Infierno de llamas que\\ndaña a los adyacentes.\\nPuede causar\\nquemaduras.\\n",
    },

    [MOVE_TECHNO_BLAST] = {
        .names = {
            .name = "Tecno Shock",
            .capsName = "TECNO SHOCK",
            .fullName = "Tecno Shock",
        },
        .data = {
            .effect = MOVE_EFFECT_TECHNO_BLAST,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Gran láser cuyo tipo\\ndepende del cartucho\\nque porta el usuario.\\n",
    },

    [MOVE_RELIC_SONG] = {
        .names = {
            .name = "Canto Arc.",
            .capsName = "CANTO ARC.",
            .fullName = "Canto Arcaico",
        },
        .data = {
            .effect = MOVE_EFFECT_SLEEP_HIT,
            .split = SPLIT_SPECIAL,
            .power = 75,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Antiguo canto que\\nconmueve al objetivo.\\nPuede dormirlo.\\n",
    },

    [MOVE_SECRET_SWORD] = {
        .names = {
            .name = "Sable Míst.",
            .capsName = "SABLE MÍST.",
            .fullName = "Sable Místico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 85,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ensarta con un largo\\ncuerno dotado de poder\\nmístico que provoca\\ndaño físico.\\n",
    },

    [MOVE_GLACIATE] = {
        .names = {
            .name = "Mundo Gélido",
            .capsName = "MUNDO GÉLIDO",
            .fullName = "Mundo Gélido",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_ICE,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Aire helado que reduce\\nla Velocidad del\\nobjetivo.\\n",
    },

    [MOVE_BOLT_STRIKE] = {
        .names = {
            .name = "Ataq. Fulgor",
            .capsName = "ATAQ. FULGOR",
            .fullName = "Ataque Fulgor",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_ELECTRIC,
            .accuracy = 85,
            .pp = 5,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Se envuelve de una gran\\ncarga eléctrica y\\nembiste. Puede\\nparalizar.\\n",
    },

    [MOVE_BLUE_FLARE] = {
        .names = {
            .name = "Llama Azul",
            .capsName = "LLAMA AZUL",
            .fullName = "Llama Azul",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_FIRE,
            .accuracy = 85,
            .pp = 5,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Bella pero potente\\nllama azul que rodea al\\nobjetivo. Puede quemar.\\n",
    },

    [MOVE_FIERY_DANCE] = {
        .names = {
            .name = "Danza Llama",
            .capsName = "DANZA LLAMA",
            .fullName = "Danza Llama",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Se envuelve en llamas y\\nagita las alas para\\ndañar. Puede subir el\\nAtaque Especial.\\n",
    },

    [MOVE_FREEZE_SHOCK] = {
        .names = {
            .name = "Rayo Gélido",
            .capsName = "RAYO GÉLIDO",
            .fullName = "Rayo Gélido",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 140,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Carga un bloque de hielo\\nelectrizado y ataca al\\nsegundo turno. Puede\\nparalizar.\\n",
    },

    [MOVE_ICE_BURN] = {
        .names = {
            .name = "Llama Gélida",
            .capsName = "LLAMA GÉLIDA",
            .fullName = "Llama Gélida",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 140,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca al segundo turno\\nrodeando al rival de un\\naire gélido. Puede\\nquemar.\\n",
    },

    [MOVE_SNARL] = {
        .names = {
            .name = "Alarido",
            .capsName = "ALARIDO",
            .fullName = "Alarido",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 55,
            .type = TYPE_DARK,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Chillido desagradable\\nque reduce el Ataque\\nEspecial.\\n",
    },

    [MOVE_ICICLE_CRASH] = {
        .names = {
            .name = "Chuzos",
            .capsName = "CHUZOS",
            .fullName = "Chuzos",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Lanza grandes\\ncarámbanos. Puede\\namedrentar al rival.\\n",
    },

    [MOVE_V_CREATE] = {
        .names = {
            .name = "V de Fuego",
            .capsName = "V DE FUEGO",
            .fullName = "V de Fuego",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_DEF_SP_DEF_SPEED_DOWN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 180,
            .type = TYPE_FIRE,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "De su frente mana una\\nllama ardiente con la\\nque arremete. Baja su\\nDefensa, Def. Esp. y\\nVelocidad.\\n",
    },

    [MOVE_FUSION_FLARE] = {
        .names = {
            .name = "Llama Fusión",
            .capsName = "LLAMA FUSIÓN",
            .fullName = "Llama Fusión",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Llamarada gigantesca que\\naumenta su potencia si\\nla influye una gran\\nenergía eléctrica.\\n",
    },

    [MOVE_FUSION_BOLT] = {
        .names = {
            .name = "Rayo Fusión",
            .capsName = "RAYO FUSIÓN",
            .fullName = "Rayo Fusión",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Enorme descarga\\neléctrica que aumenta\\nsu potencia si la\\ninfluye una llamarada.\\n",
    },

    [MOVE_FLYING_PRESS] = {
        .names = {
            .name = "Plancha Vol.",
            .capsName = "PLANCHA VOL.",
            .fullName = "Plancha Voladora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIGHTING,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Se lanza sobre el\\nobjetivo. Este\\nmovimiento es de tipo\\nLucha y Volador a la\\nvez.\\n",
    },

    [MOVE_MAT_BLOCK] = {
        .names = {
            .name = "Esc. Tatami",
            .capsName = "ESC. TATAMI",
            .fullName = "Escudo Tatami",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT_USER_SIDE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa un tatami para\\nescudarse y proteger a\\nlos aliados. No sirve\\ncontra movimientos de\\nestado.\\n",
    },

    [MOVE_BELCH] = {
        .names = {
            .name = "Eructo",
            .capsName = "ERUCTO",
            .fullName = "Eructo",
        },
        .data = {
            .effect = MOVE_EFFECT_BELCH,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_POISON,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Eructo dañino. Para\\nusarlo hay que haberse\\ncomido antes una baya\\nequipada.\\n",
    },

    [MOVE_ROTOTILLER] = {
        .names = {
            .name = "Fertilizante",
            .capsName = "FERTILIZANTE",
            .fullName = "Fertilizante",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GROUND,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT | RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Labra la tierra y sube\\nel Ataque y el Ataque\\nEspecial de los Pokémon\\nde tipo Planta.\\n",
    },

    [MOVE_STICKY_WEB] = {
        .names = {
            .name = "Red Viscosa",
            .capsName = "RED VISCOSA",
            .fullName = "Red Viscosa",
        },
        .data = {
            .effect = MOVE_EFFECT_STICKY_WEB,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_OPPONENT_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Red pegajosa que reduce\\nla Velocidad de los\\nrivales que entran en\\ncombate.\\n",
    },

    [MOVE_FELL_STINGER] = {
        .names = {
            .name = "Aguijón Let.",
            .capsName = "AGUIJÓN LET.",
            .fullName = "Aguijón Letal",
        },
        .data = {
            .effect = MOVE_EFFECT_FELL_STINGER,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Si se derrota al rival\\ncon este movimiento,\\nsube muchísimo tu\\nAtaque.\\n",
    },

    [MOVE_PHANTOM_FORCE] = {
        .names = {
            .name = "Golpe Fant.",
            .capsName = "GOLPE FANT.",
            .fullName = "Golpe Fantasma",
        },
        .data = {
            .effect = MOVE_EFFECT_SHADOW_FORCE,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Desaparece en el primer\\nturno y ataca en el\\nsegundo aunque el rival\\nse proteja.\\n",
    },

    [MOVE_TRICK_OR_TREAT] = {
        .names = {
            .name = "Halloween",
            .capsName = "HALLOWEEN",
            .fullName = "Halloween",
        },
        .data = {
            .effect = MOVE_EFFECT_ADD_TYPE_GHOST,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Invita al rival a\\ncelebrar Halloween y\\nañade el tipo Fantasma\\na sus tipos.\\n",
    },

    [MOVE_NOBLE_ROAR] = {
        .names = {
            .name = "Rugido G.",
            .capsName = "RUGIDO G.",
            .fullName = "Rugido de Guerra",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_SP_ATK_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Rugido de guerra que\\nreduce el Ataque y el\\nAtaque Especial del\\nobjetivo.\\n",
    },

    [MOVE_ION_DELUGE] = {
        .names = {
            .name = "Cortina",
            .capsName = "CORTINA",
            .fullName = "Cortina Plasma",
        },
        .data = {
            .effect = MOVE_EFFECT_ION_DELUGE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 25,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Disemina partículas\\neléctricas que\\nconvierten los\\nmovimientos de tipo\\nNormal en Eléctrico.\\n",
    },

    [MOVE_PARABOLIC_CHARGE] = {
        .names = {
            .name = "Carga Paráb.",
            .capsName = "CARGA PARÁB.",
            .fullName = "Carga Parábola",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_SPECIAL,
            .power = 65,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Daña a los adyacentes y\\nabsorbe la mitad del\\ndaño para restaurar\\nsus PS.\\n",
    },

    [MOVE_FORESTS_CURSE] = {
        .names = {
            .name = "Condena",
            .capsName = "CONDENA",
            .fullName = "Condena Silvana",
        },
        .data = {
            .effect = MOVE_EFFECT_ADD_TYPE_GRASS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "El objetivo es presa de\\nla maldición del bosque\\ny pasa a ser de tipo\\nPlanta.\\n",
    },

    [MOVE_PETAL_BLIZZARD] = {
        .names = {
            .name = "Torm. Floral",
            .capsName = "TORM. FLORAL",
            .fullName = "Tormenta Floral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Vendaval de pétalos que\\ndaña a los Pokémon\\nadyacentes.\\n",
    },

    [MOVE_FREEZE_DRY] = {
        .names = {
            .name = "Liofiliz.",
            .capsName = "LIOFILIZ.",
            .fullName = "Liofilización",
        },
        .data = {
            .effect = MOVE_EFFECT_FREEZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Enfría de repente y\\npuede congelar. Es\\nsupereficaz contra el\\ntipo Agua.\\n",
    },

    [MOVE_DISARMING_VOICE] = {
        .names = {
            .name = "Voz Cautiv.",
            .capsName = "VOZ CAUTIV.",
            .fullName = "Voz Cautivadora",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Fascinante voz que\\nobnubila al objetivo.\\nNo falla nunca.\\n",
    },

    [MOVE_PARTING_SHOT] = {
        .names = {
            .name = "Últ. Palabra",
            .capsName = "ÚLT. PALABRA",
            .fullName = "Última Palabra",
        },
        .data = {
            .effect = MOVE_EFFECT_PARTING_SHOT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se cambia por otro,\\npero antes intimida y\\nbaja el Ataque y el\\nAtaque Especial.\\n",
    },

    [MOVE_TOPSY_TURVY] = {
        .names = {
            .name = "Reversión",
            .capsName = "REVERSIÓN",
            .fullName = "Reversión",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Invierte por completo\\nlos cambios en las\\ncaracterísticas del\\nobjetivo.\\n",
    },

    [MOVE_DRAINING_KISS] = {
        .names = {
            .name = "Beso Drenaje",
            .capsName = "BESO DRENAJE",
            .fullName = "Beso Drenaje",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_THREE_QUARTERS_DAMAGE_DEALT,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Absorbe energía con un\\nbeso y restaura PS en\\nuna cantidad igual o\\nsuperior a la mitad\\ndel daño.\\n",
    },

    [MOVE_CRAFTY_SHIELD] = {
        .names = {
            .name = "Truco Def.",
            .capsName = "TRUCO DEF.",
            .fullName = "Truco Defensa",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT_USER_SIDE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 3,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Poderes misteriosos que\\nle protegen a él y a\\nsus aliados de los\\nmovimientos de estado.\\n",
    },

    [MOVE_FLOWER_SHIELD] = {
        .names = {
            .name = "Def. Floral",
            .capsName = "DEF. FLORAL",
            .fullName = "Defensa Floral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT | RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Aumenta la Defensa de\\ntodos los Pokémon de\\ntipo Planta en combate.\\n",
    },

    [MOVE_GRASSY_TERRAIN] = {
        .names = {
            .name = "Campo Hierba",
            .capsName = "CAMPO HIERBA",
            .fullName = "Campo de Hierba",
        },
        .data = {
            .effect = MOVE_EFFECT_APPLY_TERRAINS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Durante 5 turnos se\\npotencian los\\nmovimientos de Planta y\\nlos del suelo recuperan\\nPS.\\n",
    },

    [MOVE_MISTY_TERRAIN] = {
        .names = {
            .name = "Campo Niebla",
            .capsName = "CAMPO NIEBLA",
            .fullName = "Campo de Niebla",
        },
        .data = {
            .effect = MOVE_EFFECT_APPLY_TERRAINS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Durante 5 turnos los\\ndel suelo no sufren\\nestados y se reduce el\\ndaño de tipo Dragón.\\n",
    },

    [MOVE_ELECTRIFY] = {
        .names = {
            .name = "Electrif.",
            .capsName = "ELECTRIF.",
            .fullName = "Electrificación",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Si el objetivo queda\\nelectrificado antes de\\nusar un movimiento, será\\nde tipo Eléctrico.\\n",
    },

    [MOVE_PLAY_ROUGH] = {
        .names = {
            .name = "Carantoña",
            .capsName = "CARANTOÑA",
            .fullName = "Carantoña",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_FAIRY,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Hace cucamonas al rival\\ny lo ataca. Puede\\nreducir su Ataque.\\n",
    },

    [MOVE_FAIRY_WIND] = {
        .names = {
            .name = "Viento Feér.",
            .capsName = "VIENTO FEÉR.",
            .fullName = "Viento Feérico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Vendaval feérico que\\narremete contra el\\nobjetivo.\\n",
    },

    [MOVE_MOONBLAST] = {
        .names = {
            .name = "Fuerza Lunar",
            .capsName = "FUERZA LUNAR",
            .fullName = "Fuerza Lunar",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 95,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 15,
            .effectChance = ((CHAMPIONS_EFFECT_CHANCE_CHANGES) ? (10) : (30)),
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Invoca el poder de la\\nluna para atacar. Puede\\nreducir el Ataque\\nEspecial.\\n",
    },

    [MOVE_BOOMBURST] = {
        .names = {
            .name = "Estruendo",
            .capsName = "ESTRUENDO",
            .fullName = "Estruendo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 140,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Potentísima onda sonora\\nque ataca a los Pokémon\\nadyacentes.\\n",
    },

    [MOVE_FAIRY_LOCK] = {
        .names = {
            .name = "Cerrojo",
            .capsName = "CERROJO",
            .fullName = "Cerrojo Feérico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Un cerrojo que impide a\\ntodos huir o ser\\ncambiados en el turno\\nsiguiente.\\n",
    },

    [MOVE_KINGS_SHIELD] = {
        .names = {
            .name = "Escudo Real",
            .capsName = "ESCUDO REAL",
            .fullName = "Escudo Real",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (10)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Adopta una postura\\ndefensiva y reduce el\\nAtaque de quien le\\ntoque.\\n",
    },

    [MOVE_PLAY_NICE] = {
        .names = {
            .name = "Camaradería",
            .capsName = "CAMARADERÍA",
            .fullName = "Camaradería",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Se hace amigo del rival\\ny le quita las ganas de\\ncombatir, reduciendo su\\nAtaque.\\n",
    },

    [MOVE_CONFIDE] = {
        .names = {
            .name = "Confidencia",
            .capsName = "CONFIDENCIA",
            .fullName = "Confidencia",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Cuenta un secreto que\\nhace perder la\\nconcentración y reduce\\nel Ataque Especial.\\n",
    },

    [MOVE_DIAMOND_STORM] = {
        .names = {
            .name = "Torm. Diam.",
            .capsName = "TORM. DIAM.",
            .fullName = "Tormenta de Diamantes",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_DEF_2_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_ROCK,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Vendaval de diamantes\\nque daña. Puede subir\\nmucho la Defensa del\\nusuario.\\n",
    },

    [MOVE_STEAM_ERUPTION] = {
        .names = {
            .name = "Chorro Vapor",
            .capsName = "CHORRO VAPOR",
            .fullName = "Chorro de Vapor",
        },
        .data = {
            .effect = MOVE_EFFECT_THAW_AND_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_WATER,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Vapor extremadamente\\ncaliente que puede\\ncausar quemaduras.\\n",
    },

    [MOVE_HYPERSPACE_HOLE] = {
        .names = {
            .name = "Paso Dimen.",
            .capsName = "PASO DIMEN.",
            .fullName = "Paso Dimensional",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_PROTECT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Aparece junto al rival\\ncon un agujero\\ndimensional y golpea\\nsin que pueda\\nprotegerse.\\n",
    },

    [MOVE_WATER_SHURIKEN] = {
        .names = {
            .name = "Shuriken",
            .capsName = "SHURIKEN",
            .fullName = "Shuriken de Agua",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_SPECIAL,
            .power = 15,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Estrellas arrojadizas de\\nagua que golpean de dos\\na cinco veces. Tiene\\nprioridad alta.\\n",
    },

    [MOVE_MYSTICAL_FIRE] = {
        .names = {
            .name = "L. Embrujada",
            .capsName = "L. EMBRUJADA",
            .fullName = "Llama Embrujada",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 75,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Llama singular a gran\\ntemperatura que reduce\\nel Ataque Especial del\\nobjetivo.\\n",
    },

    [MOVE_SPIKY_SHIELD] = {
        .names = {
            .name = "Barrera Esp.",
            .capsName = "BARRERA ESP.",
            .fullName = "Barrera Espinosa",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (10)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Le protege de los\\nataques y daña a quien\\nle toque al atacarle.\\n",
    },

    [MOVE_AROMATIC_MIST] = {
        .names = {
            .name = "Niebla Arom.",
            .capsName = "NIEBLA AROM.",
            .fullName = "Niebla Aromática",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALLY,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Fragancia misteriosa\\nque aumenta la Defensa\\nEspecial de un aliado.\\n",
    },

    [MOVE_EERIE_IMPULSE] = {
        .names = {
            .name = "Onda Anómala",
            .capsName = "ONDA ANÓMALA",
            .fullName = "Onda Anómala",
        },
        .data = {
            .effect = MOVE_EFFECT_SP_ATK_DOWN_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "El usuario irradia unas\\nraras ondas que reducen\\nmucho el Ataque Especial\\ndel rival.\\n",
    },

    [MOVE_VENOM_DRENCH] = {
        .names = {
            .name = "Trampa Ven.",
            .capsName = "TRAMPA VEN.",
            .fullName = "Trampa Venenosa",
        },
        .data = {
            .effect = MOVE_EFFECT_VENOM_DRENCH,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Líquido venenoso que\\nreduce el Ataque, el\\nAtaque Especial y la\\nVelocidad. Solo afecta a\\nlos envenenados.\\n",
    },

    [MOVE_POWDER] = {
        .names = {
            .name = "Polvo Expl.",
            .capsName = "POLVO EXPL.",
            .fullName = "Polvo Explosivo",
        },
        .data = {
            .effect = MOVE_EFFECT_POWDER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Esparce un polvo sobre el\\nobjetivo. Si usa un\\nmovimiento de Fuego en el\\nmismo turno, el polvo\\nexplota.\\n",
    },

    [MOVE_GEOMANCY] = {
        .names = {
            .name = "Geocontrol",
            .capsName = "GEOCONTROL",
            .fullName = "Geocontrol",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_ATK_SP_ATK_SPEED_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Concentra energía el\\nprimer turno y sube\\nmucho su Velocidad y\\nsus Defensas en el\\nsegundo.\\n",
    },

    [MOVE_MAGNETIC_FLUX] = {
        .names = {
            .name = "Aura Magn.",
            .capsName = "AURA MAGN.",
            .fullName = "Aura Magnética",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Manipula el campo\\nmagnético y sube las\\nDefensas de los\\naliados con Más o\\nMenos.\\n",
    },

    [MOVE_HAPPY_HOUR] = {
        .names = {
            .name = "Paga Extra",
            .capsName = "PAGA EXTRA",
            .fullName = "Paga Extra",
        },
        .data = {
            .effect = MOVE_EFFECT_DO_NOTHING,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Al usarlo se duplica el\\ndinero recibido tras el\\ncombate.\\n",
    },

    [MOVE_ELECTRIC_TERRAIN] = {
        .names = {
            .name = "Campo Eléc.",
            .capsName = "CAMPO ELÉC.",
            .fullName = "Campo Eléctrico",
        },
        .data = {
            .effect = MOVE_EFFECT_APPLY_TERRAINS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = APPEAL_BASIC,
            .contestType = CONTEST_SMART,
        },
        .description = "Durante 5 turnos se\\npotencian los\\nmovimientos eléctricos\\ny los del suelo no\\nduermen.\\n",
    },

    [MOVE_DAZZLING_GLEAM] = {
        .names = {
            .name = "Brillo Mág.",
            .capsName = "BRILLO MÁG.",
            .fullName = "Brillo Mágico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Inflige daño al objetivo\\ncon una potente luz.\\n",
    },

    [MOVE_CELEBRATE] = {
        .names = {
            .name = "Celebración",
            .capsName = "CELEBRACIÓN",
            .fullName = "Celebración",
        },
        .data = {
            .effect = MOVE_EFFECT_DO_NOTHING,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "El Pokémon te felicita\\nen un día muy especial\\npara ti.\\n",
    },

    [MOVE_HOLD_HANDS] = {
        .names = {
            .name = "Manos Juntas",
            .capsName = "MANOS JUNTAS",
            .fullName = "Manos Juntas",
        },
        .data = {
            .effect = MOVE_EFFECT_DO_NOTHING,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALLY,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Da la mano a un aliado\\ny ambos se sienten muy\\nfelices.\\n",
    },

    [MOVE_BABY_DOLL_EYES] = {
        .names = {
            .name = "Ojitos Tier.",
            .capsName = "OJITOS TIER.",
            .fullName = "Ojitos Tiernos",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Mirada acaramelada que\\nreduce el Ataque del\\nrival. Tiene prioridad\\nalta.\\n",
    },

    [MOVE_NUZZLE] = {
        .names = {
            .name = "Moflete Est.",
            .capsName = "MOFLETE EST.",
            .fullName = "Moflete Estático",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 20,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Frota sus mofletes\\neléctricos contra el\\nrival y lo paraliza.\\n",
    },

    [MOVE_HOLD_BACK] = {
        .names = {
            .name = "Clemencia",
            .capsName = "CLEMENCIA",
            .fullName = "Clemencia",
        },
        .data = {
            .effect = MOVE_EFFECT_LEAVE_WITH_1_HP,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se contiene al atacar y\\ndeja al objetivo con al\\nmenos 1 PS.\\n",
    },

    [MOVE_INFESTATION] = {
        .names = {
            .name = "Acoso",
            .capsName = "ACOSO",
            .fullName = "Acoso",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_SPECIAL,
            .power = 20,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Hostiga al rival durante\\n4 o 5 turnos y le\\nimpide huir o ser\\ncambiado.\\n",
    },

    [MOVE_POWER_UP_PUNCH] = {
        .names = {
            .name = "Puño Incr.",
            .capsName = "PUÑO INCR.",
            .fullName = "Puño Incremento",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Cada vez que golpea se\\nendurecen sus puños y\\nsube el Ataque.\\n",
    },

    [MOVE_OBLIVION_WING] = {
        .names = {
            .name = "Ala Mort.",
            .capsName = "ALA MORT.",
            .fullName = "Ala Mortífera",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_THREE_QUARTERS_DAMAGE_DEALT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Absorbe energía del\\nobjetivo y recupera PS\\nigual o más de la mitad\\ndel daño.\\n",
    },

    [MOVE_THOUSAND_ARROWS] = {
        .names = {
            .name = "Mil Flechas",
            .capsName = "MIL FLECHAS",
            .fullName = "Mil Flechas",
        },
        .data = {
            .effect = MOVE_EFFECT_SMACK_DOWN,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Acierta incluso a\\nPokémon que estén en el\\naire y los hace caer al\\nsuelo.\\n",
    },

    [MOVE_THOUSAND_WAVES] = {
        .names = {
            .name = "Mil Temb.",
            .capsName = "MIL TEMB.",
            .fullName = "Mil Temblores",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ESCAPE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ondas sísmicas que\\nsacuden al rival y le\\nimpiden huir o ser\\ncambiado.\\n",
    },

    [MOVE_LANDS_WRATH] = {
        .names = {
            .name = "Fuerza Tel.",
            .capsName = "FUERZA TEL.",
            .fullName = "Fuerza Telúrica",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Acumula energía de la\\ncorteza terrestre y la\\nconcentra contra el\\nobjetivo.\\n",
    },

    [MOVE_LIGHT_OF_RUIN] = {
        .names = {
            .name = "Luz Aniquil.",
            .capsName = "LUZ ANIQUIL.",
            .fullName = "Luz Aniquiladora",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_HALF,
            .split = SPLIT_SPECIAL,
            .power = 140,
            .type = TYPE_FAIRY,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Emplea el poder de la\\nFlor Eterna para lanzar\\nun rayo, pero se hiere\\ngravemente.\\n",
    },

    [MOVE_ORIGIN_PULSE] = {
        .names = {
            .name = "Pulso Prim.",
            .capsName = "PULSO PRIM.",
            .fullName = "Pulso Primigenio",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_WATER,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Ataca con una infinidad\\nde rayos de luz\\nazulada.\\n",
    },

    [MOVE_PRECIPICE_BLADES] = {
        .names = {
            .name = "Filo Abismo",
            .capsName = "FILO ABISMO",
            .fullName = "Filo del Abismo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_GROUND,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El poder latente de la\\ntierra se manifiesta en\\nhojas afiladas que\\natacan al rival.\\n",
    },

    [MOVE_DRAGON_ASCENT] = {
        .names = {
            .name = "Ascenso Dr.",
            .capsName = "ASCENSO DR.",
            .fullName = "Ascenso Draco",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_DEF_SP_DEF_DOWN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Se precipita desde el\\ncielo a toda velocidad,\\npero reduce sus\\nDefensas.\\n",
    },

    [MOVE_HYPERSPACE_FURY] = {
        .names = {
            .name = "Cerco Dim.",
            .capsName = "CERCO DIM.",
            .fullName = "Cerco Dimensión",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_DEF_DOWN_HIT_REMOVE_PROTECT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_TOUGH,
        },
        .description = "Ráfaga de golpes que\\nignora Protección o\\nDetección. Reduce la\\nDefensa del usuario.\\n",
    },

    [MOVE_BREAKNECK_BLITZ_PHYSICAL] = {
        .names = {
            .name = "Carr.Arroll.",
            .capsName = "CARR.ARROLL.",
            .fullName = "Carrera Arrolladora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que arremete\\ncontra el objetivo con\\ngran fuerza. Su potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_BREAKNECK_BLITZ_SPECIAL] = {
        .names = {
            .name = "Carr.Arroll.",
            .capsName = "CARR.ARROLL.",
            .fullName = "Carrera Arrolladora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que arremete\\ncontra el objetivo con\\ngran fuerza. Su potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_ALL_OUT_PUMMELING_PHYSICAL] = {
        .names = {
            .name = "Ráf. Demol.",
            .capsName = "RÁF. DEMOL.",
            .fullName = "Ráfaga Demoledora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que lanza una\\nsarta de golpes\\ndemoledores. Potencia\\nsegún el movimiento\\noriginal.\\n",
    },

    [MOVE_ALL_OUT_PUMMELING_SPECIAL] = {
        .names = {
            .name = "Ráf. Demol.",
            .capsName = "RÁF. DEMOL.",
            .fullName = "Ráfaga Demoledora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que lanza una\\nsarta de golpes\\ndemoledores. Potencia\\nsegún el movimiento\\noriginal.\\n",
    },

    [MOVE_SUPERSONIC_SKYSTRIKE_PHYSICAL] = {
        .names = {
            .name = "Pic. Supers.",
            .capsName = "PIC. SUPERS.",
            .fullName = "Picado Supersónico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que se eleva y se\\nabalanza en picado.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_SUPERSONIC_SKYSTRIKE_SPECIAL] = {
        .names = {
            .name = "Pic. Supers.",
            .capsName = "PIC. SUPERS.",
            .fullName = "Picado Supersónico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que se eleva y se\\nabalanza en picado.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_ACID_DOWNPOUR_PHYSICAL] = {
        .names = {
            .name = "Diluv. Corr.",
            .capsName = "DILUV. CORR.",
            .fullName = "Diluvio Corrosivo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea una\\nciénaga venenosa en la\\nque hunde al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_ACID_DOWNPOUR_SPECIAL] = {
        .names = {
            .name = "Diluv. Corr.",
            .capsName = "DILUV. CORR.",
            .fullName = "Diluvio Corrosivo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea una\\nciénaga venenosa en la\\nque hunde al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_TECTONIC_RAGE_PHYSICAL] = {
        .names = {
            .name = "Barr.Telúr.",
            .capsName = "BARR.TELÚR.",
            .fullName = "Barrena Telúrica",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_GROUND,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que abre una\\nprofunda grieta que se\\ntraga al rival. Potencia\\nsegún el movimiento\\noriginal.\\n",
    },

    [MOVE_TECTONIC_RAGE_SPECIAL] = {
        .names = {
            .name = "Barr.Telúr.",
            .capsName = "BARR.TELÚR.",
            .fullName = "Barrena Telúrica",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_GROUND,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que abre una\\nprofunda grieta que se\\ntraga al rival. Potencia\\nsegún el movimiento\\noriginal.\\n",
    },

    [MOVE_CONTINENTAL_CRUSH_PHYSICAL] = {
        .names = {
            .name = "Aplast. Gig.",
            .capsName = "APLAST. GIG.",
            .fullName = "Aplastamiento Gigalítico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea una\\nmontaña rocosa con la\\nque aplasta al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_CONTINENTAL_CRUSH_SPECIAL] = {
        .names = {
            .name = "Aplast. Gig.",
            .capsName = "APLAST. GIG.",
            .fullName = "Aplastamiento Gigalítico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea una\\nmontaña rocosa con la\\nque aplasta al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_SAVAGE_SPIN_OUT_PHYSICAL] = {
        .names = {
            .name = "Guad. Sedosa",
            .capsName = "GUAD. SEDOSA",
            .fullName = "Guadaña Sedosa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que encierra al\\nrival en un capullo y\\narremete contra él.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_SAVAGE_SPIN_OUT_SPECIAL] = {
        .names = {
            .name = "Guad. Sedosa",
            .capsName = "GUAD. SEDOSA",
            .fullName = "Guadaña Sedosa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que encierra al\\nrival en un capullo y\\narremete contra él.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_NEVER_ENDING_NIGHTMARE_PHYSICAL] = {
        .names = {
            .name = "Presa Esp.",
            .capsName = "PRESA ESP.",
            .fullName = "Presa Espectral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que invoca\\nespectros encolerizados\\nque apresan al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_NEVER_ENDING_NIGHTMARE_SPECIAL] = {
        .names = {
            .name = "Presa Esp.",
            .capsName = "PRESA ESP.",
            .fullName = "Presa Espectral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que invoca\\nespectros encolerizados\\nque apresan al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_CORKSCREW_CRASH_PHYSICAL] = {
        .names = {
            .name = "Hél. Trep.",
            .capsName = "HÉL. TREP.",
            .fullName = "Hélice Trepanadora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que gira a toda\\nvelocidad y perfora al\\nrival. Potencia según el\\nmovimiento original.\\n",
    },

    [MOVE_CORKSCREW_CRASH_SPECIAL] = {
        .names = {
            .name = "Hél. Trep.",
            .capsName = "HÉL. TREP.",
            .fullName = "Hélice Trepanadora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que gira a toda\\nvelocidad y perfora al\\nrival. Potencia según el\\nmovimiento original.\\n",
    },

    [MOVE_INFERNO_OVERDRIVE_PHYSICAL] = {
        .names = {
            .name = "Hecat.Pírica",
            .capsName = "HECAT.PÍRICA",
            .fullName = "Hecatombe Pírica",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_FIRE,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que lanza una\\nenorme llamarada que\\ncalcina al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_INFERNO_OVERDRIVE_SPECIAL] = {
        .names = {
            .name = "Hecat.Pírica",
            .capsName = "HECAT.PÍRICA",
            .fullName = "Hecatombe Pírica",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_FIRE,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que lanza una\\nenorme llamarada que\\ncalcina al rival.\\nPotencia según el\\nmovimiento original.\\n",
    },

    [MOVE_HYDRO_VORTEX_PHYSICAL] = {
        .names = {
            .name = "Hidrov. Abis",
            .capsName = "HIDROV. ABIS",
            .fullName = "Hidrovórtice Abisal",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea un\\ntorbellino de agua que\\nengulle al rival. La\\npotencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_HYDRO_VORTEX_SPECIAL] = {
        .names = {
            .name = "Hidrov. Abis",
            .capsName = "HIDROV. ABIS",
            .fullName = "Hidrovórtice Abisal",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea un\\ntorbellino de agua que\\nengulle al rival. La\\npotencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_BLOOM_DOOM_PHYSICAL] = {
        .names = {
            .name = "Megat.Floral",
            .capsName = "MEGAT.FLORAL",
            .fullName = "Megatón Floral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que concentra la\\nenergía vegetal y ataca\\nal rival. La potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_BLOOM_DOOM_SPECIAL] = {
        .names = {
            .name = "Megat.Floral",
            .capsName = "MEGAT.FLORAL",
            .fullName = "Megatón Floral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que concentra la\\nenergía vegetal y ataca\\nal rival. La potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_GIGAVOLT_HAVOC_PHYSICAL] = {
        .names = {
            .name = "Gigav.Destr.",
            .capsName = "GIGAV.DESTR.",
            .fullName = "Gigavoltio Destructor",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que genera una\\ngran descarga y\\nelectrocuta al rival.\\nLa potencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_GIGAVOLT_HAVOC_SPECIAL] = {
        .names = {
            .name = "Gigav.Destr.",
            .capsName = "GIGAV.DESTR.",
            .fullName = "Gigavoltio Destructor",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que genera una\\ngran descarga y\\nelectrocuta al rival.\\nLa potencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_SHATTERED_PSYCHE_PHYSICAL] = {
        .names = {
            .name = "Disrup.Psíq.",
            .capsName = "DISRUP.PSÍQ.",
            .fullName = "Disruptor Psíquico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que manipula la\\nmente del rival para\\ndañarle. La potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_SHATTERED_PSYCHE_SPECIAL] = {
        .names = {
            .name = "Disrup.Psíq.",
            .capsName = "DISRUP.PSÍQ.",
            .fullName = "Disruptor Psíquico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que manipula la\\nmente del rival para\\ndañarle. La potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_SUBZERO_SLAMMER_PHYSICAL] = {
        .names = {
            .name = "Crioal.Desp.",
            .capsName = "CRIOAL.DESP.",
            .fullName = "Crioaliento Despiadado",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que lanza un\\nrayo de hielo que\\ncongela al rival. La\\npotencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_SUBZERO_SLAMMER_SPECIAL] = {
        .names = {
            .name = "Crioal.Desp.",
            .capsName = "CRIOAL.DESP.",
            .fullName = "Crioaliento Despiadado",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que lanza un\\nrayo de hielo que\\ncongela al rival. La\\npotencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_DEVASTATING_DRAKE_PHYSICAL] = {
        .names = {
            .name = "Dracoal.Dev.",
            .capsName = "DRACOAL.DEV.",
            .fullName = "Dracoaliento Devastador",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_DRAGON,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que materializa\\nsu aura y golpea al\\nrival. La potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_DEVASTATING_DRAKE_SPECIAL] = {
        .names = {
            .name = "Dracoal.Dev.",
            .capsName = "DRACOAL.DEV.",
            .fullName = "Dracoaliento Devastador",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_DRAGON,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que materializa\\nsu aura y golpea al\\nrival. La potencia\\ndepende del movimiento\\noriginal.\\n",
    },

    [MOVE_BLACK_HOLE_ECLIPSE_PHYSICAL] = {
        .names = {
            .name = "Aguj.Negro",
            .capsName = "AGUJ.NEGRO",
            .fullName = "Agujero Negro Aniquilador",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que genera un\\nagujero negro que\\nabsorbe al rival. La\\npotencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_BLACK_HOLE_ECLIPSE_SPECIAL] = {
        .names = {
            .name = "Aguj.Negro",
            .capsName = "AGUJ.NEGRO",
            .fullName = "Agujero Negro Aniquilador",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que genera un\\nagujero negro que\\nabsorbe al rival. La\\npotencia depende del\\nmovimiento original.\\n",
    },

    [MOVE_TWINKLE_TACKLE_PHYSICAL] = {
        .names = {
            .name = "Arrum. Sid.",
            .capsName = "ARRUM. SID.",
            .fullName = "Arrumaco Sideral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea una\\ndimensión fascinante que\\ndeja al rival a su\\nmerced. Potencia según\\nel movimiento original.\\n",
    },

    [MOVE_TWINKLE_TACKLE_SPECIAL] = {
        .names = {
            .name = "Arrum. Sid.",
            .capsName = "ARRUM. SID.",
            .fullName = "Arrumaco Sideral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder Z que crea una\\ndimensión fascinante que\\ndeja al rival a su\\nmerced. Potencia según\\nel movimiento original.\\n",
    },

    [MOVE_CATASTROPIKA] = {
        .names = {
            .name = "Pikav. Letal",
            .capsName = "PIKAV. LETAL",
            .fullName = "Pikavoltio Letal",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 210,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Pikachu acumula una gran\\ncantidad de electricidad\\ncon el Poder Z y\\narremete contra el\\nobjetivo.\\n",
    },

    [MOVE_SHORE_UP] = {
        .names = {
            .name = "Recogearena",
            .capsName = "RECOGEARENA",
            .fullName = "Recogearena",
        },
        .data = {
            .effect = MOVE_EFFECT_HEAL_HALF_DIFFERENT_IN_WEATHER,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GROUND,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Restaura la mitad de sus\\nPS. Con tormenta de\\narena recupera aún más.\\n",
    },

    [MOVE_FIRST_IMPRESSION] = {
        .names = {
            .name = "Escaramuza",
            .capsName = "ESCARAMUZA",
            .fullName = "Escaramuza",
        },
        .data = {
            .effect = MOVE_EFFECT_FIRST_TURN_ONLY,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (100) : (90)),
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 2,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Movimiento de gran\\npotencia que solo sirve\\nen el turno en que se\\nentra en combate.\\n",
    },

    [MOVE_BANEFUL_BUNKER] = {
        .names = {
            .name = "Búnker",
            .capsName = "BÚNKER",
            .fullName = "Búnker",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (10)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Protege de los ataques\\ny envenena a quien le\\ntoque con un movimiento\\nde contacto.\\n",
    },

    [MOVE_SPIRIT_SHACKLE] = {
        .names = {
            .name = "Punt.Sombría",
            .capsName = "PUNT.SOMBRÍA",
            .fullName = "Puntada Sombría",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ESCAPE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (90) : (80)),
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca y fija la sombra\\ndel rival al terreno\\npara impedir su huida.\\n",
    },

    [MOVE_DARKEST_LARIAT] = {
        .names = {
            .name = "Lariat Osc.",
            .capsName = "LARIAT OSC.",
            .fullName = "Lariat Oscuro",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Gira sobre sí mismo y\\ngolpea con ambos brazos\\ne ignorando los cambios\\ndel rival.\\n",
    },

    [MOVE_SPARKLING_ARIA] = {
        .names = {
            .name = "Aria Burbuja",
            .capsName = "ARIA BURBUJA",
            .fullName = "Aria Burbuja",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Libera burbujas al\\ncantar. Cura las\\nquemaduras de quienes\\nreciban daño.\\n",
    },

    [MOVE_ICE_HAMMER] = {
        .names = {
            .name = "Mart. Hielo",
            .capsName = "MART. HIELO",
            .fullName = "Martillo Hielo",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SPEED_DOWN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpe devastador con el\\npuño que reduce la\\nVelocidad del usuario.\\n",
    },

    [MOVE_FLORAL_HEALING] = {
        .names = {
            .name = "Cura Floral",
            .capsName = "CURA FLORAL",
            .fullName = "Cura Floral",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Restaura la mitad de los\\nPS del objetivo. Es más\\nefectivo con Campo de\\nHierba.\\n",
    },

    [MOVE_HIGH_HORSEPOWER] = {
        .names = {
            .name = "Fuerza Eq.",
            .capsName = "FUERZA EQ.",
            .fullName = "Fuerza Equina",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 95,
            .type = TYPE_GROUND,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Asesta un golpe\\ndevastador usando todo\\nsu cuerpo.\\n",
    },

    [MOVE_STRENGTH_SAP] = {
        .names = {
            .name = "Absorbef.",
            .capsName = "ABSORBEF.",
            .fullName = "Absorbefuerza",
        },
        .data = {
            .effect = MOVE_EFFECT_STRENGTH_SAP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Restaura PS igual al\\nAtaque del rival, que\\nademás ve reducida esa\\ncaracterística.\\n",
    },

    [MOVE_SOLAR_BLADE] = {
        .names = {
            .name = "Cuch. Solar",
            .capsName = "CUCH. SOLAR",
            .fullName = "Cuchilla Solar",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_SUN_SKIPS,
            .split = SPLIT_PHYSICAL,
            .power = 125,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Absorbe energía lumínica\\nun turno y ataca con\\nuna cuchilla de luz en\\nel siguiente.\\n",
    },

    [MOVE_LEAFAGE] = {
        .names = {
            .name = "Follaje",
            .capsName = "FOLLAJE",
            .fullName = "Follaje",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca al objetivo\\nlanzando hojas.\\n",
    },

    [MOVE_SPOTLIGHT] = {
        .names = {
            .name = "Foco",
            .capsName = "FOCO",
            .fullName = "Foco",
        },
        .data = {
            .effect = MOVE_EFFECT_MAKE_GLOBAL_TARGET,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 3,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Convierte a un Pokémon\\nen el foco de atención y\\ntodos los ataques se\\ndirigen a él.\\n",
    },

    [MOVE_TOXIC_THREAD] = {
        .names = {
            .name = "Hilo Ven.",
            .capsName = "HILO VEN.",
            .fullName = "Hilo Venenoso",
        },
        .data = {
            .effect = MOVE_EFFECT_TOXIC_THREAD,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Hilillos venenosos que\\nreducen mucho la\\nVelocidad del rival y lo\\nenvenenan.\\n",
    },

    [MOVE_LASER_FOCUS] = {
        .names = {
            .name = "Aguzar",
            .capsName = "AGUZAR",
            .fullName = "Aguzar",
        },
        .data = {
            .effect = MOVE_EFFECT_LASER_FOCUS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 30,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se concentra para que su\\nsiguiente ataque sea\\ngolpe crítico.\\n",
    },

    [MOVE_GEAR_UP] = {
        .names = {
            .name = "Piñón Aux.",
            .capsName = "PIÑÓN AUX.",
            .fullName = "Piñón Auxiliar",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Cambia de marcha y sube\\nel Ataque y el Ataque\\nEspecial de los aliados\\ncon Más y Menos.\\n",
    },

    [MOVE_THROAT_CHOP] = {
        .names = {
            .name = "Golpe Mord.",
            .capsName = "GOLPE MORD.",
            .fullName = "Golpe Mordaza",
        },
        .data = {
            .effect = MOVE_EFFECT_THROAT_CHOP,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Dolor tan abrumador que\\nimpide al rival usar\\ndurante dos turnos\\nmovimientos sonoros.\\n",
    },

    [MOVE_POLLEN_PUFF] = {
        .names = {
            .name = "Bola Polen",
            .capsName = "BOLA POLEN",
            .fullName = "Bola de Polen",
        },
        .data = {
            .effect = MOVE_EFFECT_POLLEN_PUFF,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Bola explosiva que daña\\nal rival. Si alcanza a\\nun aliado, le hace\\nrecuperar PS.\\n",
    },

    [MOVE_ANCHOR_SHOT] = {
        .names = {
            .name = "Anclaje",
            .capsName = "ANCLAJE",
            .fullName = "Anclaje",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ESCAPE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (90) : (80)),
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza un ancla que deja\\nal rival atrapado sin\\npoder huir ni ser\\ncambiado.\\n",
    },

    [MOVE_PSYCHIC_TERRAIN] = {
        .names = {
            .name = "C. Psíquico",
            .capsName = "C. PSÍQUICO",
            .fullName = "Campo Psíquico",
        },
        .data = {
            .effect = MOVE_EFFECT_APPLY_TERRAINS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Durante 5 turnos se\\npotencian los\\nmovimientos psíquicos y\\nlos del suelo quedan\\nprotegidos.\\n",
    },

    [MOVE_LUNGE] = {
        .names = {
            .name = "Plancha",
            .capsName = "PLANCHA",
            .fullName = "Plancha",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se abalanza sobre el\\nrival con todas sus\\nfuerzas y reduce su\\nAtaque.\\n",
    },

    [MOVE_FIRE_LASH] = {
        .names = {
            .name = "Látigo Ígneo",
            .capsName = "LÁTIGO ÍGNEO",
            .fullName = "Látigo Ígneo",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (90) : (80)),
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea con un látigo\\nincandescente y reduce\\nla Defensa del rival.\\n",
    },

    [MOVE_POWER_TRIP] = {
        .names = {
            .name = "Chulería",
            .capsName = "CHULERÍA",
            .fullName = "Chulería",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 20,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca presumiendo de su\\nfuerza. Cuanto más\\nsuban sus\\ncaracterísticas, mayor\\npotencia.\\n",
    },

    [MOVE_BURN_UP] = {
        .names = {
            .name = "Llama Final",
            .capsName = "LLAMA FINAL",
            .fullName = "Llama Final",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_USER_FIRE_TYPE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa hasta la última\\nllama de su cuerpo. Tras\\nel ataque deja de ser de\\ntipo Fuego.\\n",
    },

    [MOVE_SPEED_SWAP] = {
        .names = {
            .name = "Cambiavel.",
            .capsName = "CAMBIAVEL.",
            .fullName = "Cambiavelocidad",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Intercambia su Velocidad\\npor la del objetivo.\\n",
    },

    [MOVE_SMART_STRIKE] = {
        .names = {
            .name = "Cuerno Cert.",
            .capsName = "CUERNO CERT.",
            .fullName = "Cuerno Certero",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ensarta al rival con su\\nafilada cornamenta. No\\nfalla nunca.\\n",
    },

    [MOVE_PURIFY] = {
        .names = {
            .name = "Purificación",
            .capsName = "PURIFICACIÓN",
            .fullName = "Purificación",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (20)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Cura los problemas de\\nestado del rival y, a\\ncambio, recupera PS\\npropios.\\n",
    },

    [MOVE_REVELATION_DANCE] = {
        .names = {
            .name = "Danza Desp.",
            .capsName = "DANZA DESP.",
            .fullName = "Danza Despertar",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (100) : (90)),
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Baile muy enérgico. El\\ntipo de este ataque es\\nel mismo que el del\\nusuario.\\n",
    },

    [MOVE_CORE_ENFORCER] = {
        .names = {
            .name = "Núcleo Cast.",
            .capsName = "NÚCLEO CAST.",
            .fullName = "Núcleo Castigo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Inflige daño y, si el\\nrival ya ha usado algún\\nmovimiento, pierde su\\nhabilidad.\\n",
    },

    [MOVE_TROP_KICK] = {
        .names = {
            .name = "Pat.Tropical",
            .capsName = "PAT.TROPICAL",
            .fullName = "Patada Tropical",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (85) : (70)),
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Patada con la fuerza del\\ntrópico que reduce el\\nAtaque del rival.\\n",
    },

    [MOVE_INSTRUCT] = {
        .names = {
            .name = "Mandato",
            .capsName = "MANDATO",
            .fullName = "Mandato",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Fuerza al objetivo a\\nrepetir inmediatamente\\nsu último movimiento.\\n",
    },

    [MOVE_BEAK_BLAST] = {
        .names = {
            .name = "Pico Cañón",
            .capsName = "PICO CAÑÓN",
            .fullName = "Pico Cañón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (120) : (100)),
            .type = TYPE_FLYING,
            .accuracy = 100,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (15)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = -3,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Calienta su pico y\\nataca. Quema a quien le\\ntoque mientras lo\\ncalienta.\\n",
    },

    [MOVE_CLANGING_SCALES] = {
        .names = {
            .name = "Fragor Esc.",
            .capsName = "FRAGOR ESC.",
            .fullName = "Fragor Escamas",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_DEF_DOWN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 110,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Frota sus escamas para\\ncrear un fuerte sonido\\nque ataca. Reduce su\\ndefensa.\\n",
    },

    [MOVE_DRAGON_HAMMER] = {
        .names = {
            .name = "Mart. Dragón",
            .capsName = "MART. DRAGÓN",
            .fullName = "Martillo Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (100) : (90)),
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa el cuerpo como un\\nmartillo para\\nabalanzarse sobre su\\nobjetivo.\\n",
    },

    [MOVE_BRUTAL_SWING] = {
        .names = {
            .name = "Giro Vil",
            .capsName = "GIRO VIL",
            .fullName = "Giro Vil",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Hace pivotar su cuerpo\\npara causar daño a los\\nPokémon adyacentes.\\n",
    },

    [MOVE_AURORA_VEIL] = {
        .names = {
            .name = "Velo Aurora",
            .capsName = "VELO AURORA",
            .fullName = "Velo Aurora",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_AURORA_VEIL,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Reduce el daño físico y\\nespecial durante cinco\\nturnos. Solo sirve\\ncuando nieva.\\n",
    },

    [MOVE_SINISTER_ARROW_RAID] = {
        .names = {
            .name = "Aluv.Flechas",
            .capsName = "ALUV.FLECHAS",
            .fullName = "Aluvión de Flechas Sombrías",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 180,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Decidueye usa el Poder Z\\npara proyectar multitud\\nde flechas que\\natraviesan al rival.\\n",
    },

    [MOVE_MALICIOUS_MOONSAULT] = {
        .names = {
            .name = "Hiperpl.Osc.",
            .capsName = "HIPERPL.OSC.",
            .fullName = "Hiperplancha Oscura",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 180,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Incineroar refuerza sus\\nmúsculos con el Poder Z\\ny golpea con todas sus\\nfuerzas.\\n",
    },

    [MOVE_OCEANIC_OPERETTA] = {
        .names = {
            .name = "Sinf. Diva",
            .capsName = "SINF. DIVA",
            .fullName = "Sinfonía de la Diva Marina",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 195,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Primarina invoca\\ningentes cantidades de\\nagua con el Poder Z y\\nataca con gran\\npotencia.\\n",
    },

    [MOVE_GUARDIAN_OF_ALOLA] = {
        .names = {
            .name = "Cólera Guar.",
            .capsName = "CÓLERA GUAR.",
            .fullName = "Cólera del Guardián",
        },
        .data = {
            .effect = MOVE_EFFECT_QUARTER_HP,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Los Dios Nativo canalizan\\nla energía de Alola y\\nreducen un gran\\nporcentaje de los PS\\ndel rival.\\n",
    },

    [MOVE_SOUL_STEALING_7_STAR_STRIKE] = {
        .names = {
            .name = "Const. Almas",
            .capsName = "CONST. ALMAS",
            .fullName = "Constelación Robaalmas",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 195,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Marshadow lanza con el\\nPoder Z una oleada de\\npuñetazos y patadas\\ncontra su rival.\\n",
    },

    [MOVE_STOKED_SPARKSURFER] = {
        .names = {
            .name = "Surfeo Galv.",
            .capsName = "SURFEO GALV.",
            .fullName = "Surfeo Galvánico",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 175,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El Raichu de Alola usa\\nel Poder Z para lanzar\\nun potente ataque que\\nparaliza al rival.\\n",
    },

    [MOVE_PULVERIZING_PANCAKE] = {
        .names = {
            .name = "Arrojo Int.",
            .capsName = "ARROJO INT.",
            .fullName = "Arrojo Intempestivo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 210,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Snorlax, con el Poder Z,\\nmueve su enorme cuerpo\\ncon agilidad y carga\\ncontra el rival.\\n",
    },

    [MOVE_EXTREME_EVOBOOST] = {
        .names = {
            .name = "Novena Pot.",
            .capsName = "NOVENA POT.",
            .fullName = "Novena Potencia",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Eevee toma prestada la\\nenergía de sus\\nevoluciones para\\npotenciar enormemente\\nsus características.\\n",
    },

    [MOVE_GENESIS_SUPERNOVA] = {
        .names = {
            .name = "Supern.Orig.",
            .capsName = "SUPERN.ORIG.",
            .fullName = "Supernova Original",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 185,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Mew usa el Poder Z para\\natacar con fuerza y\\ncrear un Campo Psíquico\\nsobre el terreno.\\n",
    },

    [MOVE_SHELL_TRAP] = {
        .names = {
            .name = "Coraza Trap.",
            .capsName = "CORAZA TRAP.",
            .fullName = "Coraza Trampa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (10) : (5)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = -3,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Su caparazón se vuelve\\nuna trampa. Si lo\\nalcanza un ataque\\nfísico, estalla.\\n",
    },

    [MOVE_FLEUR_CANNON] = {
        .names = {
            .name = "Cañón Floral",
            .capsName = "CAÑÓN FLORAL",
            .fullName = "Cañón Floral",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SP_ATK_DOWN_2,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_FAIRY,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Emite un potente rayo,\\npero reduce mucho su\\nAtaque Especial.\\n",
    },

    [MOVE_PSYCHIC_FANGS] = {
        .names = {
            .name = "Psicocolm.",
            .capsName = "PSICOCOLM.",
            .fullName = "Psicocolmillo",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_SCREENS,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con poderes\\npsíquicos que además\\ndestruyen barreras como\\nPantalla de Luz.\\n",
    },

    [MOVE_STOMPING_TANTRUM] = {
        .names = {
            .name = "Pataleta",
            .capsName = "PATALETA",
            .fullName = "Pataleta",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa la frustración como\\nrevulsivo. Duplica su\\npotencia si el último\\nmovimiento falló.\\n",
    },

    [MOVE_SHADOW_BONE] = {
        .names = {
            .name = "Hueso Som.",
            .capsName = "HUESO SOM.",
            .fullName = "Hueso Sombrío",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea con un hueso\\nposeído por un espíritu.\\nPuede reducir la\\nDefensa.\\n",
    },

    [MOVE_ACCELEROCK] = {
        .names = {
            .name = "Roca Veloz",
            .capsName = "ROCA VELOZ",
            .fullName = "Roca Veloz",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_ROCK,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se lanza contra el\\nobjetivo a gran\\nvelocidad. Tiene\\nprioridad alta.\\n",
    },

    [MOVE_LIQUIDATION] = {
        .names = {
            .name = "Hidroariete",
            .capsName = "HIDROARIETE",
            .fullName = "Hidroariete",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con la fuerza del\\nagua. Puede reducir la\\nDefensa del objetivo.\\n",
    },

    [MOVE_PRISMATIC_LASER] = {
        .names = {
            .name = "Láser Prisma",
            .capsName = "LÁSER PRISMA",
            .fullName = "Láser Prisma",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_SPECIAL,
            .power = 160,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa un prisma para\\nemitir un rayo de gran\\npotencia, pero debe\\ndescansar después.\\n",
    },

    [MOVE_SPECTRAL_THIEF] = {
        .names = {
            .name = "Robasombra",
            .capsName = "ROBASOMBRA",
            .fullName = "Robasombra",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se esconde en la sombra\\ndel rival y lo ataca\\ntras robarle sus\\nmejoras.\\n",
    },

    [MOVE_SUNSTEEL_STRIKE] = {
        .names = {
            .name = "Meteoimpacto",
            .capsName = "METEOIMPACTO",
            .fullName = "Meteoimpacto",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con la potencia de\\nun meteoro, ignorando\\nla habilidad del\\nobjetivo.\\n",
    },

    [MOVE_MOONGEIST_BEAM] = {
        .names = {
            .name = "Rayo Umbrío",
            .capsName = "RAYO UMBRÍO",
            .fullName = "Rayo Umbrío",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Rayo misterioso que\\nignora la habilidad del\\nobjetivo.\\n",
    },

    [MOVE_TEARFUL_LOOK] = {
        .names = {
            .name = "Ojos Llor.",
            .capsName = "OJOS LLOR.",
            .fullName = "Ojos Llorosos",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_SP_ATK_DOWN,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_CUTE,
        },
        .description = "Mira con ojos llorosos\\npara quitarle el ánimo y\\nreducir su Ataque y\\nAtaque Especial.\\n",
    },

    [MOVE_ZING_ZAP] = {
        .names = {
            .name = "Electropunz.",
            .capsName = "ELECTROPUNZ.",
            .fullName = "Electropunzada",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se lanza con una potente\\ndescarga que puede\\namedrentar al rival.\\n",
    },

    [MOVE_NATURES_MADNESS] = {
        .names = {
            .name = "Furia Nat.",
            .capsName = "FURIA NAT.",
            .fullName = "Furia Natural",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_HP,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea con la furia de la\\nnaturaleza y reduce sus\\nPS a la mitad.\\n",
    },

    [MOVE_MULTI_ATTACK] = {
        .names = {
            .name = "Multiataque",
            .capsName = "MULTIATAQUE",
            .fullName = "Multiataque",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_ATTACK,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se rodea de una potente\\nenergía. El tipo depende\\ndel disco que lleve el\\nusuario.\\n",
    },

    [MOVE_10_000_000_VOLT_THUNDERBOLT] = {
        .names = {
            .name = "Gigarrayo",
            .capsName = "GIGARRAYO",
            .fullName = "Gigarrayo Fulminante",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 195,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Los Pikachu con gorra\\nacumulan una carga\\ndescomunal con el Poder\\nZ. Suele ser crítico.\\n",
    },

    [MOVE_MIND_BLOWN] = {
        .names = {
            .name = "Cab.Sorpresa",
            .capsName = "CAB.SORPRESA",
            .fullName = "Cabeza Sorpresa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Hace explotar su cabeza\\npara atacar a los\\nadyacentes, aunque él\\ntambién se hiere.\\n",
    },

    [MOVE_PLASMA_FISTS] = {
        .names = {
            .name = "Puños Plasma",
            .capsName = "PUÑOS PLASMA",
            .fullName = "Puños Plasma",
        },
        .data = {
            .effect = MOVE_EFFECT_ION_DELUGE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Puños cargados de\\nelectricidad que\\nconvierten los\\nmovimientos de Normal\\nen Eléctrico.\\n",
    },

    [MOVE_PHOTON_GEYSER] = {
        .names = {
            .name = "Géiser Fot.",
            .capsName = "GÉISER FOT.",
            .fullName = "Géiser Fotónico",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Gran columna de luz que\\nusa el mayor valor\\nentre Ataque y Ataque\\nEspecial.\\n",
    },

    [MOVE_LIGHT_THAT_BURNS_THE_SKY] = {
        .names = {
            .name = "Apocalipsis",
            .capsName = "APOCALIPSIS",
            .fullName = "Fotodestrucción Apocalíptica",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 200,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Necrozma usa el mayor\\nvalor entre Ataque y\\nAtaque Especial e\\nignora la habilidad del\\nrival.\\n",
    },

    [MOVE_SEARING_SUNRAZE_SMASH] = {
        .names = {
            .name = "Embest.Solar",
            .capsName = "EMBEST.SOLAR",
            .fullName = "Embestida Solar",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 200,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Solgaleo ataca con toda\\nsu fuerza tras imbuirse\\ndel Poder Z. Ignora la\\nhabilidad del rival.\\n",
    },

    [MOVE_MENACING_MOONRAZE_MAELSTROM] = {
        .names = {
            .name = "Defl. Lunar",
            .capsName = "DEFL. LUNAR",
            .fullName = "Deflagración Lunar",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 200,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lunala ataca con toda su\\nfuerza tras imbuirse del\\nPoder Z. Ignora la\\nhabilidad del rival.\\n",
    },

    [MOVE_LETS_SNUGGLE_FOREVER] = {
        .names = {
            .name = "Somanta",
            .capsName = "SOMANTA",
            .fullName = "Somanta Amistosa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 190,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Mimikyu ataca con toda\\nsu fuerza tras imbuirse\\ndel Poder Z y asesta una\\nlluvia de golpes.\\n",
    },

    [MOVE_SPLINTERED_STORMSHARDS] = {
        .names = {
            .name = "Temp. Rocosa",
            .capsName = "TEMP. ROCOSA",
            .fullName = "Tempestad Rocosa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 190,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lycanroc ataca con toda\\nsu fuerza tras imbuirse\\ndel Poder Z y anula el\\ncampo activo.\\n",
    },

    [MOVE_CLANGOROUS_SOULBLAZE] = {
        .names = {
            .name = "Estruendo",
            .capsName = "ESTRUENDO",
            .fullName = "Estruendo Implacable",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ALL_STATS_HIT,
            .split = SPLIT_SPECIAL,
            .power = 185,
            .type = TYPE_DRAGON,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Kommo-o ataca con toda\\nsu fuerza tras imbuirse\\ndel Poder Z y potencia\\nsus características.\\n",
    },

    [MOVE_ZIPPY_ZAP] = {
        .names = {
            .name = "Pikaturbo",
            .capsName = "PIKATURBO",
            .fullName = "Pikaturbo",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_EVA_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 2,
            .flags = FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque eléctrico a la\\nvelocidad del rayo.\\nTiene prioridad alta y\\nsuele ser crítico.\\n",
    },

    [MOVE_SPLISHY_SPLASH] = {
        .names = {
            .name = "Salpikasurf",
            .capsName = "SALPIKASURF",
            .fullName = "Salpikasurf",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ola gigante\\nelectrificada que puede\\nparalizar al rival.\\n",
    },

    [MOVE_FLOATY_FALL] = {
        .names = {
            .name = "Pikapicado",
            .capsName = "PIKAPICADO",
            .fullName = "Pikapicado",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_FLYING,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se suspende en el aire y\\nse abalanza sobre el\\nrival. Puede hacerlo\\nretroceder.\\n",
    },

    [MOVE_PIKA_PAPOW] = {
        .names = {
            .name = "Pikatormenta",
            .capsName = "PIKATORMENTA",
            .fullName = "Pikatormenta",
        },
        .data = {
            .effect = MOVE_EFFECT_POWER_BASED_ON_FRIENDSHIP,
            .split = SPLIT_SPECIAL,
            .power = 0,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Descarga infalible que\\nes más potente cuanto\\nmayor es el cariño de\\nPikachu hacia ti.\\n",
    },

    [MOVE_BOUNCY_BUBBLE] = {
        .names = {
            .name = "Vapodrenaje",
            .capsName = "VAPODRENAJE",
            .fullName = "Vapodrenaje",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_FULL_DAMAGE_DEALT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza proyectiles de\\nagua y recupera la\\nmitad del daño causado.\\n",
    },

    [MOVE_BUZZY_BUZZ] = {
        .names = {
            .name = "Joltiopar.",
            .capsName = "JOLTIOPAR.",
            .fullName = "Joltioparálisis",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Potente descarga\\neléctrica que deja\\nparalizado al rival.\\n",
    },

    [MOVE_SIZZLY_SLIDE] = {
        .names = {
            .name = "Flarembest.",
            .capsName = "FLAREMBEST.",
            .fullName = "Flarembestida",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Envuelto en llamas,\\narrolla al rival y le\\nprovoca quemaduras.\\n",
    },

    [MOVE_GLITZY_GLOW] = {
        .names = {
            .name = "Espeaura",
            .capsName = "ESPEAURA",
            .fullName = "Espeaura",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_LIGHT_SCREEN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ondas psíquicas y un\\nextraño muro que\\ndebilita los ataques\\nespeciales rivales.\\n",
    },

    [MOVE_BADDY_BAD] = {
        .names = {
            .name = "Umbreozona",
            .capsName = "UMBREOZONA",
            .fullName = "Umbreozona",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_REFLECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_DARK,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque umbrío y un\\nextraño muro que mitiga\\nlos ataques físicos\\nrivales.\\n",
    },

    [MOVE_SAPPY_SEED] = {
        .names = {
            .name = "Leafitob.",
            .capsName = "LEAFITOB.",
            .fullName = "Leafitobombas",
        },
        .data = {
            .effect = MOVE_EFFECT_LEECH_SEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_GRASS,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Hace brotar un tallo\\ngigante que bombardea\\ncon semillas que drenan\\nPS cada turno.\\n",
    },

    [MOVE_FREEZY_FROST] = {
        .names = {
            .name = "Glaceoprisma",
            .capsName = "GLACEOPRISMA",
            .fullName = "Glaceoprisma",
        },
        .data = {
            .effect = MOVE_EFFECT_RESET_STAT_CHANGES_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Cristales de niebla\\ncongelada que revierten\\nlos cambios en las\\ncaracterísticas.\\n",
    },

    [MOVE_SPARKLY_SWIRL] = {
        .names = {
            .name = "Sylveotorn.",
            .capsName = "SYLVEOTORN.",
            .fullName = "Sylveotornado",
        },
        .data = {
            .effect = MOVE_EFFECT_CURE_PARTY_STATUS_HIT,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_FAIRY,
            .accuracy = 85,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Remolino de aroma\\nasfixiante que cura a\\nlos aliados de sus\\nproblemas de estado.\\n",
    },

    [MOVE_VEEVEE_VOLLEY] = {
        .names = {
            .name = "Eevimpacto",
            .capsName = "EEVIMPACTO",
            .fullName = "Eevimpacto",
        },
        .data = {
            .effect = MOVE_EFFECT_POWER_BASED_ON_FRIENDSHIP,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Placaje infalible que es\\nmás potente cuanto\\nmayor es el cariño de\\nEevee hacia ti.\\n",
    },

    [MOVE_DOUBLE_IRON_BASH] = {
        .names = {
            .name = "Ferropuño",
            .capsName = "FERROPUÑO",
            .fullName = "Ferropuño Doble",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE_AND_FLINCH,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Gira sobre sí mismo y\\ngolpea con los brazos\\ndos veces. Puede\\namedrentar.\\n",
    },

    [MOVE_MAX_GUARD] = {
        .names = {
            .name = "Maxibarrera",
            .capsName = "MAXIBARRERA",
            .fullName = "Maxibarrera",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Frena todos los ataques,\\npero puede fallar si se\\nusa repetidamente.\\n",
    },

    [MOVE_DYNAMAX_CANNON] = {
        .names = {
            .name = "Cañón Dinam.",
            .capsName = "CAÑÓN DINAM.",
            .fullName = "Cañón Dinamax",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Libera desde su núcleo\\nla energía concentrada\\nen su interior.\\n",
    },

    [MOVE_SNIPE_SHOT] = {
        .names = {
            .name = "Disp.Certero",
            .capsName = "DISP.CERTERO",
            .fullName = "Disparo Certero",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_SPECIAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (85) : (80)),
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Permite atacar e ignorar\\nlas habilidades de quien\\ncentra la atención.\\n",
    },

    [MOVE_JAW_LOCK] = {
        .names = {
            .name = "Presa Max.",
            .capsName = "PRESA MAX.",
            .fullName = "Presa Maxilar",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_ESCAPE_BOTH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Impide que ambos\\ncombatientes huyan o\\nsean cambiados hasta\\nque uno caiga.\\n",
    },

    [MOVE_STUFF_CHEEKS] = {
        .names = {
            .name = "Atiborra.",
            .capsName = "ATIBORRA.",
            .fullName = "Atiborramiento",
        },
        .data = {
            .effect = MOVE_EFFECT_STUFF_CHEEKS,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ingiere la baya que\\nlleva equipada para\\naumentar mucho su\\nDefensa.\\n",
    },

    [MOVE_NO_RETREAT] = {
        .names = {
            .name = "Bastión Fin.",
            .capsName = "BASTIÓN FIN.",
            .fullName = "Bastión Final",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Aumenta todas sus\\ncaracterísticas, pero ya\\nno puede huir ni ser\\ncambiado.\\n",
    },

    [MOVE_TAR_SHOT] = {
        .names = {
            .name = "Alquitranazo",
            .capsName = "ALQUITRANAZO",
            .fullName = "Alquitranazo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ROCK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_SMART,
        },
        .description = "Alquitrán pegajoso que\\nreduce la Velocidad y\\nhace al rival débil\\ncontra el fuego.\\n",
    },

    [MOVE_MAGIC_POWDER] = {
        .names = {
            .name = "Polvo Mágico",
            .capsName = "POLVO MÁGICO",
            .fullName = "Polvo Mágico",
        },
        .data = {
            .effect = MOVE_EFFECT_CHANGE_TO_PSYCHIC_TYPE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "Polvos mágicos que hacen\\nque el rival adquiera el\\ntipo Psíquico.\\n",
    },

    [MOVE_DRAGON_DARTS] = {
        .names = {
            .name = "Dracoflechas",
            .capsName = "DRACOFLECHAS",
            .fullName = "Dracoflechas",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca propulsando a ambos\\nDreepy. Con dos rivales,\\ncada uno golpea a uno.\\n",
    },

    [MOVE_TEATIME] = {
        .names = {
            .name = "Hora del Té",
            .capsName = "HORA DEL TÉ",
            .fullName = "Hora del Té",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT | RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Invita a tomar el té a\\ntodos y hace que ingieran\\nlas bayas que lleven.\\n",
    },

    [MOVE_OCTOLOCK] = {
        .names = {
            .name = "Octopresa",
            .capsName = "OCTOPRESA",
            .fullName = "Octopresa",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Retiene al rival y le\\nimpide huir o ser\\ncambiado, a la vez que\\nbaja sus Defensas.\\n",
    },

    [MOVE_BOLT_BEAK] = {
        .names = {
            .name = "Electropico",
            .capsName = "ELECTROPICO",
            .fullName = "Electropico",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_IF_FASTER,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (80) : (85)),
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ensarta con su pico\\neléctrico. Duplica su\\npotencia si ataca antes.\\n",
    },

    [MOVE_FISHIOUS_REND] = {
        .names = {
            .name = "Branquib.",
            .capsName = "BRANQUIB.",
            .fullName = "Branquibocado",
        },
        .data = {
            .effect = MOVE_EFFECT_DOUBLE_POWER_IF_FASTER,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (80) : (85)),
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Agarra con sus duras\\nbranquias. Duplica su\\npotencia si ataca antes.\\n",
    },

    [MOVE_COURT_CHANGE] = {
        .names = {
            .name = "Camb. Cancha",
            .capsName = "CAMB. CANCHA",
            .fullName = "Cambio de Cancha",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Extraño poder que\\nintercambia los efectos\\ndel terreno entre ambos\\nbandos.\\n",
    },

    [MOVE_MAX_FLARE] = {
        .names = {
            .name = "Maxignición",
            .capsName = "MAXIGNICIÓN",
            .fullName = "Maxignición",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIRE,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque de Fuego de un\\nPokémon Dinamax. El sol\\nse intensifica durante\\ncinco turnos.\\n",
    },

    [MOVE_MAX_FLUTTERBY] = {
        .names = {
            .name = "Maxinsecto",
            .capsName = "MAXINSECTO",
            .fullName = "Maxinsecto",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque de Bicho de un\\nPokémon Dinamax. Reduce\\nel Ataque Especial del\\nobjetivo.\\n",
    },

    [MOVE_MAX_LIGHTNING] = {
        .names = {
            .name = "Maxitormenta",
            .capsName = "MAXITORMENTA",
            .fullName = "Maxitormenta",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_ELECTRIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Eléctrico de un\\nPokémon Dinamax. Crea un\\ncampo eléctrico durante\\ncinco turnos.\\n",
    },

    [MOVE_MAX_STRIKE] = {
        .names = {
            .name = "Maxiataque",
            .capsName = "MAXIATAQUE",
            .fullName = "Maxiataque",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Normal de un\\nPokémon Dinamax. Reduce\\nla Velocidad del\\nobjetivo.\\n",
    },

    [MOVE_MAX_KNUCKLE] = {
        .names = {
            .name = "Maxipuño",
            .capsName = "MAXIPUÑO",
            .fullName = "Maxipuño",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque de Lucha de un\\nPokémon Dinamax. Aumenta\\nel Ataque de tu bando.\\n",
    },

    [MOVE_MAX_PHANTASM] = {
        .names = {
            .name = "Maxiespectro",
            .capsName = "MAXIESPECTRO",
            .fullName = "Maxiespectro",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_GHOST,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Fantasma de un\\nPokémon Dinamax. Reduce\\nla Defensa de los\\nrivales.\\n",
    },

    [MOVE_MAX_HAILSTORM] = {
        .names = {
            .name = "Maxihelada",
            .capsName = "MAXIHELADA",
            .fullName = "Maxihelada",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque de Hielo de un\\nPokémon Dinamax. Crea una\\ntormenta de granizo de\\ncinco turnos.\\n",
    },

    [MOVE_MAX_OOZE] = {
        .names = {
            .name = "Maxiácido",
            .capsName = "MAXIÁCIDO",
            .fullName = "Maxiácido",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SP_ATK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_POISON,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Veneno de un\\nPokémon Dinamax. Aumenta\\nel Ataque Especial de tu\\nbando.\\n",
    },

    [MOVE_MAX_GEYSER] = {
        .names = {
            .name = "Maxichorro",
            .capsName = "MAXICHORRO",
            .fullName = "Maxichorro",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque de Agua de un\\nPokémon Dinamax. Desata\\nun aguacero de cinco\\nturnos.\\n",
    },

    [MOVE_MAX_AIRSTREAM] = {
        .names = {
            .name = "Maxiciclón",
            .capsName = "MAXICICLÓN",
            .fullName = "Maxiciclón",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_FLYING,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Volador de un\\nPokémon Dinamax. Aumenta\\nla Velocidad de tu\\nbando.\\n",
    },

    [MOVE_MAX_STARFALL] = {
        .names = {
            .name = "Maxiestela",
            .capsName = "MAXIESTELA",
            .fullName = "Maxiestela",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Hada de un Pokémon\\nDinamax. Crea un campo de\\nniebla durante cinco\\nturnos.\\n",
    },

    [MOVE_MAX_WYRMWIND] = {
        .names = {
            .name = "Maxidraco",
            .capsName = "MAXIDRACO",
            .fullName = "Maxidraco",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_DRAGON,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Dragón de un\\nPokémon Dinamax. Reduce\\nel Ataque del objetivo.\\n",
    },

    [MOVE_MAX_MINDSTORM] = {
        .names = {
            .name = "Maxionda",
            .capsName = "MAXIONDA",
            .fullName = "Maxionda",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Psíquico de un\\nPokémon Dinamax. Crea un\\ncampo psíquico de cinco\\nturnos.\\n",
    },

    [MOVE_MAX_ROCKFALL] = {
        .names = {
            .name = "Maxilito",
            .capsName = "MAXILITO",
            .fullName = "Maxilito",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_ROCK,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Roca de un Pokémon\\nDinamax. Crea una\\ntormenta de arena de\\ncinco turnos.\\n",
    },

    [MOVE_MAX_QUAKE] = {
        .names = {
            .name = "Maxitemblor",
            .capsName = "MAXITEMBLOR",
            .fullName = "Maxitemblor",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_GROUND,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Tierra de un\\nPokémon Dinamax. Aumenta\\nla Defensa Especial de\\ntu bando.\\n",
    },

    [MOVE_MAX_DARKNESS] = {
        .names = {
            .name = "Maxisombra",
            .capsName = "MAXISOMBRA",
            .fullName = "Maxisombra",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Siniestro de un\\nPokémon Dinamax. Reduce\\nla Defensa Especial del\\nobjetivo.\\n",
    },

    [MOVE_MAX_OVERGROWTH] = {
        .names = {
            .name = "Maxiflora",
            .capsName = "MAXIFLORA",
            .fullName = "Maxiflora",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Planta de un\\nPokémon Dinamax. Crea un\\ncampo de hierba de cinco\\nturnos.\\n",
    },

    [MOVE_MAX_STEELSPIKE] = {
        .names = {
            .name = "Maximetal",
            .capsName = "MAXIMETAL",
            .fullName = "Maximetal",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_DEF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 10,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque Acero de un\\nPokémon Dinamax. Aumenta\\nla Defensa de tu bando.\\n",
    },

    [MOVE_CLANGOROUS_SOUL] = {
        .names = {
            .name = "Estr. Escama",
            .capsName = "ESTR. ESCAMA",
            .fullName = "Estruendo Escama",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_ALL_STATS_LOSE_THIRD_MAX_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DRAGON,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa parte de sus PS para\\naumentar todas sus\\ncaracterísticas.\\n",
    },

    [MOVE_BODY_PRESS] = {
        .names = {
            .name = "Plancha Corp",
            .capsName = "PLANCHA CORP",
            .fullName = "Plancha Corporal",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa el cuerpo para lanzar\\nsu ataque. Cuanto mayor\\nsea su Defensa, más daño\\nprovoca.\\n",
    },

    [MOVE_DECORATE] = {
        .names = {
            .name = "Decoración",
            .capsName = "DECORACIÓN",
            .fullName = "Decoración",
        },
        .data = {
            .effect = MOVE_EFFECT_DECORATE,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FAIRY,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Aumenta mucho el Ataque y\\nel Ataque Especial del\\nobjetivo al decorarlo.\\n",
    },

    [MOVE_DRUM_BEATING] = {
        .names = {
            .name = "Batería",
            .capsName = "BATERÍA",
            .fullName = "Batería Asalto",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Controla un tocón con\\npercusión y al atacar\\nreduce la Velocidad del\\nobjetivo.\\n",
    },

    [MOVE_SNAP_TRAP] = {
        .names = {
            .name = "Cepo",
            .capsName = "CEPO",
            .fullName = "Cepo",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 35,
            .type = ((CHAMPIONS_TYPE_CHANGES) ? (TYPE_STEEL) : (TYPE_GRASS)),
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Cepo que atrapa al rival\\nde cuatro a cinco turnos\\ny le causa daño mientras\\nestá preso.\\n",
    },

    [MOVE_PYRO_BALL] = {
        .names = {
            .name = "Balón Ígneo",
            .capsName = "BALÓN ÍGNEO",
            .fullName = "Balón Ígneo",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FIRE,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Prende una pequeña piedra\\ny crea una bola de fuego.\\nPuede causar quemaduras.\\n",
    },

    [MOVE_BEHEMOTH_BLADE] = {
        .names = {
            .name = "Tajo Supremo",
            .capsName = "TAJO SUPREMO",
            .fullName = "Tajo Supremo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se convierte en una\\nespada gigante para\\nrebanar al objetivo.\\n",
    },

    [MOVE_BEHEMOTH_BASH] = {
        .names = {
            .name = "Embate Sup.",
            .capsName = "EMBATE SUP.",
            .fullName = "Embate Supremo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se convierte en un escudo\\ngigante para golpear al\\nobjetivo.\\n",
    },

    [MOVE_AURA_WHEEL] = {
        .names = {
            .name = "Rueda Aural",
            .capsName = "RUEDA AURAL",
            .fullName = "Rueda Aural",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 110,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Energía de sus mejillas\\nque ataca y sube su\\nVelocidad. Cambia de tipo\\nsegún su forma.\\n",
    },

    [MOVE_BREAKING_SWIPE] = {
        .names = {
            .name = "Vasto Imp.",
            .capsName = "VASTO IMP.",
            .fullName = "Vasto Impacto",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Sacude su enorme cola\\npara golpear y reduce el\\nAtaque del objetivo.\\n",
    },

    [MOVE_BRANCH_POKE] = {
        .names = {
            .name = "Punzada Rama",
            .capsName = "PUNZADA RAMA",
            .fullName = "Punzada Rama",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca pinchando con una\\nrama afilada.\\n",
    },

    [MOVE_OVERDRIVE] = {
        .names = {
            .name = "Amplificador",
            .capsName = "AMPLIFICADOR",
            .fullName = "Amplificador",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Rasguea su instrumento\\npara generar enormes\\nvibraciones que atacan al\\nobjetivo.\\n",
    },

    [MOVE_APPLE_ACID] = {
        .names = {
            .name = "Ácido Málico",
            .capsName = "ÁCIDO MÁLICO",
            .fullName = "Ácido Málico",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_HIT,
            .split = SPLIT_SPECIAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (90) : (80)),
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Fluido corrosivo de una\\nmanzana ácida que\\ntambién reduce la\\nDefensa Especial.\\n",
    },

    [MOVE_GRAV_APPLE] = {
        .names = {
            .name = "Fuerza G",
            .capsName = "FUERZA G",
            .fullName = "Fuerza G",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (90) : (80)),
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Hace caer una manzana\\ndesde gran altura. Reduce\\nla Defensa del objetivo.\\n",
    },

    [MOVE_SPIRIT_BREAK] = {
        .names = {
            .name = "Choque Aním.",
            .capsName = "CHOQUE ANÍM.",
            .fullName = "Choque Anímico",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con tal ímpetu que\\nmina la moral del rival\\ny reduce su Ataque\\nEspecial.\\n",
    },

    [MOVE_STRANGE_STEAM] = {
        .names = {
            .name = "Cautivapor",
            .capsName = "CAUTIVAPOR",
            .fullName = "Cautivapor",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_FAIRY,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Humo con el que ataca al\\nobjetivo, que puede\\nacabar confundido.\\n",
    },

    [MOVE_LIFE_DEW] = {
        .names = {
            .name = "Gota Vital",
            .capsName = "GOTA VITAL",
            .fullName = "Gota Vital",
        },
        .data = {
            .effect = MOVE_EFFECT_LIFE_DEW,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_WATER,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Vierte un agua balsámica\\nque restaura sus PS y\\nlos de sus aliados.\\n",
    },

    [MOVE_OBSTRUCT] = {
        .names = {
            .name = "Obstrucción",
            .capsName = "OBSTRUCCIÓN",
            .fullName = "Obstrucción",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (10)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Frena los ataques y\\nreduce mucho la Defensa\\nde quien le toque con un\\nmovimiento físico.\\n",
    },

    [MOVE_FALSE_SURRENDER] = {
        .names = {
            .name = "Irreverencia",
            .capsName = "IRREVERENCIA",
            .fullName = "Irreverencia",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Finge una reverencia y\\nensarta con su cabello.\\nNo falla nunca.\\n",
    },

    [MOVE_METEOR_ASSAULT] = {
        .names = {
            .name = "Asalto Est.",
            .capsName = "ASALTO EST.",
            .fullName = "Asalto Estelar",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_PHYSICAL,
            .power = 150,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Agita violentamente su\\ngrueso puerro, pero el\\nmareo le obliga a\\ndescansar después.\\n",
    },

    [MOVE_ETERNABEAM] = {
        .names = {
            .name = "Rayo Inf.",
            .capsName = "RAYO INF.",
            .fullName = "Rayo Infinito",
        },
        .data = {
            .effect = MOVE_EFFECT_RECHARGE_AFTER,
            .split = SPLIT_SPECIAL,
            .power = 160,
            .type = TYPE_DRAGON,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El mayor ataque de\\nEternatus. No puede\\nmoverse en el turno\\nsiguiente.\\n",
    },

    [MOVE_STEEL_BEAM] = {
        .names = {
            .name = "Metaláser",
            .capsName = "METALÁSER",
            .fullName = "Metaláser",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 140,
            .type = TYPE_STEEL,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Usa el acero de su cuerpo\\npara disparar un potente\\nrayo. El usuario se\\nhiere.\\n",
    },

    [MOVE_EXPANDING_FORCE] = {
        .names = {
            .name = "Vasta Fuerza",
            .capsName = "VASTA FUERZA",
            .fullName = "Vasta Fuerza",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con sus poderes\\npsíquicos. Con un campo\\npsíquico sube su potencia\\ny daña a los adyacentes.\\n",
    },

    [MOVE_STEEL_ROLLER] = {
        .names = {
            .name = "Allanador",
            .capsName = "ALLANADOR",
            .fullName = "Allanador Férreo",
        },
        .data = {
            .effect = MOVE_EFFECT_END_TERRAIN,
            .split = SPLIT_PHYSICAL,
            .power = 130,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca y destruye el campo\\nactivo del terreno. Si no\\nhay ninguno, el\\nmovimiento falla.\\n",
    },

    [MOVE_SCALE_SHOT] = {
        .names = {
            .name = "Ráf. Escamas",
            .capsName = "RÁF. ESCAMAS",
            .fullName = "Ráfaga Escamas",
        },
        .data = {
            .effect = MOVE_EFFECT_MULTI_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_DRAGON,
            .accuracy = 90,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza escamas de dos a\\ncinco veces. Sube su\\nVelocidad, pero reduce su\\nDefensa.\\n",
    },

    [MOVE_METEOR_BEAM] = {
        .names = {
            .name = "Rayo Meteór.",
            .capsName = "RAYO METEÓR.",
            .fullName = "Rayo Meteórico",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_SP_ATK_UP,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_ROCK,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Acumula energía cósmica y\\nsube su Ataque Especial\\nel primer turno y ataca\\nel segundo.\\n",
    },

    [MOVE_SHELL_SIDE_ARM] = {
        .names = {
            .name = "Moluscañón",
            .capsName = "MOLUSCAÑÓN",
            .fullName = "Moluscañón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza un ataque físico o\\nespecial según cuál dañe\\nmás. Puede envenenar.\\n",
    },

    [MOVE_MISTY_EXPLOSION] = {
        .names = {
            .name = "Bruma Expl.",
            .capsName = "BRUMA EXPL.",
            .fullName = "Bruma Explosiva",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_DEFENSE,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca a los adyacentes y\\nse debilita. Con campo de\\nniebla sube su potencia.\\n",
    },

    [MOVE_GRASSY_GLIDE] = {
        .names = {
            .name = "Fitoimpulso",
            .capsName = "FITOIMPULSO",
            .fullName = "Fitoimpulso",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 55,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se desliza sobre el\\nterreno. Tiene prioridad\\nalta si hay un campo de\\nhierba.\\n",
    },

    [MOVE_RISING_VOLTAGE] = {
        .names = {
            .name = "Alto Voltaje",
            .capsName = "ALTO VOLTAJE",
            .fullName = "Alto Voltaje",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Descarga que surge del\\nterreno. Duplica su\\npotencia si el rival está\\nen un campo eléctrico.\\n",
    },

    [MOVE_TERRAIN_PULSE] = {
        .names = {
            .name = "Pulso Campo",
            .capsName = "PULSO CAMPO",
            .fullName = "Pulso de Campo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Aprovecha la energía del\\ncampo activo, que\\ndetermina el tipo y la\\npotencia del movimiento.\\n",
    },

    [MOVE_SKITTER_SMACK] = {
        .names = {
            .name = "Golpe Rast.",
            .capsName = "GOLPE RAST.",
            .fullName = "Golpe Rastrero",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_ATK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_BUG,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca por la espalda de\\nforma subrepticia y\\nreduce el Ataque\\nEspecial.\\n",
    },

    [MOVE_BURNING_JEALOUSY] = {
        .names = {
            .name = "Envidia Ard.",
            .capsName = "ENVIDIA ARD.",
            .fullName = "Envidia Ardiente",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Energía generada por la\\nenvidia que quema a\\nquienes han subido sus\\ncaracterísticas.\\n",
    },

    [MOVE_LASH_OUT] = {
        .names = {
            .name = "Desahogo",
            .capsName = "DESAHOGO",
            .fullName = "Desahogo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca presa de la rabia.\\nDuplica su potencia si el\\nusuario ha sido reducido\\nesa misma ronda.\\n",
    },

    [MOVE_POLTERGEIST] = {
        .names = {
            .name = "Poltergeist",
            .capsName = "POLTERGEIST",
            .fullName = "Poltergeist",
        },
        .data = {
            .effect = MOVE_EFFECT_POLTERGEIST,
            .split = SPLIT_PHYSICAL,
            .power = 110,
            .type = TYPE_GHOST,
            .accuracy = 90,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca usando el objeto\\ndel rival. Si no lleva\\nninguno, el movimiento\\nfalla.\\n",
    },

    [MOVE_CORROSIVE_GAS] = {
        .names = {
            .name = "Gas Corros.",
            .capsName = "GAS CORROS.",
            .fullName = "Gas Corrosivo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 40,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALL_ADJACENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Gas cáustico que envuelve\\na los adyacentes y\\nderrite sus objetos\\nequipados.\\n",
    },

    [MOVE_COACHING] = {
        .names = {
            .name = "Motivación",
            .capsName = "MOTIVACIÓN",
            .fullName = "Motivación",
        },
        .data = {
            .effect = MOVE_EFFECT_COACHING,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALLY,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Da indicaciones a sus\\naliados, que ven subir su\\nAtaque y su Defensa.\\n",
    },

    [MOVE_FLIP_TURN] = {
        .names = {
            .name = "Viraje",
            .capsName = "VIRAJE",
            .fullName = "Viraje",
        },
        .data = {
            .effect = MOVE_EFFECT_SWITCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Tras atacar, da paso a\\ntoda prisa a otro Pokémon\\ndel equipo.\\n",
    },

    [MOVE_TRIPLE_AXEL] = {
        .names = {
            .name = "Triple Axel",
            .capsName = "TRIPLE AXEL",
            .fullName = "Triple Axel",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_THREE_TIMES_INCREMENT_BASE_POWER_20,
            .split = SPLIT_PHYSICAL,
            .power = 20,
            .type = TYPE_ICE,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Propina hasta tres\\npatadas seguidas, cada\\nvez más potentes.\\n",
    },

    [MOVE_DUAL_WINGBEAT] = {
        .names = {
            .name = "Ala Bis",
            .capsName = "ALA BIS",
            .fullName = "Ala Bis",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_FLYING,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca golpeando dos veces\\nseguidas con las alas.\\n",
    },

    [MOVE_SCORCHING_SANDS] = {
        .names = {
            .name = "Arenas Ard.",
            .capsName = "ARENAS ARD.",
            .fullName = "Arenas Ardientes",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Arroja arena a\\ntemperaturas muy\\nelevadas. Puede causar\\nquemaduras.\\n",
    },

    [MOVE_JUNGLE_HEALING] = {
        .names = {
            .name = "Cura Selv.",
            .capsName = "CURA SELV.",
            .fullName = "Cura Selvática",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER_SIDE,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se armoniza con la selva\\ny cura los problemas de\\nestado y los PS propios y\\naliados.\\n",
    },

    [MOVE_WICKED_BLOW] = {
        .names = {
            .name = "Golpe Oscuro",
            .capsName = "GOLPE OSCURO",
            .fullName = "Golpe Oscuro",
        },
        .data = {
            .effect = MOVE_EFFECT_ALWAYS_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpe devastador que\\nrequiere un dominio\\nabsoluto. Siempre asesta\\nun golpe crítico.\\n",
    },

    [MOVE_SURGING_STRIKES] = {
        .names = {
            .name = "Azote Torr.",
            .capsName = "AZOTE TORR.",
            .fullName = "Azote Torrencial",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_THREE_TIMES_ALWAYS_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 25,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea tres veces con\\nmovimientos fluidos.\\nSiempre asesta un golpe\\ncrítico.\\n",
    },

    [MOVE_THUNDER_CAGE] = {
        .names = {
            .name = "Electrojaula",
            .capsName = "ELECTROJAULA",
            .fullName = "Electrojaula",
        },
        .data = {
            .effect = MOVE_EFFECT_BIND_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_ELECTRIC,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El rival queda atrapado\\nen una jaula\\nelectrificada que dura de\\ncuatro a cinco turnos.\\n",
    },

    [MOVE_DRAGON_ENERGY] = {
        .names = {
            .name = "Dracoenergía",
            .capsName = "DRACOENERGÍA",
            .fullName = "Dracoenergía",
        },
        .data = {
            .effect = MOVE_EFFECT_DECREASE_POWER_WITH_LESS_USER_HP,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Convierte su fuerza vital\\nen energía. Cuantos menos\\nPS tenga, menos\\npotencia.\\n",
    },

    [MOVE_FREEZING_GLARE] = {
        .names = {
            .name = "Mirada Hel.",
            .capsName = "MIRADA HEL.",
            .fullName = "Mirada Heladora",
        },
        .data = {
            .effect = MOVE_EFFECT_FREEZE_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Emite poderes psíquicos\\ncon los ojos y puede\\nllegar a congelar al\\nobjetivo.\\n",
    },

    [MOVE_FIERY_WRATH] = {
        .names = {
            .name = "Furia Cand.",
            .capsName = "FURIA CAND.",
            .fullName = "Furia Candente",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_SPECIAL,
            .power = 90,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Convierte su ira en un\\nauras flamígera para\\natacar. Puede\\namedrentar.\\n",
    },

    [MOVE_THUNDEROUS_KICK] = {
        .names = {
            .name = "Pat. Relámp.",
            .capsName = "PAT. RELÁMP.",
            .fullName = "Patada Relámpago",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_DEFENSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Desconcierta con\\nmovimientos centelleantes\\ny propina una patada que\\nbaja la Defensa.\\n",
    },

    [MOVE_GLACIAL_LANCE] = {
        .names = {
            .name = "Lanza Glac.",
            .capsName = "LANZA GLAC.",
            .fullName = "Lanza Glacial",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca lanzando un\\ncarámbano de hielo\\nenvuelto en una\\nventisca.\\n",
    },

    [MOVE_ASTRAL_BARRAGE] = {
        .names = {
            .name = "Orbes Esp.",
            .capsName = "ORBES ESP.",
            .fullName = "Orbes Espectro",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (110) : (120)),
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca lanzando una\\ningente cantidad de\\npequeños fantasmas.\\n",
    },

    [MOVE_EERIE_SPELL] = {
        .names = {
            .name = "Conjuro Fun.",
            .capsName = "CONJURO FUN.",
            .fullName = "Conjuro Funesto",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Poder psíquico inmenso\\nque elimina 3 PP del\\núltimo movimiento usado\\npor el rival.\\n",
    },

    [MOVE_DIRE_CLAW] = {
        .names = {
            .name = "Garra Nociva",
            .capsName = "GARRA NOCIVA",
            .fullName = "Garra Nociva",
        },
        .data = {
            .effect = MOVE_EFFECT_SLEEP_POISON_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 15,
            .effectChance = ((CHAMPIONS_EFFECT_CHANCE_CHANGES) ? (30) : (50)),
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Garras letales que pueden\\nenvenenar, paralizar o\\ndormir al objetivo.\\n",
    },

    [MOVE_PSYSHIELD_BASH] = {
        .names = {
            .name = "Asalto Barr.",
            .capsName = "ASALTO BARR.",
            .fullName = "Asalto Barrera",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_DEF_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (90) : (70)),
            .type = TYPE_PSYCHIC,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca envuelto en una\\nenergía psíquica que\\nademás aumenta su\\nDefensa.\\n",
    },

    [MOVE_POWER_SHIFT] = {
        .names = {
            .name = "Cambiapoder",
            .capsName = "CAMBIAPODER",
            .fullName = "Cambiapoder",
        },
        .data = {
            .effect = MOVE_EFFECT_SWAP_ATK_DEF,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Intercambia su Ataque por\\nsu Defensa.\\n",
    },

    [MOVE_STONE_AXE] = {
        .names = {
            .name = "Hachazo Pet.",
            .capsName = "HACHAZO PET.",
            .fullName = "Hachazo Pétreo",
        },
        .data = {
            .effect = MOVE_EFFECT_STEALTH_ROCK_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_ROCK,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con un hacha de\\npiedra y desprende\\nfragmentos que rodean al\\nrival.\\n",
    },

    [MOVE_SPRINGTIDE_STORM] = {
        .names = {
            .name = "Ciclón Prim.",
            .capsName = "CICLÓN PRIM.",
            .fullName = "Ciclón Primavera",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FAIRY,
            .accuracy = 80,
            .pp = 5,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Tormenta de amor y odio\\nque envuelve al rival.\\nPuede reducir su Ataque.\\n",
    },

    [MOVE_MYSTICAL_POWER] = {
        .names = {
            .name = "Poder Míst.",
            .capsName = "PODER MÍST.",
            .fullName = "Poder Místico",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_PSYCHIC,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Desata un misterioso\\npoder que también aumenta\\nsu Ataque Especial.\\n",
    },

    [MOVE_RAGING_FURY] = {
        .names = {
            .name = "Erupción Ira",
            .capsName = "ERUPCIÓN IRA",
            .fullName = "Erupción de Ira",
        },
        .data = {
            .effect = MOVE_EFFECT_CONTINUE_AND_CONFUSE_SELF,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_RANDOM_OPPONENT,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con violentas\\nllamas de dos a tres\\nturnos y luego queda\\nconfuso.\\n",
    },

    [MOVE_WAVE_CRASH] = {
        .names = {
            .name = "Envite Ac.",
            .capsName = "ENVITE AC.",
            .fullName = "Envite Acuático",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_THIRD,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se envuelve en agua y\\nembiste, pero también se\\nhiere seriamente.\\n",
    },

    [MOVE_CHLOROBLAST] = {
        .names = {
            .name = "Clorofiláser",
            .capsName = "CLOROFILÁSER",
            .fullName = "Clorofiláser",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOIL_HALF_MAX_HP,
            .split = SPLIT_SPECIAL,
            .power = 150,
            .type = TYPE_GRASS,
            .accuracy = 95,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Concentra clorofila y la\\ndispara en forma de rayo,\\npero también se hiere.\\n",
    },

    [MOVE_MOUNTAIN_GALE] = {
        .names = {
            .name = "Viento Car.",
            .capsName = "VIENTO CAR.",
            .fullName = "Viento Carámbano",
        },
        .data = {
            .effect = MOVE_EFFECT_FLINCH_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (120) : (100)),
            .type = TYPE_ICE,
            .accuracy = 85,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con carámbanos\\ngrandes como icebergs que\\npueden amedrentar.\\n",
    },

    [MOVE_VICTORY_DANCE] = {
        .names = {
            .name = "Danza Triun.",
            .capsName = "DANZA TRIUN.",
            .fullName = "Danza Triunfal",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_DEF_SPEED_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIGHTING,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Danza frenética que\\ninvoca la victoria y sube\\nel Ataque, la Defensa y\\nla Velocidad.\\n",
    },

    [MOVE_HEADLONG_RUSH] = {
        .names = {
            .name = "Arremetida",
            .capsName = "ARREMETIDA",
            .fullName = "Arremetida",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_DEF_SP_DEF_DOWN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_GROUND,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Arremete con todas sus\\nfuerzas, pero se reducen\\nsu Defensa y su Defensa\\nEspecial.\\n",
    },

    [MOVE_BARB_BARRAGE] = {
        .names = {
            .name = "Púas Tóxicas",
            .capsName = "PÚAS TÓXICAS",
            .fullName = "Mil Púas Tóxicas",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT_DOUBLE_POWER_ON_POISONED,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Dispara un sinfín de púas\\ntóxicas que pueden\\nenvenenar. Duplica su\\npotencia si ya lo está.\\n",
    },

    [MOVE_ESPER_WING] = {
        .names = {
            .name = "Ala Aural",
            .capsName = "ALA AURAL",
            .fullName = "Ala Aural",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL_RAISE_SPEED_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Corta con unas alas\\nimbuidas de aura. Suele\\nser crítico y sube su\\nVelocidad.\\n",
    },

    [MOVE_BITTER_MALICE] = {
        .names = {
            .name = "Rencor Repr.",
            .capsName = "RENCOR REPR.",
            .fullName = "Rencor Reprimido",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 75,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca sometiendo al rival\\na su frío rencor y reduce\\nsu Ataque.\\n",
    },

    [MOVE_SHELTER] = {
        .names = {
            .name = "Retracción",
            .capsName = "RETRACCIÓN",
            .fullName = "Retracción",
        },
        .data = {
            .effect = MOVE_EFFECT_DEF_UP_2,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Su piel se vuelve dura\\ncomo un escudo de acero y\\nsube mucho su Defensa.\\n",
    },

    [MOVE_TRIPLE_ARROWS] = {
        .names = {
            .name = "Triple Fl.",
            .capsName = "TRIPLE FL.",
            .fullName = "Triple Flecha",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Un talonazo y tres\\nflechas. Suele ser\\ncrítico y puede bajar la\\nDefensa o amedrentar.\\n",
    },

    [MOVE_INFERNAL_PARADE] = {
        .names = {
            .name = "Marcha Esp.",
            .capsName = "MARCHA ESP.",
            .fullName = "Marcha Espectral",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT_DOUBLE_POWER_ON_STATUS,
            .split = SPLIT_SPECIAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (65) : (60)),
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Bolas de fuego que pueden\\nquemar. Duplica su\\npotencia si el rival ya\\nsufre un estado.\\n",
    },

    [MOVE_CEASELESS_EDGE] = {
        .names = {
            .name = "Tajo Metr.",
            .capsName = "TAJO METR.",
            .fullName = "Tajo Metralla",
        },
        .data = {
            .effect = MOVE_EFFECT_SET_SPIKES_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_DARK,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con una espada de\\nconchas y esparce\\nfragmentos a los pies del\\nobjetivo.\\n",
    },

    [MOVE_BLEAKWIND_STORM] = {
        .names = {
            .name = "Vendaval",
            .capsName = "VENDAVAL",
            .fullName = "Vendaval Gélido",
        },
        .data = {
            .effect = MOVE_EFFECT_BLEAKWIND_STORM,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_FLYING,
            .accuracy = 80,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Viento muy frío que\\nestremece cuerpo y mente\\ny puede reducir la\\nVelocidad.\\n",
    },

    [MOVE_WILDBOLT_STORM] = {
        .names = {
            .name = "Electormenta",
            .capsName = "ELECTORMENTA",
            .fullName = "Electormenta",
        },
        .data = {
            .effect = MOVE_EFFECT_WILDBOLT_STORM,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_ELECTRIC,
            .accuracy = 80,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Tormenta eléctrica de\\nfuertes vientos y\\nrelámpagos que puede\\nparalizar.\\n",
    },

    [MOVE_SANDSEAR_STORM] = {
        .names = {
            .name = "Simún Arena",
            .capsName = "SIMÚN ARENA",
            .fullName = "Simún de Arena",
        },
        .data = {
            .effect = MOVE_EFFECT_SANDSEAR_STORM,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_GROUND,
            .accuracy = 80,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Arenas tórridas y un\\nfuerte vendaval que\\npueden causar\\nquemaduras.\\n",
    },

    [MOVE_LUNAR_BLESSING] = {
        .names = {
            .name = "Pleg. Lunar",
            .capsName = "PLEG. LUNAR",
            .fullName = "Plegaria Lunar",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALLY,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Oración a la luna\\ncreciente que restaura PS\\ny cura los estados del\\nbando.\\n",
    },

    [MOVE_TAKE_HEART] = {
        .names = {
            .name = "Bálsamo",
            .capsName = "BÁLSAMO",
            .fullName = "Bálsamo Osado",
        },
        .data = {
            .effect = MOVE_EFFECT_TAKE_HEART,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_PSYCHIC,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALLY,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se envalentona y se cura\\nde los estados. Además\\nsube su Ataque Especial y\\nsu Defensa Especial.\\n",
    },

    [MOVE_TERA_BLAST] = {
        .names = {
            .name = "Teraexpl.",
            .capsName = "TERAEXPL.",
            .fullName = "Teraexplosión",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Tras teracristalizarse,\\nataca con la energía de\\nsu teratipo. Usa el mayor\\nvalor entre Ataque y\\nAtaque Especial.\\n",
    },

    [MOVE_SILK_TRAP] = {
        .names = {
            .name = "Telatrampa",
            .capsName = "TELATRAMPA",
            .fullName = "Telatrampa",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_BUG,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Trampa sedosa que le\\nprotege y reduce la\\nVelocidad de quien le\\ntoque.\\n",
    },

    [MOVE_AXE_KICK] = {
        .names = {
            .name = "Patada Hacha",
            .capsName = "PATADA HACHA",
            .fullName = "Patada Hacha",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT_CRASH_ON_MISS,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_FIGHTING,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Patada al aire y\\ntalonazo. Si falla, se\\nhiere. Puede confundir al\\nobjetivo.\\n",
    },

    [MOVE_LAST_RESPECTS] = {
        .names = {
            .name = "Homenaje",
            .capsName = "HOMENAJE",
            .fullName = "Homenaje Póstumo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Venga a sus compañeros\\ncaídos. Cuantos más se\\nhayan debilitado, mayor\\npotencia.\\n",
    },

    [MOVE_LUMINA_CRASH] = {
        .names = {
            .name = "Fotocolisión",
            .capsName = "FOTOCOLISIÓN",
            .fullName = "Fotocolisión",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SP_DEF_2_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Extraña luz que afecta a\\nla mente y reduce mucho\\nla Defensa Especial.\\n",
    },

    [MOVE_ORDER_UP] = {
        .names = {
            .name = "Oído Cocina",
            .capsName = "OÍDO COCINA",
            .fullName = "Oído Cocina",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca con porte gallardo.\\nCon un Tatsugiri en la\\nboca sube una de sus\\ncaracterísticas.\\n",
    },

    [MOVE_JET_PUNCH] = {
        .names = {
            .name = "Puño Jet",
            .capsName = "PUÑO JET",
            .fullName = "Puño Jet",
        },
        .data = {
            .effect = MOVE_EFFECT_PRIORITY_1,
            .split = SPLIT_PHYSICAL,
            .power = 60,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Envuelve el puño en un\\ntorrente y golpea a tal\\nvelocidad que es casi\\nimperceptible.\\n",
    },

    [MOVE_SPICY_EXTRACT] = {
        .names = {
            .name = "Extracto",
            .capsName = "EXTRACTO",
            .fullName = "Extracto Picante",
        },
        .data = {
            .effect = MOVE_EFFECT_SPICY_EXTRACT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Extracto picante que sube\\nmucho el Ataque del\\nrival, pero también\\nreduce mucho su Defensa.\\n",
    },

    [MOVE_SPIN_OUT] = {
        .names = {
            .name = "Quemarrueda",
            .capsName = "QUEMARRUEDA",
            .fullName = "Quemarrueda",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_SPEED_DOWN_2_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (10) : (5)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Presiona sus extremidades\\ny gira violentamente.\\nReduce mucho la Velocidad\\ndel usuario.\\n",
    },

    [MOVE_POPULATION_BOMB] = {
        .names = {
            .name = "Prolifer.",
            .capsName = "PROLIFER.",
            .fullName = "Proliferación",
        },
        .data = {
            .effect = MOVE_EFFECT_UP_TO_10_HITS,
            .split = SPLIT_PHYSICAL,
            .power = 20,
            .type = TYPE_NORMAL,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Sus congéneres se agrupan\\ny golpean de una a diez\\nveces seguidas.\\n",
    },

    [MOVE_ICE_SPINNER] = {
        .names = {
            .name = "Pirueta Hel.",
            .capsName = "PIRUETA HEL.",
            .fullName = "Pirueta Helada",
        },
        .data = {
            .effect = MOVE_EFFECT_END_TERRAIN,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_ICE,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se recubre de hielo y se\\nabalanza girando.\\nDestruye el campo activo\\ndel terreno.\\n",
    },

    [MOVE_GLAIVE_RUSH] = {
        .names = {
            .name = "Asalto Esp.",
            .capsName = "ASALTO ESP.",
            .fullName = "Asalto Espadón",
        },
        .data = {
            .effect = MOVE_EFFECT_GLAIVE_RUSH,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Embiste de forma\\ntemeraria. Los ataques\\nque reciba hasta su\\nsiguiente turno no\\nfallarán.\\n",
    },

    [MOVE_REVIVAL_BLESSING] = {
        .names = {
            .name = "Pleg. Vital",
            .capsName = "PLEG. VITAL",
            .fullName = "Plegaria Vital",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 1,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Oración que revive a un\\nPokémon debilitado del\\nequipo y restaura la\\nmitad de sus PS.\\n",
    },

    [MOVE_SALT_CURE] = {
        .names = {
            .name = "Salazón",
            .capsName = "SALAZÓN",
            .fullName = "Salazón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 40,
            .type = TYPE_ROCK,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Deja en salazón al rival,\\nque pierde PS cada turno.\\nAfecta más a Acero y\\nAgua.\\n",
    },

    [MOVE_TRIPLE_DIVE] = {
        .names = {
            .name = "Triple Inm.",
            .capsName = "TRIPLE INM.",
            .fullName = "Triple Inmersión",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_THREE_TIMES,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (35) : (30)),
            .type = TYPE_WATER,
            .accuracy = 95,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Inmersión triple en\\nperfecta sincronía que\\ngolpea con salpicaduras\\ntres veces seguidas.\\n",
    },

    [MOVE_MORTAL_SPIN] = {
        .names = {
            .name = "Giro Mort.",
            .capsName = "GIRO MORT.",
            .fullName = "Giro Mortífero",
        },
        .data = {
            .effect = MOVE_EFFECT_MORTAL_SPIN,
            .split = SPLIT_PHYSICAL,
            .power = 30,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataque giratorio que\\nenvenena y anula los\\nefectos de Atadura,\\nConstricción y\\nDrenadoras.\\n",
    },

    [MOVE_DOODLE] = {
        .names = {
            .name = "Decalcomanía",
            .capsName = "DECALCOMANÍA",
            .fullName = "Decalcomanía",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Calca la esencia del\\nobjetivo para atribuir su\\nhabilidad a sí mismo y a\\nsus aliados.\\n",
    },

    [MOVE_FILLET_AWAY] = {
        .names = {
            .name = "Deslome",
            .capsName = "DESLOME",
            .fullName = "Deslome",
        },
        .data = {
            .effect = MOVE_EFFECT_ATK_SP_ATK_SPEED_UP_2_LOSE_HALF_MAX_HP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Sube mucho el Ataque, el\\nAtaque Especial y la\\nVelocidad a costa de\\nparte de sus PS.\\n",
    },

    [MOVE_KOWTOW_CLEAVE] = {
        .names = {
            .name = "Genufend.",
            .capsName = "GENUFEND.",
            .fullName = "Genufendiente",
        },
        .data = {
            .effect = MOVE_EFFECT_BYPASS_ACCURACY,
            .split = SPLIT_PHYSICAL,
            .power = 85,
            .type = TYPE_DARK,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se postra en reverencia y\\nataca aprovechando el\\ndescuido. No falla nunca.\\n",
    },

    [MOVE_FLOWER_TRICK] = {
        .names = {
            .name = "Truco Floral",
            .capsName = "TRUCO FLORAL",
            .fullName = "Truco Floral",
        },
        .data = {
            .effect = MOVE_EFFECT_ALWAYS_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_GRASS,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Lanza un ramo de flores\\ntrucado. No falla nunca y\\nsiempre asesta un golpe\\ncrítico.\\n",
    },

    [MOVE_TORCH_SONG] = {
        .names = {
            .name = "Canto Ard.",
            .capsName = "CANTO ARD.",
            .fullName = "Canto Ardiente",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SP_ATK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Expele tórridas\\nllamaradas como si\\ncantara. Sube su Ataque\\nEspecial.\\n",
    },

    [MOVE_AQUA_STEP] = {
        .names = {
            .name = "Danza Acuát.",
            .capsName = "DANZA ACUÁT.",
            .fullName = "Danza Acuática",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Juguetea mientras ejecuta\\nuna danza fluida y daña.\\nSube su Velocidad.\\n",
    },

    [MOVE_RAGING_BULL] = {
        .names = {
            .name = "Furia Taur.",
            .capsName = "FURIA TAUR.",
            .fullName = "Furia Taurina",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_SCREENS,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Embiste con tremenda\\nfiereza. Cambia de tipo\\nsegún su variedad y\\ndestruye barreras.\\n",
    },

    [MOVE_MAKE_IT_RAIN] = {
        .names = {
            .name = "Fiebre Dor.",
            .capsName = "FIEBRE DOR.",
            .fullName = "Fiebre Dorada",
        },
        .data = {
            .effect = MOVE_EFFECT_MAKE_IT_RAIN,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_STEEL,
            .accuracy = ((CHAMPIONS_ACC_CHANGES) ? (95) : (100)),
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Arroja una generosa\\ncantidad de monedas, pero\\nreduce su Ataque\\nEspecial. Las recupera\\ntras el combate.\\n",
    },

    [MOVE_PSYBLADE] = {
        .names = {
            .name = "Psicohojas",
            .capsName = "PSICOHOJAS",
            .fullName = "Psicohojas",
        },
        .data = {
            .effect = MOVE_EFFECT_PSYBLADE,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Rebana con una espada\\ninmaterial. Con un campo\\neléctrico sube un 50 % su\\npotencia.\\n",
    },

    [MOVE_HYDRO_STEAM] = {
        .names = {
            .name = "Hidrovapor",
            .capsName = "HIDROVAPOR",
            .fullName = "Hidrovapor",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Vierte agua hirviendo.\\nCon sol, su potencia sube\\nun 50 % en lugar de\\nreducirse.\\n",
    },

    [MOVE_RUINATION] = {
        .names = {
            .name = "Calamidad",
            .capsName = "CALAMIDAD",
            .fullName = "Calamidad",
        },
        .data = {
            .effect = MOVE_EFFECT_HALVE_HP,
            .split = SPLIT_SPECIAL,
            .power = 1,
            .type = TYPE_DARK,
            .accuracy = 90,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Catástrofe devastadora\\nque reduce a la mitad los\\nPS del objetivo.\\n",
    },

    [MOVE_COLLISION_COURSE] = {
        .names = {
            .name = "Nitrochoque",
            .capsName = "NITROCHOQUE",
            .fullName = "Nitrochoque",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Choca contra el suelo\\ntras transformarse. Sube\\nsu potencia si el ataque\\nes supereficaz.\\n",
    },

    [MOVE_ELECTRO_DRIFT] = {
        .names = {
            .name = "Electroderr.",
            .capsName = "ELECTRODERR.",
            .fullName = "Electroderrape",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Atraviesa al rival con\\nelectricidad futurista.\\nSube su potencia si el\\nataque es supereficaz.\\n",
    },

    [MOVE_SHED_TAIL] = {
        .names = {
            .name = "Autotomía",
            .capsName = "AUTOTOMÍA",
            .fullName = "Autotomía",
        },
        .data = {
            .effect = MOVE_EFFECT_SHED_TAIL,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se cambia por otro, pero\\nantes usa parte de sus PS\\npara crear un sustituto.\\n",
    },

    [MOVE_CHILLY_RECEPTION] = {
        .names = {
            .name = "Fría Acogida",
            .capsName = "FRÍA ACOGIDA",
            .fullName = "Fría Acogida",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se cambia por otro, pero\\nantes cuenta un chiste\\ncuyo frío hace nevar\\ncinco turnos.\\n",
    },

    [MOVE_TIDY_UP] = {
        .names = {
            .name = "Limpieza",
            .capsName = "LIMPIEZA",
            .fullName = "Limpieza General",
        },
        .data = {
            .effect = MOVE_EFFECT_TIDY_UP,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_NORMAL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Limpieza que anula Púas,\\nTrampa Rocas, Red\\nViscosa, Púas Tóxicas y\\nSustituto. Sube Ataque y\\nVelocidad.\\n",
    },

    [MOVE_SNOWSCAPE] = {
        .names = {
            .name = "Paisaje Nev.",
            .capsName = "PAISAJE NEV.",
            .fullName = "Paisaje Nevado",
        },
        .data = {
            .effect = MOVE_EFFECT_WEATHER_SNOW,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_ICE,
            .accuracy = 0,
            .pp = ((CHAMPIONS_PP_CHANGES) ? (5) : (10)),
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_FIELD,
            .priority = 0,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Nevada de cinco turnos\\nque aumenta la Defensa de\\nlos Pokémon de tipo\\nHielo.\\n",
    },

    [MOVE_POUNCE] = {
        .names = {
            .name = "Brinco",
            .capsName = "BRINCO",
            .fullName = "Brinco",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_BUG,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca abalanzándose sobre\\nel objetivo y le reduce\\nla Velocidad.\\n",
    },

    [MOVE_TRAILBLAZE] = {
        .names = {
            .name = "Abrecaminos",
            .capsName = "ABRECAMINOS",
            .fullName = "Abrecaminos",
        },
        .data = {
            .effect = MOVE_EFFECT_RAISE_SPEED_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca como si saltara\\ndesde la hierba alta.\\nSube su Velocidad.\\n",
    },

    [MOVE_CHILLING_WATER] = {
        .names = {
            .name = "Agua Fría",
            .capsName = "AGUA FRÍA",
            .fullName = "Agua Fría",
        },
        .data = {
            .effect = MOVE_EFFECT_LOWER_ATTACK_HIT,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Rocía con un agua gélida\\ny desalentadora que\\nreduce el Ataque.\\n",
    },

    [MOVE_HYPER_DRILL] = {
        .names = {
            .name = "Hipertaladro",
            .capsName = "HIPERTALADRO",
            .fullName = "Hipertaladro",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (120) : (100)),
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Hace rotar la parte\\npuntiaguda de su cuerpo y\\npasa por alto Protección\\no Detección.\\n",
    },

    [MOVE_TWIN_BEAM] = {
        .names = {
            .name = "Láser Doble",
            .capsName = "LÁSER DOBLE",
            .fullName = "Láser Doble",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_SPECIAL,
            .power = 40,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Dos misteriosos haces\\nlumínicos que infligen\\ndaño dos veces seguidas.\\n",
    },

    [MOVE_RAGE_FIST] = {
        .names = {
            .name = "Puño Furia",
            .capsName = "PUÑO FURIA",
            .fullName = "Puño Furia",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 50,
            .type = TYPE_GHOST,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Convierte su rabia en\\nenergía. Cuantos más\\ngolpes haya recibido,\\nmayor potencia.\\n",
    },

    [MOVE_ARMOR_CANNON] = {
        .names = {
            .name = "Cañón Arm.",
            .capsName = "CAÑÓN ARM.",
            .fullName = "Cañón Armadura",
        },
        .data = {
            .effect = MOVE_EFFECT_USER_DEF_SP_DEF_DOWN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se deshace de su armadura\\ny la arroja como\\nproyectiles ardientes.\\nBaja sus Defensas.\\n",
    },

    [MOVE_BITTER_BLADE] = {
        .names = {
            .name = "Espada Lam.",
            .capsName = "ESPADA LAM.",
            .fullName = "Espada Lamento",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT,
            .split = SPLIT_PHYSICAL,
            .power = 90,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Imbuye su espada con su\\ndesazón y asesta una\\nestocada. Recupera la\\nmitad del daño causado.\\n",
    },

    [MOVE_DOUBLE_SHOCK] = {
        .names = {
            .name = "Electrop.",
            .capsName = "ELECTROP.",
            .fullName = "Electropalmas",
        },
        .data = {
            .effect = MOVE_EFFECT_REMOVE_USER_ELECTRIC_TYPE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 120,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Libera toda la\\nelectricidad de su\\ncuerpo. Tras el ataque\\ndeja de ser de tipo\\nEléctrico.\\n",
    },

    [MOVE_GIGATON_HAMMER] = {
        .names = {
            .name = "Mart. Colos.",
            .capsName = "MART. COLOS.",
            .fullName = "Martillo Colosal",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 160,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Propina un golpe con un\\nenorme martillo. No puede\\nusarse dos veces\\nseguidas.\\n",
    },

    [MOVE_COMEUPPANCE] = {
        .names = {
            .name = "Resarc.",
            .capsName = "RESARC.",
            .fullName = "Resarcimiento",
        },
        .data = {
            .effect = MOVE_EFFECT_METAL_BURST,
            .split = SPLIT_PHYSICAL,
            .power = 1,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET_SPECIAL,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Devuelve al rival el\\núltimo ataque recibido,\\npero con mucha más\\nfuerza.\\n",
    },

    [MOVE_AQUA_CUTTER] = {
        .names = {
            .name = "Tajo Acuát.",
            .capsName = "TAJO ACUÁT.",
            .fullName = "Tajo Acuático",
        },
        .data = {
            .effect = MOVE_EFFECT_HIGH_CRITICAL,
            .split = SPLIT_PHYSICAL,
            .power = 70,
            .type = TYPE_WATER,
            .accuracy = 100,
            .pp = 20,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Corta con agua a presión\\ncomo si fuera una hoja.\\nSuele ser crítico.\\n",
    },

    [MOVE_BLAZING_TORQUE] = {
        .names = {
            .name = "Pirochoque",
            .capsName = "PIROCHOQUE",
            .fullName = "Pirochoque",
        },
        .data = {
            .effect = MOVE_EFFECT_BURN_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El usuario ataca girando\\ncon su cuerpo\\nincandescente.\\n",
    },

    [MOVE_WICKED_TORQUE] = {
        .names = {
            .name = "Ominochoque",
            .capsName = "OMINOCHOQUE",
            .fullName = "Ominochoque",
        },
        .data = {
            .effect = MOVE_EFFECT_SLEEP_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 80,
            .type = TYPE_DARK,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 10,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El usuario ataca girando\\ncon mala intención.\\n",
    },

    [MOVE_NOXIOUS_TORQUE] = {
        .names = {
            .name = "Ponzochoque",
            .capsName = "PONZOCHOQUE",
            .fullName = "Ponzochoque",
        },
        .data = {
            .effect = MOVE_EFFECT_POISON_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El usuario ataca girando\\ncon un fluido ponzoñoso.\\n",
    },

    [MOVE_COMBAT_TORQUE] = {
        .names = {
            .name = "Pugnachoque",
            .capsName = "PUGNACHOQUE",
            .fullName = "Pugnachoque",
        },
        .data = {
            .effect = MOVE_EFFECT_PARALYZE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El usuario ataca girando\\ncon fuerza arrolladora.\\n",
    },

    [MOVE_MAGICAL_TORQUE] = {
        .names = {
            .name = "Feerichoque",
            .capsName = "FEERICHOQUE",
            .fullName = "Feerichoque",
        },
        .data = {
            .effect = MOVE_EFFECT_CONFUSE_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 30,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "El usuario ataca girando\\ncon poder mágico.\\n",
    },

    [MOVE_BLOOD_MOON] = {
        .names = {
            .name = "Luna Roja",
            .capsName = "LUNA ROJA",
            .fullName = "Luna Roja",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = ((CHAMPIONS_POWER_CHANGES) ? (140) : (130)),
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ataca canalizando toda su\\nfuerza a través de una\\nluna llena roja. No puede\\nusarse dos veces\\nseguidas.\\n",
    },

    [MOVE_MATCHA_GOTCHA] = {
        .names = {
            .name = "Cañón Bat.",
            .capsName = "CAÑÓN BAT.",
            .fullName = "Cañón Batidor",
        },
        .data = {
            .effect = MOVE_EFFECT_RECOVER_HALF_DAMAGE_DEALT_BURN_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_GRASS,
            .accuracy = 90,
            .pp = 15,
            .effectChance = 20,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Rocía con té recién\\nbatido y recupera la\\nmitad del daño causado.\\nPuede quemar.\\n",
    },

    [MOVE_SYRUP_BOMB] = {
        .names = {
            .name = "Bomba Caram.",
            .capsName = "BOMBA CARAM.",
            .fullName = "Bomba Caramelo",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 60,
            .type = TYPE_GRASS,
            .accuracy = ((CHAMPIONS_ACC_CHANGES) ? (90) : (85)),
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Néctar viscoso que\\ncarameliza al rival y\\nreduce su Velocidad\\ndurante tres turnos.\\n",
    },

    [MOVE_IVY_CUDGEL] = {
        .names = {
            .name = "Garrote L.",
            .capsName = "GARROTE L.",
            .fullName = "Garrote Liana",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_GRASS,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Golpea con un garrote de\\nliana. El tipo varía\\nsegún la máscara del\\nusuario. Suele ser\\ncrítico.\\n",
    },

    [MOVE_ELECTRO_SHOT] = {
        .names = {
            .name = "Electrorrayo",
            .capsName = "ELECTRORRAYO",
            .fullName = "Electrorrayo",
        },
        .data = {
            .effect = MOVE_EFFECT_CHARGE_TURN_SP_ATK_UP_RAIN_SKIPS,
            .split = SPLIT_SPECIAL,
            .power = 130,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Acumula electricidad y\\nsube su Ataque Especial\\nel primer turno y ataca\\nel segundo.\\n",
    },

    [MOVE_TERA_STARSTORM] = {
        .names = {
            .name = "Teraclúster",
            .capsName = "TERACLÚSTER",
            .fullName = "Teraclúster",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 120,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ADJACENT_OPPONENTS,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Irradia el poder de sus\\ncristales. En su Forma\\nAstral, Terapagos daña a\\ntodos los rivales.\\n",
    },

    [MOVE_FICKLE_BEAM] = {
        .names = {
            .name = "Láser Vel.",
            .capsName = "LÁSER VEL.",
            .fullName = "Láser Veleidoso",
        },
        .data = {
            .effect = MOVE_EFFECT_FICKLE_BEAM,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_DRAGON,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 100,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Haz de luz. A veces las\\notras cabezas se unen y\\nduplican la potencia del\\nmovimiento.\\n",
    },

    [MOVE_BURNING_BULWARK] = {
        .names = {
            .name = "Llama Prot.",
            .capsName = "LLAMA PROT.",
            .fullName = "Llama Protectora",
        },
        .data = {
            .effect = MOVE_EFFECT_PROTECT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_FIRE,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_USER,
            .priority = 4,
            .flags = 0x00,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Su ardiente pelaje le\\nprotege y quema al\\natacante si usa un\\nmovimiento de contacto.\\n",
    },

    [MOVE_THUNDERCLAP] = {
        .names = {
            .name = "Relámpago",
            .capsName = "RELÁMPAGO",
            .fullName = "Relámpago Súbito",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_FIRST_IF_TARGET_ATTACKING,
            .split = SPLIT_SPECIAL,
            .power = 70,
            .type = TYPE_ELECTRIC,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 1,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Rayo que cae antes de que\\nel rival pueda actuar.\\nFalla si no prepara un\\nataque.\\n",
    },

    [MOVE_MIGHTY_CLEAVE] = {
        .names = {
            .name = "Filo Potente",
            .capsName = "FILO POTENTE",
            .fullName = "Filo Potente",
        },
        .data = {
            .effect = MOVE_EFFECT_IGNORE_PROTECT,
            .split = SPLIT_PHYSICAL,
            .power = 95,
            .type = TYPE_ROCK,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Rebana con la luz\\nacumulada en su testa.\\nAcierta aunque el rival\\nse proteja.\\n",
    },

    [MOVE_TACHYON_CUTTER] = {
        .names = {
            .name = "Tajo Taquión",
            .capsName = "TAJO TAQUIÓN",
            .fullName = "Tajo Taquión",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT_TWICE,
            .split = SPLIT_SPECIAL,
            .power = 50,
            .type = TYPE_STEEL,
            .accuracy = 0,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Ráfaga de cuchillas de\\npartículas que golpea dos\\nveces. No falla nunca.\\n",
    },

    [MOVE_HARD_PRESS] = {
        .names = {
            .name = "Prensa Met.",
            .capsName = "PRENSA MET.",
            .fullName = "Prensa Metálica",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 0,
            .type = TYPE_STEEL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Oprime con los brazos o\\nlas pinzas. Cuantos más\\nPS le queden al rival,\\nmás potencia.\\n",
    },

    [MOVE_DRAGON_CHEER] = {
        .names = {
            .name = "Bramido Dr.",
            .capsName = "BRAMIDO DR.",
            .fullName = "Bramido Dragón",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_STATUS,
            .power = 0,
            .type = TYPE_DRAGON,
            .accuracy = 0,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_ALLY,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_MAGIC_COAT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Bramido que sube la moral\\nde los aliados y sus\\nposibilidades de golpe\\ncrítico.\\n",
    },

    [MOVE_ALLURING_VOICE] = {
        .names = {
            .name = "Canto Enc.",
            .capsName = "CANTO ENC.",
            .fullName = "Canto Encantador",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 80,
            .type = TYPE_FAIRY,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Canto angelical que deja\\nconfuso al rival si sus\\ncaracterísticas han\\nsubido esa misma ronda.\\n",
    },

    [MOVE_TEMPER_FLARE] = {
        .names = {
            .name = "Cólera Ard.",
            .capsName = "CÓLERA ARD.",
            .fullName = "Cólera Ardiente",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 75,
            .type = TYPE_FIRE,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Arremete dejándose llevar\\npor la ira. Duplica su\\npotencia si el movimiento\\nfalló el turno anterior.\\n",
    },

    [MOVE_SUPERCELL_SLAM] = {
        .names = {
            .name = "Pl. Voltaica",
            .capsName = "PL. VOLTAICA",
            .fullName = "Plancha Voltaica",
        },
        .data = {
            .effect = MOVE_EFFECT_CRASH_ON_MISS,
            .split = SPLIT_PHYSICAL,
            .power = 100,
            .type = TYPE_ELECTRIC,
            .accuracy = 95,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se electrifica y salta en\\nplancha sobre el\\nobjetivo. Si falla, se\\nhiere.\\n",
    },

    [MOVE_PSYCHIC_NOISE] = {
        .names = {
            .name = "Psicorruido",
            .capsName = "PSICORRUIDO",
            .fullName = "Psicorruido",
        },
        .data = {
            .effect = MOVE_EFFECT_PREVENT_HEALING_HIT,
            .split = SPLIT_SPECIAL,
            .power = 75,
            .type = TYPE_PSYCHIC,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Onda sonora desagradable\\nque impide al rival curar\\nPS durante dos turnos.\\n",
    },

    [MOVE_UPPER_HAND] = {
        .names = {
            .name = "Palma Rauda",
            .capsName = "PALMA RAUDA",
            .fullName = "Palma Rauda",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_PHYSICAL,
            .power = 65,
            .type = TYPE_FIGHTING,
            .accuracy = 100,
            .pp = 15,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 3,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT | FLAG_CONTACT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Se anticipa golpeando con\\nla palma y amedrenta.\\nFalla si el rival no usa\\nprioridad alta.\\n",
    },

    [MOVE_MALIGNANT_CHAIN] = {
        .names = {
            .name = "Cadena Vir.",
            .capsName = "CADENA VIR.",
            .fullName = "Cadena Virulenta",
        },
        .data = {
            .effect = MOVE_EFFECT_BADLY_POISON_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_POISON,
            .accuracy = 100,
            .pp = 5,
            .effectChance = 50,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT,
        },
        .contest = {
            .appeal = 0,
            .contestType = CONTEST_COOL,
        },
        .description = "Cadena de ponzoña que\\ninocula toxinas al rival.\\nPuede envenenar\\ngravemente.\\n",
    },

    [NUM_OF_MOVES] = {
        .names = {
            .name = "",
            .capsName = "",
            .fullName = "",
        },
        .data = {
            .effect = MOVE_EFFECT_HIT,
            .split = SPLIT_SPECIAL,
            .power = 100,
            .type = TYPE_NORMAL,
            .accuracy = 100,
            .pp = 10,
            .effectChance = 0,
        },
        .battle = {
            .target = RANGE_SINGLE_TARGET,
            .priority = 0,
            .flags = FLAG_MIRROR_MOVE | FLAG_UNUSABLE_IN_GEN_8 | FLAG_UNUSABLE_IN_GEN_9 | FLAG_UNUSABLE_UNIMPLEMENTED | FLAG_PROTECT,
        },
        .contest = {
            .appeal = APPEAL_LOW_VOLTAGE_BOOST,
            .contestType = CONTEST_BEAUTY,
        },
        .description = "",
    },
};

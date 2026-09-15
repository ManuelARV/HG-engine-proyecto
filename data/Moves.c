#include "../include/move_data.h"

const MoveSourceEntry sMoveSource[NUM_OF_MOVES + 1] = {
    [MOVE_NONE] = {
        .names = {
            .name = "-",
            .capsName = "-",
            .fullName = "-",
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
        .description = "Golpea al objetivo\\ncon las extremidades,\\nla cola o similares.\\n",
    },

    [MOVE_KARATE_CHOP] = {
        .names = {
            .name = "Golpe Kárate",
            .capsName = "GOLPE KÁRATE",
            .fullName = "Golpe Kárate",
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
        .description = "Da un golpe cortante.\\nSuele ser crítico.\\n",
    },

    [MOVE_DOUBLE_SLAP] = {
        .names = {
            .name = "Doblebofetón",
            .capsName = "DOBLEBOFETÓN",
            .fullName = "Doble Bofetón",
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
        .description = "Abofetea de dos a\\ncinco veces seguidas.\\n",
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
        .description = "Pega de dos a cinco\\nveces seguidas.\\n",
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
        .description = "Puñetazo de gran\\npotencia.\\n",
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
        .description = "Ataca arrojando\\nmonedas y las\\nrecupera tras el\\ncombate.\\n",
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
        .description = "Puñetazo ardiente\\nque puede causar\\nquemaduras.\\n",
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
        .description = "Puñetazo helado que\\npuede llegar a\\ncongelar.\\n",
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
        .description = "Puñetazo eléctrico\\nque puede paralizar.\\n",
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
        .description = "Araña con afiladas\\ngarras.\\n",
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
        .description = "Atenaza al objetivo\\ny le inflige daño.\\n",
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
        .description = "Ataque con grandes\\npinzas que fulmina\\nal objetivo si\\nacierta.\\n",
    },

    [MOVE_RAZOR_WIND] = {
        .names = {
            .name = "Viento Cort.",
            .capsName = "VIENTO CORT.",
            .fullName = "Viento Cortante",
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
        .description = "Se prepara y ataca al\\nsegundo turno con\\nráfagas de viento.\\nSuele ser crítico.\\n",
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
        .description = "Frenético baile que\\neleva el ánimo y\\nsube mucho el Ataque.\\n",
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
        .description = "Corta al objetivo con\\ngarras o guadañas.\\n",
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
        .description = "Crea un tornado con\\nlas alas y lo lanza\\ncontra el objetivo.\\n",
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
        .description = "Golpea con sus\\nextensas y majestuosas\\nalas.\\n",
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
        .description = "Se lleva al objetivo y\\nentra otro. Si es\\nsalvaje, acaba el\\ncombate.\\n",
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
        .description = "Vuela en el primer\\nturno y ataca en el\\nsegundo.\\n",
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
        .description = "Ata y oprime al\\nobjetivo de cuatro a\\ncinco turnos.\\n",
    },

    [MOVE_SLAM] = {
        .names = {
            .name = "Atizar",
            .capsName = "ATIZAR",
            .fullName = "Atizar",
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
        .description = "Golpea con la cola o\\ncon lianas para\\ncausar daño.\\n",
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
        .description = "Azota con lianas\\nlargas y flexibles\\ncomo látigos.\\n",
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
        .description = "Tremendo pisotón que\\npuede amedrentar al\\nobjetivo.\\n",
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
        .description = "Dos patadas seguidas,\\nuna con cada pie.\\n",
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
        .description = "Patada de extrema\\nfuerza.\\n",
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
        .description = "Salta y pega una\\npatada. Si falla, se\\nlesiona.\\n",
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
        .description = "Patada rápida y\\ncircular. Puede\\namedrentar al rival.\\n",
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
        .description = "Arroja arena a la\\ncara y reduce la\\nPrecisión.\\n",
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
        .description = "Potente cabezazo que\\npuede amedrentar.\\n",
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
        .description = "Ataca con una cornada\\npunzante.\\n",
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
        .description = "Cornea o picotea de\\ndos a cinco veces\\nseguidas.\\n",
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
        .description = "Cuerno giratorio que\\nfulmina al objetivo\\nsi acierta.\\n",
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
        .description = "Embestida con todo el\\ncuerpo.\\n",
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
        .description = "Salta sobre el rival\\ncon todo su peso.\\nPuede paralizarlo.\\n",
    },

    [MOVE_WRAP] = {
        .names = {
            .name = "Constricción",
            .capsName = "CONSTRICCIÓN",
            .fullName = "Constricción",
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
        .description = "Oprime al objetivo de\\ncuatro a cinco turnos\\ncon lianas o su\\ncuerpo.\\n",
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
        .description = "Carga desmedida que\\ntambién hiere un\\npoco al usuario.\\n",
    },

    [MOVE_THRASH] = {
        .names = {
            .name = "Saña",
            .capsName = "SAÑA",
            .fullName = "Saña",
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
        .description = "Ataca enfurecido de\\ndos a tres turnos y\\nluego queda confuso.\\n",
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
        .description = "Ataque arriesgado que\\ntambién hiere\\nseriamente al\\nusuario.\\n",
    },

    [MOVE_TAIL_WHIP] = {
        .names = {
            .name = "Agitacola",
            .capsName = "AGITACOLA",
            .fullName = "Agitacola",
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
        .description = "Agita la cola para\\ndespistar y reduce\\nla Defensa.\\n",
    },

    [MOVE_POISON_STING] = {
        .names = {
            .name = "Picot. Ven.",
            .capsName = "PICOT. VEN.",
            .fullName = "Picotazo Veneno",
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
        .description = "Aguijón tóxico que\\npuede envenenar.\\n",
    },

    [MOVE_TWINEEDLE] = {
        .names = {
            .name = "Doble Ataque",
            .capsName = "DOBLE ATAQUE",
            .fullName = "Doble Ataque",
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
        .description = "Pincha dos veces con\\ndos espinas. Puede\\nenvenenar.\\n",
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
        .description = "Púas afiladas que\\nhieren de dos a cinco\\nveces.\\n",
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
        .description = "Mirada torva que\\nintimida y reduce la\\nDefensa.\\n",
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
        .description = "Voraz bocado que\\npuede amedrentar al\\nobjetivo.\\n",
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
        .description = "Dulce gruñido que\\ndesconcierta y\\nreduce el Ataque.\\n",
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
        .description = "Se lleva al objetivo y\\nentra otro. Si es\\nsalvaje, acaba el\\ncombate.\\n",
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
        .description = "Cancioncilla que hace\\ndormir profundamente.\\n",
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
        .description = "Ondas sónicas que\\nconfunden al\\nobjetivo.\\n",
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
        .description = "Ondas de choque que\\nrestan 20 PS.\\n",
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
        .description = "Anula el último\\nmovimiento del\\nobjetivo durante\\ncuatro turnos.\\n",
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
        .description = "Ácido corrosivo que\\npuede bajar la\\nDefensa Especial.\\n",
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
        .description = "Llamas pequeñas que\\npueden causar\\nquemaduras.\\n",
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
        .description = "Gran ráfaga de fuego\\nque puede causar\\nquemaduras.\\n",
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
        .description = "Neblina blanca que\\nimpide reducir las\\ncaracterísticas\\ndurante 5 turnos.\\n",
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
        .description = "Dispara agua con gran\\npotencia.\\n",
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
        .description = "Lanza una gran masa\\nde agua a presión.\\n",
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
        .description = "Una ola gigante\\ninunda el terreno y\\ngolpea a los\\nadyacentes.\\n",
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
        .description = "Rayo de hielo que\\npuede llegar a\\ncongelar.\\n",
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
        .description = "Tormenta de hielo que\\npuede llegar a\\ncongelar.\\n",
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
        .description = "Extraño rayo que\\npuede causar\\nconfusión.\\n",
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
        .description = "Ráfaga de burbujas que\\npuede reducir la\\nVelocidad.\\n",
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
        .description = "Rayo multicolor que\\npuede reducir el\\nAtaque.\\n",
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
        .description = "Potente haz que le\\nobliga a descansar\\nel turno siguiente.\\n",
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
        .description = "Ensarta con un pico\\no un cuerno\\npunzante.\\n",
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
        .description = "Picotazo giratorio y\\nperforador muy\\npotente.\\n",
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
        .description = "Se lanza al suelo con\\nel rival en brazos y\\ntambién se hiere.\\n",
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
        .description = "Patada baja que\\nderriba. Cuanto más\\npesa el objetivo,\\nmás daño causa.\\n",
    },

    [MOVE_COUNTER] = {
        .names = {
            .name = "Contraataque",
            .capsName = "CONTRAATAQUE",
            .fullName = "Contraataque",
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
        .description = "Devuelve un ataque\\nfísico por duplicado.\\n",
    },

    [MOVE_SEISMIC_TOSS] = {
        .names = {
            .name = "Sísmico",
            .capsName = "SÍSMICO",
            .fullName = "Sísmico",
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
        .description = "Derriba con la\\ngravedad y resta PS\\nigual al nivel del\\nusuario.\\n",
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
        .description = "Golpea al objetivo\\ncon todas sus\\nfuerzas.\\n",
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
        .description = "Absorbe nutrientes.\\nEl usuario recupera\\nla mitad del daño\\nproducido.\\n",
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
        .description = "Absorbe nutrientes.\\nEl usuario recupera\\nla mitad del daño\\nproducido.\\n",
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
        .description = "Planta semillas que\\nabsorben PS del rival\\nen cada turno.\\n",
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
        .description = "Su cuerpo crece de\\ngolpe y aumentan el\\nAtaque y el Ataque\\nEspecial.\\n",
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
        .description = "Corta con hojas\\nafiladas. Suele ser\\ngolpe crítico.\\n",
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
        .description = "Acumula luz en el\\nprimer turno y ataca\\nen el segundo.\\n",
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
        .description = "Polvo tóxico que\\nenvenena al\\nobjetivo.\\n",
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
        .description = "Polvo que paraliza al\\nobjetivo.\\n",
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
        .description = "Polvo que duerme al\\nobjetivo.\\n",
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
        .description = "Ataca lanzando\\npétalos de dos a tres\\nturnos y queda\\nconfuso.\\n",
    },

    [MOVE_STRING_SHOT] = {
        .names = {
            .name = "Disp. Demora",
            .capsName = "DISP. DEMORA",
            .fullName = "Disparo Demora",
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
        .description = "Lanza seda por la boca\\ny reduce mucho la\\nVelocidad.\\n",
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
        .description = "Furiosas ondas de\\nchoque que quitan\\n40 PS.\\n",
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
        .description = "Aro de fuego que\\natrapa y daña de\\ncuatro a cinco\\nturnos.\\n",
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
        .description = "Ataque eléctrico que\\npuede paralizar al\\nobjetivo.\\n",
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
        .description = "Potente ataque\\neléctrico que puede\\nparalizar.\\n",
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
        .description = "Ligera descarga que\\nparaliza al objetivo.\\n",
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
        .description = "Poderoso rayo que\\ndaña y puede\\nparalizar.\\n",
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
        .description = "Tira una pequeña roca\\nal objetivo.\\n",
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
        .description = "Un terremoto que\\nafecta a los Pokémon\\nadyacentes.\\n",
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
        .description = "Abre una grieta y mete\\nal objetivo en ella.\\nLo fulmina si acierta.\\n",
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
        .description = "Cava en el primer\\nturno y ataca en el\\nsegundo.\\n",
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
        .description = "Envenena gravemente\\ny el daño aumenta\\ncada turno.\\n",
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
        .description = "Débil ataque\\ntelequinético que\\npuede causar\\nconfusión.\\n",
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
        .description = "Fuerte ataque\\ntelequinético que\\npuede bajar la\\nDefensa Especial.\\n",
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
        .description = "Ataque hipnótico que\\nhace dormir\\nprofundamente.\\n",
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
        .description = "Reposa y medita para\\npotenciar el Ataque.\\n",
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
        .description = "Relaja y aligera el\\ncuerpo para aumentar\\nmucho la Velocidad.\\n",
    },

    [MOVE_QUICK_ATTACK] = {
        .names = {
            .name = "Ataq. Rápido",
            .capsName = "ATAQ. RÁPIDO",
            .fullName = "Ataque Rápido",
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
        .description = "Ataca a tal velocidad\\nque es casi\\nimperceptible. Tiene\\nprioridad alta.\\n",
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
        .description = "Aumenta el Ataque del\\nusuario cada vez que\\nrecibe un golpe.\\n",
    },

    [MOVE_TELEPORT] = {
        .names = {
            .name = "Teletransp.",
            .capsName = "TELETRANSP.",
            .fullName = "Teletransporte",
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
        .description = "Cambia por otro del\\nequipo o huye de un\\ncombate salvaje.\\n",
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
        .description = "Produce un espejismo\\ny el rival pierde PS\\nigual al nivel del\\nusuario.\\n",
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
        .description = "Copia el último\\nmovimiento usado por\\nel objetivo.\\n",
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
        .description = "Alarido agudo que\\nreduce mucho la\\nDefensa.\\n",
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
        .description = "Crea copias ilusorias\\nde sí mismo y sube\\nla Evasión.\\n",
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
        .description = "Regenera sus células y\\nrecupera la mitad de\\nsus PS máximos.\\n",
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
        .description = "Tensa su musculatura\\npara aumentar la\\nDefensa.\\n",
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
        .description = "Mengua para aumentar\\nmucho la Evasión.\\n",
    },

    [MOVE_SMOKESCREEN] = {
        .names = {
            .name = "Pantallahumo",
            .capsName = "PANTALLAHUMO",
            .fullName = "Pantalla de Humo",
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
        .description = "Nube de humo o tinta\\nque reduce la\\nPrecisión.\\n",
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
        .description = "Rayo siniestro que\\nconfunde al objetivo.\\n",
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
        .description = "Se resguarda en su\\ncoraza y aumenta la\\nDefensa.\\n",
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
        .description = "Se enrosca para\\nocultar sus puntos\\ndébiles.\\n",
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
        .description = "Crea una barrera que\\nsube mucho la\\nDefensa.\\n",
    },

    [MOVE_LIGHT_SCREEN] = {
        .names = {
            .name = "Pantalla Luz",
            .capsName = "PANTALLA LUZ",
            .fullName = "Pantalla de Luz",
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
        .description = "Barrera que reduce\\ndurante 5 turnos el\\ndaño especial rival.\\n",
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
        .description = "Neblina oscura que\\nelimina los cambios\\nde características.\\n",
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
        .description = "Barrera que reduce\\ndurante 5 turnos el\\ndaño físico rival.\\n",
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
        .description = "Concentra energía y\\nsube los golpes\\ncríticos.\\n",
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
        .description = "Espera dos turnos y\\nataca con el doble\\ndel daño recibido.\\n",
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
        .description = "Mueve un dedo y usa\\nal azar casi\\ncualquier movimiento.\\n",
    },

    [MOVE_MIRROR_MOVE] = {
        .names = {
            .name = "Espejo",
            .capsName = "ESPEJO",
            .fullName = "Espejo",
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
        .description = "Ataca con el último\\nmovimiento del\\nobjetivo.\\n",
    },

    [MOVE_SELF_DESTRUCT] = {
        .names = {
            .name = "Autodest.",
            .capsName = "AUTODEST.",
            .fullName = "Autodestrucción",
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
        .description = "Explota y hiere a los\\nadyacentes. El usuario\\nse debilita.\\n",
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
        .description = "Arroja un huevo enorme\\ncon gran fuerza.\\n",
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
        .description = "Lame al objetivo con\\nsu larga lengua.\\nPuede paralizarlo.\\n",
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
        .description = "Gases tóxicos que\\npueden envenenar.\\n",
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
        .description = "Arroja residuos.\\nPuede envenenar al\\nobjetivo.\\n",
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
        .description = "Aporrea con un hueso.\\nPuede amedrentar.\\n",
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
        .description = "Llama intensa que\\npuede causar\\nquemaduras.\\n",
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
        .description = "Embiste con ímpetu y\\npuede amedrentar.\\n",
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
        .description = "Atrapa y atenaza\\ndurante 4 o 5 turnos.\\n",
    },

    [MOVE_SWIFT] = {
        .names = {
            .name = "Meteoros",
            .capsName = "METEOROS",
            .fullName = "Meteoros",
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
        .description = "Rayos en forma de\\nestrella que no\\nfallan nunca.\\n",
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
        .description = "Sube la Defensa en el\\nprimer turno y ataca\\nen el segundo.\\n",
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
        .description = "Lanza finas púas de\\ndos a cinco veces.\\n",
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
        .description = "Ataca con tentáculos\\nque pueden reducir la\\nVelocidad.\\n",
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
        .description = "Olvida sus\\npreocupaciones y sube\\nmucho la Defensa\\nEspecial.\\n",
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
        .description = "Dobla una cuchara y\\nreduce la Precisión\\ndel objetivo.\\n",
    },

    [MOVE_SOFT_BOILED] = {
        .names = {
            .name = "Ovocuración",
            .capsName = "OVOCURACIÓN",
            .fullName = "Ovocuración",
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
        .description = "Restaura la mitad de\\nsus PS máximos.\\n",
    },

    [MOVE_HIGH_JUMP_KICK] = {
        .names = {
            .name = "Patada Salto",
            .capsName = "PATADA SALTO",
            .fullName = "Patada Salto Alta",
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
        .description = "Salta muy alto y da\\nun rodillazo. Si\\nfalla, se hiere.\\n",
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
        .description = "Intimida con la mirada\\ny deja paralizado al\\nobjetivo.\\n",
    },

    [MOVE_DREAM_EATER] = {
        .names = {
            .name = "Comesueños",
            .capsName = "COMESUEÑOS",
            .fullName = "Comesueños",
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
        .description = "Engulle los sueños de\\nun rival dormido y\\nrecupera la mitad\\ndel daño.\\n",
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
        .description = "Nube de gas tóxico\\nque envenena al\\nobjetivo.\\n",
    },

    [MOVE_BARRAGE] = {
        .names = {
            .name = "Bombardeo",
            .capsName = "BOMBARDEO",
            .fullName = "Bombardeo",
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
        .description = "Arroja esferas de dos\\na cinco veces.\\n",
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
        .description = "Chupa sangre y\\nrecupera la mitad del\\ndaño producido.\\n",
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
        .description = "Cara que asusta y un\\nbeso que duerme al\\nobjetivo.\\n",
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
        .description = "Ataca en el segundo\\nturno. Suele ser\\ncrítico y puede\\namedrentar.\\n",
    },

    [MOVE_TRANSFORM] = {
        .names = {
            .name = "Transform.",
            .capsName = "TRANSFORM.",
            .fullName = "Transformación",
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
        .description = "Se transforma en una\\ncopia del objetivo\\ncon sus movimientos.\\n",
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
        .description = "Lanza burbujas y\\npuede reducir la\\nVelocidad.\\n",
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
        .description = "Rítmicos puñetazos\\nque pueden causar\\nconfusión.\\n",
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
        .description = "Esparce esporas que\\ninducen el sueño.\\n",
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
        .description = "Luz cegadora que baja\\nla Precisión.\\n",
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
        .description = "Onda de energía de\\nintensidad variable.\\n",
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
        .description = "No tiene ningún\\nefecto. Solo salpica.\\n",
    },

    [MOVE_ACID_ARMOR] = {
        .names = {
            .name = "Armad. Ácida",
            .capsName = "ARMAD. ÁCIDA",
            .fullName = "Armadura Ácida",
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
        .description = "Se vuelve líquido y\\nsube mucho la\\nDefensa.\\n",
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
        .description = "Golpea con fuerza con\\nuna pinza enorme.\\nSuele ser crítico.\\n",
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
        .description = "Gran explosión que\\nhiere a los\\nadyacentes. El usuario\\nse debilita.\\n",
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
        .description = "Araña de dos a cinco\\nveces seguidas.\\n",
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
        .description = "Lanza un hueso a modo\\nde bumerán y golpea\\ndos veces seguidas.\\n",
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
        .description = "Restaura todos los PS y\\ncura el estado, pero\\nduerme dos turnos.\\n",
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
        .description = "Lanza grandes\\npedruscos. Puede\\namedrentar al rival.\\n",
    },

    [MOVE_HYPER_FANG] = {
        .names = {
            .name = "Hip.Colmillo",
            .capsName = "HIP.COLMILLO",
            .fullName = "Hipercolmillo",
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
        .description = "Ataca con agudos\\ncolmillos. Puede\\namedrentar.\\n",
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
        .description = "Su perfil se vuelve más\\nafilado y sube el\\nAtaque.\\n",
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
        .description = "Cambia su tipo por el\\ndel primer movimiento\\nde su lista.\\n",
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
        .description = "Tres rayos de luz que\\npueden paralizar,\\nquemar o congelar.\\n",
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
        .description = "Dentellada que reduce\\na la mitad los PS del\\nobjetivo.\\n",
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
        .description = "Ataca con cuchillas o\\npinzas. Suele ser\\ngolpe crítico.\\n",
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
        .description = "Usa parte de sus PS\\npara crear un\\nsustituto que actúa\\nde señuelo.\\n",
    },

    [MOVE_STRUGGLE] = {
        .names = {
            .name = "Forcejeo",
            .capsName = "FORCEJEO",
            .fullName = "Forcejeo",
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
        .description = "Solo se usa al acabar\\nlos PP. El usuario se\\nhiere ligeramente.\\n",
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
        .description = "Aprende de forma\\npermanente el último\\nmovimiento del rival.\\n",
    },

    [MOVE_TRIPLE_KICK] = {
        .names = {
            .name = "Triple Pat.",
            .capsName = "TRIPLE PAT.",
            .fullName = "Triple Patada",
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
        .description = "Hasta tres patadas\\nseguidas, cada vez más\\npotentes.\\n",
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
        .description = "Ataca y roba el objeto\\ndel objetivo si este\\nlleva uno.\\n",
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
        .description = "Enreda al objetivo para\\nque no pueda\\nabandonar el combate.\\n",
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
        .description = "Adivina los movimientos\\ndel rival y su\\nsiguiente ataque no\\nfalla.\\n",
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
        .description = "El rival dormido sufre\\nuna pesadilla y pierde\\nPS en cada turno.\\n",
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
        .description = "Ataca envuelto en\\nfuego. Puede causar\\nquemaduras.\\n",
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
        .description = "Ronquido que solo se usa\\ndormido. Puede\\namedrentar.\\n",
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
        .description = "Su efecto cambia si el\\nusuario es de tipo\\nFantasma o no.\\n",
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
        .description = "Ataque frenético.\\nCuanto menos PS tenga\\nel usuario, más daño.\\n",
    },

    [MOVE_CONVERSION_2] = {
        .names = {
            .name = "Conversión 2",
            .capsName = "CONVERSIÓN 2",
            .fullName = "Conversión 2",
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
        .description = "Cambia su tipo para\\nresistir el del último\\nmovimiento rival.\\n",
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
        .description = "Chorro de aire que\\nsuele asestar un golpe\\ncrítico.\\n",
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
        .description = "Adhiere esporas y\\nreduce mucho la\\nVelocidad.\\n",
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
        .description = "Ataque desesperado que\\ndaña más cuantos menos\\nPS tenga el usuario.\\n",
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
        .description = "Rencor que reduce 4 PP\\ndel último movimiento\\nusado por el rival.\\n",
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
        .description = "Lanza nieve que puede\\nllegar a congelar.\\n",
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
        .description = "Frena todos los\\nataques, pero puede\\nfallar si se repite.\\n",
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
        .description = "Puñetazo de velocidad\\nfulminante. Tiene\\nprioridad alta.\\n",
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
        .description = "Asusta al objetivo y\\nreduce mucho su\\nVelocidad.\\n",
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
        .description = "Engaña al rival para\\nacercarse y golpearlo\\nsin fallar.\\n",
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
        .description = "Da un beso con tal\\ndulzura que causa\\nconfusión.\\n",
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
        .description = "Sacrifica la mitad de\\nsus PS máximos para\\nsubir al máximo el\\nAtaque.\\n",
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
        .description = "Arroja residuos.\\nPuede envenenar al\\nobjetivo.\\n",
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
        .description = "Echa lodo en la cara\\npara dañar y reducir\\nla Precisión.\\n",
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
        .description = "Dispara tinta a la cara\\ny puede reducir la\\nPrecisión.\\n",
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
        .description = "Trampa de púas que\\nhiere a los rivales que\\nentran en combate.\\n",
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
        .description = "Descarga eléctrica que\\ncausa daño y\\nparálisis.\\n",
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
        .description = "Permite golpear a\\nPokémon de tipo\\nFantasma y a los\\nevasivos.\\n",
    },

    [MOVE_DESTINY_BOND] = {
        .names = {
            .name = "Mismodestino",
            .capsName = "MISMODESTINO",
            .fullName = "Mismo Destino",
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
        .description = "Si el usuario se\\ndebilita, el rival\\ntambién lo hará.\\n",
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
        .description = "Quien lo oiga se\\ndebilitará en tres\\nturnos si no es\\ncambiado.\\n",
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
        .description = "Aire helado que reduce\\nla Velocidad del\\nobjetivo.\\n",
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
        .description = "Frena todos los\\nataques, pero puede\\nfallar si se repite.\\n",
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
        .description = "Aporrea con un hueso de\\ndos a cinco veces\\nseguidas.\\n",
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
        .description = "Fija el blanco para que\\nel siguiente movimiento\\nno falle.\\n",
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
        .description = "Ataca enfurecido de dos\\na tres turnos y luego\\nqueda confuso.\\n",
    },

    [MOVE_SANDSTORM] = {
        .names = {
            .name = "Torm. Arena",
            .capsName = "TORM. ARENA",
            .fullName = "Tormenta de Arena",
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
        .description = "Tormenta de arena que\\ndura 5 turnos y hiere\\nsalvo a Roca, Tierra y\\nAcero.\\n",
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
        .description = "Absorbe nutrientes.\\nRecupera la mitad del\\ndaño producido.\\n",
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
        .description = "Resiste cualquier\\nataque y deja al menos\\n1 PS.\\n",
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
        .description = "Engatusa al objetivo y\\nreduce mucho su\\nAtaque.\\n",
    },

    [MOVE_ROLLOUT] = {
        .names = {
            .name = "Rodar",
            .capsName = "RODAR",
            .fullName = "Rodar",
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
        .description = "Rueda contra el rival\\ndurante 5 turnos y\\ncada vez hace más\\ndaño.\\n",
    },

    [MOVE_FALSE_SWIPE] = {
        .names = {
            .name = "Falsotortazo",
            .capsName = "FALSOTORTAZO",
            .fullName = "Falso Tortazo",
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
        .description = "Ataque moderado que no\\ndebilita y deja al\\nobjetivo con 1 PS.\\n",
    },

    [MOVE_SWAGGER] = {
        .names = {
            .name = "Fanfarronear",
            .capsName = "FANFARRONEAR",
            .fullName = "Fanfarronear",
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
        .description = "Enfurece y confunde al\\nrival, pero sube mucho\\nsu Ataque.\\n",
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
        .description = "Restaura la mitad de\\nsus PS máximos.\\n",
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
        .description = "Arremete envuelto en\\nelectricidad. Puede\\nparalizar.\\n",
    },

    [MOVE_FURY_CUTTER] = {
        .names = {
            .name = "Corte Furia",
            .capsName = "CORTE FURIA",
            .fullName = "Corte Furia",
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
        .description = "Ataque lacerante cuya\\npotencia crece si se\\nusa seguido.\\n",
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
        .description = "Golpea con alas\\nrobustas. Puede subir\\nla Defensa del usuario.\\n",
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
        .description = "Mal de ojo que impide\\nal rival huir o ser\\ncambiado.\\n",
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
        .description = "Si el rival es del sexo\\nopuesto, se enamora y\\nataca menos.\\n",
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
        .description = "Mientras duerme, usa al\\nazar uno de sus\\nmovimientos.\\n",
    },

    [MOVE_HEAL_BELL] = {
        .names = {
            .name = "Campana Cura",
            .capsName = "CAMPANA CURA",
            .fullName = "Cascabel Cura",
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
        .description = "Tañido que cura los\\nproblemas de estado\\ndel equipo.\\n",
    },

    [MOVE_RETURN] = {
        .names = {
            .name = "Retribución",
            .capsName = "RETRIBUCIÓN",
            .fullName = "Retribución",
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
        .description = "Más poderoso cuanto\\nmayor sea la amistad\\ncon el Entrenador.\\n",
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
        .description = "Ataca con un regalo\\ntrampa, aunque a veces\\nrestaura PS.\\n",
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
        .description = "Más poderoso cuanto\\nmenor sea la amistad\\ncon el Entrenador.\\n",
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
        .description = "Poder misterioso que\\nprotege de problemas de\\nestado 5 turnos.\\n",
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
        .description = "Suma sus PS a los del\\nrival y los reparte a\\npartes iguales.\\n",
    },

    [MOVE_SACRED_FIRE] = {
        .names = {
            .name = "Fuegosagrado",
            .capsName = "FUEGOSAGRADO",
            .fullName = "Fuego Sagrado",
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
        .description = "Fuego místico de gran\\nintensidad que puede\\ncausar quemaduras.\\n",
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
        .description = "Sacudida sísmica de\\nintensidad variable que\\nafecta a los\\nalrededores.\\n",
    },

    [MOVE_DYNAMIC_PUNCH] = {
        .names = {
            .name = "Puñodinámico",
            .capsName = "PUÑODINÁMICO",
            .fullName = "Puño Dinámico",
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
        .description = "Puñetazo a máxima\\npotencia que causa\\nconfusión.\\n",
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
        .description = "Ensarta con su imponente\\ncuerno o cornamenta.\\n",
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
        .description = "Ráfaga de aliento que\\ngolpea y puede\\nparalizar.\\n",
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
        .description = "Cambia el puesto con\\notro y le pasa los\\ncambios de\\ncaracterísticas.\\n",
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
        .description = "El rival repite su\\núltimo movimiento\\ndurante tres turnos.\\n",
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
        .description = "Hace el doble de daño\\nal objetivo que pide el\\nrelevo.\\n",
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
        .description = "Giro que anula Atadura,\\nConstricción y\\nDrenadoras. Sube la\\nVelocidad.\\n",
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
        .description = "Dulce aroma que engatusa\\ny reduce mucho la\\nEvasión.\\n",
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
        .description = "Ataca con una cola\\nférrea y puede bajar\\nla Defensa.\\n",
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
        .description = "Garras de acero que\\npueden subir el Ataque\\ndel usuario.\\n",
    },

    [MOVE_VITAL_THROW] = {
        .names = {
            .name = "Llave Vital",
            .capsName = "LLAVE VITAL",
            .fullName = "Llave Vital",
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
        .description = "El usuario ataca el\\núltimo, pero no falla\\nnunca.\\n",
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
        .description = "Restaura PS. La cantidad\\nvaría según el tiempo\\nque haga.\\n",
    },

    [MOVE_SYNTHESIS] = {
        .names = {
            .name = "Fotosíntesis",
            .capsName = "FOTOSÍNTESIS",
            .fullName = "Fotosíntesis",
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
        .description = "Restaura PS. La cantidad\\nvaría según el tiempo\\nque haga.\\n",
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
        .description = "Restaura PS. La cantidad\\nvaría según el tiempo\\nque haga.\\n",
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
        .description = "Su tipo varía según el\\nPokémon que lo usa.\\n",
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
        .description = "Golpe doble con las\\nmanos que suele ser\\ncrítico.\\n",
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
        .description = "Violento tornado que\\npuede amedrentar al\\nobjetivo.\\n",
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
        .description = "Lluvia que dura 5 turnos,\\npotencia el Agua y\\ndebilita el Fuego.\\n",
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
        .description = "Sol intenso que dura 5\\nturnos, potencia el\\nFuego y debilita el\\nAgua.\\n",
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
        .description = "Tritura con afilados\\ncolmillos y puede bajar\\nla Defensa.\\n",
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
        .description = "Responde a un ataque\\nespecial causando el\\ndoble del daño.\\n",
    },

    [MOVE_PSYCH_UP] = {
        .names = {
            .name = "Autosugest.",
            .capsName = "AUTOSUGEST.",
            .fullName = "Autosugestión",
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
        .description = "Trance que copia los\\ncambios en las\\ncaracterísticas del\\nobjetivo.\\n",
    },

    [MOVE_EXTREME_SPEED] = {
        .names = {
            .name = "Vel. Extrema",
            .capsName = "VEL. EXTREMA",
            .fullName = "Velocidad Extrema",
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
        .description = "Ataque de velocidad\\nextrema. Tiene\\nprioridad alta.\\n",
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
        .description = "Poder prehistórico que\\npuede subir todas las\\ncaracterísticas.\\n",
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
        .description = "Bola oscura que puede\\nbajar la Defensa\\nEspecial.\\n",
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
        .description = "Concentra energía\\npsíquica y golpea dos\\nturnos después.\\n",
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
        .description = "Gran puñetazo que puede\\nreducir la Defensa del\\nobjetivo.\\n",
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
        .description = "Tromba de agua que\\natrapa y daña de cuatro\\na cinco turnos.\\n",
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
        .description = "Ataque de todo el\\nequipo. Cuantos más\\nhaya, más veces ataca.\\n",
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
        .description = "Amedrenta con prioridad\\nalta solo al entrar en\\ncombate.\\n",
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
        .description = "Ataca alborotado\\ndurante tres turnos y\\nmantiene despiertos.\\n",
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
        .description = "Acumula energía hasta\\ntres veces y sube la\\nDefensa y la Defensa\\nEspecial.\\n",
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
        .description = "Libera la energía de\\nReserva. La potencia\\ndepende de la acumulada.\\n",
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
        .description = "Absorbe la energía de\\nReserva para recobrar\\nsalud.\\n",
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
        .description = "Viento abrasador que\\ndaña y puede causar\\nquemaduras.\\n",
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
        .description = "Granizo que dura 5\\nturnos e hiere salvo a\\nlos de tipo Hielo.\\n",
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
        .description = "Atormenta al rival, que\\nno puede repetir\\nmovimiento seguido.\\n",
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
        .description = "Halaga y confunde al\\nrival, pero sube su\\nAtaque Especial.\\n",
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
        .description = "Siniestras llamas\\nmoradas que producen\\nquemaduras.\\n",
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
        .description = "El usuario se debilita y\\nreduce mucho el Ataque\\ny el Ataque Especial\\ndel rival.\\n",
    },

    [MOVE_FACADE] = {
        .names = {
            .name = "Fachada",
            .capsName = "FACHADA",
            .fullName = "Fachada",
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
        .description = "Duplica su potencia si\\nel usuario está\\nquemado, paralizado o\\nenvenenado.\\n",
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
        .description = "Se concentra para dar un\\npuñetazo. Falla si\\nrecibe un golpe.\\n",
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
        .description = "Hace el doble de daño a\\nun rival paralizado,\\npero le cura.\\n",
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
        .description = "Llama la atención y\\ncentra en sí todos los\\nmovimientos rivales.\\n",
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
        .description = "Usa el poder de la\\nnaturaleza. Su efecto\\nvaría con el entorno.\\n",
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
        .description = "Recarga energía para\\npotenciar su siguiente\\nmovimiento eléctrico.\\n",
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
        .description = "Enfurece al rival para\\nque solo ataque durante\\ntres turnos.\\n",
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
        .description = "Ayuda a un aliado\\nreforzando la potencia\\nde su ataque.\\n",
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
        .description = "Engaña al rival\\ndesprevenido e\\nintercambia su objeto.\\n",
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
        .description = "Imita al objetivo por\\ncompleto y copia su\\nhabilidad.\\n",
    },

    [MOVE_WISH] = {
        .names = {
            .name = "Deseo",
            .capsName = "DESEO",
            .fullName = "Deseo",
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
        .description = "Restaura PS en el\\nsiguiente turno, suyos\\no de su relevo.\\n",
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
        .description = "Usa un movimiento de un\\nmiembro del equipo\\nelegido al azar.\\n",
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
        .description = "Echa raíces para\\nrecuperar PS, pero no\\npuede huir ni ser\\ncambiado.\\n",
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
        .description = "Ataque de gran potencia\\nque reduce el Ataque y\\nla Defensa del usuario.\\n",
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
        .description = "Barrera que devuelve al\\nagresor movimientos\\ncomo Drenadoras.\\n",
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
        .description = "Recicla y recupera un\\nobjeto equipado de un\\nsolo uso ya empleado.\\n",
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
        .description = "Causa el doble de daño\\nsi el usuario resulta\\nherido en el turno.\\n",
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
        .description = "Golpe con el filo de la\\nmano capaz de destruir\\nPantalla de Luz y\\nReflejo.\\n",
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
        .description = "Gran bostezo que induce\\nel sueño en el\\nsiguiente turno.\\n",
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
        .description = "Hace que el rival suelte\\nsu objeto e impide\\nusarlo. Daña más si\\nlleva uno.\\n",
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
        .description = "Reduce los PS del rival\\npara que igualen a los\\ndel usuario.\\n",
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
        .description = "Furia explosiva.\\nCuantos menos PS tenga\\nel usuario, menos\\npotencia.\\n",
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
        .description = "Intercambia habilidades\\ncon el objetivo usando\\nsu poder psíquico.\\n",
    },

    [MOVE_IMPRISON] = {
        .names = {
            .name = "Sellar",
            .capsName = "SELLAR",
            .fullName = "Sellar",
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
        .description = "Impide a los rivales\\nusar movimientos que\\nconoce el usuario.\\n",
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
        .description = "Descansa para curar\\nparálisis,\\nenvenenamiento o\\nquemaduras.\\n",
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
        .description = "Si el usuario se\\ndebilita, se eliminan\\ntodos los PP de ese\\nataque.\\n",
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
        .description = "Roba el efecto de los\\nmovimientos de curación\\no de cambio de\\ncaracterísticas.\\n",
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
        .description = "Sus efectos secundarios\\nvarían según el entorno\\nde combate.\\n",
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
        .description = "Se sumerge en el primer\\nturno y ataca en el\\nsegundo.\\n",
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
        .description = "Golpea con la palma de\\ndos a cinco veces\\nseguidas.\\n",
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
        .description = "Modifica su tipo según\\nel terreno de combate.\\n",
    },

    [MOVE_TAIL_GLOW] = {
        .names = {
            .name = "Luminicola",
            .capsName = "LUMINICOLA",
            .fullName = "Luminicola",
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
        .description = "Se concentra mirando la\\nluz y aumenta muchísimo\\nsu Ataque Especial.\\n",
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
        .description = "Fogonazo de luz que\\npuede reducir la\\nDefensa Especial.\\n",
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
        .description = "Bola de plumas\\nneblinosas que puede\\nbajar el Ataque\\nEspecial.\\n",
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
        .description = "Envuelve al rival con un\\nmanto de plumas y baja\\nmucho su Ataque.\\n",
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
        .description = "Danza histérica que\\nconfunde a los Pokémon\\nadyacentes.\\n",
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
        .description = "Patada que suele ser\\ncrítica y puede causar\\nquemaduras.\\n",
    },

    [MOVE_MUD_SPORT] = {
        .names = {
            .name = "Chap. Lodo",
            .capsName = "CHAP. LODO",
            .fullName = "Chapoteo Lodo",
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
        .description = "Esparce lodo y debilita\\nlos movimientos\\neléctricos durante 5\\nturnos.\\n",
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
        .description = "Rueda contra el rival\\ndurante 5 turnos, cada\\nvez con más fuerza.\\n",
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
        .description = "Pega con brazos de\\npinchos y puede hacer\\nretroceder al rival.\\n",
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
        .description = "Se relaja y restaura la\\nmitad de sus PS\\nmáximos.\\n",
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
        .description = "Grito desgarrador que\\ninflige daño al\\nobjetivo.\\n",
    },

    [MOVE_POISON_FANG] = {
        .names = {
            .name = "Colm.Veneno",
            .capsName = "COLM.VENENO",
            .fullName = "Colmillo Veneno",
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
        .description = "Mordedura con colmillos\\nvenenosos que puede\\nenvenenar gravemente.\\n",
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
        .description = "Hace trizas con garras\\nafiladas y puede\\nreducir la Defensa.\\n",
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
        .description = "Calcina con una\\nexplosión de fuego.\\nEl usuario debe\\ndescansar después.\\n",
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
        .description = "Cañonazo de agua.\\nEl usuario debe\\ndescansar en el turno\\nsiguiente.\\n",
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
        .description = "Puñetazo que impacta\\ncomo un meteoro y puede\\nsubir el Ataque.\\n",
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
        .description = "Asusta al objetivo y le\\ngolpea. Puede\\namedrentarlo.\\n",
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
        .description = "El tipo y la potencia\\nvarían según el tiempo\\nque haga.\\n",
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
        .description = "Cura todos los\\nproblemas de estado del\\nequipo con un suave\\naroma.\\n",
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
        .description = "Lágrimas de cocodrilo\\nque reducen mucho la\\nDefensa Especial.\\n",
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
        .description = "Viento cortante que\\nazota. Suele asestar un\\ngolpe crítico.\\n",
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
        .description = "Ataca con toda su\\nfuerza, pero reduce\\nmucho su Ataque\\nEspecial.\\n",
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
        .description = "Permite golpear a\\nPokémon de tipo\\nFantasma y a los\\nevasivos.\\n",
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
        .description = "Lanza rocas que dañan y\\nreducen la Velocidad\\ndel objetivo.\\n",
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
        .description = "Viento con polvo de\\nescamas que puede subir\\ntodas las\\ncaracterísticas.\\n",
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
        .description = "Chirrido metálico que\\nreduce mucho la\\nDefensa Especial.\\n",
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
        .description = "Agradable melodía que\\nadormece al objetivo.\\n",
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
        .description = "Hace reír al rival para\\nreducir su Ataque y su\\nDefensa.\\n",
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
        .description = "Energía mística del\\nespacio que sube la\\nDefensa y la Defensa\\nEspecial.\\n",
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
        .description = "Chorro de agua.\\nCuantos menos PS tenga\\nel usuario, menos\\npotencia.\\n",
    },

    [MOVE_SIGNAL_BEAM] = {
        .names = {
            .name = "Rayo Señal",
            .capsName = "RAYO SEÑAL",
            .fullName = "Rayo Señal",
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
        .description = "Rayo de luz siniestro\\nque puede confundir al\\nobjetivo.\\n",
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
        .description = "Puñetazo procedente de\\nlas sombras que no\\nfalla nunca.\\n",
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
        .description = "Emite una energía muy\\nextraña que puede\\namedrentar al rival.\\n",
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
        .description = "Gancho ascendente de\\ngran ímpetu.\\n",
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
        .description = "Envuelve al rival en un\\nremolino de arena que\\ndaña de cuatro a cinco\\nturnos.\\n",
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
        .description = "Fulmina de un solo\\ngolpe. Si el usuario no\\nes de tipo Hielo, es\\ndifícil que acierte.\\n",
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
        .description = "Agua lodosa que puede\\nreducir la Precisión\\ndel objetivo.\\n",
    },

    [MOVE_BULLET_SEED] = {
        .names = {
            .name = "Semilladora",
            .capsName = "SEMILLADORA",
            .fullName = "Semilladora",
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
        .description = "Dispara rápidas ráfagas\\nde semillas de dos a\\ncinco veces.\\n",
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
        .description = "Movimientos rápidos que\\ndesconciertan. No falla\\nnunca.\\n",
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
        .description = "Lanza carámbanos\\nafilados de dos a cinco\\nveces seguidas.\\n",
    },

    [MOVE_IRON_DEFENSE] = {
        .names = {
            .name = "Def. Férrea",
            .capsName = "DEF. FÉRREA",
            .fullName = "Defensa Férrea",
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
        .description = "Fortalece su cuerpo como\\nsi fuera de hierro y\\nsube mucho la Defensa.\\n",
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
        .description = "Le corta el paso al\\nrival para que no pueda\\nhuir ni ser cambiado.\\n",
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
        .description = "Aullido que sube el\\nánimo y aumenta el\\nAtaque.\\n",
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
        .description = "Araña al objetivo con\\nunas enormes garras\\nafiladas.\\n",
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
        .description = "Golpea con una enorme\\nplanta. El usuario debe\\ndescansar después.\\n",
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
        .description = "Robustece el cuerpo\\npara aumentar el Ataque\\ny la Defensa.\\n",
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
        .description = "Bota en el primer turno\\ny golpea en el segundo.\\nPuede paralizar.\\n",
    },

    [MOVE_MUD_SHOT] = {
        .names = {
            .name = "Disparo Lodo",
            .capsName = "DISPARO LODO",
            .fullName = "Disparo Lodo",
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
        .description = "Lanza una bola de lodo\\nque también reduce la\\nVelocidad.\\n",
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
        .description = "Golpe con la cola que\\npuede envenenar. Suele\\nser crítico.\\n",
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
        .description = "Se acerca con ternura y\\nle roba el objeto al\\nrival.\\n",
    },

    [MOVE_VOLT_TACKLE] = {
        .names = {
            .name = "Volt Placaje",
            .capsName = "VOLT PLACAJE",
            .fullName = "Placaje Eléctrico",
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
        .description = "Se electrifica y ataca,\\npero se hiere\\nseriamente. Puede\\nparalizar.\\n",
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
        .description = "Extrañas hojas que\\npersiguen al objetivo.\\nNo falla nunca.\\n",
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
        .description = "Se empapa de agua y\\ndebilita los\\nmovimientos de fuego\\ndurante 5 turnos.\\n",
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
        .description = "Mejora la concentración\\ny calma el espíritu para\\nsubir el Ataque y la\\nDefensa Especial.\\n",
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
        .description = "Acuchilla con una hoja\\nfina. Suele asestar un\\ngolpe crítico.\\n",
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
        .description = "Frenética danza mística\\nque aumenta el Ataque y\\nla Velocidad.\\n",
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
        .description = "Lanza pedruscos de dos a\\ncinco veces seguidas.\\n",
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
        .description = "Ataque eléctrico muy\\nrápido que no falla\\nnunca.\\n",
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
        .description = "Potente onda de agua\\nque puede confundir al\\nobjetivo.\\n",
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
        .description = "Ataca con incontables\\nhaces de luz dos turnos\\ndespués de usarlo.\\n",
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
        .description = "Ataca con toda su\\nfuerza, pero reduce\\nmucho su Ataque\\nEspecial.\\n",
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
        .description = "Aterriza para descansar\\ny restaura hasta la\\nmitad de sus PS\\nmáximos.\\n",
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
        .description = "Durante 5 turnos anula\\nlos vuelos y los de\\ntipo Tierra aciertan a\\nlos que levitan.\\n",
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
        .description = "Permite golpear a\\nPokémon de tipo\\nSiniestro y a los\\nevasivos.\\n",
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
        .description = "Gran daño a rivales\\ndormidos, aunque los\\nbofetones también los\\ndespiertan.\\n",
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
        .description = "Golpe devastador con el\\npuño que reduce la\\nVelocidad del usuario.\\n",
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
        .description = "Ataque giratorio.\\nCuanto menor sea la\\nVelocidad del usuario,\\nmás daño causa.\\n",
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
        .description = "El usuario se debilita,\\npero cura y restaura\\nlos PS de su relevo.\\n",
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
        .description = "Si al rival le quedan la\\nmitad o menos de sus\\nPS, duplica su\\npotencia.\\n",
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
        .description = "La baya que lleva\\npresta su fuerza. Tipo\\ny potencia dependen de\\nla baya.\\n",
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
        .description = "Golpea a quienes usan\\nProtección o Detección\\ny anula sus efectos.\\n",
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
        .description = "Picotea al rival y, si\\nlleva una baya, se la\\ncome y obtiene su\\nefecto.\\n",
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
        .description = "Remolino que aumenta la\\nVelocidad del bando\\ndurante cuatro turnos.\\n",
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
        .description = "Presiona puntos clave\\ndel cuerpo y sube mucho\\nuna característica al\\nazar.\\n",
    },

    [MOVE_METAL_BURST] = {
        .names = {
            .name = "Repr. Metal",
            .capsName = "REPR. METAL",
            .fullName = "Represión Metal",
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
        .description = "Devuelve al rival el\\núltimo ataque recibido,\\npero con mucha más\\nfuerza.\\n",
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
        .description = "Tras atacar, vuelve a\\ntoda prisa para dar\\npaso a otro Pokémon.\\n",
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
        .description = "Ataca sin protegerse, lo\\nque reduce la Defensa y\\nla Defensa Especial del\\nusuario.\\n",
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
        .description = "Contraataca con el doble\\nde potencia si el rival\\nusa un movimiento\\nantes.\\n",
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
        .description = "Si el rival ya ha sufrido\\ndaño ese turno, duplica\\nsu potencia.\\n",
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
        .description = "Impide al rival usar su\\nobjeto durante 5 turnos.\\nTampoco se le pueden\\ndar objetos.\\n",
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
        .description = "Lanza contra el rival el\\nobjeto que lleva. Su\\nefecto varía según el\\nobjeto.\\n",
    },

    [MOVE_PSYCHO_SHIFT] = {
        .names = {
            .name = "Psicocambio",
            .capsName = "PSICOCAMBIO",
            .fullName = "Psicocambio",
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
        .description = "Usa su poder mental para\\ntransferir al rival sus\\nproblemas de estado.\\n",
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
        .description = "Cuantos menos PP tenga\\nel movimiento, mayor\\nserá su fuerza.\\n",
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
        .description = "Impide al rival curar PS\\ncon movimientos,\\nhabilidades u objetos\\ndurante 5 turnos.\\n",
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
        .description = "Estruja con fuerza.\\nCuantos más PS tenga el\\nrival, más fuerza\\ntendrá el ataque.\\n",
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
        .description = "Emplea su poder mental\\npara intercambiar su\\nAtaque y su Defensa.\\n",
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
        .description = "Arroja jugos biliares\\nque anulan el efecto de\\nla habilidad del\\nobjetivo.\\n",
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
        .description = "Conjuro que protege a\\ntodo su equipo de los\\ngolpes críticos.\\n",
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
        .description = "Se adelanta al\\nmovimiento del rival y lo\\nlanza antes con más\\nfuerza.\\n",
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
        .description = "Imita el movimiento\\nusado justo antes.\\nFalla si no se ha usado\\nninguno.\\n",
    },

    [MOVE_POWER_SWAP] = {
        .names = {
            .name = "Cambiafuerza",
            .capsName = "CAMBIAFUERZA",
            .fullName = "Cambiafuerza",
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
        .description = "Intercambia con el rival\\nlos cambios en el\\nAtaque y el Ataque\\nEspecial.\\n",
    },

    [MOVE_GUARD_SWAP] = {
        .names = {
            .name = "Camb.Defensa",
            .capsName = "CAMB.DEFENSA",
            .fullName = "Cambiadefensa",
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
        .description = "Intercambia con el rival\\nlos cambios en la\\nDefensa y la Defensa\\nEspecial.\\n",
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
        .description = "Su fuerza aumenta cuanto\\nmás se ha fortalecido\\nel rival.\\n",
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
        .description = "Solo puede usarse tras\\nhaber usado al menos una\\nvez todos los demás\\nmovimientos.\\n",
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
        .description = "Planta una semilla que\\nsustituye la habilidad\\ndel rival por Insomnio y\\nle impide dormir.\\n",
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
        .description = "Ataca con prioridad.\\nFalla si el rival no\\nprepara ningún ataque.\\n",
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
        .description = "Trampa de púas tóxicas\\nque envenena a los\\nrivales que entran en\\ncombate.\\n",
    },

    [MOVE_HEART_SWAP] = {
        .names = {
            .name = "Cambiaalmas",
            .capsName = "CAMBIAALMAS",
            .fullName = "Cambiaalmas",
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
        .description = "Intercambia con el rival\\nlos cambios en las\\ncaracterísticas.\\n",
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
        .description = "Se cubre con un manto de\\nagua y recupera algunos\\nPS en cada turno.\\n",
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
        .description = "Levita gracias a un\\ncampo magnético durante\\ncinco turnos.\\n",
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
        .description = "Se cubre de llamas y\\ncarga, aunque se hiere\\nseriamente. Puede\\nquemar.\\n",
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
        .description = "Ataca con una onda de\\nchoque y puede llegar a\\nparalizar al objetivo.\\n",
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
        .description = "Libera una inmensa\\ndescarga de aura. No\\nfalla nunca.\\n",
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
        .description = "Pule su cuerpo para\\nreducir la resistencia\\nal aire y sube mucho la\\nVelocidad.\\n",
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
        .description = "Pincha con un tentáculo\\no brazo envenenado.\\nPuede envenenar.\\n",
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
        .description = "Aura horrible llena de\\nmalos pensamientos que\\npuede amedrentar.\\n",
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
        .description = "Ataca al rival a la\\nprimera oportunidad.\\nSuele ser golpe\\ncrítico.\\n",
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
        .description = "Ataca agitando la cola\\ncomo si fuera una ola\\nrabiosa.\\n",
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
        .description = "Lanza enormes semillas\\nde cáscara muy dura\\ndesde arriba.\\n",
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
        .description = "Viento afilado que corta\\nel aire. Puede\\namedrentar al rival.\\n",
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
        .description = "Cruza las guadañas o\\ngarras para atacar como\\nunas tijeras.\\n",
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
        .description = "Onda sónica dañina que\\ntambién puede reducir la\\nDefensa Especial.\\n",
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
        .description = "Abre mucho la boca y\\nlibera una onda de\\nchoque contra el\\nobjetivo.\\n",
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
        .description = "Ataca de forma brutal\\nmientras intimida.\\nPuede amedrentar.\\n",
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
        .description = "Rayo de luz que\\ncentellea como si lo\\nformaran miles de\\njoyas.\\n",
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
        .description = "Golpe que drena energía.\\nEl usuario recupera la\\nmitad de los PS\\narrebatados.\\n",
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
        .description = "Gira los puños y libera\\nuna onda de vacío.\\nTiene prioridad alta.\\n",
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
        .description = "Concentra su poder\\nmental y lo libera.\\nPuede bajar la Defensa\\nEspecial.\\n",
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
        .description = "Aúna fuerzas de la\\nnaturaleza. Puede\\nreducir la Defensa\\nEspecial.\\n",
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
        .description = "Pliega las alas y ataca\\nen vuelo rasante. El\\nusuario se hiere\\nseriamente.\\n",
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
        .description = "La tierra bajo el rival\\nerupciona. Puede\\nreducir su Defensa\\nEspecial.\\n",
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
        .description = "Intercambia los objetos\\ncon el rival tan rápido\\nque es imposible verlo.\\n",
    },

    [MOVE_GIGA_IMPACT] = {
        .names = {
            .name = "Gigaimpacto",
            .capsName = "GIGAIMPACTO",
            .fullName = "Gigaimpacto",
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
        .description = "Carga con toda su fuerza\\ny descansa en el turno\\nsiguiente.\\n",
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
        .description = "Estimula su cerebro\\npensando en cosas malas\\ny sube mucho el Ataque\\nEspecial.\\n",
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
        .description = "Puñetazos tan rápidos\\ncomo proyectiles.\\nTiene prioridad alta.\\n",
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
        .description = "Su potencia se duplica\\nsi el usuario ha sido\\ngolpeado ese mismo\\nturno.\\n",
    },

    [MOVE_ICE_SHARD] = {
        .names = {
            .name = "Canto Helado",
            .capsName = "CANTO HELADO",
            .fullName = "Esquirla Helada",
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
        .description = "Esquirlas de hielo\\nlanzadas a gran\\nvelocidad. Tiene\\nprioridad alta.\\n",
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
        .description = "Garra afilada hecha de\\nsombras. Suele ser\\ngolpe crítico.\\n",
    },

    [MOVE_THUNDER_FANG] = {
        .names = {
            .name = "Colm. Rayo",
            .capsName = "COLM. RAYO",
            .fullName = "Colmillo Rayo",
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
        .description = "Muerde con colmillos\\nelectrificados y puede\\namedrentar o paralizar.\\n",
    },

    [MOVE_ICE_FANG] = {
        .names = {
            .name = "Colm. Hielo",
            .capsName = "COLM. HIELO",
            .fullName = "Colmillo Hielo",
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
        .description = "Muerde con colmillos\\nhelados y puede\\namedrentar o congelar.\\n",
    },

    [MOVE_FIRE_FANG] = {
        .names = {
            .name = "Colm. Ígneo",
            .capsName = "COLM. ÍGNEO",
            .fullName = "Colmillo Ígneo",
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
        .description = "Muerde con colmillos en\\nllamas y puede\\namedrentar o quemar.\\n",
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
        .description = "Extiende su sombra y\\nataca por la espalda.\\nTiene prioridad alta.\\n",
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
        .description = "Lanza una compacta bola\\nde fango. Puede bajar\\nla Precisión.\\n",
    },

    [MOVE_PSYCHO_CUT] = {
        .names = {
            .name = "Psicocorte",
            .capsName = "PSICOCORTE",
            .fullName = "Psicocorte",
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
        .description = "Cuchillas de energía\\npsíquica. Suele asestar\\nun golpe crítico.\\n",
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
        .description = "Concentra su energía\\npsíquica en la cabeza.\\nPuede amedrentar.\\n",
    },

    [MOVE_MIRROR_SHOT] = {
        .names = {
            .name = "Disp. Espejo",
            .capsName = "DISP. ESPEJO",
            .fullName = "Disparo Espejo",
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
        .description = "Haz de energía desde su\\npulido cuerpo. Puede\\nbajar la Precisión.\\n",
    },

    [MOVE_FLASH_CANNON] = {
        .names = {
            .name = "Cañ. Respl.",
            .capsName = "CAÑ. RESPL.",
            .fullName = "Cañón Resplandor",
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
        .description = "Concentra toda la luz de\\nsu cuerpo y la libera.\\nPuede bajar la Defensa\\nEspecial.\\n",
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
        .description = "Ataca con una gran\\nembestida. Puede\\nconfundir al rival.\\n",
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
        .description = "Viento que barre los\\nefectos de Reflejo o\\nPantalla de Luz y baja\\nla Evasión.\\n",
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
        .description = "Espacio misterioso en el\\nque los Pokémon lentos\\nse mueven antes\\ndurante 5 turnos.\\n",
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
        .description = "Grandes cometas caen\\nsobre el rival. Reduce\\nmucho tu Ataque\\nEspecial.\\n",
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
        .description = "Deslumbradora onda\\neléctrica que afecta a\\nlos adyacentes. Puede\\nparalizar.\\n",
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
        .description = "Infierno de llamas que\\ndaña a los adyacentes.\\nPuede causar\\nquemaduras.\\n",
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
        .description = "Lluvia de hojas afiladas\\nque reduce mucho tu\\nAtaque Especial.\\n",
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
        .description = "Agita violentamente sus\\nlianas o tentáculos\\npara golpear.\\n",
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
        .description = "Lanza una piedra enorme.\\nEl usuario debe\\ndescansar después.\\n",
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
        .description = "Tajo que puede envenenar.\\nSuele asestar un golpe\\ncrítico.\\n",
    },

    [MOVE_GUNK_SHOT] = {
        .names = {
            .name = "Lanzamugre",
            .capsName = "LANZAMUGRE",
            .fullName = "Lanzamugre",
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
        .description = "Lanza basura asquerosa y\\npuede envenenar al\\nobjetivo.\\n",
    },

    [MOVE_IRON_HEAD] = {
        .names = {
            .name = "Cab. Hierro",
            .capsName = "CAB. HIERRO",
            .fullName = "Cabeza de Hierro",
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
        .description = "Ataca con su cabeza dura\\ncomo el hierro. Puede\\namedrentar.\\n",
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
        .description = "Bombas de hierro que se\\npegan al rival. No se\\npuede esquivar.\\n",
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
        .description = "Clava piedras muy\\nafiladas. Suele asestar\\nun golpe crítico.\\n",
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
        .description = "Si el rival es del sexo\\nopuesto, queda\\nembelesado y baja su\\nAtaque Especial.\\n",
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
        .description = "Rocas flotantes que\\nhieren a los rivales que\\nentran en combate.\\n",
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
        .description = "Enreda con hierba y\\nderriba. Cuanto más pesa\\nel rival, más potencia.\\n",
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
        .description = "Onda de sonido muy\\nruidosa que confunde al\\nobjetivo.\\n",
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
        .description = "Emite incontables haces\\nde luz. Su tipo varía\\nsegún la tabla que\\nlleve.\\n",
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
        .description = "Pica al rival. Si lleva\\nuna baya, el usuario se\\nla come y obtiene su\\nefecto.\\n",
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
        .description = "Rayo eléctrico que\\npuede subir el Ataque\\nEspecial del usuario.\\n",
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
        .description = "Arremete con su robusto\\ncuerpo y se hiere\\nseriamente.\\n",
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
        .description = "Ataca a tal velocidad\\nque es casi\\nimperceptible. Tiene\\nprioridad alta.\\n",
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
        .description = "Llama a sus súbditos\\npara que ataquen.\\nSuele ser crítico.\\n",
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
        .description = "Llama a sus súbditos\\npara que formen un\\nescudo viviente. Sube\\nlas Defensas.\\n",
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
        .description = "Llama a sus súbditos\\npara que lo curen.\\nRecupera la mitad de\\nsus PS.\\n",
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
        .description = "Arriesga su vida con un\\ncabezazo brutal, pero\\nse hiere gravemente.\\n",
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
        .description = "Golpea dos veces\\nseguidas con la cola u\\notras partes del\\ncuerpo.\\n",
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
        .description = "Ataca con tal energía\\nque el tiempo se\\ndistorsiona. Debe\\ndescansar después.\\n",
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
        .description = "Desgarra al objetivo y\\nel espacio a su\\nalrededor. Suele ser\\ncrítico.\\n",
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
        .description = "El usuario se debilita,\\npero cura y restaura\\nlos PS y los PP de su\\nrelevo.\\n",
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
        .description = "Estruja con gran fuerza.\\nCuantos más PS le\\nqueden al rival, más\\npotencia.\\n",
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
        .description = "El objetivo queda\\natrapado en una tormenta\\nde fuego de cuatro a\\ncinco turnos.\\n",
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
        .description = "Envía al objetivo a un\\nmundo de tinieblas que\\nlo hace dormir.\\n",
    },

    [MOVE_SEED_FLARE] = {
        .names = {
            .name = "Fulgor Sem.",
            .capsName = "FULGOR SEM.",
            .fullName = "Fulgor Semilla",
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
        .description = "Libera una onda de\\nchoque. Puede reducir\\nmucho la Defensa\\nEspecial.\\n",
    },

    [MOVE_OMINOUS_WIND] = {
        .names = {
            .name = "V. Aciago",
            .capsName = "V. ACIAGO",
            .fullName = "Viento Aciago",
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
        .description = "Viento horripilante que\\npuede subir de golpe\\ntodas las\\ncaracterísticas.\\n",
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
        .description = "Desaparece en el primer\\nturno y golpea en el\\nsegundo, aunque el\\nrival se proteja.\\n",
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

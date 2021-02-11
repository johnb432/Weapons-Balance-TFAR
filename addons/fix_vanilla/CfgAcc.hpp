class asdg_SlotInfo;

class UnderBarrelSlot;
class nia_rifle_grips_slot: UnderBarrelSlot {
    displayName = "Gripod slot";
    class compatibleItems {
        bipod_01_F_blk = 1;
        bipod_01_F_khk = 1;
        bipod_01_F_mtp = 1;
        bipod_01_F_snd = 1;
        bipod_02_F_arid = 1;
        bipod_02_F_blk = 1;
        bipod_02_F_hex = 1;
        bipod_02_F_lush = 1;
        bipod_02_F_tan = 1;
        bipod_03_F_blk = 1;
        bipod_03_F_oli = 1;
    };
};

class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems {};
};

class rhs_western_rifle_gripod_slot : rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        bipod_01_F_blk = 1;
        bipod_01_F_khk = 1;
        bipod_01_F_mtp = 1;
        bipod_01_F_snd = 1;
        bipod_02_F_arid = 1;
        bipod_02_F_blk = 1;
        bipod_02_F_hex = 1;
        bipod_02_F_lush = 1;
        bipod_02_F_tan = 1;
        bipod_03_F_blk = 1;
        bipod_03_F_oli = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        optic_yorris = 1;
    };
};

class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems {};
};
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        optic_mrd = 1;
        optic_mrd_black = 1;
    };
};

class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems {};
};

class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {};
};

class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556 {
    class compatibleItems: compatibleItems {
        muzzle_snds_M = 1;
    };
};

class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot {
    class compatibleItems {
        muzzle_snds_m = 1;
        muzzle_snds_m_khk_f = 1;
        muzzle_snds_m_snd_f = 1;
    };
};

class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot {
    class compatibleItems {
        muzzle_snds_b = 1;
        muzzle_snds_b_khk_f = 1;
        muzzle_snds_b_snd_f = 1;
        muzzle_snds_b_arid_f = 1;
        muzzle_snds_b_lush_f = 1;
    };
};
class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot {
    class compatibleItems {
        muzzle_snds_b = 1;
        muzzle_snds_b_khk_f = 1;
        muzzle_snds_b_snd_f = 1;
        muzzle_snds_b_arid_f = 1;
        muzzle_snds_b_lush_f = 1;
    };
};

class asdg_MuzzleSlot_900_3CB: asdg_MuzzleSlot {
    class compatibleItems {
        muzzle_snds_l = 1;
    };
};

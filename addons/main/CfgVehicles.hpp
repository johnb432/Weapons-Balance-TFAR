class CfgVehicles {
    class TFAR_Bag_Base;
    class B_RadioBag_01_base_F: TFAR_Bag_Base {
        mass = 90;
    };
    class B_RadioBag_01_black_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_digi_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_eaf_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_ghex_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_hex_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_oucamo_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_tropic_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_wdl_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };

    class TFAR_rt1523g: TFAR_Bag_Base {
        mass = 70;
        maximumLoad = 80;
    };
    class TFAR_rt1523g_big: TFAR_rt1523g {
        mass = 100;
        maximumLoad = 160;
    };
    class TFAR_rt1523g_sage: TFAR_rt1523g {
        mass = 85;
        maximumLoad = 120;
    };

    class TFAR_mr3000: TFAR_Bag_Base {
        mass = 100;
        maximumLoad = 160;
        tf_range = 40000;
    };

    class TFAR_anprc155: TFAR_Bag_Base {
        mass = 100;
        maximumLoad = 160;
        tf_range = 40000;
    };
    class TFAR_anarc164: TFAR_Bag_Base {
        mass = 85;
        maximumLoad = 120;
    };
    class TFAR_anarc210: TFAR_Bag_Base {
        mass = 85;
        maximumLoad = 120;
    };
    class TFAR_mr6000l: TFAR_Bag_Base {
        mass = 85;
        maximumLoad = 120;
    };

    class TFAR_bussole: TFAR_Bag_Base {
        mass = 70;
        maximumLoad = 80;
        tf_range = 40000;
    };

    class LandVehicle;
    class Tank: LandVehicle {
        class ACE_SelfActions {};
    };
    class Tank_F: Tank {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class APC_Tracked_01_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };

    class APC_Tracked_02_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };

    class APC_Tracked_03_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };

    class MBT_01_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class B_MBT_01_base_F: MBT_01_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class B_MBT_01_cannon_F: B_MBT_01_base_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };
};

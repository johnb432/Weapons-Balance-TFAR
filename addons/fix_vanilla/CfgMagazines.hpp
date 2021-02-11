class CfgMagazines {
    class CA_Magazine;
    class 10Rnd_762x51_Mag;
    class 30Rnd_9x21_Mag;
    class 30Rnd_65x39_caseless_mag;

    class Laserbatteries: CA_Magazine {
        descriptionShort = "Batteries for Vanilla Laser Designator and BAF SOFLAM<br/>Does not fit into NVG<br/>Recycle after use.";
        displayName = "Designator Batteries (Vanilla)";
    };

    class 2Rnd_12Gauge_Pellets: CA_Magazine {
        mass = 2.2;
    };
    class 6Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets {
        mass = 6.6;
    };
    class 6Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets {
        mass = 6.6;
    };

    class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag {
        mass = 5.1;
        modelSpecial = "";
    };

    class 30Rnd_556x45_Stanag: CA_Magazine {
        mass = 9.35;
    };

    class 30Rnd_545x39_Mag_F: CA_Magazine {
        mass = 9.1;
    };

    class 150Rnd_556x45_Drum_Mag_F: CA_Magazine {
        mass = 42;
    };

    class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag {
        descriptionShort = "Caliber: .45 ACP<br/>Rounds: 25<br/>Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Mag";
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01 {
        descriptionShort = "Caliber: .45 ACP Tracers - Green<br/>Rounds: 25<br/>Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Tracers (Green) Mag";
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01 {
        descriptionShort = "Caliber: .45 ACP Tracers - Red<br/>Rounds: 25<br/>Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Tracers (Red) Mag";
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01 {
        descriptionShort = "Caliber: .45 ACP Tracers - Yellow<br/>Rounds: 25<br/>Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Tracers (Yellow) Mag";
    };

    class 200Rnd_556x45_Box_F: CA_Magazine {
        mass = 51.65;
        reloadAction = "GestureReloadM200";
    };

    class 30Rnd_762x39_Mag_F: CA_Magazine {
        mass = 13.5;
    };

    class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F {
        descriptionShort = "Caliber: 7.62x39 mm<br/>Rounds: 30<br/>Used in: RPK, AK-15, AK-15 GL, AKM";
        displayName = "7.62 mm 30rnd AK-15 Mag";
    };
    class 30rnd_762x39_AK12_Arid_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 30rnd AK-15 Sand Mag";
    };
    class 30rnd_762x39_AK12_Lush_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 30rnd AK-15 Khaki Mag";
    };
    class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 30rnd AK-15 Tracer Mag";
    };
    class 30rnd_762x39_AK12_Arid_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 30rnd AK-15 Tracer Sand Mag";
    };
    class 30rnd_762x39_AK12_Lush_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 30rnd AK-15 Tracer Khaki Mag";
    };

    class 75rnd_762x39_AK12_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        descriptionShort = "Caliber: 7.62x39 mm<br/>Rounds: 75<br/>Used in: RPK, AK-15, AK-15 GL, AKM";
        displayName = "7.62 mm 75rnd AK-15 Mag";
        mass = 33.7;
    };
    class 75rnd_762x39_AK12_Arid_Mag_F: 75rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 75rnd AK-15 Arid Mag";
    };
    class 75rnd_762x39_AK12_Lush_Mag_F: 75rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 75rnd AK-15 Lush Mag";
    };
    class 75rnd_762x39_AK12_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 75rnd AK-15 Tracer Mag";
    };
    class 75rnd_762x39_AK12_Arid_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 75rnd AK-15 Tracer Arid Mag";
    };
    class 75rnd_762x39_AK12_Lush_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 75rnd AK-15 Tracer Lush Mag";
    };

    class 75Rnd_762x39_Mag_F: 30Rnd_762x39_Mag_F {
        mass = 33.7;
    };

    class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag {
        displayName = "6.5 mm 30Rnd MSBS Mag";
    };
    class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag {
        displayName = "6.5 mm 30Rnd MSBS Tracer Mag";
    };

    class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag {
        count = 16;
    };

    class CA_LauncherMagazine;
    class RPG32_F: CA_LauncherMagazine {
        displayName = "RPG-32 AT Rocket";
    };
    class RPG32_HE_F: RPG32_F {
        displayName = "RPG-32 HE Rocket";
    };
    class RPG7_F: RPG32_F {
        displayName = "PG-7VM HEAT";
        mass = 31.5;
    };
};

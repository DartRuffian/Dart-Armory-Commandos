class CfgWeapons
{
    class LFP_rifle_base;
    class LFP_DC17M: LFP_rifle_base
    {
        class OpticsModes
        {
            class optics;
            class scope;
        };
    };
    class CLASS(DC17M): LFP_DC17M
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        displayName = "[DA] DC-17M";

        GVAR(attachmentSwapEnabled) = TRUE; // Enables attachment swapping
        GVAR(attachments)[] =        // Array of magazine properties to check and the attachment to use
        {
            {QGVAR(isBlasterMag), "lfp_dc17m_attachment_blaster"},
            {QGVAR(isGLMag), "lfp_dc17m_attachment_gl"},
            {QGVAR(isSniperMag), "lfp_dc17m_attachment_sniper"}
        };

        class OpticsModes: OpticsModes
        {
            delete optics;
            class scope: scope {};
        };

        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "lfp_dc17m_attachment_blaster";
            };
        };
    };

    class CLASS(DC17M_Sniper): CLASS(DC17M)
    {
        displayName = "[DA] DC-17M Sniper";

        // Sniper mag first to load it by default
        magazines[] = {"LFP_DC17M_Mag_Sniper", "LFP_DC17M_Mag", "LFP_DC17M_GL"};

        class OpticsModes: OpticsModes
        {
            class optics
            {
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
                discreteDistanceInitIndex = 1;
                discreteFov[] = {"0.25/3", "0.25/6", "0.25/9", "0.25/12", "0.25/15", "0.25/20"};
                discreteInitIndex = 0;

                opticsZoomInit = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomMin = 0.0625;
                useModelOptics = 1;

                distanceZoomMax = 1200;
                distanceZoomMin = 300;

                cameraDir = "";
                memoryPointCamera = "eye2";

                opticsDisablePeripherialVision = 1;
                opticsFlare = 1;
                opticsID = 1;
                opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};

                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {WHOT};
            };
            class scope: scope {};
        };
    };
};
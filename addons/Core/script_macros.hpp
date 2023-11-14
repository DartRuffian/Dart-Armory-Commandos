// Inventory & Loadouts
#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_5(a) a, a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a
#define ITEM_7(a) a, a, a, a, a, a, a
#define ITEM_8(a) a, a, a, a, a, a, a, a
#define ITEM_9(a) a, a, a, a, a, a, a, a, a
#define ITEM_10(a) a, a, a, a, a, a, a, a, a, a

#define WEAP_XX(WEAP, COUNT) class _xx_##WEAP \
{ \
    weapon = #WEAP; \
    count = COUNT; \
};

#define MAG_XX(MAG, COUNT) class _xx_##MAG \
{ \
    magazine = #MAG; \
    count = COUNT; \
};

#define ITEM_XX(ITEM, COUNT) class _xx_##ITEM \
{ \
    name = #ITEM; \
    count = COUNT; \
};

// Item Types
#define TYPE_HEADGEAR 605
#define TYPE_VEST 701
#define TYPE_UNIFORM 801
#define TYPE_BACKPACK 901

// Linked Items
#define LINKED_ITEMS "ItemMap", "ItemCompass", "ItemGPS", "ItemWatch"
#define LINKED_ITEMS_RADIO LINKED_ITEMS, "ItemRadio"

// Sides
#define OPFOR 0
#define BLUFOR 1
#define INDEP 2
#define CIVILIAN 3

// Scripting
#define QUOTE(TEXT) #TEXT
#define TRUE 1
#define FALSE 0
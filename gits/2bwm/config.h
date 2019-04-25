#define LOOK_INTO       "WM_NAME"
#define MOD             XCB_MOD_MASK_4
#define CURSOR_POSITION MIDDLE

#define CLICK_TO_FOCUS  false
#define ENABLE_LIMITS   false

static const char *colors[] = {
    "#000000", // foc
    "#888888", // unfoc
    "#000000",
    "#000000",
    "#000000",
    "#000000", // outer
    "#000000"
};

static const bool inverted_colors = false;
static const uint8_t borders[] = { 0,1,1,1 };

static const uint16_t movements[] = { };
static const bool     resize_by_line = true;
static const float    resize_keep_aspect_ratio= 1.0;
static const uint8_t  offsets[] = { };

static const char *ignore_names[] = { };

static const char *men[]   = { "men", NULL };

static key keys[] = {
    {  MOD ,              XK_Tab,                focusnext,         {.i=TWOBWM_FOCUS_NEXT}    } ,
    {  MOD ,              XK_q,                  deletewin,         {}                        } ,
    {  MOD ,              XK_Escape,             twobwm_restart,    {.i=0}                    } ,
    {  MOD | CONTROL ,    XK_Escape,             twobwm_exit,       {.i=0}                    } ,
};

static Button buttons[] = {
    {  MOD ,              XCB_BUTTON_INDEX_1,    mousemotion,       {.i=TWOBWM_MOVE}, false   } ,
    {  0   ,              XCB_BUTTON_INDEX_2,    start,             {.com = men}, true        } ,
    {  MOD ,              XCB_BUTTON_INDEX_3,    mousemotion,       {.i=TWOBWM_RESIZE}, false } ,
};

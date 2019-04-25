static const char font[]        = "drift:pixelsize=10";
static const Bool numberclients = False;
static const int WIDTH=370;
static const int HEIGHT=450;
static const int barheight = -1; 
static const char before[]      = "<";
static const char after[]       = ">";
static const char titletrim[]   = "...";
static const int  tabwidth      = 80;
static const Bool foreground    = False;
static const Bool urgentswitch  = False;

static int newposition   = 1;
static Bool npisrelative  = True;

static const char* selbgcolor   = "#f8f8f8";
static const char* selfgcolor   = "#000000";
static const char* normbgcolor  = "#ffffff";
static const char* normfgcolor  = "#000000";
static const char* urgbgcolor   = "#ffffff";
static const char* urgfgcolor   = "#000000";

#define SETPROP(p) { \
        .v = (char *[]){ "/bin/sh", "-c", \
                "prop=\"`xwininfo -children -id $1 | grep '^     0x' |" \
                "sed -e's@^ *\\(0x[0-9a-f]*\\) \"\\([^\"]*\\)\".*@\\1 \\2@' |" \
                "xargs -0 printf %b | dmenu -l 10`\" &&" \
                "xprop -id $1 -f $0 8s -set $0 \"$prop\"", \
                p, winid, NULL \
        } \
}

static const Key keys[] = {
    { ControlMask,               XK_t,        focusonce,   { 0 } },
    { ControlMask,               XK_t,        spawn,       { 0 } },
    { ControlMask,               XK_Tab,      rotate,      { .i = +1 } },
    { ControlMask,               XK_w,      killclient,  { 0 } },
    { ControlMask,               XK_1,      move,        { .i = 0 } },
    { ControlMask,               XK_2,      move,        { .i = 1 } },
    { ControlMask,               XK_3,      move,        { .i = 2 } },
    { ControlMask,               XK_4,      move,        { .i = 3 } },
    { ControlMask,               XK_5,      move,        { .i = 4 } },
    { ControlMask,               XK_6,      move,        { .i = 5 } },
    { ControlMask,               XK_7,      move,        { .i = 6 } },
    { ControlMask,               XK_8,      move,        { .i = 7 } },
    { ControlMask,               XK_9,      move,        { .i = 8 } },
    { ControlMask,               XK_0,      move,        { .i = 9 } },
};

static const char norm_fg[] = "#dbd0c8";
static const char norm_bg[] = "#0b0707";
static const char norm_border[] = "#99918c";

static const char sel_fg[] = "#dbd0c8";
static const char sel_bg[] = "#915131";
static const char sel_border[] = "#dbd0c8";

static const char urg_fg[] = "#dbd0c8";
static const char urg_bg[] = "#6A554E";
static const char urg_border[] = "#6A554E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};

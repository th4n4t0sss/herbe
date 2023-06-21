static const char *background_color = "#000000";
static char *border_color = "#ffffff";
static const char *font_color = "#ffffff";
static char *font_pattern = "Fixedsys Excelsior 3.01:style=Bold:size=14";
static const unsigned line_spacing = 5;
static const unsigned int padding = 15;

static unsigned int width = 300;
static const unsigned int border_size = 3;
static unsigned int pos_x = 30;
static unsigned int pos_y = 60;

enum sides { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT, CENTER };
enum sides side = CENTER;
static unsigned int duration = 2; /* in seconds */

#define ACTION_BUTTON Button1
#define DISMISS_BUTTON Button2

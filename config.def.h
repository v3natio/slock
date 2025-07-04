/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] = "black",       /* after initialization */
	[INPUT] = "#005577",    /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
  //[CAPS] = "red",         /* CapsLock on */
};

/*
 * resources preferences to load at startup
*/
ResourcePref resources[] = {
  { "color0",       STRING,  &colorname[INIT] },
  { "color4",       STRING,  &colorname[INPUT] },
  { "color1",       STRING,  &colorname[FAILED] },
  //{ "color3",       STRING,  &colorname[CAPS] },
};


/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

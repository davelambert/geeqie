/*
 * Geeqie
 * (C) 2006 John Ellis
 * Copyright (C) 2008 The Geeqie Team
 *
 * Author: John Ellis
 *
 * This software is released under the GNU General Public License (GNU GPL).
 * Please read the included file COPYING for more information.
 * This software comes with no warranty of any kind, use at your own risk!
 */

#ifndef IMAGE_OVERLAY_H
#define IMAGE_OVERLAY_H

typedef enum {
	IMAGE_OSD_NONE = 0,
	IMAGE_OSD_ROTATE_USER,
	IMAGE_OSD_ROTATE_AUTO,
	IMAGE_OSD_COLOR,
	IMAGE_OSD_FIRST,
	IMAGE_OSD_LAST,
	IMAGE_OSD_ICON,
	IMAGE_OSD_COUNT
} ImageOSDFlag;

void set_default_image_overlay_template_string(ConfOptions *options);

void image_osd_set(ImageWindow *imd, gint info, gint status);
gint image_osd_get(ImageWindow *imd, gint *info, gint *status);

void image_osd_update(ImageWindow *imd);

void image_osd_icon(ImageWindow *imd, ImageOSDFlag flag, gint duration);

void image_osd_histogram_onoff_toggle(ImageWindow *, gint);
gint image_osd_histogram_onoff_status(ImageWindow *);
void image_osd_histogram_chan_toggle(ImageWindow *);
void image_osd_histogram_log_toggle(ImageWindow *);

void image_osd_toggle(ImageWindow *imd);


#endif

/*
 * zmk-input-inertia targets ZMK main, where zmk_endpoints_send_mouse_report()
 * was renamed to zmk_endpoint_send_mouse_report(). ZMK v0.3 only has the old
 * name, so provide the new one here. Remove this file after moving to a ZMK
 * release that has the new name, or the link will fail with a duplicate symbol.
 */

#include <zmk/endpoints.h>

int zmk_endpoint_send_mouse_report(void) { return zmk_endpoints_send_mouse_report(); }

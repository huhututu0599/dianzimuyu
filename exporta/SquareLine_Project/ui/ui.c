// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void gd1_Animation( lv_obj_t *TargetObject, int delay);
void gd2_Animation( lv_obj_t *TargetObject, int delay);


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
void ui_event_Image3( lv_event_t * e);
lv_obj_t *ui_Image3;
lv_obj_t *ui_Label1;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_[1] = {&ui_img_1_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void gd1_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 800);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_zoom );
lv_anim_set_values(&PropertyAnimation_0, 200, 250 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 5);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);

}
void gd2_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 800);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, -40, -81 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 5);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Image3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      gd2_Animation(ui_Label1, 1000);
      gd1_Animation(ui_Image3, 1000);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}

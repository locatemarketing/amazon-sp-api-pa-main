// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: amazon-assistant-v1

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Button6;
lv_obj_t * ui_Container1;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Image2;
void ui_event_Image1(lv_event_t * e);
lv_obj_t * ui_Image1;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
void ui_event_Image5(lv_event_t * e);
lv_obj_t * ui_Image5;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Image6;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Button7;
void ui_event_Image7(lv_event_t * e);
lv_obj_t * ui_Image7;
lv_obj_t * ui_Image8;
lv_obj_t * ui_Image9;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Button8;
lv_obj_t * ui_Button10;
void ui_event_Label13(lv_event_t * e);
lv_obj_t * ui_Label13;
lv_obj_t * ui_TabView2;
lv_obj_t * ui_Pending;
lv_obj_t * ui_Container2;
lv_obj_t * ui_Image10;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Container3;
lv_obj_t * ui_Image11;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Container4;
lv_obj_t * ui_Image12;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Unshipped;
lv_obj_t * ui_Canceled;
lv_obj_t * ui_Shipped;
lv_obj_t * ui_Button12;
lv_obj_t * ui_Label36;
lv_obj_t * ui_Button13;
lv_obj_t * ui_Label37;


// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
lv_obj_t * ui_Screen3;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Image14;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Image16;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Label25;
lv_obj_t * ui_Label26;
void ui_event_Button5(lv_event_t * e);
lv_obj_t * ui_Button5;
void ui_event_Label27(lv_event_t * e);
lv_obj_t * ui_Label27;
lv_obj_t * ui_Button9;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Button11;
lv_obj_t * ui_Label29;
lv_obj_t * ui_Label30;
lv_obj_t * ui_Label31;
lv_obj_t * ui_Label32;
lv_obj_t * ui_Label33;
lv_obj_t * ui_Label34;
lv_obj_t * ui_Label35;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_715046593[1] = {&ui_img_825004913};
const lv_img_dsc_t * ui_imgset_image_[1] = {&ui_img_image_1_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Image1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_Screen2_screen_init);
    }
}
void ui_event_Image5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_Screen2_screen_init);
    }
}
void ui_event_Image7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_Screen1_screen_init);
    }
}
void ui_event_Label13(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_NONE, 500, 0, &ui_Screen1_screen_init);
    }
}
void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_Screen1_screen_init);
    }
}
void ui_event_Label27(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_Screen1_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen3_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
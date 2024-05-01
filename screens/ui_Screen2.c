// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: amazon-assistant-v1

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button7 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button7, 839);
    lv_obj_set_height(ui_Button7, 502);
    lv_obj_set_x(ui_Button7, -12);
    lv_obj_set_y(ui_Button7, -9);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image7 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image7, &ui_img_vector_png);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image7, -308);
    lv_obj_set_y(ui_Image7, -61);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image7, 320);

    ui_Image8 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image8, &ui_img_package_png);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image8, -306);
    lv_obj_set_y(ui_Image8, 54);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image8, 340);

    ui_Image9 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image9, &ui_img_messages_png);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);    /// 165
    lv_obj_set_x(ui_Image9, -310);
    lv_obj_set_y(ui_Image9, 3165);
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image9, 320);

    ui_Label11 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, -307);
    lv_obj_set_y(ui_Label11, -173);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "04:53pm");
    lv_obj_set_style_text_font(ui_Label11, &ui_font_timefont, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, -307);
    lv_obj_set_y(ui_Label12, -136);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "April 23, 2024");
    lv_obj_set_style_text_font(ui_Label12, &ui_font_datefont, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button8 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button8, 100);
    lv_obj_set_height(ui_Button8, 50);
    lv_obj_set_x(ui_Button8, -138);
    lv_obj_set_y(ui_Button8, -157);
    lv_obj_set_align(ui_Button8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button10 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button10, 590);
    lv_obj_set_height(ui_Button10, 450);
    lv_obj_set_x(ui_Button10, 198);
    lv_obj_set_y(ui_Button10, 12);
    lv_obj_add_flag(ui_Button10, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, -51);
    lv_obj_set_y(ui_Label13, -184);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "< View Orders");
    lv_obj_add_flag(ui_Label13, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0x2196F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &ui_font_locategoodsfont, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TabView2 = lv_tabview_create(ui_Screen2, LV_DIR_TOP, 50);
    lv_obj_set_width(ui_TabView2, 579);
    lv_obj_set_height(ui_TabView2, 371);
    lv_obj_set_x(ui_TabView2, 203);
    lv_obj_set_y(ui_TabView2, 84);
    lv_obj_clear_flag(ui_TabView2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TabView2, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TabView2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TabView2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TabView2, &ui_font_datefont, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(lv_tabview_get_tab_btns(ui_TabView2), lv_color_hex(0x0C5EA0),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(lv_tabview_get_tab_btns(ui_TabView2), 255,  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(lv_tabview_get_tab_btns(ui_TabView2), &ui_font_percentage_font_white,
                               LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(lv_tabview_get_tab_btns(ui_TabView2), 20,  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(lv_tabview_get_tab_btns(ui_TabView2), lv_color_hex(0xB2DAFB),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_tabview_get_tab_btns(ui_TabView2), 255,  LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pending = lv_tabview_add_tab(ui_TabView2, "Pending");

    ui_Container2 = lv_obj_create(ui_Pending);
    lv_obj_remove_style_all(ui_Container2);
    lv_obj_set_width(ui_Container2, 566);
    lv_obj_set_height(ui_Container2, 93);
    lv_obj_set_x(ui_Container2, -9);
    lv_obj_set_y(ui_Container2, 0);
    lv_obj_clear_flag(ui_Container2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image10 = lv_img_create(ui_Container2);
    lv_img_set_src(ui_Image10, &ui_img_mug_png);
    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);   /// 60
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT);    /// 60
    lv_obj_set_x(ui_Image10, 12);
    lv_obj_set_y(ui_Image10, 7);
    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image10, 300);

    ui_Label14 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Label14, 436);
    lv_obj_set_height(ui_Label14, 46);
    lv_obj_set_x(ui_Label14, 115);
    lv_obj_set_y(ui_Label14, 17);
    lv_label_set_text(ui_Label14, "Rae -HOME OF THE BRAVE Coffee Mug *4th -Fourth- of July*- Dunn By Magenta");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x343434), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Label15, 69);
    lv_obj_set_height(ui_Label15, 21);
    lv_obj_set_x(ui_Label15, 114);
    lv_obj_set_y(ui_Label15, 55);
    lv_label_set_text(ui_Label15, "Order ID:");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Container2);
    lv_obj_set_width(ui_Label16, 168);
    lv_obj_set_height(ui_Label16, 21);
    lv_obj_set_x(ui_Label16, 181);
    lv_obj_set_y(ui_Label16, 56);
    lv_label_set_text(ui_Label16, " #112-4254320-1469868");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container3 = lv_obj_create(ui_Pending);
    lv_obj_remove_style_all(ui_Container3);
    lv_obj_set_width(ui_Container3, 566);
    lv_obj_set_height(ui_Container3, 93);
    lv_obj_set_x(ui_Container3, -7);
    lv_obj_set_y(ui_Container3, 112);
    lv_obj_clear_flag(ui_Container3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image11 = lv_img_create(ui_Container3);
    lv_img_set_src(ui_Image11, &ui_img_mug_png);
    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);   /// 60
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT);    /// 60
    lv_obj_set_x(ui_Image11, 12);
    lv_obj_set_y(ui_Image11, 7);
    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image11, 300);

    ui_Label17 = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_Label17, 436);
    lv_obj_set_height(ui_Label17, 46);
    lv_obj_set_x(ui_Label17, 115);
    lv_obj_set_y(ui_Label17, 17);
    lv_label_set_text(ui_Label17, "Rae -HOME OF THE BRAVE Coffee Mug *4th -Fourth- of July*- Dunn By Magenta");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x343434), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_Label18, 69);
    lv_obj_set_height(ui_Label18, 21);
    lv_obj_set_x(ui_Label18, 114);
    lv_obj_set_y(ui_Label18, 55);
    lv_label_set_text(ui_Label18, "Order ID:");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_Label19, 168);
    lv_obj_set_height(ui_Label19, 21);
    lv_obj_set_x(ui_Label19, 181);
    lv_obj_set_y(ui_Label19, 56);
    lv_label_set_text(ui_Label19, " #112-4254320-1469868");
    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label19, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container4 = lv_obj_create(ui_Pending);
    lv_obj_remove_style_all(ui_Container4);
    lv_obj_set_width(ui_Container4, 566);
    lv_obj_set_height(ui_Container4, 93);
    lv_obj_set_x(ui_Container4, -6);
    lv_obj_set_y(ui_Container4, 224);
    lv_obj_clear_flag(ui_Container4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image12 = lv_img_create(ui_Container4);
    lv_img_set_src(ui_Image12, &ui_img_mug_png);
    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);   /// 60
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT);    /// 60
    lv_obj_set_x(ui_Image12, 12);
    lv_obj_set_y(ui_Image12, 7);
    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image12, 300);

    ui_Label20 = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_Label20, 436);
    lv_obj_set_height(ui_Label20, 46);
    lv_obj_set_x(ui_Label20, 115);
    lv_obj_set_y(ui_Label20, 17);
    lv_label_set_text(ui_Label20, "Rae -HOME OF THE BRAVE Coffee Mug *4th -Fourth- of July*- Dunn By Magenta");
    lv_obj_set_style_text_color(ui_Label20, lv_color_hex(0x343434), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label20, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_Label21, 69);
    lv_obj_set_height(ui_Label21, 21);
    lv_obj_set_x(ui_Label21, 114);
    lv_obj_set_y(ui_Label21, 55);
    lv_label_set_text(ui_Label21, "Order ID:");
    lv_obj_set_style_text_color(ui_Label21, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_Label22, 168);
    lv_obj_set_height(ui_Label22, 21);
    lv_obj_set_x(ui_Label22, 181);
    lv_obj_set_y(ui_Label22, 56);
    lv_label_set_text(ui_Label22, " #112-4254320-1469868");
    lv_obj_set_style_text_color(ui_Label22, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label22, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Unshipped = lv_tabview_add_tab(ui_TabView2, "Unshipped");

    ui_Canceled = lv_tabview_add_tab(ui_TabView2, "Canceled");

    ui_Shipped = lv_tabview_add_tab(ui_TabView2, "Shipped");

    ui_Button12 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button12, 100);
    lv_obj_set_height(ui_Button12, 21);
    lv_obj_set_x(ui_Button12, 327);
    lv_obj_set_y(ui_Button12, 232);
    lv_obj_add_flag(ui_Button12, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button12, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_style_radius(ui_Button12, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button12, lv_color_hex(0xFFE591), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label36 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label36, -23);
    lv_obj_set_y(ui_Label36, 4);
    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label36, "LocateGoods");
    lv_obj_set_style_text_color(ui_Label36, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label36, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label36, &ui_font_labelfont, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button13 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button13, 100);
    lv_obj_set_height(ui_Button13, 21);
    lv_obj_set_x(ui_Button13, 327);
    lv_obj_set_y(ui_Button13, 342);
    lv_obj_add_flag(ui_Button13, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button13, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_style_radius(ui_Button13, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button13, lv_color_hex(0xFFE591), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label37 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label37, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label37, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label37, -25);
    lv_obj_set_y(ui_Label37, 113);
    lv_obj_set_align(ui_Label37, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label37, "TTAGoods");
    lv_obj_set_style_text_color(ui_Label37, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label37, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label37, &ui_font_labelfont, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Image7, ui_event_Image7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Label13, ui_event_Label13, LV_EVENT_ALL, NULL);

}

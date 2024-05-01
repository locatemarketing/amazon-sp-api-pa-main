SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    screens/ui_Screen3.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_vector_png.c
    images/ui_img_package_png.c
    images/ui_img_view_orders_button_png.c
    images/ui_img_pa_rudolph_png.c
    images/ui_img_messages_png.c
    images/ui_img_mug_png.c
    images/ui_img_825004913.c
    images/ui_img_825004913.c
    images/ui_img_image_1_png.c
    fonts/ui_font_datefont.c
    fonts/ui_font_locategoodsfont.c
    fonts/ui_font_percentage_font_white.c
    fonts/ui_font_revenuetodayfont.c
    fonts/ui_font_revenue_order_number_font.c
    fonts/ui_font_timefont.c
    fonts/ui_font_welcomefont.c
    fonts/ui_font_labelfont.c)

add_library(ui ${SOURCES})

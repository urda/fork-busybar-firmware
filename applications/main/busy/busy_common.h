/**
 * @file busy_common.h
 * @brief Common BUSY application defines and variables.
 */
#pragma once

#include <stdbool.h>

#define BUSY_APP_THEME_NAME_DEFAULT                "busy"
#define BUSY_APP_THEME_NAME_CUSTOM_DEFAULT         "keep_out"
#define BUSY_APP_IS_SMART_HOME_ENABLED_DEFAULT     (true)
#define BUSY_APP_IS_SHOW_WORK_ONLY_ENABLED_DEFAULT (false)
#define BUSY_APP_IS_SHOW_WORK_TIME_ENABLED_DEFAULT (true)
#define BUSY_APP_WORK_TIME_SHOWN_MS_DEFAULT        (5000)
#define BUSY_APP_WORK_TIME_HIDDEN_MS_DEFAULT       (15000)
#define BUSY_APP_WORK_TIME_MS_MIN                  (1000)
#define BUSY_APP_WORK_TIME_MS_MAX                  (60000)

/**
 * @brief Maximum length of a theme name.
 */
#define BUSY_CONFIG_THEME_NAME_LEN (64)

/**
 * @brief BusyApp configuration structure.
 */
typedef struct {
    /** Name of the theme to be applied (same as the theme folder) */
    char theme_name[BUSY_CONFIG_THEME_NAME_LEN + 1];
    /** Enable the smart home (Matter) integration if @c true,
     *  do not enable otherwise */
    bool is_smart_home_enabled;
    /** Blank the front display in non-work states if @c true,
     *  regular behaviour otherwise */
    bool is_show_work_only_enabled;
    /** Show the remaining time throughout work if @c true,
     *  limit it to countdown and adjustment feedback otherwise */
    bool is_show_work_time_enabled;
    /** How long the remaining-time label stays visible during a work
     *  interval with a custom theme, in milliseconds */
    int work_time_shown_ms;
    /** How long the remaining-time label stays hidden during a work
     *  interval with a custom theme, in milliseconds */
    int work_time_hidden_ms;
} BusyAppConfig;

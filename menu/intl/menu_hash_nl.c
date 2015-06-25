/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2011-2015 - Daniel De Matteis
 *
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include <string.h>

#include <compat/strl.h>

#include "../menu_hash.h"

const char *menu_hash_to_str_nl(uint32_t hash)
{
   switch (hash)
   {
      case MENU_LABEL_VALUE_INFORMATION_LIST:
         return "Informatie";
      case MENU_LABEL_VALUE_USE_BUILTIN_PLAYER:
         return "Gebruik Ingebouwde Speler";
      case MENU_LABEL_VALUE_CONTENT_SETTINGS:
         return "Quick Menu";
      case MENU_LABEL_VALUE_RDB_ENTRY_CRC32:
         return "CRC32";
      case MENU_LABEL_VALUE_RDB_ENTRY_MD5:
         return "MD5";
      case MENU_LABEL_VALUE_LOAD_CONTENT_LIST:
         return "Laad Content";
      case MENU_VALUE_LOAD_ARCHIVE:
         return "Laad Archief";
      case MENU_VALUE_OPEN_ARCHIVE:
         return "Open Archief";
      case MENU_VALUE_ASK_ARCHIVE:
         return "Keuze";
      case MENU_LABEL_VALUE_PRIVACY_SETTINGS:
         return "Privacy Instellingen";
      case MENU_VALUE_HORIZONTAL_MENU:
         return "Horizontal Menu";
      case MENU_LABEL_VALUE_NO_SETTINGS_FOUND:
         return "Geen instellingen gevonden.";
      case MENU_LABEL_VALUE_NO_PERFORMANCE_COUNTERS:
         return "Geen prestatie tellers.";
      case MENU_LABEL_VALUE_DRIVER_SETTINGS:
         return "Driver Instellingen";
      case MENU_LABEL_VALUE_CONFIGURATION_SETTINGS:
         return "Configuratie Instellingen";
      case MENU_LABEL_VALUE_CORE_SETTINGS:
         return "Online Updater";
      case MENU_LABEL_VALUE_VIDEO_SETTINGS:
         return "Video Instellingen";
      case MENU_LABEL_VALUE_LOGGING_SETTINGS:
         return "Logging Instellingen";
      case MENU_LABEL_VALUE_SAVING_SETTINGS:
         return "Saving Instellingen";
      case MENU_LABEL_VALUE_REWIND_SETTINGS:
         return "Rewind Instellingen";
      case MENU_LABEL_VALUE_CUSTOM_VIEWPORT_1:
         return "Bovenlinkse Hoek Instellen";
      case MENU_LABEL_VALUE_CUSTOM_VIEWPORT_2:
         return "Benedenrechtse hoek instellen";
      case MENU_VALUE_SHADER:
         return "Shader";
      case MENU_VALUE_CHEAT:
         return "Cheat";
      case MENU_VALUE_USER:
         return "Gebruiker";
      case MENU_LABEL_VALUE_SYSTEM_BGM_ENABLE:
         return "Systeem BGM";
      case MENU_VALUE_RETROPAD:
         return "RetroPad";
      case MENU_VALUE_RETROKEYBOARD:
         return "RetroKeyboard";
      case MENU_LABEL_VALUE_AUDIO_BLOCK_FRAMES:
         return "Block Frames";
      case MENU_LABEL_VALUE_INPUT_BIND_MODE:
         return "Bind Mode";
      case MENU_LABEL_VALUE_AUTOCONFIG_DESCRIPTOR_LABEL_SHOW:
         return "Autoconfig Descriptie Labels Weergeven";
      case MENU_LABEL_VALUE_INPUT_DESCRIPTOR_LABEL_SHOW:
         return "Core Input Descriptie Labels Weergeven";
      case MENU_LABEL_VALUE_INPUT_DESCRIPTOR_HIDE_UNBOUND:
         return "Verbergen Niet-gemapte Core Input Descripties";
      case MENU_LABEL_VALUE_VIDEO_FONT_ENABLE:
         return "OSD Berichten Weergeven";
      case MENU_LABEL_VALUE_VIDEO_FONT_PATH:
         return "OSD Berichten Font";
      case MENU_LABEL_VALUE_VIDEO_FONT_SIZE:
         return "OSD Berichten Grootte";
      case MENU_LABEL_VALUE_VIDEO_MESSAGE_POS_X:
         return "OSD Berichten X-as positie";
      case MENU_LABEL_VALUE_VIDEO_MESSAGE_POS_Y:
         return "OSD Berichten Y-as positie";
      case MENU_LABEL_VALUE_VIDEO_SOFT_FILTER:
         return "Soft Filter";
      case MENU_LABEL_VALUE_VIDEO_FILTER_FLICKER:
         return "Flicker filter";
      case MENU_VALUE_DIRECTORY_CONTENT:
         return "<Content dir>";
      case MENU_VALUE_UNKNOWN:
         return "Onbekend";
      case MENU_VALUE_DONT_CARE:
         return "Onbelangrijk";
      case MENU_VALUE_LINEAR:
         return "Linear";
      case MENU_VALUE_NEAREST:
         return "Nearest";
      case MENU_VALUE_DIRECTORY_DEFAULT:
         return "<Standaard>";
      case MENU_VALUE_DIRECTORY_NONE:
         return "<Niets>";
      case MENU_VALUE_NOT_AVAILABLE:
         return "N.v.t";
      case MENU_LABEL_VALUE_INPUT_REMAPPING_DIRECTORY:
         return "Invoer Remapping Map";
      case MENU_LABEL_VALUE_JOYPAD_AUTOCONFIG_DIR:
         return "Invoerapparaten Autoconfig Map";
      case MENU_LABEL_VALUE_RECORDING_CONFIG_DIRECTORY:
         return "Opname Config Map";
      case MENU_LABEL_VALUE_RECORDING_OUTPUT_DIRECTORY:
         return "Opname Uitvoer Map";
      case MENU_LABEL_VALUE_SCREENSHOT_DIRECTORY:
         return "Screenshot Map";
      case MENU_LABEL_VALUE_PLAYLIST_DIRECTORY:
         return "Afspeellijsten Map";
      case MENU_LABEL_VALUE_SAVEFILE_DIRECTORY:
         return "Savebestand Map";
      case MENU_LABEL_VALUE_SAVESTATE_DIRECTORY:
         return "Savestate Map";
      case MENU_LABEL_VALUE_STDIN_CMD_ENABLE:
         return "stdin Commandos";
      case MENU_LABEL_VALUE_VIDEO_DRIVER:
         return "Video Driver";
      case MENU_LABEL_VALUE_RECORD_ENABLE:
         return "Opname";
      case MENU_LABEL_VALUE_VIDEO_GPU_RECORD:
         return "GPU Opname";
      case MENU_LABEL_VALUE_RECORD_PATH:
         return "Opname Pad";
      case MENU_LABEL_VALUE_RECORD_USE_OUTPUT_DIRECTORY:
         return "Gebruik uitvoer map";
      case MENU_LABEL_VALUE_RECORD_CONFIG:
         return "Opname Configuratie";
      case MENU_LABEL_VALUE_VIDEO_POST_FILTER_RECORD:
         return "Post filter opname activeren";
      case MENU_LABEL_VALUE_CORE_ASSETS_DIRECTORY:
         return "Core Assets Map";
      case MENU_LABEL_VALUE_ASSETS_DIRECTORY:
         return "Assets Map";
      case MENU_LABEL_VALUE_DYNAMIC_WALLPAPERS_DIRECTORY:
         return "Dynamische Wallpapers Map";
      case MENU_LABEL_VALUE_BOXARTS_DIRECTORY:
         return "Boxarts Map";
      case MENU_LABEL_VALUE_RGUI_BROWSER_DIRECTORY:
         return "Bestandsbeheer Map";
      case MENU_LABEL_VALUE_RGUI_CONFIG_DIRECTORY:
         return "Config Map";
      case MENU_LABEL_VALUE_LIBRETRO_INFO_PATH:
         return "Core Info Map";
      case MENU_LABEL_VALUE_LIBRETRO_DIR_PATH:
         return "Core Map";
      case MENU_LABEL_VALUE_CURSOR_DIRECTORY:
         return "Cursor Map";
      case MENU_LABEL_VALUE_CONTENT_DATABASE_DIRECTORY:
         return "Content Database Map";
      case MENU_LABEL_VALUE_SYSTEM_DIRECTORY:
         return "Systeem Map";
      case MENU_LABEL_VALUE_CHEAT_DATABASE_PATH:
         return "Cheat Bestand Map";
      case MENU_LABEL_VALUE_EXTRACTION_DIRECTORY:
         return "Archief uitpakken Map";
      case MENU_LABEL_VALUE_AUDIO_FILTER_DIR:
         return "Audio Filter Map";
      case MENU_LABEL_VALUE_VIDEO_SHADER_DIR:
         return "Video Shader Map";
      case MENU_LABEL_VALUE_VIDEO_FILTER_DIR:
         return "Video Filter Map";
      case MENU_LABEL_VALUE_OVERLAY_DIRECTORY:
         return "Overlay Map";
      case MENU_LABEL_VALUE_OSK_OVERLAY_DIRECTORY:
         return "OSK Overlay Map";
      case MENU_LABEL_VALUE_NETPLAY_CLIENT_SWAP_INPUT:
         return "Swap Netplay Input";
      case MENU_LABEL_VALUE_NETPLAY_SPECTATOR_MODE_ENABLE:
         return "Netplay Spectator Activeren";
      case MENU_LABEL_VALUE_NETPLAY_IP_ADDRESS:
         return "IP Adres";
      case MENU_LABEL_VALUE_NETPLAY_TCP_UDP_PORT:
         return "Netplay TCP/UDP Poort";
      case MENU_LABEL_VALUE_NETPLAY_ENABLE:
         return "Netplay Activeren";
      case MENU_LABEL_VALUE_NETPLAY_DELAY_FRAMES:
         return "Netplay Vertraging Frames";
      case MENU_LABEL_VALUE_NETPLAY_MODE:
         return "Netplay Client Activeren";
      case MENU_LABEL_VALUE_RGUI_SHOW_START_SCREEN:
         return "Start Scherm Weergeven";
      case MENU_LABEL_VALUE_TITLE_COLOR:
         return "Menu titel kleur";
      case MENU_LABEL_VALUE_ENTRY_HOVER_COLOR:
         return "Menu entry hover kleur";
      case MENU_LABEL_VALUE_TIMEDATE_ENABLE:
         return "Tijd/datum weergeven";
      case MENU_LABEL_VALUE_THREADED_DATA_RUNLOOP_ENABLE:
         return "Threaded data runloop";
      case MENU_LABEL_VALUE_ENTRY_NORMAL_COLOR:
         return "Menu entry normale kleur";
      case MENU_LABEL_VALUE_SHOW_ADVANCED_SETTINGS:
         return "Geavanceerde instellingen weergeven";
      case MENU_LABEL_VALUE_MOUSE_ENABLE:
         return "Muis Ondersteuning";
      case MENU_LABEL_VALUE_POINTER_ENABLE:
         return "Touch Ondersteuning";
      case MENU_LABEL_VALUE_CORE_ENABLE:
         return "Core naam weergeven";
      case MENU_LABEL_VALUE_DPI_OVERRIDE_ENABLE:
         return "DPI Override activeren";
      case MENU_LABEL_VALUE_DPI_OVERRIDE_VALUE:
         return "DPI Override";
      case MENU_LABEL_VALUE_SUSPEND_SCREENSAVER_ENABLE:
         return "Onderbreek Screensaver";
      case MENU_LABEL_VALUE_VIDEO_DISABLE_COMPOSITION:
         return "Desktop Compositie deactiveren";
      case MENU_LABEL_VALUE_PAUSE_NONACTIVE:
         return "Laat niet in achtergrond draaien";
      case MENU_LABEL_VALUE_UI_COMPANION_START_ON_BOOT:
         return "UI Companion Start Tijdens Boot";
      case MENU_LABEL_VALUE_UI_MENUBAR_ENABLE:
         return "Menubalk (Hint)";
      case MENU_LABEL_VALUE_ARCHIVE_MODE:
         return "Archief Bestand Associatie";
      case MENU_LABEL_VALUE_NETWORK_CMD_ENABLE:
         return "Netwerk Commandos";
      case MENU_LABEL_VALUE_NETWORK_CMD_PORT:
         return "Netwerk Commandos Poort";
      case MENU_LABEL_VALUE_HISTORY_LIST_ENABLE:
         return "Geschiedenislijst Activeren";
      case MENU_LABEL_VALUE_CONTENT_HISTORY_SIZE:
         return "Geschiedenislijst grootte";
      case MENU_LABEL_VALUE_VIDEO_REFRESH_RATE_AUTO:
         return "Geschatte Monitor Framerate";
      case MENU_LABEL_VALUE_DUMMY_ON_CORE_SHUTDOWN:
         return "Dummy Tijdens Core Shutdown";
      case MENU_LABEL_VALUE_CORE_SET_SUPPORTS_NO_CONTENT_ENABLE:
         return "Niet automatisch core opstarten";
      case MENU_LABEL_VALUE_FRAME_THROTTLE_SETTINGS:
         return "Beperk Maximale Afspeelsnelheid";
      case MENU_LABEL_VALUE_FASTFORWARD_RATIO:
         return "Maximale Afspeelsnelheid";
      case MENU_LABEL_VALUE_AUTO_REMAPS_ENABLE:
         return "Laad Remap Bestanden Automatisch";
      case MENU_LABEL_VALUE_SLOWMOTION_RATIO:
         return "Slow-Motion Ratio";
      case MENU_LABEL_VALUE_CORE_SPECIFIC_CONFIG:
         return "Configuratie Per-Core";
      case MENU_LABEL_VALUE_AUTO_OVERRIDES_ENABLE:
         return "Laad Override Bestanden Automatisch";
      case MENU_LABEL_VALUE_CONFIG_SAVE_ON_EXIT:
         return "Configuratie Opslaan Tijdens Afsluiten";
      case MENU_LABEL_VALUE_VIDEO_SMOOTH:
         return "Hardware Bilinear Filtering";
      case MENU_LABEL_VALUE_VIDEO_GAMMA:
         return "Video Gamma";
      case MENU_LABEL_VALUE_VIDEO_ALLOW_ROTATE:
         return "Rotatie toestaan";
      case MENU_LABEL_VALUE_VIDEO_HARD_SYNC:
         return "Harde GPU Synchronisatie";
      case MENU_LABEL_VALUE_VIDEO_SWAP_INTERVAL:
         return "VSync Swap Interval";
      case MENU_LABEL_VALUE_VIDEO_VSYNC:
         return "VSync";
      case MENU_LABEL_VALUE_VIDEO_THREADED:
         return "Threaded Video";
      case MENU_LABEL_VALUE_VIDEO_ROTATION:
         return "Rotatie";
      case MENU_LABEL_VALUE_VIDEO_GPU_SCREENSHOT:
         return "GPU Screenshot Activeren";
      case MENU_LABEL_VALUE_VIDEO_CROP_OVERSCAN:
         return "Overscan Afsnijden (Herladen vereist)";
      case MENU_LABEL_VALUE_VIDEO_ASPECT_RATIO_INDEX:
         return "Beeldverhouding Index";
      case MENU_LABEL_VALUE_VIDEO_ASPECT_RATIO_AUTO:
         return "Auto Beeldverhouding";
      case MENU_LABEL_VALUE_VIDEO_FORCE_ASPECT:
         return "Forceer beeldverhouding";
      case MENU_LABEL_VALUE_VIDEO_REFRESH_RATE:
         return "Refresh Rate";
      case MENU_LABEL_VALUE_VIDEO_FORCE_SRGB_DISABLE:
         return "Handmatig sRGB FBO deactiveren";
      case MENU_LABEL_VALUE_VIDEO_WINDOWED_FULLSCREEN:
         return "Windowed Fullscreen Mode"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_PAL60_ENABLE:
         return "PAL60 Mode Activeren";
      case MENU_LABEL_VALUE_VIDEO_VFILTER:
         return "Deflicker"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_VIDEO_VI_WIDTH:
         return "VI Scherm Breedte Instellen";
      case MENU_LABEL_VALUE_VIDEO_BLACK_FRAME_INSERTION:
         return "Zwarte Frame Injectie";
      case MENU_LABEL_VALUE_VIDEO_HARD_SYNC_FRAMES:
         return "Harde GPU Sync Frames";
      case MENU_LABEL_VALUE_SORT_SAVEFILES_ENABLE:
         return "Saves Sorteren In Map";
      case MENU_LABEL_VALUE_SORT_SAVESTATES_ENABLE:
         return "Savestates Sorteren In Map";
      case MENU_LABEL_VALUE_VIDEO_FULLSCREEN:
         return "Gebruik Fullscreen Mode";
      case MENU_LABEL_VALUE_VIDEO_SCALE:
         return "Windowed Schalering";
      case MENU_LABEL_VALUE_VIDEO_SCALE_INTEGER:
         return "Gehele schalering";
      case MENU_LABEL_VALUE_PERFCNT_ENABLE:
         return "Prestatie Teller";
      case MENU_LABEL_VALUE_LIBRETRO_LOG_LEVEL:
         return "Core Logging Niveau";
      case MENU_LABEL_VALUE_LOG_VERBOSITY:
         return "Logging Verbosity"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_SAVESTATE_AUTO_LOAD:
         return "Automatisch State Loaden";
      case MENU_LABEL_VALUE_SAVESTATE_AUTO_INDEX:
         return "Save State Automatische Index";
      case MENU_LABEL_VALUE_SAVESTATE_AUTO_SAVE:
         return "Automatisch State Saven";
      case MENU_LABEL_VALUE_AUTOSAVE_INTERVAL:
         return "SaveRAM Autosave Interval";
      case MENU_LABEL_VALUE_BLOCK_SRAM_OVERWRITE:
         return "SaveRAM niet overschrijven tijdens laden van savestate";
      case MENU_LABEL_VALUE_VIDEO_SHARED_CONTEXT:
         return "HW Shared Context Activeren";
      case MENU_LABEL_VALUE_RESTART_RETROARCH:
         return "RetroArch Opnieuw Opstarten";
      case MENU_LABEL_VALUE_NETPLAY_NICKNAME:
         return "Gebruikersnaam";
      case MENU_LABEL_VALUE_USER_LANGUAGE:
         return "Taal";
      case MENU_LABEL_VALUE_CAMERA_ALLOW:
         return "Camera Toestaan";
      case MENU_LABEL_VALUE_LOCATION_ALLOW:
         return "Locatie Toestaan";
      case MENU_LABEL_VALUE_PAUSE_LIBRETRO:
         return "Pauseer als menu op voorgrond is";
      case MENU_LABEL_VALUE_INPUT_OSK_OVERLAY_ENABLE:
         return "Toetsenbord Overlay Weergeven";
      case MENU_LABEL_VALUE_INPUT_OVERLAY_ENABLE:
         return "Overlay Weergeven";
      case MENU_LABEL_VALUE_VIDEO_MONITOR_INDEX:
         return "Monitor Index";
      case MENU_LABEL_VALUE_VIDEO_FRAME_DELAY:
         return "Frame Delay"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_INPUT_DUTY_CYCLE:
         return "Duty Cycle"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_INPUT_TURBO_PERIOD:
         return "Turbo Period"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_INPUT_AXIS_THRESHOLD:
         return "Invoer As Threshold"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_INPUT_REMAP_BINDS_ENABLE:
         return "Remap Binds Activeren";
      case MENU_LABEL_VALUE_INPUT_MAX_USERS:
         return "Maximaal aantal gebruikers";
      case MENU_LABEL_VALUE_INPUT_AUTODETECT_ENABLE:
         return "Autoconfiguratie Activeren";
      case MENU_LABEL_VALUE_AUDIO_OUTPUT_RATE:
         return "Audio Uitvoer Frequentie (KHz)";
      case MENU_LABEL_VALUE_AUDIO_MAX_TIMING_SKEW:
         return "Audio Maximum Timing Skew"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_CHEAT_NUM_PASSES:
         return "Cheat Passes";
      case MENU_LABEL_VALUE_REMAP_FILE_SAVE_CORE:
         return "Core Remap Bestand Opslaan";
      case MENU_LABEL_VALUE_REMAP_FILE_SAVE_GAME:
         return "Game Remap Bestand Opslaan";
      case MENU_LABEL_VALUE_CHEAT_APPLY_CHANGES:
         return "Cheat Instellingen Toepassen";
      case MENU_LABEL_VALUE_SHADER_APPLY_CHANGES:
         return "Shader Instellingen Toepassen";
      case MENU_LABEL_VALUE_REWIND_ENABLE:
         return "Rewind Activeren";
      case MENU_LABEL_VALUE_CONTENT_COLLECTION_LIST:
         return "Selecteer uit verzameling";
      case MENU_LABEL_VALUE_DETECT_CORE_LIST:
         return "Selecteer bestand en detecteer Core";
      case MENU_LABEL_VALUE_LOAD_CONTENT_HISTORY:
         return "Selecteer uit geschiedenis";
      case MENU_LABEL_VALUE_AUDIO_ENABLE:
         return "Audio Activeren";
      case MENU_LABEL_VALUE_FPS_SHOW:
         return "Framerate Weergeven";
      case MENU_LABEL_VALUE_AUDIO_MUTE:
         return "Audio Mute"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_AUDIO_VOLUME:
         return "Audio Uitgangsniveau (dB)";
      case MENU_LABEL_VALUE_AUDIO_SYNC:
         return "Audio Synchronizatie Activeren";
      case MENU_LABEL_VALUE_AUDIO_RATE_CONTROL_DELTA:
         return "Audio Rate Control Delta"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_VIDEO_SHADER_NUM_PASSES:
         return "Shader Passes"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_RDB_ENTRY_SHA1:
         return "SHA1";
      case MENU_LABEL_VALUE_CONFIGURATIONS:
         return "Laad Configuratie Bestand";
      case MENU_LABEL_VALUE_REWIND_GRANULARITY:
         return "Rewind Granulariteit";
      case MENU_LABEL_VALUE_REMAP_FILE_LOAD:
         return "Laad Remap Bestand";
      case MENU_LABEL_VALUE_REMAP_FILE_SAVE_AS:
         return "Remap Bestand Opslaan Als";
      case MENU_LABEL_VALUE_CUSTOM_RATIO:
         return "Handmatige beeldverhouding";
      case MENU_LABEL_VALUE_USE_THIS_DIRECTORY:
         return "<Deze directory gebruiken>";
      case MENU_LABEL_VALUE_RDB_ENTRY_START_CONTENT:
         return "Content Opstarten";
      case MENU_LABEL_VALUE_DISK_OPTIONS:
         return "Core Disk Opties";
      case MENU_LABEL_VALUE_CORE_OPTIONS:
         return "Core Opties";
      case MENU_LABEL_VALUE_CORE_CHEAT_OPTIONS:
         return "Core Cheat Opties";
      case MENU_LABEL_VALUE_CHEAT_FILE_LOAD:
         return "Cheat Bestand Laden";
      case MENU_LABEL_VALUE_CHEAT_FILE_SAVE_AS:
         return "Cheat Bestand Opslaan Als";
      case MENU_LABEL_VALUE_CORE_COUNTERS:
         return "Core Prestatie Tellers";
      case MENU_LABEL_VALUE_TAKE_SCREENSHOT:
         return "Maak Screenshot";
      case MENU_LABEL_VALUE_RESUME:
         return "Hervatten";
      case MENU_LABEL_VALUE_DISK_INDEX:
         return "Disk Index";
      case MENU_LABEL_VALUE_FRONTEND_COUNTERS:
         return "Frontend Prestatie Tellers";
      case MENU_LABEL_VALUE_DISK_IMAGE_APPEND:
         return "Disk Image Toevoegen";
      case MENU_LABEL_VALUE_DISK_CYCLE_TRAY_STATUS:
         return "Disk Cycle Tray Status"; /* TODO/FIXME */
      case MENU_LABEL_VALUE_NO_PLAYLIST_ENTRIES_AVAILABLE:
         return "Geen afspeellijst items beschikbaar.";
      case MENU_LABEL_VALUE_NO_CORE_INFORMATION_AVAILABLE:
         return "Geen core informatie beschikbaar.";
      case MENU_LABEL_VALUE_NO_CORE_OPTIONS_AVAILABLE:
         return "Geen core opties beschikbaar.";
      case MENU_LABEL_VALUE_NO_CORES_AVAILABLE:
         return "Geen cores beschikbaar.";
      case MENU_VALUE_NO_CORE:
         return "Geen core";
      case MENU_LABEL_VALUE_DATABASE_MANAGER:
         return "Database Manager";
      case MENU_LABEL_VALUE_CURSOR_MANAGER:
         return "Cursor Manager";
      case MENU_VALUE_RECORDING_SETTINGS:
         return "Opname Instellingen";
      case MENU_VALUE_MAIN_MENU:
         return "Main Menu";
      case MENU_LABEL_VALUE_SETTINGS:
         return "Instellingen";
      case MENU_LABEL_VALUE_QUIT_RETROARCH:
         return "RetroArch Afsluiten";
      case MENU_LABEL_VALUE_HELP:
         return "Help";
      case MENU_LABEL_VALUE_SAVE_NEW_CONFIG:
         return "Nieuwe configuratie opslaan";
      case MENU_LABEL_VALUE_RESTART_CONTENT:
         return "Herstart Content";
      case MENU_LABEL_VALUE_CORE_UPDATER_LIST:
         return "Core Updater";
      case MENU_LABEL_VALUE_CORE_UPDATER_BUILDBOT_URL:
         return "Buildbot Cores URL";
      case MENU_LABEL_VALUE_BUILDBOT_ASSETS_URL:
         return "Buildbot Assets URL";
      case MENU_LABEL_VALUE_NAVIGATION_WRAPAROUND_HORIZONTAL:
         return "Navigation Wrap-Around Horizontaal";
      case MENU_LABEL_VALUE_NAVIGATION_WRAPAROUND_VERTICAL:
         return "Navigation Wrap-Around Verticaal";
      case MENU_LABEL_VALUE_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE:
         return "Filter op ondersteunde extensies";
      case MENU_LABEL_VALUE_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE:
         return "Automatisch uitpakken van gedownloade archieven";
      case MENU_LABEL_VALUE_SYSTEM_INFORMATION:
         return "Systeem Informatie";
      case MENU_LABEL_VALUE_ONLINE_UPDATER:
         return "Online Updater";
      case MENU_LABEL_VALUE_CORE_INFORMATION:
         return "Core Informatie";
      case MENU_LABEL_VALUE_DIRECTORY_NOT_FOUND:
         return "Directory niet gevonden.";
      case MENU_LABEL_VALUE_NO_ITEMS:
         return "Geen items.";
      case MENU_LABEL_VALUE_CORE_LIST:
         return "Laad Core";
      case MENU_LABEL_VALUE_LOAD_CONTENT:
         return "Selecteer bestand";
      case MENU_LABEL_VALUE_CLOSE_CONTENT:
         return "Content afsluiten";
      case MENU_LABEL_VALUE_MANAGEMENT:
         return "Database Instellingen";
      case MENU_LABEL_VALUE_SAVE_STATE:
         return "Save State";
      case MENU_LABEL_VALUE_LOAD_STATE:
         return "Laad State";
      case MENU_LABEL_VALUE_RESUME_CONTENT:
         return "Hervatten van Content";
      case MENU_LABEL_VALUE_INPUT_DRIVER:
         return "Input Driver";
      case MENU_LABEL_VALUE_AUDIO_DRIVER:
         return "Audio Driver";
      case MENU_LABEL_VALUE_JOYPAD_DRIVER:
         return "Joypad Driver";
      case MENU_LABEL_VALUE_AUDIO_RESAMPLER_DRIVER:
         return "Audio Resampler Driver";
      case MENU_LABEL_VALUE_RECORD_DRIVER:
         return "Opname Driver";
      case MENU_LABEL_VALUE_MENU_DRIVER:
         return "Menu Driver";
      case MENU_LABEL_VALUE_CAMERA_DRIVER:
         return "Camera Driver";
      case MENU_LABEL_VALUE_LOCATION_DRIVER:
         return "Locatie Driver";
      case MENU_LABEL_VALUE_UNABLE_TO_READ_COMPRESSED_FILE:
         return "Fout opgetreden tijdens lezen van gecomprimeerd bestand.";
      case MENU_LABEL_VALUE_OVERLAY_SCALE:
         return "Overlay Schalering";
      case MENU_LABEL_VALUE_OVERLAY_PRESET:
         return "Overlay Preset";
      case MENU_LABEL_VALUE_AUDIO_LATENCY:
         return "Audio Latency (ms)";
      case MENU_LABEL_VALUE_AUDIO_DEVICE:
         return "Audio Apparaat";
      case MENU_LABEL_VALUE_KEYBOARD_OVERLAY_PRESET:
         return "Toetsenbord Overlay Preset";
      case MENU_LABEL_VALUE_OVERLAY_OPACITY:
         return "Overlay Transparentie";
      case MENU_LABEL_VALUE_MENU_WALLPAPER:
         return "Menu Wallpaper";
      case MENU_LABEL_VALUE_DYNAMIC_WALLPAPER:
         return "Dynamic Wallpaper";
      case MENU_LABEL_VALUE_BOXART:
         return "Boxart weergeven";
      case MENU_LABEL_VALUE_CORE_INPUT_REMAPPING_OPTIONS:
         return "Core Invoer Remapping Opties";
      case MENU_LABEL_VALUE_SHADER_OPTIONS:
         return "Shader Opties";
      case MENU_LABEL_VALUE_VIDEO_SHADER_PARAMETERS:
         return "Huidige Shader Parameters";
      case MENU_LABEL_VALUE_VIDEO_SHADER_PRESET_PARAMETERS:
         return "Menu Shader Parameters";
      case MENU_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_AS:
         return "Shader Preset Opslaan Als";
      case MENU_LABEL_VALUE_NO_SHADER_PARAMETERS:
         return "Geen shader parameters.";
      case MENU_LABEL_VALUE_VIDEO_SHADER_PRESET:
         return "Laad Shader Preset";
      case MENU_LABEL_VALUE_VIDEO_FILTER:
         return "Video Filter";
      case MENU_LABEL_VALUE_AUDIO_DSP_PLUGIN:
         return "Audio DSP Plugin";
      case MENU_LABEL_VALUE_STARTING_DOWNLOAD:
         return "Download starten: ";
      case MENU_VALUE_SECONDS:
         return "secondes";
      case MENU_VALUE_OFF:
         return "OFF";
      case MENU_VALUE_ON:
         return "ON";
      case MENU_LABEL_VALUE_UPDATE_ASSETS:
         return "Update Assets";
      case MENU_LABEL_VALUE_UPDATE_CHEATS:
         return "Update Cheats";
      case MENU_LABEL_VALUE_UPDATE_AUTOCONFIG_PROFILES:
         return "Update Autoconfiguratie Profielen";
      case MENU_LABEL_VALUE_UPDATE_DATABASES:
         return "Update Databases";
      case MENU_LABEL_VALUE_UPDATE_OVERLAYS:
         return "Update Overlays";
      case MENU_LABEL_VALUE_UPDATE_CG_SHADERS:
         return "Update Cg Shaders";
      case MENU_LABEL_VALUE_UPDATE_GLSL_SHADERS:
         return "Update GLSL Shaders";
      case MENU_LABEL_VALUE_CORE_INFO_CORE_NAME:
         return "Core naam";
      case MENU_LABEL_VALUE_CORE_INFO_CORE_LABEL:
         return "Core label";
      case MENU_LABEL_VALUE_CORE_INFO_SYSTEM_NAME:
         return "Systeem naam";
      case MENU_LABEL_VALUE_CORE_INFO_SYSTEM_MANUFACTURER:
         return "Systeem fabrikant";
      case MENU_LABEL_VALUE_CORE_INFO_CATEGORIES:
         return "Categories"; /* TODO/FIXME - need accented characters here */
      case MENU_LABEL_VALUE_CORE_INFO_AUTHORS:
         return "Auteur(s)";
      case MENU_LABEL_VALUE_CORE_INFO_PERMISSIONS:
         return "Permissies";
      case MENU_LABEL_VALUE_CORE_INFO_LICENSES:
         return "Licentie(s)";
      case MENU_LABEL_VALUE_CORE_INFO_SUPPORTED_EXTENSIONS:
         return "Ondersteunde extensies";
      case MENU_LABEL_VALUE_CORE_INFO_FIRMWARE:
         return "Firmware";
      case MENU_LABEL_VALUE_CORE_INFO_CORE_NOTES:
         return "Core opmerkingen";
      case MENU_LABEL_VALUE_SYSTEM_INFO_BUILD_DATE:
         return "Build datum";
      case MENU_LABEL_VALUE_SYSTEM_INFO_GIT_VERSION:
         return "Git versie";
      case MENU_LABEL_VALUE_SYSTEM_INFO_CPU_FEATURES:
         return "CPU Features";
      case MENU_LABEL_VALUE_SYSTEM_INFO_FRONTEND_IDENTIFIER:
         return "Frontend identificatie";
      case MENU_LABEL_VALUE_SYSTEM_INFO_FRONTEND_NAME:
         return "Frontend naam";
      case MENU_LABEL_VALUE_SYSTEM_INFO_FRONTEND_OS:
         return "Frontend OS";
      case MENU_LABEL_VALUE_SYSTEM_INFO_RETRORATING_LEVEL:
         return "RetroRating level";
      case MENU_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE:
         return "Energie bron";
      case MENU_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_NO_SOURCE:
         return "Geen bron";
      case MENU_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGING:
         return "Opladen";
      case MENU_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGED:
         return "Charged";
      case MENU_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_DISCHARGING:
         return "Discharging";
      case MENU_LABEL_VALUE_SYSTEM_INFO_VIDEO_CONTEXT_DRIVER:
         return "Video context driver";
      case MENU_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_WIDTH:
         return "Display metric breedte (mm)";
      case MENU_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_HEIGHT:
         return "Display metric hoogte (mm)";
      case MENU_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_DPI:
         return "Display metric DPI";
      case MENU_LABEL_VALUE_SYSTEM_INFO_LIBRETRODB_SUPPORT:
         return "LibretroDB ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_OVERLAY_SUPPORT:
         return "Overlay ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_COMMAND_IFACE_SUPPORT:
         return "Command interface ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_NETWORK_COMMAND_IFACE_SUPPORT:
         return "Network Command interface ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_COCOA_SUPPORT:
         return "Cocoa ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_RPNG_SUPPORT:
         return "PNG ondersteuning (RPNG)";
      case MENU_LABEL_VALUE_SYSTEM_INFO_SDL_SUPPORT:
         return "SDL1.2 ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_SDL2_SUPPORT:
         return "SDL2 ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_OPENGL_SUPPORT:
         return "OpenGL ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_OPENGLES_SUPPORT:
         return "OpenGL ES ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_THREADING_SUPPORT:
         return "Threading ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_KMS_SUPPORT:
         return "KMS/EGL ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_UDEV_SUPPORT:
         return "Udev ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_OPENVG_SUPPORT:
         return "OpenVG ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_EGL_SUPPORT:
         return "EGL ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_X11_SUPPORT:
         return "X11 ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_WAYLAND_SUPPORT:
         return "Wayland ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_XVIDEO_SUPPORT:
         return "XVideo ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_ALSA_SUPPORT:
         return "ALSA ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_OSS_SUPPORT:
         return "OSS ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_OPENAL_SUPPORT:
         return "OpenAL ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_OPENSL_SUPPORT:
         return "OpenSL ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_RSOUND_SUPPORT:
         return "RSound ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_ROARAUDIO_SUPPORT:
         return "RoarAudio ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_JACK_SUPPORT:
         return "JACK ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_PULSEAUDIO_SUPPORT:
         return "PulseAudio ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_DSOUND_SUPPORT:
         return "DirectSound ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_XAUDIO2_SUPPORT:
         return "XAudio2 ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_ZLIB_SUPPORT:
         return "Zlib ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_7ZIP_SUPPORT:
         return "7zip ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_DYLIB_SUPPORT:
         return "Dynamic library ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_CG_SUPPORT:
         return "Cg ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_GLSL_SUPPORT:
         return "GLSL ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_HLSL_SUPPORT:
         return "HLSL ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_LIBXML2_SUPPORT:
         return "libxml2 XML parsing ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_SDL_IMAGE_SUPPORT:
         return "SDL afbeeldingen ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_FBO_SUPPORT:
         return "OpenGL/Direct3D render-to-texture (multi-pass shaders) ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_FFMPEG_SUPPORT:
         return "FFmpeg ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_CORETEXT_SUPPORT:
         return "CoreText ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_FREETYPE_SUPPORT:
         return "FreeType ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_NETPLAY_SUPPORT:
         return "Netplay (peer-to-peer) ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_PYTHON_SUPPORT:
         return "Python (script ondersteuning in shaders) ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_V4L2_SUPPORT:
         return "Video4Linux2 ondersteuning";
      case MENU_LABEL_VALUE_SYSTEM_INFO_LIBUSB_SUPPORT:
         return "Libusb ondersteuning";
      case MENU_LABEL_VALUE_YES:
         return "Ja";
      case MENU_LABEL_VALUE_NO:
         return "Nee";
      case MENU_LABEL_VALUE_SCREEN_RESOLUTION:
         return "Scherm Resolutie";
      case MENU_VALUE_BACK:
         return "TERUG";
      case MENU_VALUE_DISABLED:
         return "Uitgeschakeld";
      case MENU_VALUE_PORT:
         return "Poort";
      case MENU_VALUE_NONE:
         return "Geen";
      default:
         break;
   }

   return "null";
}

int menu_hash_get_help_nl(uint32_t hash, char *s, size_t len)
{
   switch (hash)
   {
      default:
         strlcpy(s, "Geen informatie beschikbaar.", len);
         return -1;
   }

   return 0;
}

#ifndef RFID_SIMULATOR_H
#define RFID_SIMULATOR_H

#include <furi.h>
#include <gui/gui.h>

typedef enum {
    EventTypeTick,
    EventTypeKey,
} EventType;

typedef struct {
    EventType type;
    InputEvent input;
} PluginEvent;

typedef struct {
    FuriMutex* mutex;
    int x;
    int y;
} PluginState;

#endif // RFID_SIMULATOR_H

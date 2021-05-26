// Copyright (c) 2018 Cirque Corp. Restrictions apply. See: www.cirque.com/sw-license

#pragma once

#include "quantum.h"

// Convenient way to store and access measurements
typedef struct {
    uint16_t xValue;
    uint16_t yValue;
    uint16_t zValue;
    uint8_t  buttonFlags;
    bool     touchDown;
} absData_t;

extern absData_t touchData;

void Pinnacle_GetAbsolute(absData_t* result);
void Pinnacle_ClearFlags(void);
void Pinnacle_EnableFeed(bool feedEnable);
void ERA_ReadBytes(uint16_t address, uint8_t* data, uint16_t count);
void ERA_WriteByte(uint16_t address, uint8_t data);
void RAP_ReadBytes(uint8_t address, uint8_t* data, uint8_t count);
void RAP_Write(uint8_t address, uint8_t data);
void ClipCoordinates(absData_t* coordinates);
void ScaleData(absData_t* coordinates, uint16_t xResolution, uint16_t yResolution);

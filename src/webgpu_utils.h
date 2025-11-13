#pragma once
#include "application.h"

void wgpuPollEvents(Device device, bool yieldToWebBrowser);

uint32_t ceilToNextMultiple(uint32_t value, uint32_t step);
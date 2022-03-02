/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t psyche_info = {
    .hwc_value = "CN",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "psyche",
    .marketname = "Xiaomi 12X",
    .model = "2112123AC",
    .build_fingerprint = "Xiaomi/psyche/psyche:11/RKQ1.200826.002/V13.0.12.0.RLDCNXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    psyche_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}

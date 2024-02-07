// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See safe_struct_generator.py for modifications

/***************************************************************************
 *
 * Copyright (c) 2015-2024 The Khronos Group Inc.
 * Copyright (c) 2015-2024 Valve Corporation
 * Copyright (c) 2015-2024 LunarG, Inc.
 * Copyright (c) 2015-2024 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ****************************************************************************/

// NOLINTBEGIN

#include "vk_safe_struct.h"
#include <vulkan/utility/vk_struct_helper.hpp>
#include "utils/vk_layer_utils.h"

#include <cstddef>
#include <cassert>
#include <cstring>
#include <vector>

#include <vulkan/vk_layer.h>

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier(const VkBufferMemoryBarrier* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcAccessMask(in_struct->srcAccessMask),
      dstAccessMask(in_struct->dstAccessMask),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      buffer(in_struct->buffer),
      offset(in_struct->offset),
      size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier()
    : sType(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER),
      pNext(nullptr),
      srcAccessMask(),
      dstAccessMask(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      buffer(),
      offset(),
      size() {}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier(const safe_VkBufferMemoryBarrier& copy_src) {
    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferMemoryBarrier& safe_VkBufferMemoryBarrier::operator=(const safe_VkBufferMemoryBarrier& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferMemoryBarrier::~safe_VkBufferMemoryBarrier() { FreePnextChain(pNext); }

void safe_VkBufferMemoryBarrier::initialize(const VkBufferMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferMemoryBarrier::initialize(const safe_VkBufferMemoryBarrier* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier(const VkImageMemoryBarrier* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcAccessMask(in_struct->srcAccessMask),
      dstAccessMask(in_struct->dstAccessMask),
      oldLayout(in_struct->oldLayout),
      newLayout(in_struct->newLayout),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      image(in_struct->image),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier()
    : sType(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER),
      pNext(nullptr),
      srcAccessMask(),
      dstAccessMask(),
      oldLayout(),
      newLayout(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      image(),
      subresourceRange() {}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier(const safe_VkImageMemoryBarrier& copy_src) {
    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageMemoryBarrier& safe_VkImageMemoryBarrier::operator=(const safe_VkImageMemoryBarrier& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageMemoryBarrier::~safe_VkImageMemoryBarrier() { FreePnextChain(pNext); }

void safe_VkImageMemoryBarrier::initialize(const VkImageMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    image = in_struct->image;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageMemoryBarrier::initialize(const safe_VkImageMemoryBarrier* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    oldLayout = copy_src->oldLayout;
    newLayout = copy_src->newLayout;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    image = copy_src->image;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryBarrier::safe_VkMemoryBarrier(const VkMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType), srcAccessMask(in_struct->srcAccessMask), dstAccessMask(in_struct->dstAccessMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryBarrier::safe_VkMemoryBarrier()
    : sType(VK_STRUCTURE_TYPE_MEMORY_BARRIER), pNext(nullptr), srcAccessMask(), dstAccessMask() {}

safe_VkMemoryBarrier::safe_VkMemoryBarrier(const safe_VkMemoryBarrier& copy_src) {
    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryBarrier& safe_VkMemoryBarrier::operator=(const safe_VkMemoryBarrier& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryBarrier::~safe_VkMemoryBarrier() { FreePnextChain(pNext); }

void safe_VkMemoryBarrier::initialize(const VkMemoryBarrier* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryBarrier::initialize(const safe_VkMemoryBarrier* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks(const VkAllocationCallbacks* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state)
    : pUserData(in_struct->pUserData),
      pfnAllocation(in_struct->pfnAllocation),
      pfnReallocation(in_struct->pfnReallocation),
      pfnFree(in_struct->pfnFree),
      pfnInternalAllocation(in_struct->pfnInternalAllocation),
      pfnInternalFree(in_struct->pfnInternalFree) {}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks()
    : pUserData(nullptr), pfnAllocation(), pfnReallocation(), pfnFree(), pfnInternalAllocation(), pfnInternalFree() {}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks(const safe_VkAllocationCallbacks& copy_src) {
    pUserData = copy_src.pUserData;
    pfnAllocation = copy_src.pfnAllocation;
    pfnReallocation = copy_src.pfnReallocation;
    pfnFree = copy_src.pfnFree;
    pfnInternalAllocation = copy_src.pfnInternalAllocation;
    pfnInternalFree = copy_src.pfnInternalFree;
}

safe_VkAllocationCallbacks& safe_VkAllocationCallbacks::operator=(const safe_VkAllocationCallbacks& copy_src) {
    if (&copy_src == this) return *this;

    pUserData = copy_src.pUserData;
    pfnAllocation = copy_src.pfnAllocation;
    pfnReallocation = copy_src.pfnReallocation;
    pfnFree = copy_src.pfnFree;
    pfnInternalAllocation = copy_src.pfnInternalAllocation;
    pfnInternalFree = copy_src.pfnInternalFree;

    return *this;
}

safe_VkAllocationCallbacks::~safe_VkAllocationCallbacks() {}

void safe_VkAllocationCallbacks::initialize(const VkAllocationCallbacks* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    pUserData = in_struct->pUserData;
    pfnAllocation = in_struct->pfnAllocation;
    pfnReallocation = in_struct->pfnReallocation;
    pfnFree = in_struct->pfnFree;
    pfnInternalAllocation = in_struct->pfnInternalAllocation;
    pfnInternalFree = in_struct->pfnInternalFree;
}

void safe_VkAllocationCallbacks::initialize(const safe_VkAllocationCallbacks* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    pUserData = copy_src->pUserData;
    pfnAllocation = copy_src->pfnAllocation;
    pfnReallocation = copy_src->pfnReallocation;
    pfnFree = copy_src->pfnFree;
    pfnInternalAllocation = copy_src->pfnInternalAllocation;
    pfnInternalFree = copy_src->pfnInternalFree;
}

safe_VkApplicationInfo::safe_VkApplicationInfo(const VkApplicationInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                               bool copy_pnext)
    : sType(in_struct->sType),
      applicationVersion(in_struct->applicationVersion),
      engineVersion(in_struct->engineVersion),
      apiVersion(in_struct->apiVersion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pApplicationName = SafeStringCopy(in_struct->pApplicationName);
    pEngineName = SafeStringCopy(in_struct->pEngineName);
}

safe_VkApplicationInfo::safe_VkApplicationInfo()
    : sType(VK_STRUCTURE_TYPE_APPLICATION_INFO),
      pNext(nullptr),
      pApplicationName(nullptr),
      applicationVersion(),
      pEngineName(nullptr),
      engineVersion(),
      apiVersion() {}

safe_VkApplicationInfo::safe_VkApplicationInfo(const safe_VkApplicationInfo& copy_src) {
    sType = copy_src.sType;
    applicationVersion = copy_src.applicationVersion;
    engineVersion = copy_src.engineVersion;
    apiVersion = copy_src.apiVersion;
    pNext = SafePnextCopy(copy_src.pNext);
    pApplicationName = SafeStringCopy(copy_src.pApplicationName);
    pEngineName = SafeStringCopy(copy_src.pEngineName);
}

safe_VkApplicationInfo& safe_VkApplicationInfo::operator=(const safe_VkApplicationInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pApplicationName) delete[] pApplicationName;
    if (pEngineName) delete[] pEngineName;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    applicationVersion = copy_src.applicationVersion;
    engineVersion = copy_src.engineVersion;
    apiVersion = copy_src.apiVersion;
    pNext = SafePnextCopy(copy_src.pNext);
    pApplicationName = SafeStringCopy(copy_src.pApplicationName);
    pEngineName = SafeStringCopy(copy_src.pEngineName);

    return *this;
}

safe_VkApplicationInfo::~safe_VkApplicationInfo() {
    if (pApplicationName) delete[] pApplicationName;
    if (pEngineName) delete[] pEngineName;
    FreePnextChain(pNext);
}

void safe_VkApplicationInfo::initialize(const VkApplicationInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pApplicationName) delete[] pApplicationName;
    if (pEngineName) delete[] pEngineName;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    applicationVersion = in_struct->applicationVersion;
    engineVersion = in_struct->engineVersion;
    apiVersion = in_struct->apiVersion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pApplicationName = SafeStringCopy(in_struct->pApplicationName);
    pEngineName = SafeStringCopy(in_struct->pEngineName);
}

void safe_VkApplicationInfo::initialize(const safe_VkApplicationInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    applicationVersion = copy_src->applicationVersion;
    engineVersion = copy_src->engineVersion;
    apiVersion = copy_src->apiVersion;
    pNext = SafePnextCopy(copy_src->pNext);
    pApplicationName = SafeStringCopy(copy_src->pApplicationName);
    pEngineName = SafeStringCopy(copy_src->pEngineName);
}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo(const VkInstanceCreateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      pApplicationInfo(nullptr),
      enabledLayerCount(in_struct->enabledLayerCount),
      enabledExtensionCount(in_struct->enabledExtensionCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (in_struct->pApplicationInfo) pApplicationInfo = new safe_VkApplicationInfo(in_struct->pApplicationInfo);
}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo()
    : sType(VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      pApplicationInfo(nullptr),
      enabledLayerCount(),
      ppEnabledLayerNames(nullptr),
      enabledExtensionCount(),
      ppEnabledExtensionNames(nullptr) {}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo(const safe_VkInstanceCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (copy_src.pApplicationInfo) pApplicationInfo = new safe_VkApplicationInfo(*copy_src.pApplicationInfo);
}

safe_VkInstanceCreateInfo& safe_VkInstanceCreateInfo::operator=(const safe_VkInstanceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pApplicationInfo) delete pApplicationInfo;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (copy_src.pApplicationInfo) pApplicationInfo = new safe_VkApplicationInfo(*copy_src.pApplicationInfo);

    return *this;
}

safe_VkInstanceCreateInfo::~safe_VkInstanceCreateInfo() {
    if (pApplicationInfo) delete pApplicationInfo;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    FreePnextChain(pNext);
}

void safe_VkInstanceCreateInfo::initialize(const VkInstanceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pApplicationInfo) delete pApplicationInfo;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = in_struct->enabledLayerCount;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (in_struct->pApplicationInfo) pApplicationInfo = new safe_VkApplicationInfo(in_struct->pApplicationInfo);
}

void safe_VkInstanceCreateInfo::initialize(const safe_VkInstanceCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pApplicationInfo = nullptr;
    enabledLayerCount = copy_src->enabledLayerCount;
    enabledExtensionCount = copy_src->enabledExtensionCount;
    pNext = SafePnextCopy(copy_src->pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (copy_src->pApplicationInfo) pApplicationInfo = new safe_VkApplicationInfo(*copy_src->pApplicationInfo);
}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queueFamilyIndex(in_struct->queueFamilyIndex),
      queueCount(in_struct->queueCount),
      pQueuePriorities(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy((void*)pQueuePriorities, (void*)in_struct->pQueuePriorities, sizeof(float) * in_struct->queueCount);
    }
}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      queueFamilyIndex(),
      queueCount(),
      pQueuePriorities(nullptr) {}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo(const safe_VkDeviceQueueCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueCount = copy_src.queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pQueuePriorities) {
        pQueuePriorities = new float[copy_src.queueCount];
        memcpy((void*)pQueuePriorities, (void*)copy_src.pQueuePriorities, sizeof(float) * copy_src.queueCount);
    }
}

safe_VkDeviceQueueCreateInfo& safe_VkDeviceQueueCreateInfo::operator=(const safe_VkDeviceQueueCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueuePriorities) delete[] pQueuePriorities;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueCount = copy_src.queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pQueuePriorities) {
        pQueuePriorities = new float[copy_src.queueCount];
        memcpy((void*)pQueuePriorities, (void*)copy_src.pQueuePriorities, sizeof(float) * copy_src.queueCount);
    }

    return *this;
}

safe_VkDeviceQueueCreateInfo::~safe_VkDeviceQueueCreateInfo() {
    if (pQueuePriorities) delete[] pQueuePriorities;
    FreePnextChain(pNext);
}

void safe_VkDeviceQueueCreateInfo::initialize(const VkDeviceQueueCreateInfo* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueuePriorities) delete[] pQueuePriorities;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    queueCount = in_struct->queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy((void*)pQueuePriorities, (void*)in_struct->pQueuePriorities, sizeof(float) * in_struct->queueCount);
    }
}

void safe_VkDeviceQueueCreateInfo::initialize(const safe_VkDeviceQueueCreateInfo* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    queueCount = copy_src->queueCount;
    pQueuePriorities = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pQueuePriorities) {
        pQueuePriorities = new float[copy_src->queueCount];
        memcpy((void*)pQueuePriorities, (void*)copy_src->pQueuePriorities, sizeof(float) * copy_src->queueCount);
    }
}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo(const VkDeviceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                                 bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queueCreateInfoCount(in_struct->queueCreateInfoCount),
      pQueueCreateInfos(nullptr),
      enabledLayerCount(in_struct->enabledLayerCount),
      enabledExtensionCount(in_struct->enabledExtensionCount),
      pEnabledFeatures(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }

    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      queueCreateInfoCount(),
      pQueueCreateInfos(nullptr),
      enabledLayerCount(),
      ppEnabledLayerNames(nullptr),
      enabledExtensionCount(),
      ppEnabledExtensionNames(nullptr),
      pEnabledFeatures(nullptr) {}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo(const safe_VkDeviceCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueCreateInfoCount = copy_src.queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && copy_src.pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&copy_src.pQueueCreateInfos[i]);
        }
    }

    if (copy_src.pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*copy_src.pEnabledFeatures);
    }
}

safe_VkDeviceCreateInfo& safe_VkDeviceCreateInfo::operator=(const safe_VkDeviceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueCreateInfos) delete[] pQueueCreateInfos;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    if (pEnabledFeatures) delete pEnabledFeatures;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueCreateInfoCount = copy_src.queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = copy_src.enabledLayerCount;
    enabledExtensionCount = copy_src.enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src.enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src.ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src.enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src.ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && copy_src.pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&copy_src.pQueueCreateInfos[i]);
        }
    }

    if (copy_src.pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*copy_src.pEnabledFeatures);
    }

    return *this;
}

safe_VkDeviceCreateInfo::~safe_VkDeviceCreateInfo() {
    if (pQueueCreateInfos) delete[] pQueueCreateInfos;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    if (pEnabledFeatures) delete pEnabledFeatures;
    FreePnextChain(pNext);
}

void safe_VkDeviceCreateInfo::initialize(const VkDeviceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueCreateInfos) delete[] pQueueCreateInfos;

    if (ppEnabledLayerNames) {
        for (uint32_t i = 0; i < enabledLayerCount; ++i) {
            delete[] ppEnabledLayerNames[i];
        }
        delete[] ppEnabledLayerNames;
    }
    if (ppEnabledExtensionNames) {
        for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
            delete[] ppEnabledExtensionNames[i];
        }
        delete[] ppEnabledExtensionNames;
    }
    if (pEnabledFeatures) delete pEnabledFeatures;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueCreateInfoCount = in_struct->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = in_struct->enabledLayerCount;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    char** tmp_ppEnabledLayerNames = new char*[in_struct->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(in_struct->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[in_struct->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(in_struct->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }

    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

void safe_VkDeviceCreateInfo::initialize(const safe_VkDeviceCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueCreateInfoCount = copy_src->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = copy_src->enabledLayerCount;
    enabledExtensionCount = copy_src->enabledExtensionCount;
    pEnabledFeatures = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    char** tmp_ppEnabledLayerNames = new char*[copy_src->enabledLayerCount];
    for (uint32_t i = 0; i < enabledLayerCount; ++i) {
        tmp_ppEnabledLayerNames[i] = SafeStringCopy(copy_src->ppEnabledLayerNames[i]);
    }
    ppEnabledLayerNames = tmp_ppEnabledLayerNames;
    char** tmp_ppEnabledExtensionNames = new char*[copy_src->enabledExtensionCount];
    for (uint32_t i = 0; i < enabledExtensionCount; ++i) {
        tmp_ppEnabledExtensionNames[i] = SafeStringCopy(copy_src->ppEnabledExtensionNames[i]);
    }
    ppEnabledExtensionNames = tmp_ppEnabledExtensionNames;
    if (queueCreateInfoCount && copy_src->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i = 0; i < queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&copy_src->pQueueCreateInfos[i]);
        }
    }

    if (copy_src->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*copy_src->pEnabledFeatures);
    }
}

safe_VkSubmitInfo::safe_VkSubmitInfo(const VkSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreCount(in_struct->waitSemaphoreCount),
      pWaitSemaphores(nullptr),
      pWaitDstStageMask(nullptr),
      commandBufferCount(in_struct->commandBufferCount),
      pCommandBuffers(nullptr),
      signalSemaphoreCount(in_struct->signalSemaphoreCount),
      pSignalSemaphores(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }

    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)in_struct->pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)in_struct->pCommandBuffers, sizeof(VkCommandBuffer) * in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

safe_VkSubmitInfo::safe_VkSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_SUBMIT_INFO),
      pNext(nullptr),
      waitSemaphoreCount(),
      pWaitSemaphores(nullptr),
      pWaitDstStageMask(nullptr),
      commandBufferCount(),
      pCommandBuffers(nullptr),
      signalSemaphoreCount(),
      pSignalSemaphores(nullptr) {}

safe_VkSubmitInfo::safe_VkSubmitInfo(const safe_VkSubmitInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }

    if (copy_src.pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)copy_src.pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[copy_src.commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)copy_src.pCommandBuffers, sizeof(VkCommandBuffer) * copy_src.commandBufferCount);
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }
}

safe_VkSubmitInfo& safe_VkSubmitInfo::operator=(const safe_VkSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pWaitDstStageMask) delete[] pWaitDstStageMask;
    if (pCommandBuffers) delete[] pCommandBuffers;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }

    if (copy_src.pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)copy_src.pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[copy_src.commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)copy_src.pCommandBuffers, sizeof(VkCommandBuffer) * copy_src.commandBufferCount);
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }

    return *this;
}

safe_VkSubmitInfo::~safe_VkSubmitInfo() {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pWaitDstStageMask) delete[] pWaitDstStageMask;
    if (pCommandBuffers) delete[] pCommandBuffers;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
}

void safe_VkSubmitInfo::initialize(const VkSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pWaitDstStageMask) delete[] pWaitDstStageMask;
    if (pCommandBuffers) delete[] pCommandBuffers;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }

    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)in_struct->pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)in_struct->pCommandBuffers, sizeof(VkCommandBuffer) * in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void safe_VkSubmitInfo::initialize(const safe_VkSubmitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreCount = copy_src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = copy_src->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = copy_src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (waitSemaphoreCount && copy_src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src->pWaitSemaphores[i];
        }
    }

    if (copy_src->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[copy_src->waitSemaphoreCount];
        memcpy((void*)pWaitDstStageMask, (void*)copy_src->pWaitDstStageMask,
               sizeof(VkPipelineStageFlags) * copy_src->waitSemaphoreCount);
    }

    if (copy_src->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[copy_src->commandBufferCount];
        memcpy((void*)pCommandBuffers, (void*)copy_src->pCommandBuffers, sizeof(VkCommandBuffer) * copy_src->commandBufferCount);
    }
    if (signalSemaphoreCount && copy_src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src->pSignalSemaphores[i];
        }
    }
}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange(const VkMappedMemoryRange* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory), offset(in_struct->offset), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange()
    : sType(VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE), pNext(nullptr), memory(), offset(), size() {}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange(const safe_VkMappedMemoryRange& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMappedMemoryRange& safe_VkMappedMemoryRange::operator=(const safe_VkMappedMemoryRange& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMappedMemoryRange::~safe_VkMappedMemoryRange() { FreePnextChain(pNext); }

void safe_VkMappedMemoryRange::initialize(const VkMappedMemoryRange* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    offset = in_struct->offset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMappedMemoryRange::initialize(const safe_VkMappedMemoryRange* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    offset = copy_src->offset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo(const VkMemoryAllocateInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), allocationSize(in_struct->allocationSize), memoryTypeIndex(in_struct->memoryTypeIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO), pNext(nullptr), allocationSize(), memoryTypeIndex() {}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo(const safe_VkMemoryAllocateInfo& copy_src) {
    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeIndex = copy_src.memoryTypeIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryAllocateInfo& safe_VkMemoryAllocateInfo::operator=(const safe_VkMemoryAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    allocationSize = copy_src.allocationSize;
    memoryTypeIndex = copy_src.memoryTypeIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryAllocateInfo::~safe_VkMemoryAllocateInfo() { FreePnextChain(pNext); }

void safe_VkMemoryAllocateInfo::initialize(const VkMemoryAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    allocationSize = in_struct->allocationSize;
    memoryTypeIndex = in_struct->memoryTypeIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryAllocateInfo::initialize(const safe_VkMemoryAllocateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    allocationSize = copy_src->allocationSize;
    memoryTypeIndex = copy_src->memoryTypeIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state)
    : buffer(in_struct->buffer), bindCount(in_struct->bindCount), pBinds(nullptr) {
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo() : buffer(), bindCount(), pBinds(nullptr) {}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo(const safe_VkSparseBufferMemoryBindInfo& copy_src) {
    buffer = copy_src.buffer;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }
}

safe_VkSparseBufferMemoryBindInfo& safe_VkSparseBufferMemoryBindInfo::operator=(const safe_VkSparseBufferMemoryBindInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBinds) delete[] pBinds;

    buffer = copy_src.buffer;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }

    return *this;
}

safe_VkSparseBufferMemoryBindInfo::~safe_VkSparseBufferMemoryBindInfo() {
    if (pBinds) delete[] pBinds;
}

void safe_VkSparseBufferMemoryBindInfo::initialize(const VkSparseBufferMemoryBindInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBinds) delete[] pBinds;
    buffer = in_struct->buffer;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseBufferMemoryBindInfo::initialize(const safe_VkSparseBufferMemoryBindInfo* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    buffer = copy_src->buffer;
    bindCount = copy_src->bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src->pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state)
    : image(in_struct->image), bindCount(in_struct->bindCount), pBinds(nullptr) {
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo() : image(), bindCount(), pBinds(nullptr) {}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo(
    const safe_VkSparseImageOpaqueMemoryBindInfo& copy_src) {
    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo& safe_VkSparseImageOpaqueMemoryBindInfo::operator=(
    const safe_VkSparseImageOpaqueMemoryBindInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBinds) delete[] pBinds;

    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }

    return *this;
}

safe_VkSparseImageOpaqueMemoryBindInfo::~safe_VkSparseImageOpaqueMemoryBindInfo() {
    if (pBinds) delete[] pBinds;
}

void safe_VkSparseImageOpaqueMemoryBindInfo::initialize(const VkSparseImageOpaqueMemoryBindInfo* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBinds) delete[] pBinds;
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseImageOpaqueMemoryBindInfo::initialize(const safe_VkSparseImageOpaqueMemoryBindInfo* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    image = copy_src->image;
    bindCount = copy_src->bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src->pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state)
    : image(in_struct->image), bindCount(in_struct->bindCount), pBinds(nullptr) {
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo() : image(), bindCount(), pBinds(nullptr) {}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo(const safe_VkSparseImageMemoryBindInfo& copy_src) {
    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo& safe_VkSparseImageMemoryBindInfo::operator=(const safe_VkSparseImageMemoryBindInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBinds) delete[] pBinds;

    image = copy_src.image;
    bindCount = copy_src.bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src.pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src.pBinds[i];
        }
    }

    return *this;
}

safe_VkSparseImageMemoryBindInfo::~safe_VkSparseImageMemoryBindInfo() {
    if (pBinds) delete[] pBinds;
}

void safe_VkSparseImageMemoryBindInfo::initialize(const VkSparseImageMemoryBindInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBinds) delete[] pBinds;
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseImageMemoryBindInfo::initialize(const safe_VkSparseImageMemoryBindInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    image = copy_src->image;
    bindCount = copy_src->bindCount;
    pBinds = nullptr;
    if (bindCount && copy_src->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i = 0; i < bindCount; ++i) {
            pBinds[i] = copy_src->pBinds[i];
        }
    }
}

safe_VkBindSparseInfo::safe_VkBindSparseInfo(const VkBindSparseInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreCount(in_struct->waitSemaphoreCount),
      pWaitSemaphores(nullptr),
      bufferBindCount(in_struct->bufferBindCount),
      pBufferBinds(nullptr),
      imageOpaqueBindCount(in_struct->imageOpaqueBindCount),
      pImageOpaqueBinds(nullptr),
      imageBindCount(in_struct->imageBindCount),
      pImageBinds(nullptr),
      signalSemaphoreCount(in_struct->signalSemaphoreCount),
      pSignalSemaphores(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

safe_VkBindSparseInfo::safe_VkBindSparseInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_SPARSE_INFO),
      pNext(nullptr),
      waitSemaphoreCount(),
      pWaitSemaphores(nullptr),
      bufferBindCount(),
      pBufferBinds(nullptr),
      imageOpaqueBindCount(),
      pImageOpaqueBinds(nullptr),
      imageBindCount(),
      pImageBinds(nullptr),
      signalSemaphoreCount(),
      pSignalSemaphores(nullptr) {}

safe_VkBindSparseInfo::safe_VkBindSparseInfo(const safe_VkBindSparseInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = copy_src.bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = copy_src.imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = copy_src.imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && copy_src.pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&copy_src.pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && copy_src.pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&copy_src.pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && copy_src.pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&copy_src.pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }
}

safe_VkBindSparseInfo& safe_VkBindSparseInfo::operator=(const safe_VkBindSparseInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pBufferBinds) delete[] pBufferBinds;
    if (pImageOpaqueBinds) delete[] pImageOpaqueBinds;
    if (pImageBinds) delete[] pImageBinds;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = copy_src.bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = copy_src.imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = copy_src.imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreCount && copy_src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src.pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && copy_src.pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&copy_src.pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && copy_src.pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&copy_src.pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && copy_src.pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&copy_src.pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && copy_src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src.pSignalSemaphores[i];
        }
    }

    return *this;
}

safe_VkBindSparseInfo::~safe_VkBindSparseInfo() {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pBufferBinds) delete[] pBufferBinds;
    if (pImageOpaqueBinds) delete[] pImageOpaqueBinds;
    if (pImageBinds) delete[] pImageBinds;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
}

void safe_VkBindSparseInfo::initialize(const VkBindSparseInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphores) delete[] pWaitSemaphores;
    if (pBufferBinds) delete[] pBufferBinds;
    if (pImageOpaqueBinds) delete[] pImageOpaqueBinds;
    if (pImageBinds) delete[] pImageBinds;
    if (pSignalSemaphores) delete[] pSignalSemaphores;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = in_struct->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = in_struct->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = in_struct->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void safe_VkBindSparseInfo::initialize(const safe_VkBindSparseInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreCount = copy_src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = copy_src->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = copy_src->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = copy_src->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = copy_src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (waitSemaphoreCount && copy_src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i = 0; i < waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = copy_src->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && copy_src->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i = 0; i < bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&copy_src->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && copy_src->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i = 0; i < imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&copy_src->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && copy_src->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i = 0; i < imageBindCount; ++i) {
            pImageBinds[i].initialize(&copy_src->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && copy_src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i = 0; i < signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = copy_src->pSignalSemaphores[i];
        }
    }
}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo(const VkFenceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                               bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo() : sType(VK_STRUCTURE_TYPE_FENCE_CREATE_INFO), pNext(nullptr), flags() {}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo(const safe_VkFenceCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkFenceCreateInfo& safe_VkFenceCreateInfo::operator=(const safe_VkFenceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkFenceCreateInfo::~safe_VkFenceCreateInfo() { FreePnextChain(pNext); }

void safe_VkFenceCreateInfo::initialize(const VkFenceCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkFenceCreateInfo::initialize(const safe_VkFenceCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO), pNext(nullptr), flags() {}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo(const safe_VkSemaphoreCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSemaphoreCreateInfo& safe_VkSemaphoreCreateInfo::operator=(const safe_VkSemaphoreCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSemaphoreCreateInfo::~safe_VkSemaphoreCreateInfo() { FreePnextChain(pNext); }

void safe_VkSemaphoreCreateInfo::initialize(const VkSemaphoreCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSemaphoreCreateInfo::initialize(const safe_VkSemaphoreCreateInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkEventCreateInfo::safe_VkEventCreateInfo(const VkEventCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                               bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkEventCreateInfo::safe_VkEventCreateInfo() : sType(VK_STRUCTURE_TYPE_EVENT_CREATE_INFO), pNext(nullptr), flags() {}

safe_VkEventCreateInfo::safe_VkEventCreateInfo(const safe_VkEventCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkEventCreateInfo& safe_VkEventCreateInfo::operator=(const safe_VkEventCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkEventCreateInfo::~safe_VkEventCreateInfo() { FreePnextChain(pNext); }

void safe_VkEventCreateInfo::initialize(const VkEventCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkEventCreateInfo::initialize(const safe_VkEventCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queryType(in_struct->queryType),
      queryCount(in_struct->queryCount),
      pipelineStatistics(in_struct->pipelineStatistics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo()
    : sType(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO), pNext(nullptr), flags(), queryType(), queryCount(), pipelineStatistics() {}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo(const safe_VkQueryPoolCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queryType = copy_src.queryType;
    queryCount = copy_src.queryCount;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkQueryPoolCreateInfo& safe_VkQueryPoolCreateInfo::operator=(const safe_VkQueryPoolCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queryType = copy_src.queryType;
    queryCount = copy_src.queryCount;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkQueryPoolCreateInfo::~safe_VkQueryPoolCreateInfo() { FreePnextChain(pNext); }

void safe_VkQueryPoolCreateInfo::initialize(const VkQueryPoolCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queryType = in_struct->queryType;
    queryCount = in_struct->queryCount;
    pipelineStatistics = in_struct->pipelineStatistics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkQueryPoolCreateInfo::initialize(const safe_VkQueryPoolCreateInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queryType = copy_src->queryType;
    queryCount = copy_src->queryCount;
    pipelineStatistics = copy_src->pipelineStatistics;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo(const VkBufferCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                                 bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      size(in_struct->size),
      usage(in_struct->usage),
      sharingMode(in_struct->sharingMode),
      queueFamilyIndexCount(0),
      pQueueFamilyIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if ((in_struct->sharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO),
      pNext(nullptr),
      flags(),
      size(),
      usage(),
      sharingMode(),
      queueFamilyIndexCount(),
      pQueueFamilyIndices(nullptr) {}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo(const safe_VkBufferCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    size = copy_src.size;
    usage = copy_src.usage;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

safe_VkBufferCreateInfo& safe_VkBufferCreateInfo::operator=(const safe_VkBufferCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    size = copy_src.size;
    usage = copy_src.usage;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }

    return *this;
}

safe_VkBufferCreateInfo::~safe_VkBufferCreateInfo() {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
}

void safe_VkBufferCreateInfo::initialize(const VkBufferCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    size = in_struct->size;
    usage = in_struct->usage;
    sharingMode = in_struct->sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if ((in_struct->sharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

void safe_VkBufferCreateInfo::initialize(const safe_VkBufferCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    size = copy_src->size;
    usage = copy_src->usage;
    sharingMode = copy_src->sharingMode;
    pQueueFamilyIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if ((copy_src->sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src->pQueueFamilyIndices,
               sizeof(uint32_t) * copy_src->queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo(const VkBufferViewCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      buffer(in_struct->buffer),
      format(in_struct->format),
      offset(in_struct->offset),
      range(in_struct->range) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO), pNext(nullptr), flags(), buffer(), format(), offset(), range() {}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo(const safe_VkBufferViewCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    buffer = copy_src.buffer;
    format = copy_src.format;
    offset = copy_src.offset;
    range = copy_src.range;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferViewCreateInfo& safe_VkBufferViewCreateInfo::operator=(const safe_VkBufferViewCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    buffer = copy_src.buffer;
    format = copy_src.format;
    offset = copy_src.offset;
    range = copy_src.range;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferViewCreateInfo::~safe_VkBufferViewCreateInfo() { FreePnextChain(pNext); }

void safe_VkBufferViewCreateInfo::initialize(const VkBufferViewCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    buffer = in_struct->buffer;
    format = in_struct->format;
    offset = in_struct->offset;
    range = in_struct->range;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferViewCreateInfo::initialize(const safe_VkBufferViewCreateInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    buffer = copy_src->buffer;
    format = copy_src->format;
    offset = copy_src->offset;
    range = copy_src->range;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageCreateInfo::safe_VkImageCreateInfo(const VkImageCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                               bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      imageType(in_struct->imageType),
      format(in_struct->format),
      extent(in_struct->extent),
      mipLevels(in_struct->mipLevels),
      arrayLayers(in_struct->arrayLayers),
      samples(in_struct->samples),
      tiling(in_struct->tiling),
      usage(in_struct->usage),
      sharingMode(in_struct->sharingMode),
      queueFamilyIndexCount(0),
      pQueueFamilyIndices(nullptr),
      initialLayout(in_struct->initialLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if ((in_struct->sharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

safe_VkImageCreateInfo::safe_VkImageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      imageType(),
      format(),
      extent(),
      mipLevels(),
      arrayLayers(),
      samples(),
      tiling(),
      usage(),
      sharingMode(),
      queueFamilyIndexCount(),
      pQueueFamilyIndices(nullptr),
      initialLayout() {}

safe_VkImageCreateInfo::safe_VkImageCreateInfo(const safe_VkImageCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    imageType = copy_src.imageType;
    format = copy_src.format;
    extent = copy_src.extent;
    mipLevels = copy_src.mipLevels;
    arrayLayers = copy_src.arrayLayers;
    samples = copy_src.samples;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = copy_src.initialLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

safe_VkImageCreateInfo& safe_VkImageCreateInfo::operator=(const safe_VkImageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    imageType = copy_src.imageType;
    format = copy_src.format;
    extent = copy_src.extent;
    mipLevels = copy_src.mipLevels;
    arrayLayers = copy_src.arrayLayers;
    samples = copy_src.samples;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    sharingMode = copy_src.sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = copy_src.initialLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    if ((copy_src.sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src.queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src.pQueueFamilyIndices, sizeof(uint32_t) * copy_src.queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src.queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }

    return *this;
}

safe_VkImageCreateInfo::~safe_VkImageCreateInfo() {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
}

void safe_VkImageCreateInfo::initialize(const VkImageCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pQueueFamilyIndices) delete[] pQueueFamilyIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    imageType = in_struct->imageType;
    format = in_struct->format;
    extent = in_struct->extent;
    mipLevels = in_struct->mipLevels;
    arrayLayers = in_struct->arrayLayers;
    samples = in_struct->samples;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    sharingMode = in_struct->sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = in_struct->initialLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if ((in_struct->sharingMode == VK_SHARING_MODE_CONCURRENT) && in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)in_struct->pQueueFamilyIndices,
               sizeof(uint32_t) * in_struct->queueFamilyIndexCount);
        queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

void safe_VkImageCreateInfo::initialize(const safe_VkImageCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    imageType = copy_src->imageType;
    format = copy_src->format;
    extent = copy_src->extent;
    mipLevels = copy_src->mipLevels;
    arrayLayers = copy_src->arrayLayers;
    samples = copy_src->samples;
    tiling = copy_src->tiling;
    usage = copy_src->usage;
    sharingMode = copy_src->sharingMode;
    pQueueFamilyIndices = nullptr;
    initialLayout = copy_src->initialLayout;
    pNext = SafePnextCopy(copy_src->pNext);

    if ((copy_src->sharingMode == VK_SHARING_MODE_CONCURRENT) && copy_src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[copy_src->queueFamilyIndexCount];
        memcpy((void*)pQueueFamilyIndices, (void*)copy_src->pQueueFamilyIndices,
               sizeof(uint32_t) * copy_src->queueFamilyIndexCount);
        queueFamilyIndexCount = copy_src->queueFamilyIndexCount;
    } else {
        queueFamilyIndexCount = 0;
    }
}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo(const VkImageViewCreateInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      image(in_struct->image),
      viewType(in_struct->viewType),
      format(in_struct->format),
      components(in_struct->components),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO),
      pNext(nullptr),
      flags(),
      image(),
      viewType(),
      format(),
      components(),
      subresourceRange() {}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo(const safe_VkImageViewCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    image = copy_src.image;
    viewType = copy_src.viewType;
    format = copy_src.format;
    components = copy_src.components;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageViewCreateInfo& safe_VkImageViewCreateInfo::operator=(const safe_VkImageViewCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    image = copy_src.image;
    viewType = copy_src.viewType;
    format = copy_src.format;
    components = copy_src.components;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageViewCreateInfo::~safe_VkImageViewCreateInfo() { FreePnextChain(pNext); }

void safe_VkImageViewCreateInfo::initialize(const VkImageViewCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    image = in_struct->image;
    viewType = in_struct->viewType;
    format = in_struct->format;
    components = in_struct->components;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageViewCreateInfo::initialize(const safe_VkImageViewCreateInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    image = copy_src->image;
    viewType = copy_src->viewType;
    format = copy_src->format;
    components = copy_src->components;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), codeSize(in_struct->codeSize), pCode(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)in_struct->pCode, codeSize);
    }
}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO), pNext(nullptr), flags(), codeSize(), pCode(nullptr) {}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo(const safe_VkShaderModuleCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    codeSize = copy_src.codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)copy_src.pCode, codeSize);
    }
}

safe_VkShaderModuleCreateInfo& safe_VkShaderModuleCreateInfo::operator=(const safe_VkShaderModuleCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pCode) delete[] reinterpret_cast<const uint8_t*>(pCode);
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    codeSize = copy_src.codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)copy_src.pCode, codeSize);
    }

    return *this;
}

safe_VkShaderModuleCreateInfo::~safe_VkShaderModuleCreateInfo() {
    if (pCode) delete[] reinterpret_cast<const uint8_t*>(pCode);
    FreePnextChain(pNext);
}

void safe_VkShaderModuleCreateInfo::initialize(const VkShaderModuleCreateInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCode) delete[] reinterpret_cast<const uint8_t*>(pCode);
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    codeSize = in_struct->codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)in_struct->pCode, codeSize);
    }
}

void safe_VkShaderModuleCreateInfo::initialize(const safe_VkShaderModuleCreateInfo* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    codeSize = copy_src->codeSize;
    pCode = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pCode) {
        pCode = reinterpret_cast<uint32_t*>(new uint8_t[codeSize]);
        memcpy((void*)pCode, (void*)copy_src->pCode, codeSize);
    }
}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      initialDataSize(in_struct->initialDataSize),
      pInitialData(in_struct->pInitialData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO), pNext(nullptr), flags(), initialDataSize(), pInitialData(nullptr) {}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo(const safe_VkPipelineCacheCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineCacheCreateInfo& safe_VkPipelineCacheCreateInfo::operator=(const safe_VkPipelineCacheCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    initialDataSize = copy_src.initialDataSize;
    pInitialData = copy_src.pInitialData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineCacheCreateInfo::~safe_VkPipelineCacheCreateInfo() { FreePnextChain(pNext); }

void safe_VkPipelineCacheCreateInfo::initialize(const VkPipelineCacheCreateInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    initialDataSize = in_struct->initialDataSize;
    pInitialData = in_struct->pInitialData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineCacheCreateInfo::initialize(const safe_VkPipelineCacheCreateInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    initialDataSize = copy_src->initialDataSize;
    pInitialData = copy_src->pInitialData;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSpecializationInfo::safe_VkSpecializationInfo(const VkSpecializationInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state)
    : mapEntryCount(in_struct->mapEntryCount), pMapEntries(nullptr), dataSize(in_struct->dataSize), pData(nullptr) {
    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy((void*)pMapEntries, (void*)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry) * in_struct->mapEntryCount);
    }

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

safe_VkSpecializationInfo::safe_VkSpecializationInfo() : mapEntryCount(), pMapEntries(nullptr), dataSize(), pData(nullptr) {}

safe_VkSpecializationInfo::safe_VkSpecializationInfo(const safe_VkSpecializationInfo& copy_src) {
    mapEntryCount = copy_src.mapEntryCount;
    pMapEntries = nullptr;
    dataSize = copy_src.dataSize;

    if (copy_src.pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[copy_src.mapEntryCount];
        memcpy((void*)pMapEntries, (void*)copy_src.pMapEntries, sizeof(VkSpecializationMapEntry) * copy_src.mapEntryCount);
    }

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }
}

safe_VkSpecializationInfo& safe_VkSpecializationInfo::operator=(const safe_VkSpecializationInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pMapEntries) delete[] pMapEntries;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }

    mapEntryCount = copy_src.mapEntryCount;
    pMapEntries = nullptr;
    dataSize = copy_src.dataSize;

    if (copy_src.pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[copy_src.mapEntryCount];
        memcpy((void*)pMapEntries, (void*)copy_src.pMapEntries, sizeof(VkSpecializationMapEntry) * copy_src.mapEntryCount);
    }

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }

    return *this;
}

safe_VkSpecializationInfo::~safe_VkSpecializationInfo() {
    if (pMapEntries) delete[] pMapEntries;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
}

void safe_VkSpecializationInfo::initialize(const VkSpecializationInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMapEntries) delete[] pMapEntries;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    mapEntryCount = in_struct->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = in_struct->dataSize;

    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy((void*)pMapEntries, (void*)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry) * in_struct->mapEntryCount);
    }

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

void safe_VkSpecializationInfo::initialize(const safe_VkSpecializationInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    mapEntryCount = copy_src->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = copy_src->dataSize;

    if (copy_src->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[copy_src->mapEntryCount];
        memcpy((void*)pMapEntries, (void*)copy_src->pMapEntries, sizeof(VkSpecializationMapEntry) * copy_src->mapEntryCount);
    }

    if (copy_src->pData != nullptr) {
        auto temp = new std::byte[copy_src->dataSize];
        std::memcpy(temp, copy_src->pData, copy_src->dataSize);
        pData = temp;
    }
}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stage(in_struct->stage),
      module(in_struct->module),
      pSpecializationInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    pName = SafeStringCopy(in_struct->pName);
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      stage(),
      module(),
      pName(nullptr),
      pSpecializationInfo(nullptr) {}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo(const safe_VkPipelineShaderStageCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stage = copy_src.stage;
    module = copy_src.module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(*copy_src.pSpecializationInfo);
}

safe_VkPipelineShaderStageCreateInfo& safe_VkPipelineShaderStageCreateInfo::operator=(
    const safe_VkPipelineShaderStageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pName) delete[] pName;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stage = copy_src.stage;
    module = copy_src.module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    pName = SafeStringCopy(copy_src.pName);
    if (copy_src.pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(*copy_src.pSpecializationInfo);

    return *this;
}

safe_VkPipelineShaderStageCreateInfo::~safe_VkPipelineShaderStageCreateInfo() {
    if (pName) delete[] pName;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);
}

void safe_VkPipelineShaderStageCreateInfo::initialize(const VkPipelineShaderStageCreateInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pName) delete[] pName;
    if (pSpecializationInfo) delete pSpecializationInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stage = in_struct->stage;
    module = in_struct->module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    pName = SafeStringCopy(in_struct->pName);
    if (in_struct->pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
}

void safe_VkPipelineShaderStageCreateInfo::initialize(const safe_VkPipelineShaderStageCreateInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stage = copy_src->stage;
    module = copy_src->module;
    pSpecializationInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    pName = SafeStringCopy(copy_src->pName);
    if (copy_src->pSpecializationInfo) pSpecializationInfo = new safe_VkSpecializationInfo(*copy_src->pSpecializationInfo);
}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stage(&in_struct->stage),
      layout(in_struct->layout),
      basePipelineHandle(in_struct->basePipelineHandle),
      basePipelineIndex(in_struct->basePipelineIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo()
    : sType(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      layout(),
      basePipelineHandle(),
      basePipelineIndex() {}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo(const safe_VkComputePipelineCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stage.initialize(&copy_src.stage);
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkComputePipelineCreateInfo& safe_VkComputePipelineCreateInfo::operator=(const safe_VkComputePipelineCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stage.initialize(&copy_src.stage);
    layout = copy_src.layout;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkComputePipelineCreateInfo::~safe_VkComputePipelineCreateInfo() { FreePnextChain(pNext); }

void safe_VkComputePipelineCreateInfo::initialize(const VkComputePipelineCreateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stage.initialize(&in_struct->stage);
    layout = in_struct->layout;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkComputePipelineCreateInfo::initialize(const safe_VkComputePipelineCreateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stage.initialize(&copy_src->stage);
    layout = copy_src->layout;
    basePipelineHandle = copy_src->basePipelineHandle;
    basePipelineIndex = copy_src->basePipelineIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo(
    const VkPipelineVertexInputStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      vertexBindingDescriptionCount(in_struct->vertexBindingDescriptionCount),
      pVertexBindingDescriptions(nullptr),
      vertexAttributeDescriptionCount(in_struct->vertexAttributeDescriptionCount),
      pVertexAttributeDescriptions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)in_struct->pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * in_struct->vertexBindingDescriptionCount);
    }

    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)in_struct->pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * in_struct->vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      vertexBindingDescriptionCount(),
      pVertexBindingDescriptions(nullptr),
      vertexAttributeDescriptionCount(),
      pVertexAttributeDescriptions(nullptr) {}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo(
    const safe_VkPipelineVertexInputStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    vertexBindingDescriptionCount = copy_src.vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = copy_src.vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[copy_src.vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)copy_src.pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * copy_src.vertexBindingDescriptionCount);
    }

    if (copy_src.pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[copy_src.vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)copy_src.pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * copy_src.vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineVertexInputStateCreateInfo& safe_VkPipelineVertexInputStateCreateInfo::operator=(
    const safe_VkPipelineVertexInputStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pVertexBindingDescriptions) delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions) delete[] pVertexAttributeDescriptions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    vertexBindingDescriptionCount = copy_src.vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = copy_src.vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[copy_src.vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)copy_src.pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * copy_src.vertexBindingDescriptionCount);
    }

    if (copy_src.pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[copy_src.vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)copy_src.pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * copy_src.vertexAttributeDescriptionCount);
    }

    return *this;
}

safe_VkPipelineVertexInputStateCreateInfo::~safe_VkPipelineVertexInputStateCreateInfo() {
    if (pVertexBindingDescriptions) delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions) delete[] pVertexAttributeDescriptions;
    FreePnextChain(pNext);
}

void safe_VkPipelineVertexInputStateCreateInfo::initialize(const VkPipelineVertexInputStateCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pVertexBindingDescriptions) delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions) delete[] pVertexAttributeDescriptions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    vertexBindingDescriptionCount = in_struct->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = in_struct->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)in_struct->pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * in_struct->vertexBindingDescriptionCount);
    }

    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)in_struct->pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * in_struct->vertexAttributeDescriptionCount);
    }
}

void safe_VkPipelineVertexInputStateCreateInfo::initialize(const safe_VkPipelineVertexInputStateCreateInfo* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    vertexBindingDescriptionCount = copy_src->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = copy_src->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[copy_src->vertexBindingDescriptionCount];
        memcpy((void*)pVertexBindingDescriptions, (void*)copy_src->pVertexBindingDescriptions,
               sizeof(VkVertexInputBindingDescription) * copy_src->vertexBindingDescriptionCount);
    }

    if (copy_src->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[copy_src->vertexAttributeDescriptionCount];
        memcpy((void*)pVertexAttributeDescriptions, (void*)copy_src->pVertexAttributeDescriptions,
               sizeof(VkVertexInputAttributeDescription) * copy_src->vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo(
    const VkPipelineInputAssemblyStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      topology(in_struct->topology),
      primitiveRestartEnable(in_struct->primitiveRestartEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      topology(),
      primitiveRestartEnable() {}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo(
    const safe_VkPipelineInputAssemblyStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    topology = copy_src.topology;
    primitiveRestartEnable = copy_src.primitiveRestartEnable;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineInputAssemblyStateCreateInfo& safe_VkPipelineInputAssemblyStateCreateInfo::operator=(
    const safe_VkPipelineInputAssemblyStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    topology = copy_src.topology;
    primitiveRestartEnable = copy_src.primitiveRestartEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineInputAssemblyStateCreateInfo::~safe_VkPipelineInputAssemblyStateCreateInfo() { FreePnextChain(pNext); }

void safe_VkPipelineInputAssemblyStateCreateInfo::initialize(const VkPipelineInputAssemblyStateCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    topology = in_struct->topology;
    primitiveRestartEnable = in_struct->primitiveRestartEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineInputAssemblyStateCreateInfo::initialize(const safe_VkPipelineInputAssemblyStateCreateInfo* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    topology = copy_src->topology;
    primitiveRestartEnable = copy_src->primitiveRestartEnable;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo(
    const VkPipelineTessellationStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), patchControlPoints(in_struct->patchControlPoints) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO), pNext(nullptr), flags(), patchControlPoints() {}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo(
    const safe_VkPipelineTessellationStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    patchControlPoints = copy_src.patchControlPoints;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineTessellationStateCreateInfo& safe_VkPipelineTessellationStateCreateInfo::operator=(
    const safe_VkPipelineTessellationStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    patchControlPoints = copy_src.patchControlPoints;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineTessellationStateCreateInfo::~safe_VkPipelineTessellationStateCreateInfo() { FreePnextChain(pNext); }

void safe_VkPipelineTessellationStateCreateInfo::initialize(const VkPipelineTessellationStateCreateInfo* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    patchControlPoints = in_struct->patchControlPoints;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineTessellationStateCreateInfo::initialize(const safe_VkPipelineTessellationStateCreateInfo* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    patchControlPoints = copy_src->patchControlPoints;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* in_struct,
                                                                               const bool is_dynamic_viewports,
                                                                               const bool is_dynamic_scissors,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      viewportCount(in_struct->viewportCount),
      pViewports(nullptr),
      scissorCount(in_struct->scissorCount),
      pScissors(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewports && !is_dynamic_viewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy((void*)pViewports, (void*)in_struct->pViewports, sizeof(VkViewport) * in_struct->viewportCount);
    } else
        pViewports = nullptr;
    if (in_struct->pScissors && !is_dynamic_scissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy((void*)pScissors, (void*)in_struct->pScissors, sizeof(VkRect2D) * in_struct->scissorCount);
    } else
        pScissors = nullptr;
}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      viewportCount(),
      pViewports(nullptr),
      scissorCount(),
      pScissors(nullptr) {}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo(
    const safe_VkPipelineViewportStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    viewportCount = copy_src.viewportCount;
    pViewports = nullptr;
    scissorCount = copy_src.scissorCount;
    pScissors = nullptr;

    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pViewports) {
        pViewports = new VkViewport[copy_src.viewportCount];
        memcpy((void*)pViewports, (void*)copy_src.pViewports, sizeof(VkViewport) * copy_src.viewportCount);
    } else
        pViewports = nullptr;
    if (copy_src.pScissors) {
        pScissors = new VkRect2D[copy_src.scissorCount];
        memcpy((void*)pScissors, (void*)copy_src.pScissors, sizeof(VkRect2D) * copy_src.scissorCount);
    } else
        pScissors = nullptr;
}

safe_VkPipelineViewportStateCreateInfo& safe_VkPipelineViewportStateCreateInfo::operator=(
    const safe_VkPipelineViewportStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewports) delete[] pViewports;
    if (pScissors) delete[] pScissors;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    viewportCount = copy_src.viewportCount;
    pViewports = nullptr;
    scissorCount = copy_src.scissorCount;
    pScissors = nullptr;

    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pViewports) {
        pViewports = new VkViewport[copy_src.viewportCount];
        memcpy((void*)pViewports, (void*)copy_src.pViewports, sizeof(VkViewport) * copy_src.viewportCount);
    } else
        pViewports = nullptr;
    if (copy_src.pScissors) {
        pScissors = new VkRect2D[copy_src.scissorCount];
        memcpy((void*)pScissors, (void*)copy_src.pScissors, sizeof(VkRect2D) * copy_src.scissorCount);
    } else
        pScissors = nullptr;

    return *this;
}

safe_VkPipelineViewportStateCreateInfo::~safe_VkPipelineViewportStateCreateInfo() {
    if (pViewports) delete[] pViewports;
    if (pScissors) delete[] pScissors;
    FreePnextChain(pNext);
}

void safe_VkPipelineViewportStateCreateInfo::initialize(const VkPipelineViewportStateCreateInfo* in_struct,
                                                        const bool is_dynamic_viewports, const bool is_dynamic_scissors,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewports) delete[] pViewports;
    if (pScissors) delete[] pScissors;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    viewportCount = in_struct->viewportCount;
    pViewports = nullptr;
    scissorCount = in_struct->scissorCount;
    pScissors = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewports && !is_dynamic_viewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy((void*)pViewports, (void*)in_struct->pViewports, sizeof(VkViewport) * in_struct->viewportCount);
    } else
        pViewports = nullptr;
    if (in_struct->pScissors && !is_dynamic_scissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy((void*)pScissors, (void*)in_struct->pScissors, sizeof(VkRect2D) * in_struct->scissorCount);
    } else
        pScissors = nullptr;
}

void safe_VkPipelineViewportStateCreateInfo::initialize(const safe_VkPipelineViewportStateCreateInfo* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    viewportCount = copy_src->viewportCount;
    pViewports = nullptr;
    scissorCount = copy_src->scissorCount;
    pScissors = nullptr;

    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pViewports) {
        pViewports = new VkViewport[copy_src->viewportCount];
        memcpy((void*)pViewports, (void*)copy_src->pViewports, sizeof(VkViewport) * copy_src->viewportCount);
    } else
        pViewports = nullptr;
    if (copy_src->pScissors) {
        pScissors = new VkRect2D[copy_src->scissorCount];
        memcpy((void*)pScissors, (void*)copy_src->pScissors, sizeof(VkRect2D) * copy_src->scissorCount);
    } else
        pScissors = nullptr;
}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo(
    const VkPipelineRasterizationStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      depthClampEnable(in_struct->depthClampEnable),
      rasterizerDiscardEnable(in_struct->rasterizerDiscardEnable),
      polygonMode(in_struct->polygonMode),
      cullMode(in_struct->cullMode),
      frontFace(in_struct->frontFace),
      depthBiasEnable(in_struct->depthBiasEnable),
      depthBiasConstantFactor(in_struct->depthBiasConstantFactor),
      depthBiasClamp(in_struct->depthBiasClamp),
      depthBiasSlopeFactor(in_struct->depthBiasSlopeFactor),
      lineWidth(in_struct->lineWidth) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      depthClampEnable(),
      rasterizerDiscardEnable(),
      polygonMode(),
      cullMode(),
      frontFace(),
      depthBiasEnable(),
      depthBiasConstantFactor(),
      depthBiasClamp(),
      depthBiasSlopeFactor(),
      lineWidth() {}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo(
    const safe_VkPipelineRasterizationStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClampEnable = copy_src.depthClampEnable;
    rasterizerDiscardEnable = copy_src.rasterizerDiscardEnable;
    polygonMode = copy_src.polygonMode;
    cullMode = copy_src.cullMode;
    frontFace = copy_src.frontFace;
    depthBiasEnable = copy_src.depthBiasEnable;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    lineWidth = copy_src.lineWidth;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineRasterizationStateCreateInfo& safe_VkPipelineRasterizationStateCreateInfo::operator=(
    const safe_VkPipelineRasterizationStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    depthClampEnable = copy_src.depthClampEnable;
    rasterizerDiscardEnable = copy_src.rasterizerDiscardEnable;
    polygonMode = copy_src.polygonMode;
    cullMode = copy_src.cullMode;
    frontFace = copy_src.frontFace;
    depthBiasEnable = copy_src.depthBiasEnable;
    depthBiasConstantFactor = copy_src.depthBiasConstantFactor;
    depthBiasClamp = copy_src.depthBiasClamp;
    depthBiasSlopeFactor = copy_src.depthBiasSlopeFactor;
    lineWidth = copy_src.lineWidth;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineRasterizationStateCreateInfo::~safe_VkPipelineRasterizationStateCreateInfo() { FreePnextChain(pNext); }

void safe_VkPipelineRasterizationStateCreateInfo::initialize(const VkPipelineRasterizationStateCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    depthClampEnable = in_struct->depthClampEnable;
    rasterizerDiscardEnable = in_struct->rasterizerDiscardEnable;
    polygonMode = in_struct->polygonMode;
    cullMode = in_struct->cullMode;
    frontFace = in_struct->frontFace;
    depthBiasEnable = in_struct->depthBiasEnable;
    depthBiasConstantFactor = in_struct->depthBiasConstantFactor;
    depthBiasClamp = in_struct->depthBiasClamp;
    depthBiasSlopeFactor = in_struct->depthBiasSlopeFactor;
    lineWidth = in_struct->lineWidth;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineRasterizationStateCreateInfo::initialize(const safe_VkPipelineRasterizationStateCreateInfo* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    depthClampEnable = copy_src->depthClampEnable;
    rasterizerDiscardEnable = copy_src->rasterizerDiscardEnable;
    polygonMode = copy_src->polygonMode;
    cullMode = copy_src->cullMode;
    frontFace = copy_src->frontFace;
    depthBiasEnable = copy_src->depthBiasEnable;
    depthBiasConstantFactor = copy_src->depthBiasConstantFactor;
    depthBiasClamp = copy_src->depthBiasClamp;
    depthBiasSlopeFactor = copy_src->depthBiasSlopeFactor;
    lineWidth = copy_src->lineWidth;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo(
    const VkPipelineMultisampleStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      rasterizationSamples(in_struct->rasterizationSamples),
      sampleShadingEnable(in_struct->sampleShadingEnable),
      minSampleShading(in_struct->minSampleShading),
      pSampleMask(nullptr),
      alphaToCoverageEnable(in_struct->alphaToCoverageEnable),
      alphaToOneEnable(in_struct->alphaToOneEnable) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      rasterizationSamples(),
      sampleShadingEnable(),
      minSampleShading(),
      pSampleMask(nullptr),
      alphaToCoverageEnable(),
      alphaToOneEnable() {}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo(
    const safe_VkPipelineMultisampleStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationSamples = copy_src.rasterizationSamples;
    sampleShadingEnable = copy_src.sampleShadingEnable;
    minSampleShading = copy_src.minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = copy_src.alphaToCoverageEnable;
    alphaToOneEnable = copy_src.alphaToOneEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSampleMask) {
        pSampleMask = new VkSampleMask(*copy_src.pSampleMask);
    }
}

safe_VkPipelineMultisampleStateCreateInfo& safe_VkPipelineMultisampleStateCreateInfo::operator=(
    const safe_VkPipelineMultisampleStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSampleMask) delete pSampleMask;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    rasterizationSamples = copy_src.rasterizationSamples;
    sampleShadingEnable = copy_src.sampleShadingEnable;
    minSampleShading = copy_src.minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = copy_src.alphaToCoverageEnable;
    alphaToOneEnable = copy_src.alphaToOneEnable;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pSampleMask) {
        pSampleMask = new VkSampleMask(*copy_src.pSampleMask);
    }

    return *this;
}

safe_VkPipelineMultisampleStateCreateInfo::~safe_VkPipelineMultisampleStateCreateInfo() {
    if (pSampleMask) delete pSampleMask;
    FreePnextChain(pNext);
}

void safe_VkPipelineMultisampleStateCreateInfo::initialize(const VkPipelineMultisampleStateCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSampleMask) delete pSampleMask;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    rasterizationSamples = in_struct->rasterizationSamples;
    sampleShadingEnable = in_struct->sampleShadingEnable;
    minSampleShading = in_struct->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = in_struct->alphaToCoverageEnable;
    alphaToOneEnable = in_struct->alphaToOneEnable;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

void safe_VkPipelineMultisampleStateCreateInfo::initialize(const safe_VkPipelineMultisampleStateCreateInfo* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    rasterizationSamples = copy_src->rasterizationSamples;
    sampleShadingEnable = copy_src->sampleShadingEnable;
    minSampleShading = copy_src->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = copy_src->alphaToCoverageEnable;
    alphaToOneEnable = copy_src->alphaToOneEnable;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pSampleMask) {
        pSampleMask = new VkSampleMask(*copy_src->pSampleMask);
    }
}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo(
    const VkPipelineDepthStencilStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      depthTestEnable(in_struct->depthTestEnable),
      depthWriteEnable(in_struct->depthWriteEnable),
      depthCompareOp(in_struct->depthCompareOp),
      depthBoundsTestEnable(in_struct->depthBoundsTestEnable),
      stencilTestEnable(in_struct->stencilTestEnable),
      front(in_struct->front),
      back(in_struct->back),
      minDepthBounds(in_struct->minDepthBounds),
      maxDepthBounds(in_struct->maxDepthBounds) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      depthTestEnable(),
      depthWriteEnable(),
      depthCompareOp(),
      depthBoundsTestEnable(),
      stencilTestEnable(),
      front(),
      back(),
      minDepthBounds(),
      maxDepthBounds() {}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo(
    const safe_VkPipelineDepthStencilStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    depthTestEnable = copy_src.depthTestEnable;
    depthWriteEnable = copy_src.depthWriteEnable;
    depthCompareOp = copy_src.depthCompareOp;
    depthBoundsTestEnable = copy_src.depthBoundsTestEnable;
    stencilTestEnable = copy_src.stencilTestEnable;
    front = copy_src.front;
    back = copy_src.back;
    minDepthBounds = copy_src.minDepthBounds;
    maxDepthBounds = copy_src.maxDepthBounds;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineDepthStencilStateCreateInfo& safe_VkPipelineDepthStencilStateCreateInfo::operator=(
    const safe_VkPipelineDepthStencilStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    depthTestEnable = copy_src.depthTestEnable;
    depthWriteEnable = copy_src.depthWriteEnable;
    depthCompareOp = copy_src.depthCompareOp;
    depthBoundsTestEnable = copy_src.depthBoundsTestEnable;
    stencilTestEnable = copy_src.stencilTestEnable;
    front = copy_src.front;
    back = copy_src.back;
    minDepthBounds = copy_src.minDepthBounds;
    maxDepthBounds = copy_src.maxDepthBounds;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineDepthStencilStateCreateInfo::~safe_VkPipelineDepthStencilStateCreateInfo() { FreePnextChain(pNext); }

void safe_VkPipelineDepthStencilStateCreateInfo::initialize(const VkPipelineDepthStencilStateCreateInfo* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    depthTestEnable = in_struct->depthTestEnable;
    depthWriteEnable = in_struct->depthWriteEnable;
    depthCompareOp = in_struct->depthCompareOp;
    depthBoundsTestEnable = in_struct->depthBoundsTestEnable;
    stencilTestEnable = in_struct->stencilTestEnable;
    front = in_struct->front;
    back = in_struct->back;
    minDepthBounds = in_struct->minDepthBounds;
    maxDepthBounds = in_struct->maxDepthBounds;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineDepthStencilStateCreateInfo::initialize(const safe_VkPipelineDepthStencilStateCreateInfo* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    depthTestEnable = copy_src->depthTestEnable;
    depthWriteEnable = copy_src->depthWriteEnable;
    depthCompareOp = copy_src->depthCompareOp;
    depthBoundsTestEnable = copy_src->depthBoundsTestEnable;
    stencilTestEnable = copy_src->stencilTestEnable;
    front = copy_src->front;
    back = copy_src->back;
    minDepthBounds = copy_src->minDepthBounds;
    maxDepthBounds = copy_src->maxDepthBounds;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo(
    const VkPipelineColorBlendStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      logicOpEnable(in_struct->logicOpEnable),
      logicOp(in_struct->logicOp),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * in_struct->attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      logicOpEnable(),
      logicOp(),
      attachmentCount(),
      pAttachments(nullptr) {}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo(
    const safe_VkPipelineColorBlendStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    logicOpEnable = copy_src.logicOpEnable;
    logicOp = copy_src.logicOp;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * copy_src.attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = copy_src.blendConstants[i];
    }
}

safe_VkPipelineColorBlendStateCreateInfo& safe_VkPipelineColorBlendStateCreateInfo::operator=(
    const safe_VkPipelineColorBlendStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    logicOpEnable = copy_src.logicOpEnable;
    logicOp = copy_src.logicOp;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * copy_src.attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = copy_src.blendConstants[i];
    }

    return *this;
}

safe_VkPipelineColorBlendStateCreateInfo::~safe_VkPipelineColorBlendStateCreateInfo() {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
}

void safe_VkPipelineColorBlendStateCreateInfo::initialize(const VkPipelineColorBlendStateCreateInfo* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    logicOpEnable = in_struct->logicOpEnable;
    logicOp = in_struct->logicOp;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * in_struct->attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

void safe_VkPipelineColorBlendStateCreateInfo::initialize(const safe_VkPipelineColorBlendStateCreateInfo* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    logicOpEnable = copy_src->logicOpEnable;
    logicOp = copy_src->logicOp;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[copy_src->attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src->pAttachments,
               sizeof(VkPipelineColorBlendAttachmentState) * copy_src->attachmentCount);
    }

    for (uint32_t i = 0; i < 4; ++i) {
        blendConstants[i] = copy_src->blendConstants[i];
    }
}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), dynamicStateCount(in_struct->dynamicStateCount), pDynamicStates(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)in_struct->pDynamicStates, sizeof(VkDynamicState) * in_struct->dynamicStateCount);
    }
}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      dynamicStateCount(),
      pDynamicStates(nullptr) {}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo(
    const safe_VkPipelineDynamicStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    dynamicStateCount = copy_src.dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDynamicStates) {
        pDynamicStates = new VkDynamicState[copy_src.dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)copy_src.pDynamicStates, sizeof(VkDynamicState) * copy_src.dynamicStateCount);
    }
}

safe_VkPipelineDynamicStateCreateInfo& safe_VkPipelineDynamicStateCreateInfo::operator=(
    const safe_VkPipelineDynamicStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDynamicStates) delete[] pDynamicStates;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    dynamicStateCount = copy_src.dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDynamicStates) {
        pDynamicStates = new VkDynamicState[copy_src.dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)copy_src.pDynamicStates, sizeof(VkDynamicState) * copy_src.dynamicStateCount);
    }

    return *this;
}

safe_VkPipelineDynamicStateCreateInfo::~safe_VkPipelineDynamicStateCreateInfo() {
    if (pDynamicStates) delete[] pDynamicStates;
    FreePnextChain(pNext);
}

void safe_VkPipelineDynamicStateCreateInfo::initialize(const VkPipelineDynamicStateCreateInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDynamicStates) delete[] pDynamicStates;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    dynamicStateCount = in_struct->dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)in_struct->pDynamicStates, sizeof(VkDynamicState) * in_struct->dynamicStateCount);
    }
}

void safe_VkPipelineDynamicStateCreateInfo::initialize(const safe_VkPipelineDynamicStateCreateInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    dynamicStateCount = copy_src->dynamicStateCount;
    pDynamicStates = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDynamicStates) {
        pDynamicStates = new VkDynamicState[copy_src->dynamicStateCount];
        memcpy((void*)pDynamicStates, (void*)copy_src->pDynamicStates, sizeof(VkDynamicState) * copy_src->dynamicStateCount);
    }
}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* in_struct,
                                                                     const bool uses_color_attachment,
                                                                     const bool uses_depthstencil_attachment,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      stageCount(in_struct->stageCount),
      pStages(nullptr),
      pVertexInputState(nullptr),
      pInputAssemblyState(nullptr),
      pTessellationState(nullptr),
      pViewportState(nullptr),
      pRasterizationState(nullptr),
      pMultisampleState(nullptr),
      pDepthStencilState(nullptr),
      pColorBlendState(nullptr),
      pDynamicState(nullptr),
      layout(in_struct->layout),
      renderPass(in_struct->renderPass),
      subpass(in_struct->subpass),
      basePipelineHandle(in_struct->basePipelineHandle),
      basePipelineIndex(in_struct->basePipelineIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    const bool is_graphics_library =
        vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(in_struct->pNext) != nullptr;
    if (stageCount && in_struct->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (in_struct->pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = in_struct->pRasterizationState
                                       ? (is_dynamic_has_rasterization || !in_struct->pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (in_struct->pViewportState && (has_rasterization || is_graphics_library)) {
        bool is_dynamic_viewports = false;
        bool is_dynamic_scissors = false;
        if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_viewports; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_VIEWPORT) is_dynamic_viewports = true;
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_scissors; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_SCISSOR) is_dynamic_scissors = true;
        }
        pViewportState =
            new safe_VkPipelineViewportStateCreateInfo(in_struct->pViewportState, is_dynamic_viewports, is_dynamic_scissors);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (in_struct->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (in_struct->pMultisampleState && (renderPass != VK_NULL_HANDLE || has_rasterization || is_graphics_library))
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    // needs a tracked subpass state uses_depthstencil_attachment
    if (in_struct->pDepthStencilState && ((has_rasterization && uses_depthstencil_attachment) || is_graphics_library))
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    // needs a tracked subpass state usesColorAttachment
    if (in_struct->pColorBlendState && ((has_rasterization && uses_color_attachment) || is_graphics_library))
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (in_struct->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = nullptr;
}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo()
    : sType(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      stageCount(),
      pStages(nullptr),
      pVertexInputState(nullptr),
      pInputAssemblyState(nullptr),
      pTessellationState(nullptr),
      pViewportState(nullptr),
      pRasterizationState(nullptr),
      pMultisampleState(nullptr),
      pDepthStencilState(nullptr),
      pColorBlendState(nullptr),
      pDynamicState(nullptr),
      layout(),
      renderPass(),
      subpass(),
      basePipelineHandle(),
      basePipelineIndex() {}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo(const safe_VkGraphicsPipelineCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = copy_src.layout;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;

    pNext = SafePnextCopy(copy_src.pNext);
    const bool is_graphics_library = vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*copy_src.pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (copy_src.pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*copy_src.pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (copy_src.pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*copy_src.pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (copy_src.pDynamicState && copy_src.pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < copy_src.pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (copy_src.pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = copy_src.pRasterizationState
                                       ? (is_dynamic_has_rasterization || !copy_src.pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (copy_src.pViewportState && (has_rasterization || is_graphics_library)) {
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*copy_src.pViewportState);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (copy_src.pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*copy_src.pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (copy_src.pMultisampleState && (has_rasterization || is_graphics_library))
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*copy_src.pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    if (copy_src.pDepthStencilState && (has_rasterization || is_graphics_library))
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*copy_src.pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    if (copy_src.pColorBlendState && (has_rasterization || is_graphics_library))
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*copy_src.pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (copy_src.pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*copy_src.pDynamicState);
    else
        pDynamicState = nullptr;
}

safe_VkGraphicsPipelineCreateInfo& safe_VkGraphicsPipelineCreateInfo::operator=(const safe_VkGraphicsPipelineCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pInputAssemblyState) delete pInputAssemblyState;
    if (pTessellationState) delete pTessellationState;
    if (pViewportState) delete pViewportState;
    if (pRasterizationState) delete pRasterizationState;
    if (pMultisampleState) delete pMultisampleState;
    if (pDepthStencilState) delete pDepthStencilState;
    if (pColorBlendState) delete pColorBlendState;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    stageCount = copy_src.stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = copy_src.layout;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    basePipelineHandle = copy_src.basePipelineHandle;
    basePipelineIndex = copy_src.basePipelineIndex;

    pNext = SafePnextCopy(copy_src.pNext);
    const bool is_graphics_library = vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(copy_src.pNext);
    if (stageCount && copy_src.pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src.pStages[i]);
        }
    }
    if (copy_src.pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*copy_src.pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (copy_src.pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*copy_src.pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (copy_src.pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*copy_src.pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (copy_src.pDynamicState && copy_src.pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < copy_src.pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (copy_src.pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = copy_src.pRasterizationState
                                       ? (is_dynamic_has_rasterization || !copy_src.pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (copy_src.pViewportState && (has_rasterization || is_graphics_library)) {
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*copy_src.pViewportState);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (copy_src.pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*copy_src.pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (copy_src.pMultisampleState && (has_rasterization || is_graphics_library))
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*copy_src.pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    if (copy_src.pDepthStencilState && (has_rasterization || is_graphics_library))
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*copy_src.pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    if (copy_src.pColorBlendState && (has_rasterization || is_graphics_library))
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*copy_src.pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (copy_src.pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*copy_src.pDynamicState);
    else
        pDynamicState = nullptr;

    return *this;
}

safe_VkGraphicsPipelineCreateInfo::~safe_VkGraphicsPipelineCreateInfo() {
    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pInputAssemblyState) delete pInputAssemblyState;
    if (pTessellationState) delete pTessellationState;
    if (pViewportState) delete pViewportState;
    if (pRasterizationState) delete pRasterizationState;
    if (pMultisampleState) delete pMultisampleState;
    if (pDepthStencilState) delete pDepthStencilState;
    if (pColorBlendState) delete pColorBlendState;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);
}

void safe_VkGraphicsPipelineCreateInfo::initialize(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment,
                                                   const bool uses_depthstencil_attachment,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pStages) delete[] pStages;
    if (pVertexInputState) delete pVertexInputState;
    if (pInputAssemblyState) delete pInputAssemblyState;
    if (pTessellationState) delete pTessellationState;
    if (pViewportState) delete pViewportState;
    if (pRasterizationState) delete pRasterizationState;
    if (pMultisampleState) delete pMultisampleState;
    if (pDepthStencilState) delete pDepthStencilState;
    if (pColorBlendState) delete pColorBlendState;
    if (pDynamicState) delete pDynamicState;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = in_struct->layout;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    const bool is_graphics_library =
        vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(in_struct->pNext) != nullptr;
    if (stageCount && in_struct->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (in_struct->pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = in_struct->pRasterizationState
                                       ? (is_dynamic_has_rasterization || !in_struct->pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (in_struct->pViewportState && (has_rasterization || is_graphics_library)) {
        bool is_dynamic_viewports = false;
        bool is_dynamic_scissors = false;
        if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_viewports; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_VIEWPORT) is_dynamic_viewports = true;
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_scissors; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_SCISSOR) is_dynamic_scissors = true;
        }
        pViewportState =
            new safe_VkPipelineViewportStateCreateInfo(in_struct->pViewportState, is_dynamic_viewports, is_dynamic_scissors);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (in_struct->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (in_struct->pMultisampleState && (renderPass != VK_NULL_HANDLE || has_rasterization || is_graphics_library))
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    // needs a tracked subpass state uses_depthstencil_attachment
    if (in_struct->pDepthStencilState && ((has_rasterization && uses_depthstencil_attachment) || is_graphics_library))
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    // needs a tracked subpass state usesColorAttachment
    if (in_struct->pColorBlendState && ((has_rasterization && uses_color_attachment) || is_graphics_library))
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (in_struct->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = nullptr;
}

void safe_VkGraphicsPipelineCreateInfo::initialize(const safe_VkGraphicsPipelineCreateInfo* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    stageCount = copy_src->stageCount;
    pStages = nullptr;
    pVertexInputState = nullptr;
    pInputAssemblyState = nullptr;
    pTessellationState = nullptr;
    pViewportState = nullptr;
    pRasterizationState = nullptr;
    pMultisampleState = nullptr;
    pDepthStencilState = nullptr;
    pColorBlendState = nullptr;
    pDynamicState = nullptr;
    layout = copy_src->layout;
    renderPass = copy_src->renderPass;
    subpass = copy_src->subpass;
    basePipelineHandle = copy_src->basePipelineHandle;
    basePipelineIndex = copy_src->basePipelineIndex;

    pNext = SafePnextCopy(copy_src->pNext);
    const bool is_graphics_library = vku::FindStructInPNextChain<VkGraphicsPipelineLibraryCreateInfoEXT>(copy_src->pNext);
    if (stageCount && copy_src->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i = 0; i < stageCount; ++i) {
            pStages[i].initialize(&copy_src->pStages[i]);
        }
    }
    if (copy_src->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*copy_src->pVertexInputState);
    else
        pVertexInputState = nullptr;
    if (copy_src->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*copy_src->pInputAssemblyState);
    else
        pInputAssemblyState = nullptr;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i = 0; i < stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT ||
                pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (copy_src->pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*copy_src->pTessellationState);
    else
        pTessellationState = nullptr;  // original pTessellationState pointer ignored
    bool is_dynamic_has_rasterization = false;
    if (copy_src->pDynamicState && copy_src->pDynamicState->pDynamicStates) {
        for (uint32_t i = 0; i < copy_src->pDynamicState->dynamicStateCount && !is_dynamic_has_rasterization; ++i)
            if (copy_src->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT)
                is_dynamic_has_rasterization = true;
    }
    const bool has_rasterization = copy_src->pRasterizationState
                                       ? (is_dynamic_has_rasterization || !copy_src->pRasterizationState->rasterizerDiscardEnable)
                                       : false;
    if (copy_src->pViewportState && (has_rasterization || is_graphics_library)) {
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*copy_src->pViewportState);
    } else
        pViewportState = nullptr;  // original pViewportState pointer ignored
    if (copy_src->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*copy_src->pRasterizationState);
    else
        pRasterizationState = nullptr;
    if (copy_src->pMultisampleState && (has_rasterization || is_graphics_library))
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*copy_src->pMultisampleState);
    else
        pMultisampleState = nullptr;  // original pMultisampleState pointer ignored
    if (copy_src->pDepthStencilState && (has_rasterization || is_graphics_library))
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*copy_src->pDepthStencilState);
    else
        pDepthStencilState = nullptr;  // original pDepthStencilState pointer ignored
    if (copy_src->pColorBlendState && (has_rasterization || is_graphics_library))
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*copy_src->pColorBlendState);
    else
        pColorBlendState = nullptr;  // original pColorBlendState pointer ignored
    if (copy_src->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*copy_src->pDynamicState);
    else
        pDynamicState = nullptr;
}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      setLayoutCount(in_struct->setLayoutCount),
      pSetLayouts(nullptr),
      pushConstantRangeCount(in_struct->pushConstantRangeCount),
      pPushConstantRanges(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }

    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)in_struct->pPushConstantRanges,
               sizeof(VkPushConstantRange) * in_struct->pushConstantRangeCount);
    }
}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO),
      pNext(nullptr),
      flags(),
      setLayoutCount(),
      pSetLayouts(nullptr),
      pushConstantRangeCount(),
      pPushConstantRanges(nullptr) {}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo(const safe_VkPipelineLayoutCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    setLayoutCount = copy_src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (setLayoutCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }

    if (copy_src.pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[copy_src.pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)copy_src.pPushConstantRanges,
               sizeof(VkPushConstantRange) * copy_src.pushConstantRangeCount);
    }
}

safe_VkPipelineLayoutCreateInfo& safe_VkPipelineLayoutCreateInfo::operator=(const safe_VkPipelineLayoutCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    setLayoutCount = copy_src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (setLayoutCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }

    if (copy_src.pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[copy_src.pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)copy_src.pPushConstantRanges,
               sizeof(VkPushConstantRange) * copy_src.pushConstantRangeCount);
    }

    return *this;
}

safe_VkPipelineLayoutCreateInfo::~safe_VkPipelineLayoutCreateInfo() {
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    FreePnextChain(pNext);
}

void safe_VkPipelineLayoutCreateInfo::initialize(const VkPipelineLayoutCreateInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSetLayouts) delete[] pSetLayouts;
    if (pPushConstantRanges) delete[] pPushConstantRanges;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    setLayoutCount = in_struct->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = in_struct->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }

    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)in_struct->pPushConstantRanges,
               sizeof(VkPushConstantRange) * in_struct->pushConstantRangeCount);
    }
}

void safe_VkPipelineLayoutCreateInfo::initialize(const safe_VkPipelineLayoutCreateInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    setLayoutCount = copy_src->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = copy_src->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (setLayoutCount && copy_src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i = 0; i < setLayoutCount; ++i) {
            pSetLayouts[i] = copy_src->pSetLayouts[i];
        }
    }

    if (copy_src->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[copy_src->pushConstantRangeCount];
        memcpy((void*)pPushConstantRanges, (void*)copy_src->pPushConstantRanges,
               sizeof(VkPushConstantRange) * copy_src->pushConstantRangeCount);
    }
}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo(const VkSamplerCreateInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      magFilter(in_struct->magFilter),
      minFilter(in_struct->minFilter),
      mipmapMode(in_struct->mipmapMode),
      addressModeU(in_struct->addressModeU),
      addressModeV(in_struct->addressModeV),
      addressModeW(in_struct->addressModeW),
      mipLodBias(in_struct->mipLodBias),
      anisotropyEnable(in_struct->anisotropyEnable),
      maxAnisotropy(in_struct->maxAnisotropy),
      compareEnable(in_struct->compareEnable),
      compareOp(in_struct->compareOp),
      minLod(in_struct->minLod),
      maxLod(in_struct->maxLod),
      borderColor(in_struct->borderColor),
      unnormalizedCoordinates(in_struct->unnormalizedCoordinates) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO),
      pNext(nullptr),
      flags(),
      magFilter(),
      minFilter(),
      mipmapMode(),
      addressModeU(),
      addressModeV(),
      addressModeW(),
      mipLodBias(),
      anisotropyEnable(),
      maxAnisotropy(),
      compareEnable(),
      compareOp(),
      minLod(),
      maxLod(),
      borderColor(),
      unnormalizedCoordinates() {}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo(const safe_VkSamplerCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    magFilter = copy_src.magFilter;
    minFilter = copy_src.minFilter;
    mipmapMode = copy_src.mipmapMode;
    addressModeU = copy_src.addressModeU;
    addressModeV = copy_src.addressModeV;
    addressModeW = copy_src.addressModeW;
    mipLodBias = copy_src.mipLodBias;
    anisotropyEnable = copy_src.anisotropyEnable;
    maxAnisotropy = copy_src.maxAnisotropy;
    compareEnable = copy_src.compareEnable;
    compareOp = copy_src.compareOp;
    minLod = copy_src.minLod;
    maxLod = copy_src.maxLod;
    borderColor = copy_src.borderColor;
    unnormalizedCoordinates = copy_src.unnormalizedCoordinates;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerCreateInfo& safe_VkSamplerCreateInfo::operator=(const safe_VkSamplerCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    magFilter = copy_src.magFilter;
    minFilter = copy_src.minFilter;
    mipmapMode = copy_src.mipmapMode;
    addressModeU = copy_src.addressModeU;
    addressModeV = copy_src.addressModeV;
    addressModeW = copy_src.addressModeW;
    mipLodBias = copy_src.mipLodBias;
    anisotropyEnable = copy_src.anisotropyEnable;
    maxAnisotropy = copy_src.maxAnisotropy;
    compareEnable = copy_src.compareEnable;
    compareOp = copy_src.compareOp;
    minLod = copy_src.minLod;
    maxLod = copy_src.maxLod;
    borderColor = copy_src.borderColor;
    unnormalizedCoordinates = copy_src.unnormalizedCoordinates;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerCreateInfo::~safe_VkSamplerCreateInfo() { FreePnextChain(pNext); }

void safe_VkSamplerCreateInfo::initialize(const VkSamplerCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    magFilter = in_struct->magFilter;
    minFilter = in_struct->minFilter;
    mipmapMode = in_struct->mipmapMode;
    addressModeU = in_struct->addressModeU;
    addressModeV = in_struct->addressModeV;
    addressModeW = in_struct->addressModeW;
    mipLodBias = in_struct->mipLodBias;
    anisotropyEnable = in_struct->anisotropyEnable;
    maxAnisotropy = in_struct->maxAnisotropy;
    compareEnable = in_struct->compareEnable;
    compareOp = in_struct->compareOp;
    minLod = in_struct->minLod;
    maxLod = in_struct->maxLod;
    borderColor = in_struct->borderColor;
    unnormalizedCoordinates = in_struct->unnormalizedCoordinates;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerCreateInfo::initialize(const safe_VkSamplerCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    magFilter = copy_src->magFilter;
    minFilter = copy_src->minFilter;
    mipmapMode = copy_src->mipmapMode;
    addressModeU = copy_src->addressModeU;
    addressModeV = copy_src->addressModeV;
    addressModeW = copy_src->addressModeW;
    mipLodBias = copy_src->mipLodBias;
    anisotropyEnable = copy_src->anisotropyEnable;
    maxAnisotropy = copy_src->maxAnisotropy;
    compareEnable = copy_src->compareEnable;
    compareOp = copy_src->compareOp;
    minLod = copy_src->minLod;
    maxLod = copy_src->maxLod;
    borderColor = copy_src->borderColor;
    unnormalizedCoordinates = copy_src->unnormalizedCoordinates;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet(const VkCopyDescriptorSet* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcSet(in_struct->srcSet),
      srcBinding(in_struct->srcBinding),
      srcArrayElement(in_struct->srcArrayElement),
      dstSet(in_struct->dstSet),
      dstBinding(in_struct->dstBinding),
      dstArrayElement(in_struct->dstArrayElement),
      descriptorCount(in_struct->descriptorCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet()
    : sType(VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET),
      pNext(nullptr),
      srcSet(),
      srcBinding(),
      srcArrayElement(),
      dstSet(),
      dstBinding(),
      dstArrayElement(),
      descriptorCount() {}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet(const safe_VkCopyDescriptorSet& copy_src) {
    sType = copy_src.sType;
    srcSet = copy_src.srcSet;
    srcBinding = copy_src.srcBinding;
    srcArrayElement = copy_src.srcArrayElement;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCopyDescriptorSet& safe_VkCopyDescriptorSet::operator=(const safe_VkCopyDescriptorSet& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSet = copy_src.srcSet;
    srcBinding = copy_src.srcBinding;
    srcArrayElement = copy_src.srcArrayElement;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCopyDescriptorSet::~safe_VkCopyDescriptorSet() { FreePnextChain(pNext); }

void safe_VkCopyDescriptorSet::initialize(const VkCopyDescriptorSet* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSet = in_struct->srcSet;
    srcBinding = in_struct->srcBinding;
    srcArrayElement = in_struct->srcArrayElement;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCopyDescriptorSet::initialize(const safe_VkCopyDescriptorSet* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSet = copy_src->srcSet;
    srcBinding = copy_src->srcBinding;
    srcArrayElement = copy_src->srcArrayElement;
    dstSet = copy_src->dstSet;
    dstBinding = copy_src->dstBinding;
    dstArrayElement = copy_src->dstArrayElement;
    descriptorCount = copy_src->descriptorCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      maxSets(in_struct->maxSets),
      poolSizeCount(in_struct->poolSizeCount),
      pPoolSizes(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize) * in_struct->poolSizeCount);
    }
}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO),
      pNext(nullptr),
      flags(),
      maxSets(),
      poolSizeCount(),
      pPoolSizes(nullptr) {}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo(const safe_VkDescriptorPoolCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    maxSets = copy_src.maxSets;
    poolSizeCount = copy_src.poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[copy_src.poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)copy_src.pPoolSizes, sizeof(VkDescriptorPoolSize) * copy_src.poolSizeCount);
    }
}

safe_VkDescriptorPoolCreateInfo& safe_VkDescriptorPoolCreateInfo::operator=(const safe_VkDescriptorPoolCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pPoolSizes) delete[] pPoolSizes;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    maxSets = copy_src.maxSets;
    poolSizeCount = copy_src.poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[copy_src.poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)copy_src.pPoolSizes, sizeof(VkDescriptorPoolSize) * copy_src.poolSizeCount);
    }

    return *this;
}

safe_VkDescriptorPoolCreateInfo::~safe_VkDescriptorPoolCreateInfo() {
    if (pPoolSizes) delete[] pPoolSizes;
    FreePnextChain(pNext);
}

void safe_VkDescriptorPoolCreateInfo::initialize(const VkDescriptorPoolCreateInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPoolSizes) delete[] pPoolSizes;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    maxSets = in_struct->maxSets;
    poolSizeCount = in_struct->poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize) * in_struct->poolSizeCount);
    }
}

void safe_VkDescriptorPoolCreateInfo::initialize(const safe_VkDescriptorPoolCreateInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    maxSets = copy_src->maxSets;
    poolSizeCount = copy_src->poolSizeCount;
    pPoolSizes = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[copy_src->poolSizeCount];
        memcpy((void*)pPoolSizes, (void*)copy_src->pPoolSizes, sizeof(VkDescriptorPoolSize) * copy_src->poolSizeCount);
    }
}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      descriptorPool(in_struct->descriptorPool),
      descriptorSetCount(in_struct->descriptorSetCount),
      pSetLayouts(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO),
      pNext(nullptr),
      descriptorPool(),
      descriptorSetCount(),
      pSetLayouts(nullptr) {}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo(const safe_VkDescriptorSetAllocateInfo& copy_src) {
    sType = copy_src.sType;
    descriptorPool = copy_src.descriptorPool;
    descriptorSetCount = copy_src.descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorSetCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }
}

safe_VkDescriptorSetAllocateInfo& safe_VkDescriptorSetAllocateInfo::operator=(const safe_VkDescriptorSetAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSetLayouts) delete[] pSetLayouts;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorPool = copy_src.descriptorPool;
    descriptorSetCount = copy_src.descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (descriptorSetCount && copy_src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = copy_src.pSetLayouts[i];
        }
    }

    return *this;
}

safe_VkDescriptorSetAllocateInfo::~safe_VkDescriptorSetAllocateInfo() {
    if (pSetLayouts) delete[] pSetLayouts;
    FreePnextChain(pNext);
}

void safe_VkDescriptorSetAllocateInfo::initialize(const VkDescriptorSetAllocateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSetLayouts) delete[] pSetLayouts;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorPool = in_struct->descriptorPool;
    descriptorSetCount = in_struct->descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

void safe_VkDescriptorSetAllocateInfo::initialize(const safe_VkDescriptorSetAllocateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorPool = copy_src->descriptorPool;
    descriptorSetCount = copy_src->descriptorSetCount;
    pSetLayouts = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (descriptorSetCount && copy_src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            pSetLayouts[i] = copy_src->pSetLayouts[i];
        }
    }
}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state)
    : binding(in_struct->binding),
      descriptorType(in_struct->descriptorType),
      descriptorCount(in_struct->descriptorCount),
      stageFlags(in_struct->stageFlags),
      pImmutableSamplers(nullptr) {
    const bool sampler_type = in_struct->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              in_struct->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && in_struct->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding()
    : binding(), descriptorType(), descriptorCount(), stageFlags(), pImmutableSamplers(nullptr) {}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding(const safe_VkDescriptorSetLayoutBinding& copy_src) {
    binding = copy_src.binding;
    descriptorType = copy_src.descriptorType;
    descriptorCount = copy_src.descriptorCount;
    stageFlags = copy_src.stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = copy_src.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              copy_src.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && copy_src.pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = copy_src.pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutBinding& safe_VkDescriptorSetLayoutBinding::operator=(const safe_VkDescriptorSetLayoutBinding& copy_src) {
    if (&copy_src == this) return *this;

    if (pImmutableSamplers) delete[] pImmutableSamplers;

    binding = copy_src.binding;
    descriptorType = copy_src.descriptorType;
    descriptorCount = copy_src.descriptorCount;
    stageFlags = copy_src.stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = copy_src.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              copy_src.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && copy_src.pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = copy_src.pImmutableSamplers[i];
        }
    }

    return *this;
}

safe_VkDescriptorSetLayoutBinding::~safe_VkDescriptorSetLayoutBinding() {
    if (pImmutableSamplers) delete[] pImmutableSamplers;
}

void safe_VkDescriptorSetLayoutBinding::initialize(const VkDescriptorSetLayoutBinding* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    if (pImmutableSamplers) delete[] pImmutableSamplers;
    binding = in_struct->binding;
    descriptorType = in_struct->descriptorType;
    descriptorCount = in_struct->descriptorCount;
    stageFlags = in_struct->stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = in_struct->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              in_struct->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && in_struct->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

void safe_VkDescriptorSetLayoutBinding::initialize(const safe_VkDescriptorSetLayoutBinding* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    binding = copy_src->binding;
    descriptorType = copy_src->descriptorType;
    descriptorCount = copy_src->descriptorCount;
    stageFlags = copy_src->stageFlags;
    pImmutableSamplers = nullptr;

    const bool sampler_type = copy_src->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
                              copy_src->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && copy_src->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i = 0; i < descriptorCount; ++i) {
            pImmutableSamplers[i] = copy_src->pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), bindingCount(in_struct->bindingCount), pBindings(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (bindingCount && in_struct->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO), pNext(nullptr), flags(), bindingCount(), pBindings(nullptr) {}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo(const safe_VkDescriptorSetLayoutCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    bindingCount = copy_src.bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (bindingCount && copy_src.pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&copy_src.pBindings[i]);
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo& safe_VkDescriptorSetLayoutCreateInfo::operator=(
    const safe_VkDescriptorSetLayoutCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBindings) delete[] pBindings;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    bindingCount = copy_src.bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (bindingCount && copy_src.pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&copy_src.pBindings[i]);
        }
    }

    return *this;
}

safe_VkDescriptorSetLayoutCreateInfo::~safe_VkDescriptorSetLayoutCreateInfo() {
    if (pBindings) delete[] pBindings;
    FreePnextChain(pNext);
}

void safe_VkDescriptorSetLayoutCreateInfo::initialize(const VkDescriptorSetLayoutCreateInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBindings) delete[] pBindings;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    bindingCount = in_struct->bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (bindingCount && in_struct->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

void safe_VkDescriptorSetLayoutCreateInfo::initialize(const safe_VkDescriptorSetLayoutCreateInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    bindingCount = copy_src->bindingCount;
    pBindings = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (bindingCount && copy_src->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i = 0; i < bindingCount; ++i) {
            pBindings[i].initialize(&copy_src->pBindings[i]);
        }
    }
}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet(const VkWriteDescriptorSet* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      dstSet(in_struct->dstSet),
      dstBinding(in_struct->dstBinding),
      dstArrayElement(in_struct->dstArrayElement),
      descriptorCount(in_struct->descriptorCount),
      descriptorType(in_struct->descriptorType),
      pImageInfo(nullptr),
      pBufferInfo(nullptr),
      pTexelBufferView(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && in_struct->pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = in_struct->pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && in_struct->pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = in_struct->pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && in_struct->pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = in_struct->pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet()
    : sType(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET),
      pNext(nullptr),
      dstSet(),
      dstBinding(),
      dstArrayElement(),
      descriptorCount(),
      descriptorType(),
      pImageInfo(nullptr),
      pBufferInfo(nullptr),
      pTexelBufferView(nullptr) {}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet(const safe_VkWriteDescriptorSet& copy_src) {
    sType = copy_src.sType;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    descriptorType = copy_src.descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && copy_src.pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = copy_src.pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && copy_src.pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = copy_src.pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && copy_src.pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = copy_src.pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

safe_VkWriteDescriptorSet& safe_VkWriteDescriptorSet::operator=(const safe_VkWriteDescriptorSet& copy_src) {
    if (&copy_src == this) return *this;

    if (pImageInfo) delete[] pImageInfo;
    if (pBufferInfo) delete[] pBufferInfo;
    if (pTexelBufferView) delete[] pTexelBufferView;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    dstSet = copy_src.dstSet;
    dstBinding = copy_src.dstBinding;
    dstArrayElement = copy_src.dstArrayElement;
    descriptorCount = copy_src.descriptorCount;
    descriptorType = copy_src.descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && copy_src.pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = copy_src.pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && copy_src.pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = copy_src.pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && copy_src.pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = copy_src.pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }

    return *this;
}

safe_VkWriteDescriptorSet::~safe_VkWriteDescriptorSet() {
    if (pImageInfo) delete[] pImageInfo;
    if (pBufferInfo) delete[] pBufferInfo;
    if (pTexelBufferView) delete[] pTexelBufferView;
    FreePnextChain(pNext);
}

void safe_VkWriteDescriptorSet::initialize(const VkWriteDescriptorSet* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pImageInfo) delete[] pImageInfo;
    if (pBufferInfo) delete[] pBufferInfo;
    if (pTexelBufferView) delete[] pTexelBufferView;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
    descriptorType = in_struct->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && in_struct->pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = in_struct->pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && in_struct->pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = in_struct->pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && in_struct->pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = in_struct->pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

void safe_VkWriteDescriptorSet::initialize(const safe_VkWriteDescriptorSet* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dstSet = copy_src->dstSet;
    dstBinding = copy_src->dstBinding;
    dstArrayElement = copy_src->dstArrayElement;
    descriptorCount = copy_src->descriptorCount;
    descriptorType = copy_src->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        case VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM:
        case VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM:
            if (descriptorCount && copy_src->pImageInfo) {
                pImageInfo = new VkDescriptorImageInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pImageInfo[i] = copy_src->pImageInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
            if (descriptorCount && copy_src->pBufferInfo) {
                pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pBufferInfo[i] = copy_src->pBufferInfo[i];
                }
            }
            break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
            if (descriptorCount && copy_src->pTexelBufferView) {
                pTexelBufferView = new VkBufferView[descriptorCount];
                for (uint32_t i = 0; i < descriptorCount; ++i) {
                    pTexelBufferView[i] = copy_src->pTexelBufferView[i];
                }
            }
            break;
        default:
            break;
    }
}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo(const VkFramebufferCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      renderPass(in_struct->renderPass),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr),
      width(in_struct->width),
      height(in_struct->height),
      layers(in_struct->layers) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentCount && in_struct->pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo()
    : sType(VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO),
      pNext(nullptr),
      flags(),
      renderPass(),
      attachmentCount(),
      pAttachments(nullptr),
      width(),
      height(),
      layers() {}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo(const safe_VkFramebufferCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    renderPass = copy_src.renderPass;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    width = copy_src.width;
    height = copy_src.height;
    layers = copy_src.layers;

    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }
}

safe_VkFramebufferCreateInfo& safe_VkFramebufferCreateInfo::operator=(const safe_VkFramebufferCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    renderPass = copy_src.renderPass;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    width = copy_src.width;
    height = copy_src.height;
    layers = copy_src.layers;

    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }

    return *this;
}

safe_VkFramebufferCreateInfo::~safe_VkFramebufferCreateInfo() {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
}

void safe_VkFramebufferCreateInfo::initialize(const VkFramebufferCreateInfo* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    renderPass = in_struct->renderPass;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    width = in_struct->width;
    height = in_struct->height;
    layers = in_struct->layers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (attachmentCount && in_struct->pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

void safe_VkFramebufferCreateInfo::initialize(const safe_VkFramebufferCreateInfo* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    renderPass = copy_src->renderPass;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    width = copy_src->width;
    height = copy_src->height;
    layers = copy_src->layers;

    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentCount && copy_src->pAttachments && !(flags & VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT)) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src->pAttachments[i];
        }
    }
}

safe_VkSubpassDescription::safe_VkSubpassDescription(const VkSubpassDescription* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state)
    : flags(in_struct->flags),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      inputAttachmentCount(in_struct->inputAttachmentCount),
      pInputAttachments(nullptr),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(in_struct->preserveAttachmentCount),
      pPreserveAttachments(nullptr) {
    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)in_struct->pInputAttachments,
               sizeof(VkAttachmentReference) * in_struct->inputAttachmentCount);
    }

    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)in_struct->pColorAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)in_struct->pResolveAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

safe_VkSubpassDescription::safe_VkSubpassDescription()
    : flags(),
      pipelineBindPoint(),
      inputAttachmentCount(),
      pInputAttachments(nullptr),
      colorAttachmentCount(),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(),
      pPreserveAttachments(nullptr) {}

safe_VkSubpassDescription::safe_VkSubpassDescription(const safe_VkSubpassDescription& copy_src) {
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (copy_src.pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[copy_src.inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)copy_src.pInputAttachments,
               sizeof(VkAttachmentReference) * copy_src.inputAttachmentCount);
    }

    if (copy_src.pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)copy_src.pColorAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)copy_src.pResolveAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*copy_src.pDepthStencilAttachment);
    }

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }
}

safe_VkSubpassDescription& safe_VkSubpassDescription::operator=(const safe_VkSubpassDescription& copy_src) {
    if (&copy_src == this) return *this;

    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;

    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (copy_src.pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[copy_src.inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)copy_src.pInputAttachments,
               sizeof(VkAttachmentReference) * copy_src.inputAttachmentCount);
    }

    if (copy_src.pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)copy_src.pColorAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[copy_src.colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)copy_src.pResolveAttachments,
               sizeof(VkAttachmentReference) * copy_src.colorAttachmentCount);
    }

    if (copy_src.pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*copy_src.pDepthStencilAttachment);
    }

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }

    return *this;
}

safe_VkSubpassDescription::~safe_VkSubpassDescription() {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
}

void safe_VkSubpassDescription::initialize(const VkSubpassDescription* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    flags = in_struct->flags;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    inputAttachmentCount = in_struct->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = in_struct->preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)in_struct->pInputAttachments,
               sizeof(VkAttachmentReference) * in_struct->inputAttachmentCount);
    }

    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)in_struct->pColorAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)in_struct->pResolveAttachments,
               sizeof(VkAttachmentReference) * in_struct->colorAttachmentCount);
    }

    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

void safe_VkSubpassDescription::initialize(const safe_VkSubpassDescription* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    flags = copy_src->flags;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    inputAttachmentCount = copy_src->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src->preserveAttachmentCount;
    pPreserveAttachments = nullptr;

    if (copy_src->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[copy_src->inputAttachmentCount];
        memcpy((void*)pInputAttachments, (void*)copy_src->pInputAttachments,
               sizeof(VkAttachmentReference) * copy_src->inputAttachmentCount);
    }

    if (copy_src->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachments, (void*)copy_src->pColorAttachments,
               sizeof(VkAttachmentReference) * copy_src->colorAttachmentCount);
    }

    if (copy_src->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[copy_src->colorAttachmentCount];
        memcpy((void*)pResolveAttachments, (void*)copy_src->pResolveAttachments,
               sizeof(VkAttachmentReference) * copy_src->colorAttachmentCount);
    }

    if (copy_src->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*copy_src->pDepthStencilAttachment);
    }

    if (copy_src->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src->pPreserveAttachments,
               sizeof(uint32_t) * copy_src->preserveAttachmentCount);
    }
}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo(const VkRenderPassCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr),
      subpassCount(in_struct->subpassCount),
      pSubpasses(nullptr),
      dependencyCount(in_struct->dependencyCount),
      pDependencies(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments, sizeof(VkAttachmentDescription) * in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }

    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy((void*)pDependencies, (void*)in_struct->pDependencies, sizeof(VkSubpassDependency) * in_struct->dependencyCount);
    }
}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO),
      pNext(nullptr),
      flags(),
      attachmentCount(),
      pAttachments(nullptr),
      subpassCount(),
      pSubpasses(nullptr),
      dependencyCount(),
      pDependencies(nullptr) {}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo(const safe_VkRenderPassCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkAttachmentDescription[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments, sizeof(VkAttachmentDescription) * copy_src.attachmentCount);
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }

    if (copy_src.pDependencies) {
        pDependencies = new VkSubpassDependency[copy_src.dependencyCount];
        memcpy((void*)pDependencies, (void*)copy_src.pDependencies, sizeof(VkSubpassDependency) * copy_src.dependencyCount);
    }
}

safe_VkRenderPassCreateInfo& safe_VkRenderPassCreateInfo::operator=(const safe_VkRenderPassCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAttachments) {
        pAttachments = new VkAttachmentDescription[copy_src.attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src.pAttachments, sizeof(VkAttachmentDescription) * copy_src.attachmentCount);
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }

    if (copy_src.pDependencies) {
        pDependencies = new VkSubpassDependency[copy_src.dependencyCount];
        memcpy((void*)pDependencies, (void*)copy_src.pDependencies, sizeof(VkSubpassDependency) * copy_src.dependencyCount);
    }

    return *this;
}

safe_VkRenderPassCreateInfo::~safe_VkRenderPassCreateInfo() {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    FreePnextChain(pNext);
}

void safe_VkRenderPassCreateInfo::initialize(const VkRenderPassCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    subpassCount = in_struct->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy((void*)pAttachments, (void*)in_struct->pAttachments, sizeof(VkAttachmentDescription) * in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }

    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy((void*)pDependencies, (void*)in_struct->pDependencies, sizeof(VkSubpassDependency) * in_struct->dependencyCount);
    }
}

void safe_VkRenderPassCreateInfo::initialize(const safe_VkRenderPassCreateInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src->dependencyCount;
    pDependencies = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAttachments) {
        pAttachments = new VkAttachmentDescription[copy_src->attachmentCount];
        memcpy((void*)pAttachments, (void*)copy_src->pAttachments, sizeof(VkAttachmentDescription) * copy_src->attachmentCount);
    }
    if (subpassCount && copy_src->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src->pSubpasses[i]);
        }
    }

    if (copy_src->pDependencies) {
        pDependencies = new VkSubpassDependency[copy_src->dependencyCount];
        memcpy((void*)pDependencies, (void*)copy_src->pDependencies, sizeof(VkSubpassDependency) * copy_src->dependencyCount);
    }
}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), queueFamilyIndex(in_struct->queueFamilyIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO), pNext(nullptr), flags(), queueFamilyIndex() {}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo(const safe_VkCommandPoolCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCommandPoolCreateInfo& safe_VkCommandPoolCreateInfo::operator=(const safe_VkCommandPoolCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCommandPoolCreateInfo::~safe_VkCommandPoolCreateInfo() { FreePnextChain(pNext); }

void safe_VkCommandPoolCreateInfo::initialize(const VkCommandPoolCreateInfo* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCommandPoolCreateInfo::initialize(const safe_VkCommandPoolCreateInfo* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      commandPool(in_struct->commandPool),
      level(in_struct->level),
      commandBufferCount(in_struct->commandBufferCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO), pNext(nullptr), commandPool(), level(), commandBufferCount() {}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo(const safe_VkCommandBufferAllocateInfo& copy_src) {
    sType = copy_src.sType;
    commandPool = copy_src.commandPool;
    level = copy_src.level;
    commandBufferCount = copy_src.commandBufferCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCommandBufferAllocateInfo& safe_VkCommandBufferAllocateInfo::operator=(const safe_VkCommandBufferAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    commandPool = copy_src.commandPool;
    level = copy_src.level;
    commandBufferCount = copy_src.commandBufferCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCommandBufferAllocateInfo::~safe_VkCommandBufferAllocateInfo() { FreePnextChain(pNext); }

void safe_VkCommandBufferAllocateInfo::initialize(const VkCommandBufferAllocateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    commandPool = in_struct->commandPool;
    level = in_struct->level;
    commandBufferCount = in_struct->commandBufferCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCommandBufferAllocateInfo::initialize(const safe_VkCommandBufferAllocateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    commandPool = copy_src->commandPool;
    level = copy_src->level;
    commandBufferCount = copy_src->commandBufferCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType),
      renderPass(in_struct->renderPass),
      subpass(in_struct->subpass),
      framebuffer(in_struct->framebuffer),
      occlusionQueryEnable(in_struct->occlusionQueryEnable),
      queryFlags(in_struct->queryFlags),
      pipelineStatistics(in_struct->pipelineStatistics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO),
      pNext(nullptr),
      renderPass(),
      subpass(),
      framebuffer(),
      occlusionQueryEnable(),
      queryFlags(),
      pipelineStatistics() {}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo(const safe_VkCommandBufferInheritanceInfo& copy_src) {
    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    framebuffer = copy_src.framebuffer;
    occlusionQueryEnable = copy_src.occlusionQueryEnable;
    queryFlags = copy_src.queryFlags;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCommandBufferInheritanceInfo& safe_VkCommandBufferInheritanceInfo::operator=(
    const safe_VkCommandBufferInheritanceInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    subpass = copy_src.subpass;
    framebuffer = copy_src.framebuffer;
    occlusionQueryEnable = copy_src.occlusionQueryEnable;
    queryFlags = copy_src.queryFlags;
    pipelineStatistics = copy_src.pipelineStatistics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCommandBufferInheritanceInfo::~safe_VkCommandBufferInheritanceInfo() { FreePnextChain(pNext); }

void safe_VkCommandBufferInheritanceInfo::initialize(const VkCommandBufferInheritanceInfo* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    framebuffer = in_struct->framebuffer;
    occlusionQueryEnable = in_struct->occlusionQueryEnable;
    queryFlags = in_struct->queryFlags;
    pipelineStatistics = in_struct->pipelineStatistics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCommandBufferInheritanceInfo::initialize(const safe_VkCommandBufferInheritanceInfo* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    renderPass = copy_src->renderPass;
    subpass = copy_src->subpass;
    framebuffer = copy_src->framebuffer;
    occlusionQueryEnable = copy_src->occlusionQueryEnable;
    queryFlags = copy_src->queryFlags;
    pipelineStatistics = copy_src->pipelineStatistics;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), pInheritanceInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pInheritanceInfo) pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO), pNext(nullptr), flags(), pInheritanceInfo(nullptr) {}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo(const safe_VkCommandBufferBeginInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pInheritanceInfo) pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*copy_src.pInheritanceInfo);
}

safe_VkCommandBufferBeginInfo& safe_VkCommandBufferBeginInfo::operator=(const safe_VkCommandBufferBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pInheritanceInfo) delete pInheritanceInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pInheritanceInfo) pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*copy_src.pInheritanceInfo);

    return *this;
}

safe_VkCommandBufferBeginInfo::~safe_VkCommandBufferBeginInfo() {
    if (pInheritanceInfo) delete pInheritanceInfo;
    FreePnextChain(pNext);
}

void safe_VkCommandBufferBeginInfo::initialize(const VkCommandBufferBeginInfo* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pInheritanceInfo) delete pInheritanceInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pInheritanceInfo) pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
}

void safe_VkCommandBufferBeginInfo::initialize(const safe_VkCommandBufferBeginInfo* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pInheritanceInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pInheritanceInfo) pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*copy_src->pInheritanceInfo);
}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo(const VkRenderPassBeginInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      renderPass(in_struct->renderPass),
      framebuffer(in_struct->framebuffer),
      renderArea(in_struct->renderArea),
      clearValueCount(in_struct->clearValueCount),
      pClearValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy((void*)pClearValues, (void*)in_struct->pClearValues, sizeof(VkClearValue) * in_struct->clearValueCount);
    }
}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO),
      pNext(nullptr),
      renderPass(),
      framebuffer(),
      renderArea(),
      clearValueCount(),
      pClearValues(nullptr) {}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo(const safe_VkRenderPassBeginInfo& copy_src) {
    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    framebuffer = copy_src.framebuffer;
    renderArea = copy_src.renderArea;
    clearValueCount = copy_src.clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pClearValues) {
        pClearValues = new VkClearValue[copy_src.clearValueCount];
        memcpy((void*)pClearValues, (void*)copy_src.pClearValues, sizeof(VkClearValue) * copy_src.clearValueCount);
    }
}

safe_VkRenderPassBeginInfo& safe_VkRenderPassBeginInfo::operator=(const safe_VkRenderPassBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pClearValues) delete[] pClearValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    renderPass = copy_src.renderPass;
    framebuffer = copy_src.framebuffer;
    renderArea = copy_src.renderArea;
    clearValueCount = copy_src.clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pClearValues) {
        pClearValues = new VkClearValue[copy_src.clearValueCount];
        memcpy((void*)pClearValues, (void*)copy_src.pClearValues, sizeof(VkClearValue) * copy_src.clearValueCount);
    }

    return *this;
}

safe_VkRenderPassBeginInfo::~safe_VkRenderPassBeginInfo() {
    if (pClearValues) delete[] pClearValues;
    FreePnextChain(pNext);
}

void safe_VkRenderPassBeginInfo::initialize(const VkRenderPassBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pClearValues) delete[] pClearValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    renderPass = in_struct->renderPass;
    framebuffer = in_struct->framebuffer;
    renderArea = in_struct->renderArea;
    clearValueCount = in_struct->clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy((void*)pClearValues, (void*)in_struct->pClearValues, sizeof(VkClearValue) * in_struct->clearValueCount);
    }
}

void safe_VkRenderPassBeginInfo::initialize(const safe_VkRenderPassBeginInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    renderPass = copy_src->renderPass;
    framebuffer = copy_src->framebuffer;
    renderArea = copy_src->renderArea;
    clearValueCount = copy_src->clearValueCount;
    pClearValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pClearValues) {
        pClearValues = new VkClearValue[copy_src->clearValueCount];
        memcpy((void*)pClearValues, (void*)copy_src->pClearValues, sizeof(VkClearValue) * copy_src->clearValueCount);
    }
}

safe_VkPhysicalDeviceSubgroupProperties::safe_VkPhysicalDeviceSubgroupProperties(
    const VkPhysicalDeviceSubgroupProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      subgroupSize(in_struct->subgroupSize),
      supportedStages(in_struct->supportedStages),
      supportedOperations(in_struct->supportedOperations),
      quadOperationsInAllStages(in_struct->quadOperationsInAllStages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSubgroupProperties::safe_VkPhysicalDeviceSubgroupProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES),
      pNext(nullptr),
      subgroupSize(),
      supportedStages(),
      supportedOperations(),
      quadOperationsInAllStages() {}

safe_VkPhysicalDeviceSubgroupProperties::safe_VkPhysicalDeviceSubgroupProperties(
    const safe_VkPhysicalDeviceSubgroupProperties& copy_src) {
    sType = copy_src.sType;
    subgroupSize = copy_src.subgroupSize;
    supportedStages = copy_src.supportedStages;
    supportedOperations = copy_src.supportedOperations;
    quadOperationsInAllStages = copy_src.quadOperationsInAllStages;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSubgroupProperties& safe_VkPhysicalDeviceSubgroupProperties::operator=(
    const safe_VkPhysicalDeviceSubgroupProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subgroupSize = copy_src.subgroupSize;
    supportedStages = copy_src.supportedStages;
    supportedOperations = copy_src.supportedOperations;
    quadOperationsInAllStages = copy_src.quadOperationsInAllStages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSubgroupProperties::~safe_VkPhysicalDeviceSubgroupProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceSubgroupProperties::initialize(const VkPhysicalDeviceSubgroupProperties* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subgroupSize = in_struct->subgroupSize;
    supportedStages = in_struct->supportedStages;
    supportedOperations = in_struct->supportedOperations;
    quadOperationsInAllStages = in_struct->quadOperationsInAllStages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSubgroupProperties::initialize(const safe_VkPhysicalDeviceSubgroupProperties* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subgroupSize = copy_src->subgroupSize;
    supportedStages = copy_src->supportedStages;
    supportedOperations = copy_src->supportedOperations;
    quadOperationsInAllStages = copy_src->quadOperationsInAllStages;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBindBufferMemoryInfo::safe_VkBindBufferMemoryInfo(const VkBindBufferMemoryInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer), memory(in_struct->memory), memoryOffset(in_struct->memoryOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBindBufferMemoryInfo::safe_VkBindBufferMemoryInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO), pNext(nullptr), buffer(), memory(), memoryOffset() {}

safe_VkBindBufferMemoryInfo::safe_VkBindBufferMemoryInfo(const safe_VkBindBufferMemoryInfo& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBindBufferMemoryInfo& safe_VkBindBufferMemoryInfo::operator=(const safe_VkBindBufferMemoryInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBindBufferMemoryInfo::~safe_VkBindBufferMemoryInfo() { FreePnextChain(pNext); }

void safe_VkBindBufferMemoryInfo::initialize(const VkBindBufferMemoryInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBindBufferMemoryInfo::initialize(const safe_VkBindBufferMemoryInfo* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    memory = copy_src->memory;
    memoryOffset = copy_src->memoryOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBindImageMemoryInfo::safe_VkBindImageMemoryInfo(const VkBindImageMemoryInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image), memory(in_struct->memory), memoryOffset(in_struct->memoryOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBindImageMemoryInfo::safe_VkBindImageMemoryInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO), pNext(nullptr), image(), memory(), memoryOffset() {}

safe_VkBindImageMemoryInfo::safe_VkBindImageMemoryInfo(const safe_VkBindImageMemoryInfo& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBindImageMemoryInfo& safe_VkBindImageMemoryInfo::operator=(const safe_VkBindImageMemoryInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    memory = copy_src.memory;
    memoryOffset = copy_src.memoryOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBindImageMemoryInfo::~safe_VkBindImageMemoryInfo() { FreePnextChain(pNext); }

void safe_VkBindImageMemoryInfo::initialize(const VkBindImageMemoryInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBindImageMemoryInfo::initialize(const safe_VkBindImageMemoryInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    memory = copy_src->memory;
    memoryOffset = copy_src->memoryOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDevice16BitStorageFeatures::safe_VkPhysicalDevice16BitStorageFeatures(
    const VkPhysicalDevice16BitStorageFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffer16BitAccess(in_struct->storageBuffer16BitAccess),
      uniformAndStorageBuffer16BitAccess(in_struct->uniformAndStorageBuffer16BitAccess),
      storagePushConstant16(in_struct->storagePushConstant16),
      storageInputOutput16(in_struct->storageInputOutput16) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDevice16BitStorageFeatures::safe_VkPhysicalDevice16BitStorageFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES),
      pNext(nullptr),
      storageBuffer16BitAccess(),
      uniformAndStorageBuffer16BitAccess(),
      storagePushConstant16(),
      storageInputOutput16() {}

safe_VkPhysicalDevice16BitStorageFeatures::safe_VkPhysicalDevice16BitStorageFeatures(
    const safe_VkPhysicalDevice16BitStorageFeatures& copy_src) {
    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDevice16BitStorageFeatures& safe_VkPhysicalDevice16BitStorageFeatures::operator=(
    const safe_VkPhysicalDevice16BitStorageFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDevice16BitStorageFeatures::~safe_VkPhysicalDevice16BitStorageFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDevice16BitStorageFeatures::initialize(const VkPhysicalDevice16BitStorageFeatures* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffer16BitAccess = in_struct->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = in_struct->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = in_struct->storagePushConstant16;
    storageInputOutput16 = in_struct->storageInputOutput16;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDevice16BitStorageFeatures::initialize(const safe_VkPhysicalDevice16BitStorageFeatures* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffer16BitAccess = copy_src->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src->storagePushConstant16;
    storageInputOutput16 = copy_src->storageInputOutput16;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryDedicatedRequirements::safe_VkMemoryDedicatedRequirements(const VkMemoryDedicatedRequirements* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      prefersDedicatedAllocation(in_struct->prefersDedicatedAllocation),
      requiresDedicatedAllocation(in_struct->requiresDedicatedAllocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryDedicatedRequirements::safe_VkMemoryDedicatedRequirements()
    : sType(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS),
      pNext(nullptr),
      prefersDedicatedAllocation(),
      requiresDedicatedAllocation() {}

safe_VkMemoryDedicatedRequirements::safe_VkMemoryDedicatedRequirements(const safe_VkMemoryDedicatedRequirements& copy_src) {
    sType = copy_src.sType;
    prefersDedicatedAllocation = copy_src.prefersDedicatedAllocation;
    requiresDedicatedAllocation = copy_src.requiresDedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryDedicatedRequirements& safe_VkMemoryDedicatedRequirements::operator=(
    const safe_VkMemoryDedicatedRequirements& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    prefersDedicatedAllocation = copy_src.prefersDedicatedAllocation;
    requiresDedicatedAllocation = copy_src.requiresDedicatedAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryDedicatedRequirements::~safe_VkMemoryDedicatedRequirements() { FreePnextChain(pNext); }

void safe_VkMemoryDedicatedRequirements::initialize(const VkMemoryDedicatedRequirements* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    prefersDedicatedAllocation = in_struct->prefersDedicatedAllocation;
    requiresDedicatedAllocation = in_struct->requiresDedicatedAllocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryDedicatedRequirements::initialize(const safe_VkMemoryDedicatedRequirements* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    prefersDedicatedAllocation = copy_src->prefersDedicatedAllocation;
    requiresDedicatedAllocation = copy_src->requiresDedicatedAllocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryDedicatedAllocateInfo::safe_VkMemoryDedicatedAllocateInfo(const VkMemoryDedicatedAllocateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryDedicatedAllocateInfo::safe_VkMemoryDedicatedAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO), pNext(nullptr), image(), buffer() {}

safe_VkMemoryDedicatedAllocateInfo::safe_VkMemoryDedicatedAllocateInfo(const safe_VkMemoryDedicatedAllocateInfo& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryDedicatedAllocateInfo& safe_VkMemoryDedicatedAllocateInfo::operator=(
    const safe_VkMemoryDedicatedAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryDedicatedAllocateInfo::~safe_VkMemoryDedicatedAllocateInfo() { FreePnextChain(pNext); }

void safe_VkMemoryDedicatedAllocateInfo::initialize(const VkMemoryDedicatedAllocateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryDedicatedAllocateInfo::initialize(const safe_VkMemoryDedicatedAllocateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryAllocateFlagsInfo::safe_VkMemoryAllocateFlagsInfo(const VkMemoryAllocateFlagsInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), deviceMask(in_struct->deviceMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryAllocateFlagsInfo::safe_VkMemoryAllocateFlagsInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO), pNext(nullptr), flags(), deviceMask() {}

safe_VkMemoryAllocateFlagsInfo::safe_VkMemoryAllocateFlagsInfo(const safe_VkMemoryAllocateFlagsInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryAllocateFlagsInfo& safe_VkMemoryAllocateFlagsInfo::operator=(const safe_VkMemoryAllocateFlagsInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryAllocateFlagsInfo::~safe_VkMemoryAllocateFlagsInfo() { FreePnextChain(pNext); }

void safe_VkMemoryAllocateFlagsInfo::initialize(const VkMemoryAllocateFlagsInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    deviceMask = in_struct->deviceMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryAllocateFlagsInfo::initialize(const safe_VkMemoryAllocateFlagsInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    deviceMask = copy_src->deviceMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceGroupRenderPassBeginInfo::safe_VkDeviceGroupRenderPassBeginInfo(const VkDeviceGroupRenderPassBeginInfo* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      deviceMask(in_struct->deviceMask),
      deviceRenderAreaCount(in_struct->deviceRenderAreaCount),
      pDeviceRenderAreas(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)in_struct->pDeviceRenderAreas,
               sizeof(VkRect2D) * in_struct->deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupRenderPassBeginInfo::safe_VkDeviceGroupRenderPassBeginInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO),
      pNext(nullptr),
      deviceMask(),
      deviceRenderAreaCount(),
      pDeviceRenderAreas(nullptr) {}

safe_VkDeviceGroupRenderPassBeginInfo::safe_VkDeviceGroupRenderPassBeginInfo(
    const safe_VkDeviceGroupRenderPassBeginInfo& copy_src) {
    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    deviceRenderAreaCount = copy_src.deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[copy_src.deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)copy_src.pDeviceRenderAreas, sizeof(VkRect2D) * copy_src.deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupRenderPassBeginInfo& safe_VkDeviceGroupRenderPassBeginInfo::operator=(
    const safe_VkDeviceGroupRenderPassBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceRenderAreas) delete[] pDeviceRenderAreas;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    deviceRenderAreaCount = copy_src.deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[copy_src.deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)copy_src.pDeviceRenderAreas, sizeof(VkRect2D) * copy_src.deviceRenderAreaCount);
    }

    return *this;
}

safe_VkDeviceGroupRenderPassBeginInfo::~safe_VkDeviceGroupRenderPassBeginInfo() {
    if (pDeviceRenderAreas) delete[] pDeviceRenderAreas;
    FreePnextChain(pNext);
}

void safe_VkDeviceGroupRenderPassBeginInfo::initialize(const VkDeviceGroupRenderPassBeginInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceRenderAreas) delete[] pDeviceRenderAreas;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceMask = in_struct->deviceMask;
    deviceRenderAreaCount = in_struct->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)in_struct->pDeviceRenderAreas,
               sizeof(VkRect2D) * in_struct->deviceRenderAreaCount);
    }
}

void safe_VkDeviceGroupRenderPassBeginInfo::initialize(const safe_VkDeviceGroupRenderPassBeginInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceMask = copy_src->deviceMask;
    deviceRenderAreaCount = copy_src->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[copy_src->deviceRenderAreaCount];
        memcpy((void*)pDeviceRenderAreas, (void*)copy_src->pDeviceRenderAreas, sizeof(VkRect2D) * copy_src->deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupCommandBufferBeginInfo::safe_VkDeviceGroupCommandBufferBeginInfo(
    const VkDeviceGroupCommandBufferBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceMask(in_struct->deviceMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceGroupCommandBufferBeginInfo::safe_VkDeviceGroupCommandBufferBeginInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO), pNext(nullptr), deviceMask() {}

safe_VkDeviceGroupCommandBufferBeginInfo::safe_VkDeviceGroupCommandBufferBeginInfo(
    const safe_VkDeviceGroupCommandBufferBeginInfo& copy_src) {
    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceGroupCommandBufferBeginInfo& safe_VkDeviceGroupCommandBufferBeginInfo::operator=(
    const safe_VkDeviceGroupCommandBufferBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDeviceGroupCommandBufferBeginInfo::~safe_VkDeviceGroupCommandBufferBeginInfo() { FreePnextChain(pNext); }

void safe_VkDeviceGroupCommandBufferBeginInfo::initialize(const VkDeviceGroupCommandBufferBeginInfo* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceMask = in_struct->deviceMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceGroupCommandBufferBeginInfo::initialize(const safe_VkDeviceGroupCommandBufferBeginInfo* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceMask = copy_src->deviceMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceGroupSubmitInfo::safe_VkDeviceGroupSubmitInfo(const VkDeviceGroupSubmitInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreCount(in_struct->waitSemaphoreCount),
      pWaitSemaphoreDeviceIndices(nullptr),
      commandBufferCount(in_struct->commandBufferCount),
      pCommandBufferDeviceMasks(nullptr),
      signalSemaphoreCount(in_struct->signalSemaphoreCount),
      pSignalSemaphoreDeviceIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)in_struct->pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)in_struct->pCommandBufferDeviceMasks,
               sizeof(uint32_t) * in_struct->commandBufferCount);
    }

    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)in_struct->pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->signalSemaphoreCount);
    }
}

safe_VkDeviceGroupSubmitInfo::safe_VkDeviceGroupSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO),
      pNext(nullptr),
      waitSemaphoreCount(),
      pWaitSemaphoreDeviceIndices(nullptr),
      commandBufferCount(),
      pCommandBufferDeviceMasks(nullptr),
      signalSemaphoreCount(),
      pSignalSemaphoreDeviceIndices(nullptr) {}

safe_VkDeviceGroupSubmitInfo::safe_VkDeviceGroupSubmitInfo(const safe_VkDeviceGroupSubmitInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)copy_src.pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[copy_src.commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)copy_src.pCommandBufferDeviceMasks,
               sizeof(uint32_t) * copy_src.commandBufferCount);
    }

    if (copy_src.pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[copy_src.signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)copy_src.pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.signalSemaphoreCount);
    }
}

safe_VkDeviceGroupSubmitInfo& safe_VkDeviceGroupSubmitInfo::operator=(const safe_VkDeviceGroupSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphoreDeviceIndices) delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks) delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices) delete[] pSignalSemaphoreDeviceIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreCount = copy_src.waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = copy_src.commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = copy_src.signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[copy_src.waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)copy_src.pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.waitSemaphoreCount);
    }

    if (copy_src.pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[copy_src.commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)copy_src.pCommandBufferDeviceMasks,
               sizeof(uint32_t) * copy_src.commandBufferCount);
    }

    if (copy_src.pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[copy_src.signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)copy_src.pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src.signalSemaphoreCount);
    }

    return *this;
}

safe_VkDeviceGroupSubmitInfo::~safe_VkDeviceGroupSubmitInfo() {
    if (pWaitSemaphoreDeviceIndices) delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks) delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices) delete[] pSignalSemaphoreDeviceIndices;
    FreePnextChain(pNext);
}

void safe_VkDeviceGroupSubmitInfo::initialize(const VkDeviceGroupSubmitInfo* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphoreDeviceIndices) delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks) delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices) delete[] pSignalSemaphoreDeviceIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)in_struct->pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->waitSemaphoreCount);
    }

    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)in_struct->pCommandBufferDeviceMasks,
               sizeof(uint32_t) * in_struct->commandBufferCount);
    }

    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)in_struct->pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * in_struct->signalSemaphoreCount);
    }
}

void safe_VkDeviceGroupSubmitInfo::initialize(const safe_VkDeviceGroupSubmitInfo* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreCount = copy_src->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = copy_src->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = copy_src->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[copy_src->waitSemaphoreCount];
        memcpy((void*)pWaitSemaphoreDeviceIndices, (void*)copy_src->pWaitSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src->waitSemaphoreCount);
    }

    if (copy_src->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[copy_src->commandBufferCount];
        memcpy((void*)pCommandBufferDeviceMasks, (void*)copy_src->pCommandBufferDeviceMasks,
               sizeof(uint32_t) * copy_src->commandBufferCount);
    }

    if (copy_src->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[copy_src->signalSemaphoreCount];
        memcpy((void*)pSignalSemaphoreDeviceIndices, (void*)copy_src->pSignalSemaphoreDeviceIndices,
               sizeof(uint32_t) * copy_src->signalSemaphoreCount);
    }
}

safe_VkDeviceGroupBindSparseInfo::safe_VkDeviceGroupBindSparseInfo(const VkDeviceGroupBindSparseInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      resourceDeviceIndex(in_struct->resourceDeviceIndex),
      memoryDeviceIndex(in_struct->memoryDeviceIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceGroupBindSparseInfo::safe_VkDeviceGroupBindSparseInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO), pNext(nullptr), resourceDeviceIndex(), memoryDeviceIndex() {}

safe_VkDeviceGroupBindSparseInfo::safe_VkDeviceGroupBindSparseInfo(const safe_VkDeviceGroupBindSparseInfo& copy_src) {
    sType = copy_src.sType;
    resourceDeviceIndex = copy_src.resourceDeviceIndex;
    memoryDeviceIndex = copy_src.memoryDeviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceGroupBindSparseInfo& safe_VkDeviceGroupBindSparseInfo::operator=(const safe_VkDeviceGroupBindSparseInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    resourceDeviceIndex = copy_src.resourceDeviceIndex;
    memoryDeviceIndex = copy_src.memoryDeviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDeviceGroupBindSparseInfo::~safe_VkDeviceGroupBindSparseInfo() { FreePnextChain(pNext); }

void safe_VkDeviceGroupBindSparseInfo::initialize(const VkDeviceGroupBindSparseInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    resourceDeviceIndex = in_struct->resourceDeviceIndex;
    memoryDeviceIndex = in_struct->memoryDeviceIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceGroupBindSparseInfo::initialize(const safe_VkDeviceGroupBindSparseInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    resourceDeviceIndex = copy_src->resourceDeviceIndex;
    memoryDeviceIndex = copy_src->memoryDeviceIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBindBufferMemoryDeviceGroupInfo::safe_VkBindBufferMemoryDeviceGroupInfo(const VkBindBufferMemoryDeviceGroupInfo* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType), deviceIndexCount(in_struct->deviceIndexCount), pDeviceIndices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }
}

safe_VkBindBufferMemoryDeviceGroupInfo::safe_VkBindBufferMemoryDeviceGroupInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO), pNext(nullptr), deviceIndexCount(), pDeviceIndices(nullptr) {}

safe_VkBindBufferMemoryDeviceGroupInfo::safe_VkBindBufferMemoryDeviceGroupInfo(
    const safe_VkBindBufferMemoryDeviceGroupInfo& copy_src) {
    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }
}

safe_VkBindBufferMemoryDeviceGroupInfo& safe_VkBindBufferMemoryDeviceGroupInfo::operator=(
    const safe_VkBindBufferMemoryDeviceGroupInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }

    return *this;
}

safe_VkBindBufferMemoryDeviceGroupInfo::~safe_VkBindBufferMemoryDeviceGroupInfo() {
    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);
}

void safe_VkBindBufferMemoryDeviceGroupInfo::initialize(const VkBindBufferMemoryDeviceGroupInfo* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceIndices) delete[] pDeviceIndices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }
}

void safe_VkBindBufferMemoryDeviceGroupInfo::initialize(const safe_VkBindBufferMemoryDeviceGroupInfo* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceIndexCount = copy_src->deviceIndexCount;
    pDeviceIndices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src->pDeviceIndices, sizeof(uint32_t) * copy_src->deviceIndexCount);
    }
}

safe_VkBindImageMemoryDeviceGroupInfo::safe_VkBindImageMemoryDeviceGroupInfo(const VkBindImageMemoryDeviceGroupInfo* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      deviceIndexCount(in_struct->deviceIndexCount),
      pDeviceIndices(nullptr),
      splitInstanceBindRegionCount(in_struct->splitInstanceBindRegionCount),
      pSplitInstanceBindRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }

    if (in_struct->pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[in_struct->splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)in_struct->pSplitInstanceBindRegions,
               sizeof(VkRect2D) * in_struct->splitInstanceBindRegionCount);
    }
}

safe_VkBindImageMemoryDeviceGroupInfo::safe_VkBindImageMemoryDeviceGroupInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO),
      pNext(nullptr),
      deviceIndexCount(),
      pDeviceIndices(nullptr),
      splitInstanceBindRegionCount(),
      pSplitInstanceBindRegions(nullptr) {}

safe_VkBindImageMemoryDeviceGroupInfo::safe_VkBindImageMemoryDeviceGroupInfo(
    const safe_VkBindImageMemoryDeviceGroupInfo& copy_src) {
    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = copy_src.splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }

    if (copy_src.pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[copy_src.splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)copy_src.pSplitInstanceBindRegions,
               sizeof(VkRect2D) * copy_src.splitInstanceBindRegionCount);
    }
}

safe_VkBindImageMemoryDeviceGroupInfo& safe_VkBindImageMemoryDeviceGroupInfo::operator=(
    const safe_VkBindImageMemoryDeviceGroupInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDeviceIndices) delete[] pDeviceIndices;
    if (pSplitInstanceBindRegions) delete[] pSplitInstanceBindRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceIndexCount = copy_src.deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = copy_src.splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src.deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src.pDeviceIndices, sizeof(uint32_t) * copy_src.deviceIndexCount);
    }

    if (copy_src.pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[copy_src.splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)copy_src.pSplitInstanceBindRegions,
               sizeof(VkRect2D) * copy_src.splitInstanceBindRegionCount);
    }

    return *this;
}

safe_VkBindImageMemoryDeviceGroupInfo::~safe_VkBindImageMemoryDeviceGroupInfo() {
    if (pDeviceIndices) delete[] pDeviceIndices;
    if (pSplitInstanceBindRegions) delete[] pSplitInstanceBindRegions;
    FreePnextChain(pNext);
}

void safe_VkBindImageMemoryDeviceGroupInfo::initialize(const VkBindImageMemoryDeviceGroupInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDeviceIndices) delete[] pDeviceIndices;
    if (pSplitInstanceBindRegions) delete[] pSplitInstanceBindRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = in_struct->splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)in_struct->pDeviceIndices, sizeof(uint32_t) * in_struct->deviceIndexCount);
    }

    if (in_struct->pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[in_struct->splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)in_struct->pSplitInstanceBindRegions,
               sizeof(VkRect2D) * in_struct->splitInstanceBindRegionCount);
    }
}

void safe_VkBindImageMemoryDeviceGroupInfo::initialize(const safe_VkBindImageMemoryDeviceGroupInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceIndexCount = copy_src->deviceIndexCount;
    pDeviceIndices = nullptr;
    splitInstanceBindRegionCount = copy_src->splitInstanceBindRegionCount;
    pSplitInstanceBindRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[copy_src->deviceIndexCount];
        memcpy((void*)pDeviceIndices, (void*)copy_src->pDeviceIndices, sizeof(uint32_t) * copy_src->deviceIndexCount);
    }

    if (copy_src->pSplitInstanceBindRegions) {
        pSplitInstanceBindRegions = new VkRect2D[copy_src->splitInstanceBindRegionCount];
        memcpy((void*)pSplitInstanceBindRegions, (void*)copy_src->pSplitInstanceBindRegions,
               sizeof(VkRect2D) * copy_src->splitInstanceBindRegionCount);
    }
}

safe_VkPhysicalDeviceGroupProperties::safe_VkPhysicalDeviceGroupProperties(const VkPhysicalDeviceGroupProperties* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), physicalDeviceCount(in_struct->physicalDeviceCount), subsetAllocation(in_struct->subsetAllocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

safe_VkPhysicalDeviceGroupProperties::safe_VkPhysicalDeviceGroupProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES), pNext(nullptr), physicalDeviceCount(), subsetAllocation() {}

safe_VkPhysicalDeviceGroupProperties::safe_VkPhysicalDeviceGroupProperties(const safe_VkPhysicalDeviceGroupProperties& copy_src) {
    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    subsetAllocation = copy_src.subsetAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = copy_src.physicalDevices[i];
    }
}

safe_VkPhysicalDeviceGroupProperties& safe_VkPhysicalDeviceGroupProperties::operator=(
    const safe_VkPhysicalDeviceGroupProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    subsetAllocation = copy_src.subsetAllocation;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = copy_src.physicalDevices[i];
    }

    return *this;
}

safe_VkPhysicalDeviceGroupProperties::~safe_VkPhysicalDeviceGroupProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceGroupProperties::initialize(const VkPhysicalDeviceGroupProperties* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    subsetAllocation = in_struct->subsetAllocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

void safe_VkPhysicalDeviceGroupProperties::initialize(const safe_VkPhysicalDeviceGroupProperties* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    physicalDeviceCount = copy_src->physicalDeviceCount;
    subsetAllocation = copy_src->subsetAllocation;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DEVICE_GROUP_SIZE; ++i) {
        physicalDevices[i] = copy_src->physicalDevices[i];
    }
}

safe_VkDeviceGroupDeviceCreateInfo::safe_VkDeviceGroupDeviceCreateInfo(const VkDeviceGroupDeviceCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), physicalDeviceCount(in_struct->physicalDeviceCount), pPhysicalDevices(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)in_struct->pPhysicalDevices,
               sizeof(VkPhysicalDevice) * in_struct->physicalDeviceCount);
    }
}

safe_VkDeviceGroupDeviceCreateInfo::safe_VkDeviceGroupDeviceCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO), pNext(nullptr), physicalDeviceCount(), pPhysicalDevices(nullptr) {}

safe_VkDeviceGroupDeviceCreateInfo::safe_VkDeviceGroupDeviceCreateInfo(const safe_VkDeviceGroupDeviceCreateInfo& copy_src) {
    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[copy_src.physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)copy_src.pPhysicalDevices, sizeof(VkPhysicalDevice) * copy_src.physicalDeviceCount);
    }
}

safe_VkDeviceGroupDeviceCreateInfo& safe_VkDeviceGroupDeviceCreateInfo::operator=(
    const safe_VkDeviceGroupDeviceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pPhysicalDevices) delete[] pPhysicalDevices;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    physicalDeviceCount = copy_src.physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[copy_src.physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)copy_src.pPhysicalDevices, sizeof(VkPhysicalDevice) * copy_src.physicalDeviceCount);
    }

    return *this;
}

safe_VkDeviceGroupDeviceCreateInfo::~safe_VkDeviceGroupDeviceCreateInfo() {
    if (pPhysicalDevices) delete[] pPhysicalDevices;
    FreePnextChain(pNext);
}

void safe_VkDeviceGroupDeviceCreateInfo::initialize(const VkDeviceGroupDeviceCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPhysicalDevices) delete[] pPhysicalDevices;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)in_struct->pPhysicalDevices,
               sizeof(VkPhysicalDevice) * in_struct->physicalDeviceCount);
    }
}

void safe_VkDeviceGroupDeviceCreateInfo::initialize(const safe_VkDeviceGroupDeviceCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    physicalDeviceCount = copy_src->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[copy_src->physicalDeviceCount];
        memcpy((void*)pPhysicalDevices, (void*)copy_src->pPhysicalDevices,
               sizeof(VkPhysicalDevice) * copy_src->physicalDeviceCount);
    }
}

safe_VkBufferMemoryRequirementsInfo2::safe_VkBufferMemoryRequirementsInfo2(const VkBufferMemoryRequirementsInfo2* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferMemoryRequirementsInfo2::safe_VkBufferMemoryRequirementsInfo2()
    : sType(VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2), pNext(nullptr), buffer() {}

safe_VkBufferMemoryRequirementsInfo2::safe_VkBufferMemoryRequirementsInfo2(const safe_VkBufferMemoryRequirementsInfo2& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferMemoryRequirementsInfo2& safe_VkBufferMemoryRequirementsInfo2::operator=(
    const safe_VkBufferMemoryRequirementsInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferMemoryRequirementsInfo2::~safe_VkBufferMemoryRequirementsInfo2() { FreePnextChain(pNext); }

void safe_VkBufferMemoryRequirementsInfo2::initialize(const VkBufferMemoryRequirementsInfo2* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferMemoryRequirementsInfo2::initialize(const safe_VkBufferMemoryRequirementsInfo2* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageMemoryRequirementsInfo2::safe_VkImageMemoryRequirementsInfo2(const VkImageMemoryRequirementsInfo2* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageMemoryRequirementsInfo2::safe_VkImageMemoryRequirementsInfo2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2), pNext(nullptr), image() {}

safe_VkImageMemoryRequirementsInfo2::safe_VkImageMemoryRequirementsInfo2(const safe_VkImageMemoryRequirementsInfo2& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageMemoryRequirementsInfo2& safe_VkImageMemoryRequirementsInfo2::operator=(
    const safe_VkImageMemoryRequirementsInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageMemoryRequirementsInfo2::~safe_VkImageMemoryRequirementsInfo2() { FreePnextChain(pNext); }

void safe_VkImageMemoryRequirementsInfo2::initialize(const VkImageMemoryRequirementsInfo2* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageMemoryRequirementsInfo2::initialize(const safe_VkImageMemoryRequirementsInfo2* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageSparseMemoryRequirementsInfo2::safe_VkImageSparseMemoryRequirementsInfo2(
    const VkImageSparseMemoryRequirementsInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), image(in_struct->image) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageSparseMemoryRequirementsInfo2::safe_VkImageSparseMemoryRequirementsInfo2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2), pNext(nullptr), image() {}

safe_VkImageSparseMemoryRequirementsInfo2::safe_VkImageSparseMemoryRequirementsInfo2(
    const safe_VkImageSparseMemoryRequirementsInfo2& copy_src) {
    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageSparseMemoryRequirementsInfo2& safe_VkImageSparseMemoryRequirementsInfo2::operator=(
    const safe_VkImageSparseMemoryRequirementsInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    image = copy_src.image;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageSparseMemoryRequirementsInfo2::~safe_VkImageSparseMemoryRequirementsInfo2() { FreePnextChain(pNext); }

void safe_VkImageSparseMemoryRequirementsInfo2::initialize(const VkImageSparseMemoryRequirementsInfo2* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    image = in_struct->image;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageSparseMemoryRequirementsInfo2::initialize(const safe_VkImageSparseMemoryRequirementsInfo2* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    image = copy_src->image;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryRequirements2::safe_VkMemoryRequirements2(const VkMemoryRequirements2* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memoryRequirements(in_struct->memoryRequirements) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryRequirements2::safe_VkMemoryRequirements2()
    : sType(VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2), pNext(nullptr), memoryRequirements() {}

safe_VkMemoryRequirements2::safe_VkMemoryRequirements2(const safe_VkMemoryRequirements2& copy_src) {
    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryRequirements2& safe_VkMemoryRequirements2::operator=(const safe_VkMemoryRequirements2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryRequirements2::~safe_VkMemoryRequirements2() { FreePnextChain(pNext); }

void safe_VkMemoryRequirements2::initialize(const VkMemoryRequirements2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryRequirements = in_struct->memoryRequirements;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryRequirements2::initialize(const safe_VkMemoryRequirements2* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryRequirements = copy_src->memoryRequirements;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSparseImageMemoryRequirements2::safe_VkSparseImageMemoryRequirements2(const VkSparseImageMemoryRequirements2* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), memoryRequirements(in_struct->memoryRequirements) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSparseImageMemoryRequirements2::safe_VkSparseImageMemoryRequirements2()
    : sType(VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2), pNext(nullptr), memoryRequirements() {}

safe_VkSparseImageMemoryRequirements2::safe_VkSparseImageMemoryRequirements2(
    const safe_VkSparseImageMemoryRequirements2& copy_src) {
    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSparseImageMemoryRequirements2& safe_VkSparseImageMemoryRequirements2::operator=(
    const safe_VkSparseImageMemoryRequirements2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryRequirements = copy_src.memoryRequirements;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSparseImageMemoryRequirements2::~safe_VkSparseImageMemoryRequirements2() { FreePnextChain(pNext); }

void safe_VkSparseImageMemoryRequirements2::initialize(const VkSparseImageMemoryRequirements2* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryRequirements = in_struct->memoryRequirements;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSparseImageMemoryRequirements2::initialize(const safe_VkSparseImageMemoryRequirements2* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryRequirements = copy_src->memoryRequirements;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceFeatures2::safe_VkPhysicalDeviceFeatures2(const VkPhysicalDeviceFeatures2* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), features(in_struct->features) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceFeatures2::safe_VkPhysicalDeviceFeatures2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2), pNext(nullptr), features() {}

safe_VkPhysicalDeviceFeatures2::safe_VkPhysicalDeviceFeatures2(const safe_VkPhysicalDeviceFeatures2& copy_src) {
    sType = copy_src.sType;
    features = copy_src.features;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceFeatures2& safe_VkPhysicalDeviceFeatures2::operator=(const safe_VkPhysicalDeviceFeatures2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    features = copy_src.features;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceFeatures2::~safe_VkPhysicalDeviceFeatures2() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceFeatures2::initialize(const VkPhysicalDeviceFeatures2* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    features = in_struct->features;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceFeatures2::initialize(const safe_VkPhysicalDeviceFeatures2* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    features = copy_src->features;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceProperties2::safe_VkPhysicalDeviceProperties2(const VkPhysicalDeviceProperties2* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), properties(in_struct->properties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceProperties2::safe_VkPhysicalDeviceProperties2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2), pNext(nullptr), properties() {}

safe_VkPhysicalDeviceProperties2::safe_VkPhysicalDeviceProperties2(const safe_VkPhysicalDeviceProperties2& copy_src) {
    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceProperties2& safe_VkPhysicalDeviceProperties2::operator=(const safe_VkPhysicalDeviceProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceProperties2::~safe_VkPhysicalDeviceProperties2() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceProperties2::initialize(const VkPhysicalDeviceProperties2* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    properties = in_struct->properties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceProperties2::initialize(const safe_VkPhysicalDeviceProperties2* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    properties = copy_src->properties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkFormatProperties2::safe_VkFormatProperties2(const VkFormatProperties2* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), formatProperties(in_struct->formatProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkFormatProperties2::safe_VkFormatProperties2()
    : sType(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2), pNext(nullptr), formatProperties() {}

safe_VkFormatProperties2::safe_VkFormatProperties2(const safe_VkFormatProperties2& copy_src) {
    sType = copy_src.sType;
    formatProperties = copy_src.formatProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkFormatProperties2& safe_VkFormatProperties2::operator=(const safe_VkFormatProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    formatProperties = copy_src.formatProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkFormatProperties2::~safe_VkFormatProperties2() { FreePnextChain(pNext); }

void safe_VkFormatProperties2::initialize(const VkFormatProperties2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    formatProperties = in_struct->formatProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkFormatProperties2::initialize(const safe_VkFormatProperties2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    formatProperties = copy_src->formatProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageFormatProperties2::safe_VkImageFormatProperties2(const VkImageFormatProperties2* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imageFormatProperties(in_struct->imageFormatProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageFormatProperties2::safe_VkImageFormatProperties2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2), pNext(nullptr), imageFormatProperties() {}

safe_VkImageFormatProperties2::safe_VkImageFormatProperties2(const safe_VkImageFormatProperties2& copy_src) {
    sType = copy_src.sType;
    imageFormatProperties = copy_src.imageFormatProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageFormatProperties2& safe_VkImageFormatProperties2::operator=(const safe_VkImageFormatProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageFormatProperties = copy_src.imageFormatProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageFormatProperties2::~safe_VkImageFormatProperties2() { FreePnextChain(pNext); }

void safe_VkImageFormatProperties2::initialize(const VkImageFormatProperties2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageFormatProperties = in_struct->imageFormatProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageFormatProperties2::initialize(const safe_VkImageFormatProperties2* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageFormatProperties = copy_src->imageFormatProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceImageFormatInfo2::safe_VkPhysicalDeviceImageFormatInfo2(const VkPhysicalDeviceImageFormatInfo2* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      type(in_struct->type),
      tiling(in_struct->tiling),
      usage(in_struct->usage),
      flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceImageFormatInfo2::safe_VkPhysicalDeviceImageFormatInfo2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2), pNext(nullptr), format(), type(), tiling(), usage(), flags() {}

safe_VkPhysicalDeviceImageFormatInfo2::safe_VkPhysicalDeviceImageFormatInfo2(
    const safe_VkPhysicalDeviceImageFormatInfo2& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceImageFormatInfo2& safe_VkPhysicalDeviceImageFormatInfo2::operator=(
    const safe_VkPhysicalDeviceImageFormatInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    tiling = copy_src.tiling;
    usage = copy_src.usage;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceImageFormatInfo2::~safe_VkPhysicalDeviceImageFormatInfo2() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceImageFormatInfo2::initialize(const VkPhysicalDeviceImageFormatInfo2* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    type = in_struct->type;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceImageFormatInfo2::initialize(const safe_VkPhysicalDeviceImageFormatInfo2* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    type = copy_src->type;
    tiling = copy_src->tiling;
    usage = copy_src->usage;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkQueueFamilyProperties2::safe_VkQueueFamilyProperties2(const VkQueueFamilyProperties2* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), queueFamilyProperties(in_struct->queueFamilyProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkQueueFamilyProperties2::safe_VkQueueFamilyProperties2()
    : sType(VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2), pNext(nullptr), queueFamilyProperties() {}

safe_VkQueueFamilyProperties2::safe_VkQueueFamilyProperties2(const safe_VkQueueFamilyProperties2& copy_src) {
    sType = copy_src.sType;
    queueFamilyProperties = copy_src.queueFamilyProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkQueueFamilyProperties2& safe_VkQueueFamilyProperties2::operator=(const safe_VkQueueFamilyProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    queueFamilyProperties = copy_src.queueFamilyProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkQueueFamilyProperties2::~safe_VkQueueFamilyProperties2() { FreePnextChain(pNext); }

void safe_VkQueueFamilyProperties2::initialize(const VkQueueFamilyProperties2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    queueFamilyProperties = in_struct->queueFamilyProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkQueueFamilyProperties2::initialize(const safe_VkQueueFamilyProperties2* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    queueFamilyProperties = copy_src->queueFamilyProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMemoryProperties2::safe_VkPhysicalDeviceMemoryProperties2(const VkPhysicalDeviceMemoryProperties2* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType), memoryProperties(in_struct->memoryProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMemoryProperties2::safe_VkPhysicalDeviceMemoryProperties2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2), pNext(nullptr), memoryProperties() {}

safe_VkPhysicalDeviceMemoryProperties2::safe_VkPhysicalDeviceMemoryProperties2(
    const safe_VkPhysicalDeviceMemoryProperties2& copy_src) {
    sType = copy_src.sType;
    memoryProperties = copy_src.memoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMemoryProperties2& safe_VkPhysicalDeviceMemoryProperties2::operator=(
    const safe_VkPhysicalDeviceMemoryProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memoryProperties = copy_src.memoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMemoryProperties2::~safe_VkPhysicalDeviceMemoryProperties2() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMemoryProperties2::initialize(const VkPhysicalDeviceMemoryProperties2* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memoryProperties = in_struct->memoryProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMemoryProperties2::initialize(const safe_VkPhysicalDeviceMemoryProperties2* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memoryProperties = copy_src->memoryProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSparseImageFormatProperties2::safe_VkSparseImageFormatProperties2(const VkSparseImageFormatProperties2* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), properties(in_struct->properties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSparseImageFormatProperties2::safe_VkSparseImageFormatProperties2()
    : sType(VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2), pNext(nullptr), properties() {}

safe_VkSparseImageFormatProperties2::safe_VkSparseImageFormatProperties2(const safe_VkSparseImageFormatProperties2& copy_src) {
    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSparseImageFormatProperties2& safe_VkSparseImageFormatProperties2::operator=(
    const safe_VkSparseImageFormatProperties2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    properties = copy_src.properties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSparseImageFormatProperties2::~safe_VkSparseImageFormatProperties2() { FreePnextChain(pNext); }

void safe_VkSparseImageFormatProperties2::initialize(const VkSparseImageFormatProperties2* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    properties = in_struct->properties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSparseImageFormatProperties2::initialize(const safe_VkSparseImageFormatProperties2* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    properties = copy_src->properties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceSparseImageFormatInfo2::safe_VkPhysicalDeviceSparseImageFormatInfo2(
    const VkPhysicalDeviceSparseImageFormatInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      type(in_struct->type),
      samples(in_struct->samples),
      usage(in_struct->usage),
      tiling(in_struct->tiling) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSparseImageFormatInfo2::safe_VkPhysicalDeviceSparseImageFormatInfo2()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2),
      pNext(nullptr),
      format(),
      type(),
      samples(),
      usage(),
      tiling() {}

safe_VkPhysicalDeviceSparseImageFormatInfo2::safe_VkPhysicalDeviceSparseImageFormatInfo2(
    const safe_VkPhysicalDeviceSparseImageFormatInfo2& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    samples = copy_src.samples;
    usage = copy_src.usage;
    tiling = copy_src.tiling;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSparseImageFormatInfo2& safe_VkPhysicalDeviceSparseImageFormatInfo2::operator=(
    const safe_VkPhysicalDeviceSparseImageFormatInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    type = copy_src.type;
    samples = copy_src.samples;
    usage = copy_src.usage;
    tiling = copy_src.tiling;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSparseImageFormatInfo2::~safe_VkPhysicalDeviceSparseImageFormatInfo2() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceSparseImageFormatInfo2::initialize(const VkPhysicalDeviceSparseImageFormatInfo2* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    type = in_struct->type;
    samples = in_struct->samples;
    usage = in_struct->usage;
    tiling = in_struct->tiling;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSparseImageFormatInfo2::initialize(const safe_VkPhysicalDeviceSparseImageFormatInfo2* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    type = copy_src->type;
    samples = copy_src->samples;
    usage = copy_src->usage;
    tiling = copy_src->tiling;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDevicePointClippingProperties::safe_VkPhysicalDevicePointClippingProperties(
    const VkPhysicalDevicePointClippingProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), pointClippingBehavior(in_struct->pointClippingBehavior) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDevicePointClippingProperties::safe_VkPhysicalDevicePointClippingProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES), pNext(nullptr), pointClippingBehavior() {}

safe_VkPhysicalDevicePointClippingProperties::safe_VkPhysicalDevicePointClippingProperties(
    const safe_VkPhysicalDevicePointClippingProperties& copy_src) {
    sType = copy_src.sType;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDevicePointClippingProperties& safe_VkPhysicalDevicePointClippingProperties::operator=(
    const safe_VkPhysicalDevicePointClippingProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDevicePointClippingProperties::~safe_VkPhysicalDevicePointClippingProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDevicePointClippingProperties::initialize(const VkPhysicalDevicePointClippingProperties* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pointClippingBehavior = in_struct->pointClippingBehavior;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDevicePointClippingProperties::initialize(const safe_VkPhysicalDevicePointClippingProperties* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pointClippingBehavior = copy_src->pointClippingBehavior;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderPassInputAttachmentAspectCreateInfo::safe_VkRenderPassInputAttachmentAspectCreateInfo(
    const VkRenderPassInputAttachmentAspectCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), aspectReferenceCount(in_struct->aspectReferenceCount), pAspectReferences(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[in_struct->aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)in_struct->pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * in_struct->aspectReferenceCount);
    }
}

safe_VkRenderPassInputAttachmentAspectCreateInfo::safe_VkRenderPassInputAttachmentAspectCreateInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO),
      pNext(nullptr),
      aspectReferenceCount(),
      pAspectReferences(nullptr) {}

safe_VkRenderPassInputAttachmentAspectCreateInfo::safe_VkRenderPassInputAttachmentAspectCreateInfo(
    const safe_VkRenderPassInputAttachmentAspectCreateInfo& copy_src) {
    sType = copy_src.sType;
    aspectReferenceCount = copy_src.aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[copy_src.aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)copy_src.pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * copy_src.aspectReferenceCount);
    }
}

safe_VkRenderPassInputAttachmentAspectCreateInfo& safe_VkRenderPassInputAttachmentAspectCreateInfo::operator=(
    const safe_VkRenderPassInputAttachmentAspectCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAspectReferences) delete[] pAspectReferences;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    aspectReferenceCount = copy_src.aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[copy_src.aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)copy_src.pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * copy_src.aspectReferenceCount);
    }

    return *this;
}

safe_VkRenderPassInputAttachmentAspectCreateInfo::~safe_VkRenderPassInputAttachmentAspectCreateInfo() {
    if (pAspectReferences) delete[] pAspectReferences;
    FreePnextChain(pNext);
}

void safe_VkRenderPassInputAttachmentAspectCreateInfo::initialize(const VkRenderPassInputAttachmentAspectCreateInfo* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAspectReferences) delete[] pAspectReferences;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    aspectReferenceCount = in_struct->aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[in_struct->aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)in_struct->pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * in_struct->aspectReferenceCount);
    }
}

void safe_VkRenderPassInputAttachmentAspectCreateInfo::initialize(const safe_VkRenderPassInputAttachmentAspectCreateInfo* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    aspectReferenceCount = copy_src->aspectReferenceCount;
    pAspectReferences = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReference[copy_src->aspectReferenceCount];
        memcpy((void*)pAspectReferences, (void*)copy_src->pAspectReferences,
               sizeof(VkInputAttachmentAspectReference) * copy_src->aspectReferenceCount);
    }
}

safe_VkImageViewUsageCreateInfo::safe_VkImageViewUsageCreateInfo(const VkImageViewUsageCreateInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), usage(in_struct->usage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageViewUsageCreateInfo::safe_VkImageViewUsageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO), pNext(nullptr), usage() {}

safe_VkImageViewUsageCreateInfo::safe_VkImageViewUsageCreateInfo(const safe_VkImageViewUsageCreateInfo& copy_src) {
    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageViewUsageCreateInfo& safe_VkImageViewUsageCreateInfo::operator=(const safe_VkImageViewUsageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    usage = copy_src.usage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageViewUsageCreateInfo::~safe_VkImageViewUsageCreateInfo() { FreePnextChain(pNext); }

void safe_VkImageViewUsageCreateInfo::initialize(const VkImageViewUsageCreateInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    usage = in_struct->usage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageViewUsageCreateInfo::initialize(const safe_VkImageViewUsageCreateInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    usage = copy_src->usage;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineTessellationDomainOriginStateCreateInfo::safe_VkPipelineTessellationDomainOriginStateCreateInfo(
    const VkPipelineTessellationDomainOriginStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), domainOrigin(in_struct->domainOrigin) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineTessellationDomainOriginStateCreateInfo::safe_VkPipelineTessellationDomainOriginStateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO), pNext(nullptr), domainOrigin() {}

safe_VkPipelineTessellationDomainOriginStateCreateInfo::safe_VkPipelineTessellationDomainOriginStateCreateInfo(
    const safe_VkPipelineTessellationDomainOriginStateCreateInfo& copy_src) {
    sType = copy_src.sType;
    domainOrigin = copy_src.domainOrigin;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineTessellationDomainOriginStateCreateInfo& safe_VkPipelineTessellationDomainOriginStateCreateInfo::operator=(
    const safe_VkPipelineTessellationDomainOriginStateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    domainOrigin = copy_src.domainOrigin;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineTessellationDomainOriginStateCreateInfo::~safe_VkPipelineTessellationDomainOriginStateCreateInfo() {
    FreePnextChain(pNext);
}

void safe_VkPipelineTessellationDomainOriginStateCreateInfo::initialize(
    const VkPipelineTessellationDomainOriginStateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    domainOrigin = in_struct->domainOrigin;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineTessellationDomainOriginStateCreateInfo::initialize(
    const safe_VkPipelineTessellationDomainOriginStateCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    domainOrigin = copy_src->domainOrigin;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderPassMultiviewCreateInfo::safe_VkRenderPassMultiviewCreateInfo(const VkRenderPassMultiviewCreateInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType),
      subpassCount(in_struct->subpassCount),
      pViewMasks(nullptr),
      dependencyCount(in_struct->dependencyCount),
      pViewOffsets(nullptr),
      correlationMaskCount(in_struct->correlationMaskCount),
      pCorrelationMasks(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy((void*)pViewMasks, (void*)in_struct->pViewMasks, sizeof(uint32_t) * in_struct->subpassCount);
    }

    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy((void*)pViewOffsets, (void*)in_struct->pViewOffsets, sizeof(int32_t) * in_struct->dependencyCount);
    }

    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)in_struct->pCorrelationMasks, sizeof(uint32_t) * in_struct->correlationMaskCount);
    }
}

safe_VkRenderPassMultiviewCreateInfo::safe_VkRenderPassMultiviewCreateInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO),
      pNext(nullptr),
      subpassCount(),
      pViewMasks(nullptr),
      dependencyCount(),
      pViewOffsets(nullptr),
      correlationMaskCount(),
      pCorrelationMasks(nullptr) {}

safe_VkRenderPassMultiviewCreateInfo::safe_VkRenderPassMultiviewCreateInfo(const safe_VkRenderPassMultiviewCreateInfo& copy_src) {
    sType = copy_src.sType;
    subpassCount = copy_src.subpassCount;
    pViewMasks = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = copy_src.correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewMasks) {
        pViewMasks = new uint32_t[copy_src.subpassCount];
        memcpy((void*)pViewMasks, (void*)copy_src.pViewMasks, sizeof(uint32_t) * copy_src.subpassCount);
    }

    if (copy_src.pViewOffsets) {
        pViewOffsets = new int32_t[copy_src.dependencyCount];
        memcpy((void*)pViewOffsets, (void*)copy_src.pViewOffsets, sizeof(int32_t) * copy_src.dependencyCount);
    }

    if (copy_src.pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[copy_src.correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)copy_src.pCorrelationMasks, sizeof(uint32_t) * copy_src.correlationMaskCount);
    }
}

safe_VkRenderPassMultiviewCreateInfo& safe_VkRenderPassMultiviewCreateInfo::operator=(
    const safe_VkRenderPassMultiviewCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewMasks) delete[] pViewMasks;
    if (pViewOffsets) delete[] pViewOffsets;
    if (pCorrelationMasks) delete[] pCorrelationMasks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    subpassCount = copy_src.subpassCount;
    pViewMasks = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = copy_src.correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewMasks) {
        pViewMasks = new uint32_t[copy_src.subpassCount];
        memcpy((void*)pViewMasks, (void*)copy_src.pViewMasks, sizeof(uint32_t) * copy_src.subpassCount);
    }

    if (copy_src.pViewOffsets) {
        pViewOffsets = new int32_t[copy_src.dependencyCount];
        memcpy((void*)pViewOffsets, (void*)copy_src.pViewOffsets, sizeof(int32_t) * copy_src.dependencyCount);
    }

    if (copy_src.pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[copy_src.correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)copy_src.pCorrelationMasks, sizeof(uint32_t) * copy_src.correlationMaskCount);
    }

    return *this;
}

safe_VkRenderPassMultiviewCreateInfo::~safe_VkRenderPassMultiviewCreateInfo() {
    if (pViewMasks) delete[] pViewMasks;
    if (pViewOffsets) delete[] pViewOffsets;
    if (pCorrelationMasks) delete[] pCorrelationMasks;
    FreePnextChain(pNext);
}

void safe_VkRenderPassMultiviewCreateInfo::initialize(const VkRenderPassMultiviewCreateInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewMasks) delete[] pViewMasks;
    if (pViewOffsets) delete[] pViewOffsets;
    if (pCorrelationMasks) delete[] pCorrelationMasks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subpassCount = in_struct->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = in_struct->correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy((void*)pViewMasks, (void*)in_struct->pViewMasks, sizeof(uint32_t) * in_struct->subpassCount);
    }

    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy((void*)pViewOffsets, (void*)in_struct->pViewOffsets, sizeof(int32_t) * in_struct->dependencyCount);
    }

    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)in_struct->pCorrelationMasks, sizeof(uint32_t) * in_struct->correlationMaskCount);
    }
}

void safe_VkRenderPassMultiviewCreateInfo::initialize(const safe_VkRenderPassMultiviewCreateInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subpassCount = copy_src->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = copy_src->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = copy_src->correlationMaskCount;
    pCorrelationMasks = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewMasks) {
        pViewMasks = new uint32_t[copy_src->subpassCount];
        memcpy((void*)pViewMasks, (void*)copy_src->pViewMasks, sizeof(uint32_t) * copy_src->subpassCount);
    }

    if (copy_src->pViewOffsets) {
        pViewOffsets = new int32_t[copy_src->dependencyCount];
        memcpy((void*)pViewOffsets, (void*)copy_src->pViewOffsets, sizeof(int32_t) * copy_src->dependencyCount);
    }

    if (copy_src->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[copy_src->correlationMaskCount];
        memcpy((void*)pCorrelationMasks, (void*)copy_src->pCorrelationMasks, sizeof(uint32_t) * copy_src->correlationMaskCount);
    }
}

safe_VkPhysicalDeviceMultiviewFeatures::safe_VkPhysicalDeviceMultiviewFeatures(const VkPhysicalDeviceMultiviewFeatures* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType),
      multiview(in_struct->multiview),
      multiviewGeometryShader(in_struct->multiviewGeometryShader),
      multiviewTessellationShader(in_struct->multiviewTessellationShader) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMultiviewFeatures::safe_VkPhysicalDeviceMultiviewFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES),
      pNext(nullptr),
      multiview(),
      multiviewGeometryShader(),
      multiviewTessellationShader() {}

safe_VkPhysicalDeviceMultiviewFeatures::safe_VkPhysicalDeviceMultiviewFeatures(
    const safe_VkPhysicalDeviceMultiviewFeatures& copy_src) {
    sType = copy_src.sType;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMultiviewFeatures& safe_VkPhysicalDeviceMultiviewFeatures::operator=(
    const safe_VkPhysicalDeviceMultiviewFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMultiviewFeatures::~safe_VkPhysicalDeviceMultiviewFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMultiviewFeatures::initialize(const VkPhysicalDeviceMultiviewFeatures* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    multiview = in_struct->multiview;
    multiviewGeometryShader = in_struct->multiviewGeometryShader;
    multiviewTessellationShader = in_struct->multiviewTessellationShader;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMultiviewFeatures::initialize(const safe_VkPhysicalDeviceMultiviewFeatures* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    multiview = copy_src->multiview;
    multiviewGeometryShader = copy_src->multiviewGeometryShader;
    multiviewTessellationShader = copy_src->multiviewTessellationShader;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMultiviewProperties::safe_VkPhysicalDeviceMultiviewProperties(
    const VkPhysicalDeviceMultiviewProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxMultiviewViewCount(in_struct->maxMultiviewViewCount),
      maxMultiviewInstanceIndex(in_struct->maxMultiviewInstanceIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMultiviewProperties::safe_VkPhysicalDeviceMultiviewProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES),
      pNext(nullptr),
      maxMultiviewViewCount(),
      maxMultiviewInstanceIndex() {}

safe_VkPhysicalDeviceMultiviewProperties::safe_VkPhysicalDeviceMultiviewProperties(
    const safe_VkPhysicalDeviceMultiviewProperties& copy_src) {
    sType = copy_src.sType;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMultiviewProperties& safe_VkPhysicalDeviceMultiviewProperties::operator=(
    const safe_VkPhysicalDeviceMultiviewProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMultiviewProperties::~safe_VkPhysicalDeviceMultiviewProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMultiviewProperties::initialize(const VkPhysicalDeviceMultiviewProperties* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxMultiviewViewCount = in_struct->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = in_struct->maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMultiviewProperties::initialize(const safe_VkPhysicalDeviceMultiviewProperties* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxMultiviewViewCount = copy_src->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src->maxMultiviewInstanceIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVariablePointersFeatures::safe_VkPhysicalDeviceVariablePointersFeatures(
    const VkPhysicalDeviceVariablePointersFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      variablePointersStorageBuffer(in_struct->variablePointersStorageBuffer),
      variablePointers(in_struct->variablePointers) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceVariablePointersFeatures::safe_VkPhysicalDeviceVariablePointersFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES),
      pNext(nullptr),
      variablePointersStorageBuffer(),
      variablePointers() {}

safe_VkPhysicalDeviceVariablePointersFeatures::safe_VkPhysicalDeviceVariablePointersFeatures(
    const safe_VkPhysicalDeviceVariablePointersFeatures& copy_src) {
    sType = copy_src.sType;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceVariablePointersFeatures& safe_VkPhysicalDeviceVariablePointersFeatures::operator=(
    const safe_VkPhysicalDeviceVariablePointersFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceVariablePointersFeatures::~safe_VkPhysicalDeviceVariablePointersFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVariablePointersFeatures::initialize(const VkPhysicalDeviceVariablePointersFeatures* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    variablePointersStorageBuffer = in_struct->variablePointersStorageBuffer;
    variablePointers = in_struct->variablePointers;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceVariablePointersFeatures::initialize(const safe_VkPhysicalDeviceVariablePointersFeatures* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    variablePointersStorageBuffer = copy_src->variablePointersStorageBuffer;
    variablePointers = copy_src->variablePointers;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceProtectedMemoryFeatures::safe_VkPhysicalDeviceProtectedMemoryFeatures(
    const VkPhysicalDeviceProtectedMemoryFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), protectedMemory(in_struct->protectedMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceProtectedMemoryFeatures::safe_VkPhysicalDeviceProtectedMemoryFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES), pNext(nullptr), protectedMemory() {}

safe_VkPhysicalDeviceProtectedMemoryFeatures::safe_VkPhysicalDeviceProtectedMemoryFeatures(
    const safe_VkPhysicalDeviceProtectedMemoryFeatures& copy_src) {
    sType = copy_src.sType;
    protectedMemory = copy_src.protectedMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceProtectedMemoryFeatures& safe_VkPhysicalDeviceProtectedMemoryFeatures::operator=(
    const safe_VkPhysicalDeviceProtectedMemoryFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    protectedMemory = copy_src.protectedMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceProtectedMemoryFeatures::~safe_VkPhysicalDeviceProtectedMemoryFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceProtectedMemoryFeatures::initialize(const VkPhysicalDeviceProtectedMemoryFeatures* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    protectedMemory = in_struct->protectedMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceProtectedMemoryFeatures::initialize(const safe_VkPhysicalDeviceProtectedMemoryFeatures* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    protectedMemory = copy_src->protectedMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceProtectedMemoryProperties::safe_VkPhysicalDeviceProtectedMemoryProperties(
    const VkPhysicalDeviceProtectedMemoryProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), protectedNoFault(in_struct->protectedNoFault) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceProtectedMemoryProperties::safe_VkPhysicalDeviceProtectedMemoryProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES), pNext(nullptr), protectedNoFault() {}

safe_VkPhysicalDeviceProtectedMemoryProperties::safe_VkPhysicalDeviceProtectedMemoryProperties(
    const safe_VkPhysicalDeviceProtectedMemoryProperties& copy_src) {
    sType = copy_src.sType;
    protectedNoFault = copy_src.protectedNoFault;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceProtectedMemoryProperties& safe_VkPhysicalDeviceProtectedMemoryProperties::operator=(
    const safe_VkPhysicalDeviceProtectedMemoryProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    protectedNoFault = copy_src.protectedNoFault;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceProtectedMemoryProperties::~safe_VkPhysicalDeviceProtectedMemoryProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceProtectedMemoryProperties::initialize(const VkPhysicalDeviceProtectedMemoryProperties* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    protectedNoFault = in_struct->protectedNoFault;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceProtectedMemoryProperties::initialize(const safe_VkPhysicalDeviceProtectedMemoryProperties* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    protectedNoFault = copy_src->protectedNoFault;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceQueueInfo2::safe_VkDeviceQueueInfo2(const VkDeviceQueueInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                                 bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      queueFamilyIndex(in_struct->queueFamilyIndex),
      queueIndex(in_struct->queueIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceQueueInfo2::safe_VkDeviceQueueInfo2()
    : sType(VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2), pNext(nullptr), flags(), queueFamilyIndex(), queueIndex() {}

safe_VkDeviceQueueInfo2::safe_VkDeviceQueueInfo2(const safe_VkDeviceQueueInfo2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueIndex = copy_src.queueIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceQueueInfo2& safe_VkDeviceQueueInfo2::operator=(const safe_VkDeviceQueueInfo2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    queueFamilyIndex = copy_src.queueFamilyIndex;
    queueIndex = copy_src.queueIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDeviceQueueInfo2::~safe_VkDeviceQueueInfo2() { FreePnextChain(pNext); }

void safe_VkDeviceQueueInfo2::initialize(const VkDeviceQueueInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    queueIndex = in_struct->queueIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceQueueInfo2::initialize(const safe_VkDeviceQueueInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    queueFamilyIndex = copy_src->queueFamilyIndex;
    queueIndex = copy_src->queueIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkProtectedSubmitInfo::safe_VkProtectedSubmitInfo(const VkProtectedSubmitInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), protectedSubmit(in_struct->protectedSubmit) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkProtectedSubmitInfo::safe_VkProtectedSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO), pNext(nullptr), protectedSubmit() {}

safe_VkProtectedSubmitInfo::safe_VkProtectedSubmitInfo(const safe_VkProtectedSubmitInfo& copy_src) {
    sType = copy_src.sType;
    protectedSubmit = copy_src.protectedSubmit;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkProtectedSubmitInfo& safe_VkProtectedSubmitInfo::operator=(const safe_VkProtectedSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    protectedSubmit = copy_src.protectedSubmit;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkProtectedSubmitInfo::~safe_VkProtectedSubmitInfo() { FreePnextChain(pNext); }

void safe_VkProtectedSubmitInfo::initialize(const VkProtectedSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    protectedSubmit = in_struct->protectedSubmit;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkProtectedSubmitInfo::initialize(const safe_VkProtectedSubmitInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    protectedSubmit = copy_src->protectedSubmit;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSamplerYcbcrConversionCreateInfo::safe_VkSamplerYcbcrConversionCreateInfo(
    const VkSamplerYcbcrConversionCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      format(in_struct->format),
      ycbcrModel(in_struct->ycbcrModel),
      ycbcrRange(in_struct->ycbcrRange),
      components(in_struct->components),
      xChromaOffset(in_struct->xChromaOffset),
      yChromaOffset(in_struct->yChromaOffset),
      chromaFilter(in_struct->chromaFilter),
      forceExplicitReconstruction(in_struct->forceExplicitReconstruction) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerYcbcrConversionCreateInfo::safe_VkSamplerYcbcrConversionCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO),
      pNext(nullptr),
      format(),
      ycbcrModel(),
      ycbcrRange(),
      components(),
      xChromaOffset(),
      yChromaOffset(),
      chromaFilter(),
      forceExplicitReconstruction() {}

safe_VkSamplerYcbcrConversionCreateInfo::safe_VkSamplerYcbcrConversionCreateInfo(
    const safe_VkSamplerYcbcrConversionCreateInfo& copy_src) {
    sType = copy_src.sType;
    format = copy_src.format;
    ycbcrModel = copy_src.ycbcrModel;
    ycbcrRange = copy_src.ycbcrRange;
    components = copy_src.components;
    xChromaOffset = copy_src.xChromaOffset;
    yChromaOffset = copy_src.yChromaOffset;
    chromaFilter = copy_src.chromaFilter;
    forceExplicitReconstruction = copy_src.forceExplicitReconstruction;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerYcbcrConversionCreateInfo& safe_VkSamplerYcbcrConversionCreateInfo::operator=(
    const safe_VkSamplerYcbcrConversionCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    format = copy_src.format;
    ycbcrModel = copy_src.ycbcrModel;
    ycbcrRange = copy_src.ycbcrRange;
    components = copy_src.components;
    xChromaOffset = copy_src.xChromaOffset;
    yChromaOffset = copy_src.yChromaOffset;
    chromaFilter = copy_src.chromaFilter;
    forceExplicitReconstruction = copy_src.forceExplicitReconstruction;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerYcbcrConversionCreateInfo::~safe_VkSamplerYcbcrConversionCreateInfo() { FreePnextChain(pNext); }

void safe_VkSamplerYcbcrConversionCreateInfo::initialize(const VkSamplerYcbcrConversionCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    format = in_struct->format;
    ycbcrModel = in_struct->ycbcrModel;
    ycbcrRange = in_struct->ycbcrRange;
    components = in_struct->components;
    xChromaOffset = in_struct->xChromaOffset;
    yChromaOffset = in_struct->yChromaOffset;
    chromaFilter = in_struct->chromaFilter;
    forceExplicitReconstruction = in_struct->forceExplicitReconstruction;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerYcbcrConversionCreateInfo::initialize(const safe_VkSamplerYcbcrConversionCreateInfo* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    format = copy_src->format;
    ycbcrModel = copy_src->ycbcrModel;
    ycbcrRange = copy_src->ycbcrRange;
    components = copy_src->components;
    xChromaOffset = copy_src->xChromaOffset;
    yChromaOffset = copy_src->yChromaOffset;
    chromaFilter = copy_src->chromaFilter;
    forceExplicitReconstruction = copy_src->forceExplicitReconstruction;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSamplerYcbcrConversionInfo::safe_VkSamplerYcbcrConversionInfo(const VkSamplerYcbcrConversionInfo* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), conversion(in_struct->conversion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerYcbcrConversionInfo::safe_VkSamplerYcbcrConversionInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO), pNext(nullptr), conversion() {}

safe_VkSamplerYcbcrConversionInfo::safe_VkSamplerYcbcrConversionInfo(const safe_VkSamplerYcbcrConversionInfo& copy_src) {
    sType = copy_src.sType;
    conversion = copy_src.conversion;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerYcbcrConversionInfo& safe_VkSamplerYcbcrConversionInfo::operator=(const safe_VkSamplerYcbcrConversionInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    conversion = copy_src.conversion;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerYcbcrConversionInfo::~safe_VkSamplerYcbcrConversionInfo() { FreePnextChain(pNext); }

void safe_VkSamplerYcbcrConversionInfo::initialize(const VkSamplerYcbcrConversionInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    conversion = in_struct->conversion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerYcbcrConversionInfo::initialize(const safe_VkSamplerYcbcrConversionInfo* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    conversion = copy_src->conversion;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBindImagePlaneMemoryInfo::safe_VkBindImagePlaneMemoryInfo(const VkBindImagePlaneMemoryInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), planeAspect(in_struct->planeAspect) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBindImagePlaneMemoryInfo::safe_VkBindImagePlaneMemoryInfo()
    : sType(VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO), pNext(nullptr), planeAspect() {}

safe_VkBindImagePlaneMemoryInfo::safe_VkBindImagePlaneMemoryInfo(const safe_VkBindImagePlaneMemoryInfo& copy_src) {
    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBindImagePlaneMemoryInfo& safe_VkBindImagePlaneMemoryInfo::operator=(const safe_VkBindImagePlaneMemoryInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBindImagePlaneMemoryInfo::~safe_VkBindImagePlaneMemoryInfo() { FreePnextChain(pNext); }

void safe_VkBindImagePlaneMemoryInfo::initialize(const VkBindImagePlaneMemoryInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    planeAspect = in_struct->planeAspect;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBindImagePlaneMemoryInfo::initialize(const safe_VkBindImagePlaneMemoryInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    planeAspect = copy_src->planeAspect;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImagePlaneMemoryRequirementsInfo::safe_VkImagePlaneMemoryRequirementsInfo(
    const VkImagePlaneMemoryRequirementsInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), planeAspect(in_struct->planeAspect) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImagePlaneMemoryRequirementsInfo::safe_VkImagePlaneMemoryRequirementsInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO), pNext(nullptr), planeAspect() {}

safe_VkImagePlaneMemoryRequirementsInfo::safe_VkImagePlaneMemoryRequirementsInfo(
    const safe_VkImagePlaneMemoryRequirementsInfo& copy_src) {
    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImagePlaneMemoryRequirementsInfo& safe_VkImagePlaneMemoryRequirementsInfo::operator=(
    const safe_VkImagePlaneMemoryRequirementsInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImagePlaneMemoryRequirementsInfo::~safe_VkImagePlaneMemoryRequirementsInfo() { FreePnextChain(pNext); }

void safe_VkImagePlaneMemoryRequirementsInfo::initialize(const VkImagePlaneMemoryRequirementsInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    planeAspect = in_struct->planeAspect;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImagePlaneMemoryRequirementsInfo::initialize(const safe_VkImagePlaneMemoryRequirementsInfo* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    planeAspect = copy_src->planeAspect;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures::safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures(
    const VkPhysicalDeviceSamplerYcbcrConversionFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), samplerYcbcrConversion(in_struct->samplerYcbcrConversion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures::safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES), pNext(nullptr), samplerYcbcrConversion() {}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures::safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures(
    const safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures& copy_src) {
    sType = copy_src.sType;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures& safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=(
    const safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures::~safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures::initialize(
    const VkPhysicalDeviceSamplerYcbcrConversionFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    samplerYcbcrConversion = in_struct->samplerYcbcrConversion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures::initialize(
    const safe_VkPhysicalDeviceSamplerYcbcrConversionFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    samplerYcbcrConversion = copy_src->samplerYcbcrConversion;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSamplerYcbcrConversionImageFormatProperties::safe_VkSamplerYcbcrConversionImageFormatProperties(
    const VkSamplerYcbcrConversionImageFormatProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), combinedImageSamplerDescriptorCount(in_struct->combinedImageSamplerDescriptorCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerYcbcrConversionImageFormatProperties::safe_VkSamplerYcbcrConversionImageFormatProperties()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES),
      pNext(nullptr),
      combinedImageSamplerDescriptorCount() {}

safe_VkSamplerYcbcrConversionImageFormatProperties::safe_VkSamplerYcbcrConversionImageFormatProperties(
    const safe_VkSamplerYcbcrConversionImageFormatProperties& copy_src) {
    sType = copy_src.sType;
    combinedImageSamplerDescriptorCount = copy_src.combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerYcbcrConversionImageFormatProperties& safe_VkSamplerYcbcrConversionImageFormatProperties::operator=(
    const safe_VkSamplerYcbcrConversionImageFormatProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    combinedImageSamplerDescriptorCount = copy_src.combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerYcbcrConversionImageFormatProperties::~safe_VkSamplerYcbcrConversionImageFormatProperties() { FreePnextChain(pNext); }

void safe_VkSamplerYcbcrConversionImageFormatProperties::initialize(const VkSamplerYcbcrConversionImageFormatProperties* in_struct,
                                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    combinedImageSamplerDescriptorCount = in_struct->combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerYcbcrConversionImageFormatProperties::initialize(
    const safe_VkSamplerYcbcrConversionImageFormatProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    combinedImageSamplerDescriptorCount = copy_src->combinedImageSamplerDescriptorCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorUpdateTemplateCreateInfo::safe_VkDescriptorUpdateTemplateCreateInfo(
    const VkDescriptorUpdateTemplateCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      descriptorUpdateEntryCount(in_struct->descriptorUpdateEntryCount),
      pDescriptorUpdateEntries(nullptr),
      templateType(in_struct->templateType),
      descriptorSetLayout(in_struct->descriptorSetLayout),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      pipelineLayout(in_struct->pipelineLayout),
      set(in_struct->set) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[in_struct->descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)in_struct->pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * in_struct->descriptorUpdateEntryCount);
    }
}

safe_VkDescriptorUpdateTemplateCreateInfo::safe_VkDescriptorUpdateTemplateCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO),
      pNext(nullptr),
      flags(),
      descriptorUpdateEntryCount(),
      pDescriptorUpdateEntries(nullptr),
      templateType(),
      descriptorSetLayout(),
      pipelineBindPoint(),
      pipelineLayout(),
      set() {}

safe_VkDescriptorUpdateTemplateCreateInfo::safe_VkDescriptorUpdateTemplateCreateInfo(
    const safe_VkDescriptorUpdateTemplateCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    descriptorUpdateEntryCount = copy_src.descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = copy_src.templateType;
    descriptorSetLayout = copy_src.descriptorSetLayout;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipelineLayout = copy_src.pipelineLayout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[copy_src.descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)copy_src.pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * copy_src.descriptorUpdateEntryCount);
    }
}

safe_VkDescriptorUpdateTemplateCreateInfo& safe_VkDescriptorUpdateTemplateCreateInfo::operator=(
    const safe_VkDescriptorUpdateTemplateCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDescriptorUpdateEntries) delete[] pDescriptorUpdateEntries;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    descriptorUpdateEntryCount = copy_src.descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = copy_src.templateType;
    descriptorSetLayout = copy_src.descriptorSetLayout;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    pipelineLayout = copy_src.pipelineLayout;
    set = copy_src.set;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[copy_src.descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)copy_src.pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * copy_src.descriptorUpdateEntryCount);
    }

    return *this;
}

safe_VkDescriptorUpdateTemplateCreateInfo::~safe_VkDescriptorUpdateTemplateCreateInfo() {
    if (pDescriptorUpdateEntries) delete[] pDescriptorUpdateEntries;
    FreePnextChain(pNext);
}

void safe_VkDescriptorUpdateTemplateCreateInfo::initialize(const VkDescriptorUpdateTemplateCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDescriptorUpdateEntries) delete[] pDescriptorUpdateEntries;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    descriptorUpdateEntryCount = in_struct->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = in_struct->templateType;
    descriptorSetLayout = in_struct->descriptorSetLayout;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    pipelineLayout = in_struct->pipelineLayout;
    set = in_struct->set;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[in_struct->descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)in_struct->pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * in_struct->descriptorUpdateEntryCount);
    }
}

void safe_VkDescriptorUpdateTemplateCreateInfo::initialize(const safe_VkDescriptorUpdateTemplateCreateInfo* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    descriptorUpdateEntryCount = copy_src->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = copy_src->templateType;
    descriptorSetLayout = copy_src->descriptorSetLayout;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    pipelineLayout = copy_src->pipelineLayout;
    set = copy_src->set;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntry[copy_src->descriptorUpdateEntryCount];
        memcpy((void*)pDescriptorUpdateEntries, (void*)copy_src->pDescriptorUpdateEntries,
               sizeof(VkDescriptorUpdateTemplateEntry) * copy_src->descriptorUpdateEntryCount);
    }
}

safe_VkPhysicalDeviceExternalImageFormatInfo::safe_VkPhysicalDeviceExternalImageFormatInfo(
    const VkPhysicalDeviceExternalImageFormatInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceExternalImageFormatInfo::safe_VkPhysicalDeviceExternalImageFormatInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO), pNext(nullptr), handleType() {}

safe_VkPhysicalDeviceExternalImageFormatInfo::safe_VkPhysicalDeviceExternalImageFormatInfo(
    const safe_VkPhysicalDeviceExternalImageFormatInfo& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceExternalImageFormatInfo& safe_VkPhysicalDeviceExternalImageFormatInfo::operator=(
    const safe_VkPhysicalDeviceExternalImageFormatInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceExternalImageFormatInfo::~safe_VkPhysicalDeviceExternalImageFormatInfo() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceExternalImageFormatInfo::initialize(const VkPhysicalDeviceExternalImageFormatInfo* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceExternalImageFormatInfo::initialize(const safe_VkPhysicalDeviceExternalImageFormatInfo* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExternalImageFormatProperties::safe_VkExternalImageFormatProperties(const VkExternalImageFormatProperties* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), externalMemoryProperties(in_struct->externalMemoryProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExternalImageFormatProperties::safe_VkExternalImageFormatProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES), pNext(nullptr), externalMemoryProperties() {}

safe_VkExternalImageFormatProperties::safe_VkExternalImageFormatProperties(const safe_VkExternalImageFormatProperties& copy_src) {
    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExternalImageFormatProperties& safe_VkExternalImageFormatProperties::operator=(
    const safe_VkExternalImageFormatProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExternalImageFormatProperties::~safe_VkExternalImageFormatProperties() { FreePnextChain(pNext); }

void safe_VkExternalImageFormatProperties::initialize(const VkExternalImageFormatProperties* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalMemoryProperties = in_struct->externalMemoryProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExternalImageFormatProperties::initialize(const safe_VkExternalImageFormatProperties* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalMemoryProperties = copy_src->externalMemoryProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceExternalBufferInfo::safe_VkPhysicalDeviceExternalBufferInfo(
    const VkPhysicalDeviceExternalBufferInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags), usage(in_struct->usage), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceExternalBufferInfo::safe_VkPhysicalDeviceExternalBufferInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO), pNext(nullptr), flags(), usage(), handleType() {}

safe_VkPhysicalDeviceExternalBufferInfo::safe_VkPhysicalDeviceExternalBufferInfo(
    const safe_VkPhysicalDeviceExternalBufferInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceExternalBufferInfo& safe_VkPhysicalDeviceExternalBufferInfo::operator=(
    const safe_VkPhysicalDeviceExternalBufferInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceExternalBufferInfo::~safe_VkPhysicalDeviceExternalBufferInfo() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceExternalBufferInfo::initialize(const VkPhysicalDeviceExternalBufferInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    usage = in_struct->usage;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceExternalBufferInfo::initialize(const safe_VkPhysicalDeviceExternalBufferInfo* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    usage = copy_src->usage;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExternalBufferProperties::safe_VkExternalBufferProperties(const VkExternalBufferProperties* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), externalMemoryProperties(in_struct->externalMemoryProperties) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExternalBufferProperties::safe_VkExternalBufferProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES), pNext(nullptr), externalMemoryProperties() {}

safe_VkExternalBufferProperties::safe_VkExternalBufferProperties(const safe_VkExternalBufferProperties& copy_src) {
    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExternalBufferProperties& safe_VkExternalBufferProperties::operator=(const safe_VkExternalBufferProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    externalMemoryProperties = copy_src.externalMemoryProperties;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExternalBufferProperties::~safe_VkExternalBufferProperties() { FreePnextChain(pNext); }

void safe_VkExternalBufferProperties::initialize(const VkExternalBufferProperties* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    externalMemoryProperties = in_struct->externalMemoryProperties;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExternalBufferProperties::initialize(const safe_VkExternalBufferProperties* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    externalMemoryProperties = copy_src->externalMemoryProperties;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceIDProperties::safe_VkPhysicalDeviceIDProperties(const VkPhysicalDeviceIDProperties* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), deviceNodeMask(in_struct->deviceNodeMask), deviceLUIDValid(in_struct->deviceLUIDValid) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

safe_VkPhysicalDeviceIDProperties::safe_VkPhysicalDeviceIDProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES), pNext(nullptr), deviceNodeMask(), deviceLUIDValid() {}

safe_VkPhysicalDeviceIDProperties::safe_VkPhysicalDeviceIDProperties(const safe_VkPhysicalDeviceIDProperties& copy_src) {
    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }
}

safe_VkPhysicalDeviceIDProperties& safe_VkPhysicalDeviceIDProperties::operator=(const safe_VkPhysicalDeviceIDProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }

    return *this;
}

safe_VkPhysicalDeviceIDProperties::~safe_VkPhysicalDeviceIDProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceIDProperties::initialize(const VkPhysicalDeviceIDProperties* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceNodeMask = in_struct->deviceNodeMask;
    deviceLUIDValid = in_struct->deviceLUIDValid;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

void safe_VkPhysicalDeviceIDProperties::initialize(const safe_VkPhysicalDeviceIDProperties* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceNodeMask = copy_src->deviceNodeMask;
    deviceLUIDValid = copy_src->deviceLUIDValid;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src->deviceLUID[i];
    }
}

safe_VkExternalMemoryImageCreateInfo::safe_VkExternalMemoryImageCreateInfo(const VkExternalMemoryImageCreateInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExternalMemoryImageCreateInfo::safe_VkExternalMemoryImageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO), pNext(nullptr), handleTypes() {}

safe_VkExternalMemoryImageCreateInfo::safe_VkExternalMemoryImageCreateInfo(const safe_VkExternalMemoryImageCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExternalMemoryImageCreateInfo& safe_VkExternalMemoryImageCreateInfo::operator=(
    const safe_VkExternalMemoryImageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExternalMemoryImageCreateInfo::~safe_VkExternalMemoryImageCreateInfo() { FreePnextChain(pNext); }

void safe_VkExternalMemoryImageCreateInfo::initialize(const VkExternalMemoryImageCreateInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExternalMemoryImageCreateInfo::initialize(const safe_VkExternalMemoryImageCreateInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExternalMemoryBufferCreateInfo::safe_VkExternalMemoryBufferCreateInfo(const VkExternalMemoryBufferCreateInfo* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExternalMemoryBufferCreateInfo::safe_VkExternalMemoryBufferCreateInfo()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO), pNext(nullptr), handleTypes() {}

safe_VkExternalMemoryBufferCreateInfo::safe_VkExternalMemoryBufferCreateInfo(
    const safe_VkExternalMemoryBufferCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExternalMemoryBufferCreateInfo& safe_VkExternalMemoryBufferCreateInfo::operator=(
    const safe_VkExternalMemoryBufferCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExternalMemoryBufferCreateInfo::~safe_VkExternalMemoryBufferCreateInfo() { FreePnextChain(pNext); }

void safe_VkExternalMemoryBufferCreateInfo::initialize(const VkExternalMemoryBufferCreateInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExternalMemoryBufferCreateInfo::initialize(const safe_VkExternalMemoryBufferCreateInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportMemoryAllocateInfo::safe_VkExportMemoryAllocateInfo(const VkExportMemoryAllocateInfo* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportMemoryAllocateInfo::safe_VkExportMemoryAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO), pNext(nullptr), handleTypes() {}

safe_VkExportMemoryAllocateInfo::safe_VkExportMemoryAllocateInfo(const safe_VkExportMemoryAllocateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportMemoryAllocateInfo& safe_VkExportMemoryAllocateInfo::operator=(const safe_VkExportMemoryAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportMemoryAllocateInfo::~safe_VkExportMemoryAllocateInfo() { FreePnextChain(pNext); }

void safe_VkExportMemoryAllocateInfo::initialize(const VkExportMemoryAllocateInfo* in_struct,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportMemoryAllocateInfo::initialize(const safe_VkExportMemoryAllocateInfo* copy_src,
                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceExternalFenceInfo::safe_VkPhysicalDeviceExternalFenceInfo(const VkPhysicalDeviceExternalFenceInfo* in_struct,
                                                                               [[maybe_unused]] PNextCopyState* copy_state,
                                                                               bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceExternalFenceInfo::safe_VkPhysicalDeviceExternalFenceInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO), pNext(nullptr), handleType() {}

safe_VkPhysicalDeviceExternalFenceInfo::safe_VkPhysicalDeviceExternalFenceInfo(
    const safe_VkPhysicalDeviceExternalFenceInfo& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceExternalFenceInfo& safe_VkPhysicalDeviceExternalFenceInfo::operator=(
    const safe_VkPhysicalDeviceExternalFenceInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceExternalFenceInfo::~safe_VkPhysicalDeviceExternalFenceInfo() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceExternalFenceInfo::initialize(const VkPhysicalDeviceExternalFenceInfo* in_struct,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceExternalFenceInfo::initialize(const safe_VkPhysicalDeviceExternalFenceInfo* copy_src,
                                                        [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExternalFenceProperties::safe_VkExternalFenceProperties(const VkExternalFenceProperties* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      exportFromImportedHandleTypes(in_struct->exportFromImportedHandleTypes),
      compatibleHandleTypes(in_struct->compatibleHandleTypes),
      externalFenceFeatures(in_struct->externalFenceFeatures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExternalFenceProperties::safe_VkExternalFenceProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES),
      pNext(nullptr),
      exportFromImportedHandleTypes(),
      compatibleHandleTypes(),
      externalFenceFeatures() {}

safe_VkExternalFenceProperties::safe_VkExternalFenceProperties(const safe_VkExternalFenceProperties& copy_src) {
    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalFenceFeatures = copy_src.externalFenceFeatures;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExternalFenceProperties& safe_VkExternalFenceProperties::operator=(const safe_VkExternalFenceProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalFenceFeatures = copy_src.externalFenceFeatures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExternalFenceProperties::~safe_VkExternalFenceProperties() { FreePnextChain(pNext); }

void safe_VkExternalFenceProperties::initialize(const VkExternalFenceProperties* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exportFromImportedHandleTypes = in_struct->exportFromImportedHandleTypes;
    compatibleHandleTypes = in_struct->compatibleHandleTypes;
    externalFenceFeatures = in_struct->externalFenceFeatures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExternalFenceProperties::initialize(const safe_VkExternalFenceProperties* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exportFromImportedHandleTypes = copy_src->exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src->compatibleHandleTypes;
    externalFenceFeatures = copy_src->externalFenceFeatures;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportFenceCreateInfo::safe_VkExportFenceCreateInfo(const VkExportFenceCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportFenceCreateInfo::safe_VkExportFenceCreateInfo()
    : sType(VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO), pNext(nullptr), handleTypes() {}

safe_VkExportFenceCreateInfo::safe_VkExportFenceCreateInfo(const safe_VkExportFenceCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportFenceCreateInfo& safe_VkExportFenceCreateInfo::operator=(const safe_VkExportFenceCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportFenceCreateInfo::~safe_VkExportFenceCreateInfo() { FreePnextChain(pNext); }

void safe_VkExportFenceCreateInfo::initialize(const VkExportFenceCreateInfo* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportFenceCreateInfo::initialize(const safe_VkExportFenceCreateInfo* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExportSemaphoreCreateInfo::safe_VkExportSemaphoreCreateInfo(const VkExportSemaphoreCreateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleTypes(in_struct->handleTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExportSemaphoreCreateInfo::safe_VkExportSemaphoreCreateInfo()
    : sType(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO), pNext(nullptr), handleTypes() {}

safe_VkExportSemaphoreCreateInfo::safe_VkExportSemaphoreCreateInfo(const safe_VkExportSemaphoreCreateInfo& copy_src) {
    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExportSemaphoreCreateInfo& safe_VkExportSemaphoreCreateInfo::operator=(const safe_VkExportSemaphoreCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleTypes = copy_src.handleTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExportSemaphoreCreateInfo::~safe_VkExportSemaphoreCreateInfo() { FreePnextChain(pNext); }

void safe_VkExportSemaphoreCreateInfo::initialize(const VkExportSemaphoreCreateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleTypes = in_struct->handleTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExportSemaphoreCreateInfo::initialize(const safe_VkExportSemaphoreCreateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleTypes = copy_src->handleTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceExternalSemaphoreInfo::safe_VkPhysicalDeviceExternalSemaphoreInfo(
    const VkPhysicalDeviceExternalSemaphoreInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), handleType(in_struct->handleType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceExternalSemaphoreInfo::safe_VkPhysicalDeviceExternalSemaphoreInfo()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO), pNext(nullptr), handleType() {}

safe_VkPhysicalDeviceExternalSemaphoreInfo::safe_VkPhysicalDeviceExternalSemaphoreInfo(
    const safe_VkPhysicalDeviceExternalSemaphoreInfo& copy_src) {
    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceExternalSemaphoreInfo& safe_VkPhysicalDeviceExternalSemaphoreInfo::operator=(
    const safe_VkPhysicalDeviceExternalSemaphoreInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    handleType = copy_src.handleType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceExternalSemaphoreInfo::~safe_VkPhysicalDeviceExternalSemaphoreInfo() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceExternalSemaphoreInfo::initialize(const VkPhysicalDeviceExternalSemaphoreInfo* in_struct,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    handleType = in_struct->handleType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceExternalSemaphoreInfo::initialize(const safe_VkPhysicalDeviceExternalSemaphoreInfo* copy_src,
                                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    handleType = copy_src->handleType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkExternalSemaphoreProperties::safe_VkExternalSemaphoreProperties(const VkExternalSemaphoreProperties* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      exportFromImportedHandleTypes(in_struct->exportFromImportedHandleTypes),
      compatibleHandleTypes(in_struct->compatibleHandleTypes),
      externalSemaphoreFeatures(in_struct->externalSemaphoreFeatures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkExternalSemaphoreProperties::safe_VkExternalSemaphoreProperties()
    : sType(VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES),
      pNext(nullptr),
      exportFromImportedHandleTypes(),
      compatibleHandleTypes(),
      externalSemaphoreFeatures() {}

safe_VkExternalSemaphoreProperties::safe_VkExternalSemaphoreProperties(const safe_VkExternalSemaphoreProperties& copy_src) {
    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalSemaphoreFeatures = copy_src.externalSemaphoreFeatures;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkExternalSemaphoreProperties& safe_VkExternalSemaphoreProperties::operator=(
    const safe_VkExternalSemaphoreProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    exportFromImportedHandleTypes = copy_src.exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src.compatibleHandleTypes;
    externalSemaphoreFeatures = copy_src.externalSemaphoreFeatures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkExternalSemaphoreProperties::~safe_VkExternalSemaphoreProperties() { FreePnextChain(pNext); }

void safe_VkExternalSemaphoreProperties::initialize(const VkExternalSemaphoreProperties* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    exportFromImportedHandleTypes = in_struct->exportFromImportedHandleTypes;
    compatibleHandleTypes = in_struct->compatibleHandleTypes;
    externalSemaphoreFeatures = in_struct->externalSemaphoreFeatures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkExternalSemaphoreProperties::initialize(const safe_VkExternalSemaphoreProperties* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    exportFromImportedHandleTypes = copy_src->exportFromImportedHandleTypes;
    compatibleHandleTypes = copy_src->compatibleHandleTypes;
    externalSemaphoreFeatures = copy_src->externalSemaphoreFeatures;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMaintenance3Properties::safe_VkPhysicalDeviceMaintenance3Properties(
    const VkPhysicalDeviceMaintenance3Properties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxPerSetDescriptors(in_struct->maxPerSetDescriptors),
      maxMemoryAllocationSize(in_struct->maxMemoryAllocationSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMaintenance3Properties::safe_VkPhysicalDeviceMaintenance3Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES),
      pNext(nullptr),
      maxPerSetDescriptors(),
      maxMemoryAllocationSize() {}

safe_VkPhysicalDeviceMaintenance3Properties::safe_VkPhysicalDeviceMaintenance3Properties(
    const safe_VkPhysicalDeviceMaintenance3Properties& copy_src) {
    sType = copy_src.sType;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMaintenance3Properties& safe_VkPhysicalDeviceMaintenance3Properties::operator=(
    const safe_VkPhysicalDeviceMaintenance3Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMaintenance3Properties::~safe_VkPhysicalDeviceMaintenance3Properties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMaintenance3Properties::initialize(const VkPhysicalDeviceMaintenance3Properties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxPerSetDescriptors = in_struct->maxPerSetDescriptors;
    maxMemoryAllocationSize = in_struct->maxMemoryAllocationSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMaintenance3Properties::initialize(const safe_VkPhysicalDeviceMaintenance3Properties* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxPerSetDescriptors = copy_src->maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src->maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorSetLayoutSupport::safe_VkDescriptorSetLayoutSupport(const VkDescriptorSetLayoutSupport* in_struct,
                                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), supported(in_struct->supported) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDescriptorSetLayoutSupport::safe_VkDescriptorSetLayoutSupport()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT), pNext(nullptr), supported() {}

safe_VkDescriptorSetLayoutSupport::safe_VkDescriptorSetLayoutSupport(const safe_VkDescriptorSetLayoutSupport& copy_src) {
    sType = copy_src.sType;
    supported = copy_src.supported;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDescriptorSetLayoutSupport& safe_VkDescriptorSetLayoutSupport::operator=(const safe_VkDescriptorSetLayoutSupport& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supported = copy_src.supported;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDescriptorSetLayoutSupport::~safe_VkDescriptorSetLayoutSupport() { FreePnextChain(pNext); }

void safe_VkDescriptorSetLayoutSupport::initialize(const VkDescriptorSetLayoutSupport* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supported = in_struct->supported;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDescriptorSetLayoutSupport::initialize(const safe_VkDescriptorSetLayoutSupport* copy_src,
                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supported = copy_src->supported;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceShaderDrawParametersFeatures::safe_VkPhysicalDeviceShaderDrawParametersFeatures(
    const VkPhysicalDeviceShaderDrawParametersFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderDrawParameters(in_struct->shaderDrawParameters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderDrawParametersFeatures::safe_VkPhysicalDeviceShaderDrawParametersFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES), pNext(nullptr), shaderDrawParameters() {}

safe_VkPhysicalDeviceShaderDrawParametersFeatures::safe_VkPhysicalDeviceShaderDrawParametersFeatures(
    const safe_VkPhysicalDeviceShaderDrawParametersFeatures& copy_src) {
    sType = copy_src.sType;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderDrawParametersFeatures& safe_VkPhysicalDeviceShaderDrawParametersFeatures::operator=(
    const safe_VkPhysicalDeviceShaderDrawParametersFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderDrawParametersFeatures::~safe_VkPhysicalDeviceShaderDrawParametersFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceShaderDrawParametersFeatures::initialize(const VkPhysicalDeviceShaderDrawParametersFeatures* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderDrawParameters = in_struct->shaderDrawParameters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderDrawParametersFeatures::initialize(
    const safe_VkPhysicalDeviceShaderDrawParametersFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderDrawParameters = copy_src->shaderDrawParameters;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVulkan11Features::safe_VkPhysicalDeviceVulkan11Features(const VkPhysicalDeviceVulkan11Features* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffer16BitAccess(in_struct->storageBuffer16BitAccess),
      uniformAndStorageBuffer16BitAccess(in_struct->uniformAndStorageBuffer16BitAccess),
      storagePushConstant16(in_struct->storagePushConstant16),
      storageInputOutput16(in_struct->storageInputOutput16),
      multiview(in_struct->multiview),
      multiviewGeometryShader(in_struct->multiviewGeometryShader),
      multiviewTessellationShader(in_struct->multiviewTessellationShader),
      variablePointersStorageBuffer(in_struct->variablePointersStorageBuffer),
      variablePointers(in_struct->variablePointers),
      protectedMemory(in_struct->protectedMemory),
      samplerYcbcrConversion(in_struct->samplerYcbcrConversion),
      shaderDrawParameters(in_struct->shaderDrawParameters) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceVulkan11Features::safe_VkPhysicalDeviceVulkan11Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES),
      pNext(nullptr),
      storageBuffer16BitAccess(),
      uniformAndStorageBuffer16BitAccess(),
      storagePushConstant16(),
      storageInputOutput16(),
      multiview(),
      multiviewGeometryShader(),
      multiviewTessellationShader(),
      variablePointersStorageBuffer(),
      variablePointers(),
      protectedMemory(),
      samplerYcbcrConversion(),
      shaderDrawParameters() {}

safe_VkPhysicalDeviceVulkan11Features::safe_VkPhysicalDeviceVulkan11Features(
    const safe_VkPhysicalDeviceVulkan11Features& copy_src) {
    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    protectedMemory = copy_src.protectedMemory;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceVulkan11Features& safe_VkPhysicalDeviceVulkan11Features::operator=(
    const safe_VkPhysicalDeviceVulkan11Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageBuffer16BitAccess = copy_src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src.storagePushConstant16;
    storageInputOutput16 = copy_src.storageInputOutput16;
    multiview = copy_src.multiview;
    multiviewGeometryShader = copy_src.multiviewGeometryShader;
    multiviewTessellationShader = copy_src.multiviewTessellationShader;
    variablePointersStorageBuffer = copy_src.variablePointersStorageBuffer;
    variablePointers = copy_src.variablePointers;
    protectedMemory = copy_src.protectedMemory;
    samplerYcbcrConversion = copy_src.samplerYcbcrConversion;
    shaderDrawParameters = copy_src.shaderDrawParameters;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceVulkan11Features::~safe_VkPhysicalDeviceVulkan11Features() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVulkan11Features::initialize(const VkPhysicalDeviceVulkan11Features* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffer16BitAccess = in_struct->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = in_struct->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = in_struct->storagePushConstant16;
    storageInputOutput16 = in_struct->storageInputOutput16;
    multiview = in_struct->multiview;
    multiviewGeometryShader = in_struct->multiviewGeometryShader;
    multiviewTessellationShader = in_struct->multiviewTessellationShader;
    variablePointersStorageBuffer = in_struct->variablePointersStorageBuffer;
    variablePointers = in_struct->variablePointers;
    protectedMemory = in_struct->protectedMemory;
    samplerYcbcrConversion = in_struct->samplerYcbcrConversion;
    shaderDrawParameters = in_struct->shaderDrawParameters;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceVulkan11Features::initialize(const safe_VkPhysicalDeviceVulkan11Features* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffer16BitAccess = copy_src->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = copy_src->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = copy_src->storagePushConstant16;
    storageInputOutput16 = copy_src->storageInputOutput16;
    multiview = copy_src->multiview;
    multiviewGeometryShader = copy_src->multiviewGeometryShader;
    multiviewTessellationShader = copy_src->multiviewTessellationShader;
    variablePointersStorageBuffer = copy_src->variablePointersStorageBuffer;
    variablePointers = copy_src->variablePointers;
    protectedMemory = copy_src->protectedMemory;
    samplerYcbcrConversion = copy_src->samplerYcbcrConversion;
    shaderDrawParameters = copy_src->shaderDrawParameters;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVulkan11Properties::safe_VkPhysicalDeviceVulkan11Properties(
    const VkPhysicalDeviceVulkan11Properties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      deviceNodeMask(in_struct->deviceNodeMask),
      deviceLUIDValid(in_struct->deviceLUIDValid),
      subgroupSize(in_struct->subgroupSize),
      subgroupSupportedStages(in_struct->subgroupSupportedStages),
      subgroupSupportedOperations(in_struct->subgroupSupportedOperations),
      subgroupQuadOperationsInAllStages(in_struct->subgroupQuadOperationsInAllStages),
      pointClippingBehavior(in_struct->pointClippingBehavior),
      maxMultiviewViewCount(in_struct->maxMultiviewViewCount),
      maxMultiviewInstanceIndex(in_struct->maxMultiviewInstanceIndex),
      protectedNoFault(in_struct->protectedNoFault),
      maxPerSetDescriptors(in_struct->maxPerSetDescriptors),
      maxMemoryAllocationSize(in_struct->maxMemoryAllocationSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

safe_VkPhysicalDeviceVulkan11Properties::safe_VkPhysicalDeviceVulkan11Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES),
      pNext(nullptr),
      deviceNodeMask(),
      deviceLUIDValid(),
      subgroupSize(),
      subgroupSupportedStages(),
      subgroupSupportedOperations(),
      subgroupQuadOperationsInAllStages(),
      pointClippingBehavior(),
      maxMultiviewViewCount(),
      maxMultiviewInstanceIndex(),
      protectedNoFault(),
      maxPerSetDescriptors(),
      maxMemoryAllocationSize() {}

safe_VkPhysicalDeviceVulkan11Properties::safe_VkPhysicalDeviceVulkan11Properties(
    const safe_VkPhysicalDeviceVulkan11Properties& copy_src) {
    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    subgroupSize = copy_src.subgroupSize;
    subgroupSupportedStages = copy_src.subgroupSupportedStages;
    subgroupSupportedOperations = copy_src.subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = copy_src.subgroupQuadOperationsInAllStages;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    protectedNoFault = copy_src.protectedNoFault;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }
}

safe_VkPhysicalDeviceVulkan11Properties& safe_VkPhysicalDeviceVulkan11Properties::operator=(
    const safe_VkPhysicalDeviceVulkan11Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    deviceNodeMask = copy_src.deviceNodeMask;
    deviceLUIDValid = copy_src.deviceLUIDValid;
    subgroupSize = copy_src.subgroupSize;
    subgroupSupportedStages = copy_src.subgroupSupportedStages;
    subgroupSupportedOperations = copy_src.subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = copy_src.subgroupQuadOperationsInAllStages;
    pointClippingBehavior = copy_src.pointClippingBehavior;
    maxMultiviewViewCount = copy_src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src.maxMultiviewInstanceIndex;
    protectedNoFault = copy_src.protectedNoFault;
    maxPerSetDescriptors = copy_src.maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src.maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src.deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src.driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src.deviceLUID[i];
    }

    return *this;
}

safe_VkPhysicalDeviceVulkan11Properties::~safe_VkPhysicalDeviceVulkan11Properties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVulkan11Properties::initialize(const VkPhysicalDeviceVulkan11Properties* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    deviceNodeMask = in_struct->deviceNodeMask;
    deviceLUIDValid = in_struct->deviceLUIDValid;
    subgroupSize = in_struct->subgroupSize;
    subgroupSupportedStages = in_struct->subgroupSupportedStages;
    subgroupSupportedOperations = in_struct->subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = in_struct->subgroupQuadOperationsInAllStages;
    pointClippingBehavior = in_struct->pointClippingBehavior;
    maxMultiviewViewCount = in_struct->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = in_struct->maxMultiviewInstanceIndex;
    protectedNoFault = in_struct->protectedNoFault;
    maxPerSetDescriptors = in_struct->maxPerSetDescriptors;
    maxMemoryAllocationSize = in_struct->maxMemoryAllocationSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

void safe_VkPhysicalDeviceVulkan11Properties::initialize(const safe_VkPhysicalDeviceVulkan11Properties* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    deviceNodeMask = copy_src->deviceNodeMask;
    deviceLUIDValid = copy_src->deviceLUIDValid;
    subgroupSize = copy_src->subgroupSize;
    subgroupSupportedStages = copy_src->subgroupSupportedStages;
    subgroupSupportedOperations = copy_src->subgroupSupportedOperations;
    subgroupQuadOperationsInAllStages = copy_src->subgroupQuadOperationsInAllStages;
    pointClippingBehavior = copy_src->pointClippingBehavior;
    maxMultiviewViewCount = copy_src->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = copy_src->maxMultiviewInstanceIndex;
    protectedNoFault = copy_src->protectedNoFault;
    maxPerSetDescriptors = copy_src->maxPerSetDescriptors;
    maxMemoryAllocationSize = copy_src->maxMemoryAllocationSize;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        deviceUUID[i] = copy_src->deviceUUID[i];
    }

    for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
        driverUUID[i] = copy_src->driverUUID[i];
    }

    for (uint32_t i = 0; i < VK_LUID_SIZE; ++i) {
        deviceLUID[i] = copy_src->deviceLUID[i];
    }
}

safe_VkPhysicalDeviceVulkan12Features::safe_VkPhysicalDeviceVulkan12Features(const VkPhysicalDeviceVulkan12Features* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      samplerMirrorClampToEdge(in_struct->samplerMirrorClampToEdge),
      drawIndirectCount(in_struct->drawIndirectCount),
      storageBuffer8BitAccess(in_struct->storageBuffer8BitAccess),
      uniformAndStorageBuffer8BitAccess(in_struct->uniformAndStorageBuffer8BitAccess),
      storagePushConstant8(in_struct->storagePushConstant8),
      shaderBufferInt64Atomics(in_struct->shaderBufferInt64Atomics),
      shaderSharedInt64Atomics(in_struct->shaderSharedInt64Atomics),
      shaderFloat16(in_struct->shaderFloat16),
      shaderInt8(in_struct->shaderInt8),
      descriptorIndexing(in_struct->descriptorIndexing),
      shaderInputAttachmentArrayDynamicIndexing(in_struct->shaderInputAttachmentArrayDynamicIndexing),
      shaderUniformTexelBufferArrayDynamicIndexing(in_struct->shaderUniformTexelBufferArrayDynamicIndexing),
      shaderStorageTexelBufferArrayDynamicIndexing(in_struct->shaderStorageTexelBufferArrayDynamicIndexing),
      shaderUniformBufferArrayNonUniformIndexing(in_struct->shaderUniformBufferArrayNonUniformIndexing),
      shaderSampledImageArrayNonUniformIndexing(in_struct->shaderSampledImageArrayNonUniformIndexing),
      shaderStorageBufferArrayNonUniformIndexing(in_struct->shaderStorageBufferArrayNonUniformIndexing),
      shaderStorageImageArrayNonUniformIndexing(in_struct->shaderStorageImageArrayNonUniformIndexing),
      shaderInputAttachmentArrayNonUniformIndexing(in_struct->shaderInputAttachmentArrayNonUniformIndexing),
      shaderUniformTexelBufferArrayNonUniformIndexing(in_struct->shaderUniformTexelBufferArrayNonUniformIndexing),
      shaderStorageTexelBufferArrayNonUniformIndexing(in_struct->shaderStorageTexelBufferArrayNonUniformIndexing),
      descriptorBindingUniformBufferUpdateAfterBind(in_struct->descriptorBindingUniformBufferUpdateAfterBind),
      descriptorBindingSampledImageUpdateAfterBind(in_struct->descriptorBindingSampledImageUpdateAfterBind),
      descriptorBindingStorageImageUpdateAfterBind(in_struct->descriptorBindingStorageImageUpdateAfterBind),
      descriptorBindingStorageBufferUpdateAfterBind(in_struct->descriptorBindingStorageBufferUpdateAfterBind),
      descriptorBindingUniformTexelBufferUpdateAfterBind(in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind),
      descriptorBindingStorageTexelBufferUpdateAfterBind(in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind),
      descriptorBindingUpdateUnusedWhilePending(in_struct->descriptorBindingUpdateUnusedWhilePending),
      descriptorBindingPartiallyBound(in_struct->descriptorBindingPartiallyBound),
      descriptorBindingVariableDescriptorCount(in_struct->descriptorBindingVariableDescriptorCount),
      runtimeDescriptorArray(in_struct->runtimeDescriptorArray),
      samplerFilterMinmax(in_struct->samplerFilterMinmax),
      scalarBlockLayout(in_struct->scalarBlockLayout),
      imagelessFramebuffer(in_struct->imagelessFramebuffer),
      uniformBufferStandardLayout(in_struct->uniformBufferStandardLayout),
      shaderSubgroupExtendedTypes(in_struct->shaderSubgroupExtendedTypes),
      separateDepthStencilLayouts(in_struct->separateDepthStencilLayouts),
      hostQueryReset(in_struct->hostQueryReset),
      timelineSemaphore(in_struct->timelineSemaphore),
      bufferDeviceAddress(in_struct->bufferDeviceAddress),
      bufferDeviceAddressCaptureReplay(in_struct->bufferDeviceAddressCaptureReplay),
      bufferDeviceAddressMultiDevice(in_struct->bufferDeviceAddressMultiDevice),
      vulkanMemoryModel(in_struct->vulkanMemoryModel),
      vulkanMemoryModelDeviceScope(in_struct->vulkanMemoryModelDeviceScope),
      vulkanMemoryModelAvailabilityVisibilityChains(in_struct->vulkanMemoryModelAvailabilityVisibilityChains),
      shaderOutputViewportIndex(in_struct->shaderOutputViewportIndex),
      shaderOutputLayer(in_struct->shaderOutputLayer),
      subgroupBroadcastDynamicId(in_struct->subgroupBroadcastDynamicId) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceVulkan12Features::safe_VkPhysicalDeviceVulkan12Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES),
      pNext(nullptr),
      samplerMirrorClampToEdge(),
      drawIndirectCount(),
      storageBuffer8BitAccess(),
      uniformAndStorageBuffer8BitAccess(),
      storagePushConstant8(),
      shaderBufferInt64Atomics(),
      shaderSharedInt64Atomics(),
      shaderFloat16(),
      shaderInt8(),
      descriptorIndexing(),
      shaderInputAttachmentArrayDynamicIndexing(),
      shaderUniformTexelBufferArrayDynamicIndexing(),
      shaderStorageTexelBufferArrayDynamicIndexing(),
      shaderUniformBufferArrayNonUniformIndexing(),
      shaderSampledImageArrayNonUniformIndexing(),
      shaderStorageBufferArrayNonUniformIndexing(),
      shaderStorageImageArrayNonUniformIndexing(),
      shaderInputAttachmentArrayNonUniformIndexing(),
      shaderUniformTexelBufferArrayNonUniformIndexing(),
      shaderStorageTexelBufferArrayNonUniformIndexing(),
      descriptorBindingUniformBufferUpdateAfterBind(),
      descriptorBindingSampledImageUpdateAfterBind(),
      descriptorBindingStorageImageUpdateAfterBind(),
      descriptorBindingStorageBufferUpdateAfterBind(),
      descriptorBindingUniformTexelBufferUpdateAfterBind(),
      descriptorBindingStorageTexelBufferUpdateAfterBind(),
      descriptorBindingUpdateUnusedWhilePending(),
      descriptorBindingPartiallyBound(),
      descriptorBindingVariableDescriptorCount(),
      runtimeDescriptorArray(),
      samplerFilterMinmax(),
      scalarBlockLayout(),
      imagelessFramebuffer(),
      uniformBufferStandardLayout(),
      shaderSubgroupExtendedTypes(),
      separateDepthStencilLayouts(),
      hostQueryReset(),
      timelineSemaphore(),
      bufferDeviceAddress(),
      bufferDeviceAddressCaptureReplay(),
      bufferDeviceAddressMultiDevice(),
      vulkanMemoryModel(),
      vulkanMemoryModelDeviceScope(),
      vulkanMemoryModelAvailabilityVisibilityChains(),
      shaderOutputViewportIndex(),
      shaderOutputLayer(),
      subgroupBroadcastDynamicId() {}

safe_VkPhysicalDeviceVulkan12Features::safe_VkPhysicalDeviceVulkan12Features(
    const safe_VkPhysicalDeviceVulkan12Features& copy_src) {
    sType = copy_src.sType;
    samplerMirrorClampToEdge = copy_src.samplerMirrorClampToEdge;
    drawIndirectCount = copy_src.drawIndirectCount;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    descriptorIndexing = copy_src.descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    samplerFilterMinmax = copy_src.samplerFilterMinmax;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    hostQueryReset = copy_src.hostQueryReset;
    timelineSemaphore = copy_src.timelineSemaphore;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = copy_src.shaderOutputViewportIndex;
    shaderOutputLayer = copy_src.shaderOutputLayer;
    subgroupBroadcastDynamicId = copy_src.subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceVulkan12Features& safe_VkPhysicalDeviceVulkan12Features::operator=(
    const safe_VkPhysicalDeviceVulkan12Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    samplerMirrorClampToEdge = copy_src.samplerMirrorClampToEdge;
    drawIndirectCount = copy_src.drawIndirectCount;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    descriptorIndexing = copy_src.descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    samplerFilterMinmax = copy_src.samplerFilterMinmax;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    hostQueryReset = copy_src.hostQueryReset;
    timelineSemaphore = copy_src.timelineSemaphore;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = copy_src.shaderOutputViewportIndex;
    shaderOutputLayer = copy_src.shaderOutputLayer;
    subgroupBroadcastDynamicId = copy_src.subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceVulkan12Features::~safe_VkPhysicalDeviceVulkan12Features() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVulkan12Features::initialize(const VkPhysicalDeviceVulkan12Features* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    samplerMirrorClampToEdge = in_struct->samplerMirrorClampToEdge;
    drawIndirectCount = in_struct->drawIndirectCount;
    storageBuffer8BitAccess = in_struct->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = in_struct->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = in_struct->storagePushConstant8;
    shaderBufferInt64Atomics = in_struct->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = in_struct->shaderSharedInt64Atomics;
    shaderFloat16 = in_struct->shaderFloat16;
    shaderInt8 = in_struct->shaderInt8;
    descriptorIndexing = in_struct->descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = in_struct->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = in_struct->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = in_struct->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = in_struct->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = in_struct->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = in_struct->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = in_struct->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = in_struct->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = in_struct->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = in_struct->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = in_struct->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = in_struct->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = in_struct->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = in_struct->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = in_struct->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = in_struct->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = in_struct->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = in_struct->runtimeDescriptorArray;
    samplerFilterMinmax = in_struct->samplerFilterMinmax;
    scalarBlockLayout = in_struct->scalarBlockLayout;
    imagelessFramebuffer = in_struct->imagelessFramebuffer;
    uniformBufferStandardLayout = in_struct->uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = in_struct->shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = in_struct->separateDepthStencilLayouts;
    hostQueryReset = in_struct->hostQueryReset;
    timelineSemaphore = in_struct->timelineSemaphore;
    bufferDeviceAddress = in_struct->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = in_struct->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = in_struct->bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = in_struct->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = in_struct->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = in_struct->vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = in_struct->shaderOutputViewportIndex;
    shaderOutputLayer = in_struct->shaderOutputLayer;
    subgroupBroadcastDynamicId = in_struct->subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceVulkan12Features::initialize(const safe_VkPhysicalDeviceVulkan12Features* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    samplerMirrorClampToEdge = copy_src->samplerMirrorClampToEdge;
    drawIndirectCount = copy_src->drawIndirectCount;
    storageBuffer8BitAccess = copy_src->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src->storagePushConstant8;
    shaderBufferInt64Atomics = copy_src->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src->shaderSharedInt64Atomics;
    shaderFloat16 = copy_src->shaderFloat16;
    shaderInt8 = copy_src->shaderInt8;
    descriptorIndexing = copy_src->descriptorIndexing;
    shaderInputAttachmentArrayDynamicIndexing = copy_src->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src->runtimeDescriptorArray;
    samplerFilterMinmax = copy_src->samplerFilterMinmax;
    scalarBlockLayout = copy_src->scalarBlockLayout;
    imagelessFramebuffer = copy_src->imagelessFramebuffer;
    uniformBufferStandardLayout = copy_src->uniformBufferStandardLayout;
    shaderSubgroupExtendedTypes = copy_src->shaderSubgroupExtendedTypes;
    separateDepthStencilLayouts = copy_src->separateDepthStencilLayouts;
    hostQueryReset = copy_src->hostQueryReset;
    timelineSemaphore = copy_src->timelineSemaphore;
    bufferDeviceAddress = copy_src->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src->bufferDeviceAddressMultiDevice;
    vulkanMemoryModel = copy_src->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src->vulkanMemoryModelAvailabilityVisibilityChains;
    shaderOutputViewportIndex = copy_src->shaderOutputViewportIndex;
    shaderOutputLayer = copy_src->shaderOutputLayer;
    subgroupBroadcastDynamicId = copy_src->subgroupBroadcastDynamicId;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVulkan12Properties::safe_VkPhysicalDeviceVulkan12Properties(
    const VkPhysicalDeviceVulkan12Properties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      driverID(in_struct->driverID),
      conformanceVersion(in_struct->conformanceVersion),
      denormBehaviorIndependence(in_struct->denormBehaviorIndependence),
      roundingModeIndependence(in_struct->roundingModeIndependence),
      shaderSignedZeroInfNanPreserveFloat16(in_struct->shaderSignedZeroInfNanPreserveFloat16),
      shaderSignedZeroInfNanPreserveFloat32(in_struct->shaderSignedZeroInfNanPreserveFloat32),
      shaderSignedZeroInfNanPreserveFloat64(in_struct->shaderSignedZeroInfNanPreserveFloat64),
      shaderDenormPreserveFloat16(in_struct->shaderDenormPreserveFloat16),
      shaderDenormPreserveFloat32(in_struct->shaderDenormPreserveFloat32),
      shaderDenormPreserveFloat64(in_struct->shaderDenormPreserveFloat64),
      shaderDenormFlushToZeroFloat16(in_struct->shaderDenormFlushToZeroFloat16),
      shaderDenormFlushToZeroFloat32(in_struct->shaderDenormFlushToZeroFloat32),
      shaderDenormFlushToZeroFloat64(in_struct->shaderDenormFlushToZeroFloat64),
      shaderRoundingModeRTEFloat16(in_struct->shaderRoundingModeRTEFloat16),
      shaderRoundingModeRTEFloat32(in_struct->shaderRoundingModeRTEFloat32),
      shaderRoundingModeRTEFloat64(in_struct->shaderRoundingModeRTEFloat64),
      shaderRoundingModeRTZFloat16(in_struct->shaderRoundingModeRTZFloat16),
      shaderRoundingModeRTZFloat32(in_struct->shaderRoundingModeRTZFloat32),
      shaderRoundingModeRTZFloat64(in_struct->shaderRoundingModeRTZFloat64),
      maxUpdateAfterBindDescriptorsInAllPools(in_struct->maxUpdateAfterBindDescriptorsInAllPools),
      shaderUniformBufferArrayNonUniformIndexingNative(in_struct->shaderUniformBufferArrayNonUniformIndexingNative),
      shaderSampledImageArrayNonUniformIndexingNative(in_struct->shaderSampledImageArrayNonUniformIndexingNative),
      shaderStorageBufferArrayNonUniformIndexingNative(in_struct->shaderStorageBufferArrayNonUniformIndexingNative),
      shaderStorageImageArrayNonUniformIndexingNative(in_struct->shaderStorageImageArrayNonUniformIndexingNative),
      shaderInputAttachmentArrayNonUniformIndexingNative(in_struct->shaderInputAttachmentArrayNonUniformIndexingNative),
      robustBufferAccessUpdateAfterBind(in_struct->robustBufferAccessUpdateAfterBind),
      quadDivergentImplicitLod(in_struct->quadDivergentImplicitLod),
      maxPerStageDescriptorUpdateAfterBindSamplers(in_struct->maxPerStageDescriptorUpdateAfterBindSamplers),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers),
      maxPerStageDescriptorUpdateAfterBindSampledImages(in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages),
      maxPerStageDescriptorUpdateAfterBindStorageImages(in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments),
      maxPerStageUpdateAfterBindResources(in_struct->maxPerStageUpdateAfterBindResources),
      maxDescriptorSetUpdateAfterBindSamplers(in_struct->maxDescriptorSetUpdateAfterBindSamplers),
      maxDescriptorSetUpdateAfterBindUniformBuffers(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic),
      maxDescriptorSetUpdateAfterBindStorageBuffers(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic),
      maxDescriptorSetUpdateAfterBindSampledImages(in_struct->maxDescriptorSetUpdateAfterBindSampledImages),
      maxDescriptorSetUpdateAfterBindStorageImages(in_struct->maxDescriptorSetUpdateAfterBindStorageImages),
      maxDescriptorSetUpdateAfterBindInputAttachments(in_struct->maxDescriptorSetUpdateAfterBindInputAttachments),
      supportedDepthResolveModes(in_struct->supportedDepthResolveModes),
      supportedStencilResolveModes(in_struct->supportedStencilResolveModes),
      independentResolveNone(in_struct->independentResolveNone),
      independentResolve(in_struct->independentResolve),
      filterMinmaxSingleComponentFormats(in_struct->filterMinmaxSingleComponentFormats),
      filterMinmaxImageComponentMapping(in_struct->filterMinmaxImageComponentMapping),
      maxTimelineSemaphoreValueDifference(in_struct->maxTimelineSemaphoreValueDifference),
      framebufferIntegerColorSampleCounts(in_struct->framebufferIntegerColorSampleCounts) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

safe_VkPhysicalDeviceVulkan12Properties::safe_VkPhysicalDeviceVulkan12Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES),
      pNext(nullptr),
      driverID(),
      conformanceVersion(),
      denormBehaviorIndependence(),
      roundingModeIndependence(),
      shaderSignedZeroInfNanPreserveFloat16(),
      shaderSignedZeroInfNanPreserveFloat32(),
      shaderSignedZeroInfNanPreserveFloat64(),
      shaderDenormPreserveFloat16(),
      shaderDenormPreserveFloat32(),
      shaderDenormPreserveFloat64(),
      shaderDenormFlushToZeroFloat16(),
      shaderDenormFlushToZeroFloat32(),
      shaderDenormFlushToZeroFloat64(),
      shaderRoundingModeRTEFloat16(),
      shaderRoundingModeRTEFloat32(),
      shaderRoundingModeRTEFloat64(),
      shaderRoundingModeRTZFloat16(),
      shaderRoundingModeRTZFloat32(),
      shaderRoundingModeRTZFloat64(),
      maxUpdateAfterBindDescriptorsInAllPools(),
      shaderUniformBufferArrayNonUniformIndexingNative(),
      shaderSampledImageArrayNonUniformIndexingNative(),
      shaderStorageBufferArrayNonUniformIndexingNative(),
      shaderStorageImageArrayNonUniformIndexingNative(),
      shaderInputAttachmentArrayNonUniformIndexingNative(),
      robustBufferAccessUpdateAfterBind(),
      quadDivergentImplicitLod(),
      maxPerStageDescriptorUpdateAfterBindSamplers(),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(),
      maxPerStageDescriptorUpdateAfterBindSampledImages(),
      maxPerStageDescriptorUpdateAfterBindStorageImages(),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(),
      maxPerStageUpdateAfterBindResources(),
      maxDescriptorSetUpdateAfterBindSamplers(),
      maxDescriptorSetUpdateAfterBindUniformBuffers(),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindStorageBuffers(),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindSampledImages(),
      maxDescriptorSetUpdateAfterBindStorageImages(),
      maxDescriptorSetUpdateAfterBindInputAttachments(),
      supportedDepthResolveModes(),
      supportedStencilResolveModes(),
      independentResolveNone(),
      independentResolve(),
      filterMinmaxSingleComponentFormats(),
      filterMinmaxImageComponentMapping(),
      maxTimelineSemaphoreValueDifference(),
      framebufferIntegerColorSampleCounts() {}

safe_VkPhysicalDeviceVulkan12Properties::safe_VkPhysicalDeviceVulkan12Properties(
    const safe_VkPhysicalDeviceVulkan12Properties& copy_src) {
    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = copy_src.framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }
}

safe_VkPhysicalDeviceVulkan12Properties& safe_VkPhysicalDeviceVulkan12Properties::operator=(
    const safe_VkPhysicalDeviceVulkan12Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = copy_src.framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }

    return *this;
}

safe_VkPhysicalDeviceVulkan12Properties::~safe_VkPhysicalDeviceVulkan12Properties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVulkan12Properties::initialize(const VkPhysicalDeviceVulkan12Properties* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    driverID = in_struct->driverID;
    conformanceVersion = in_struct->conformanceVersion;
    denormBehaviorIndependence = in_struct->denormBehaviorIndependence;
    roundingModeIndependence = in_struct->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = in_struct->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = in_struct->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = in_struct->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = in_struct->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = in_struct->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = in_struct->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = in_struct->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = in_struct->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = in_struct->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = in_struct->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = in_struct->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = in_struct->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = in_struct->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = in_struct->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = in_struct->shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = in_struct->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = in_struct->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = in_struct->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = in_struct->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = in_struct->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = in_struct->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = in_struct->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = in_struct->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = in_struct->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = in_struct->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = in_struct->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = in_struct->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = in_struct->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = in_struct->maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = in_struct->supportedDepthResolveModes;
    supportedStencilResolveModes = in_struct->supportedStencilResolveModes;
    independentResolveNone = in_struct->independentResolveNone;
    independentResolve = in_struct->independentResolve;
    filterMinmaxSingleComponentFormats = in_struct->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = in_struct->filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = in_struct->maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = in_struct->framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

void safe_VkPhysicalDeviceVulkan12Properties::initialize(const safe_VkPhysicalDeviceVulkan12Properties* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    driverID = copy_src->driverID;
    conformanceVersion = copy_src->conformanceVersion;
    denormBehaviorIndependence = copy_src->denormBehaviorIndependence;
    roundingModeIndependence = copy_src->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src->shaderRoundingModeRTZFloat64;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src->maxDescriptorSetUpdateAfterBindInputAttachments;
    supportedDepthResolveModes = copy_src->supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src->supportedStencilResolveModes;
    independentResolveNone = copy_src->independentResolveNone;
    independentResolve = copy_src->independentResolve;
    filterMinmaxSingleComponentFormats = copy_src->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src->filterMinmaxImageComponentMapping;
    maxTimelineSemaphoreValueDifference = copy_src->maxTimelineSemaphoreValueDifference;
    framebufferIntegerColorSampleCounts = copy_src->framebufferIntegerColorSampleCounts;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src->driverInfo[i];
    }
}

safe_VkImageFormatListCreateInfo::safe_VkImageFormatListCreateInfo(const VkImageFormatListCreateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), viewFormatCount(in_struct->viewFormatCount), pViewFormats(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

safe_VkImageFormatListCreateInfo::safe_VkImageFormatListCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO), pNext(nullptr), viewFormatCount(), pViewFormats(nullptr) {}

safe_VkImageFormatListCreateInfo::safe_VkImageFormatListCreateInfo(const safe_VkImageFormatListCreateInfo& copy_src) {
    sType = copy_src.sType;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }
}

safe_VkImageFormatListCreateInfo& safe_VkImageFormatListCreateInfo::operator=(const safe_VkImageFormatListCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }

    return *this;
}

safe_VkImageFormatListCreateInfo::~safe_VkImageFormatListCreateInfo() {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
}

void safe_VkImageFormatListCreateInfo::initialize(const VkImageFormatListCreateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    viewFormatCount = in_struct->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

void safe_VkImageFormatListCreateInfo::initialize(const safe_VkImageFormatListCreateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    viewFormatCount = copy_src->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewFormats) {
        pViewFormats = new VkFormat[copy_src->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src->pViewFormats, sizeof(VkFormat) * copy_src->viewFormatCount);
    }
}

safe_VkAttachmentDescription2::safe_VkAttachmentDescription2(const VkAttachmentDescription2* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      format(in_struct->format),
      samples(in_struct->samples),
      loadOp(in_struct->loadOp),
      storeOp(in_struct->storeOp),
      stencilLoadOp(in_struct->stencilLoadOp),
      stencilStoreOp(in_struct->stencilStoreOp),
      initialLayout(in_struct->initialLayout),
      finalLayout(in_struct->finalLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkAttachmentDescription2::safe_VkAttachmentDescription2()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2),
      pNext(nullptr),
      flags(),
      format(),
      samples(),
      loadOp(),
      storeOp(),
      stencilLoadOp(),
      stencilStoreOp(),
      initialLayout(),
      finalLayout() {}

safe_VkAttachmentDescription2::safe_VkAttachmentDescription2(const safe_VkAttachmentDescription2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    format = copy_src.format;
    samples = copy_src.samples;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    stencilLoadOp = copy_src.stencilLoadOp;
    stencilStoreOp = copy_src.stencilStoreOp;
    initialLayout = copy_src.initialLayout;
    finalLayout = copy_src.finalLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkAttachmentDescription2& safe_VkAttachmentDescription2::operator=(const safe_VkAttachmentDescription2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    format = copy_src.format;
    samples = copy_src.samples;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    stencilLoadOp = copy_src.stencilLoadOp;
    stencilStoreOp = copy_src.stencilStoreOp;
    initialLayout = copy_src.initialLayout;
    finalLayout = copy_src.finalLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkAttachmentDescription2::~safe_VkAttachmentDescription2() { FreePnextChain(pNext); }

void safe_VkAttachmentDescription2::initialize(const VkAttachmentDescription2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    format = in_struct->format;
    samples = in_struct->samples;
    loadOp = in_struct->loadOp;
    storeOp = in_struct->storeOp;
    stencilLoadOp = in_struct->stencilLoadOp;
    stencilStoreOp = in_struct->stencilStoreOp;
    initialLayout = in_struct->initialLayout;
    finalLayout = in_struct->finalLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkAttachmentDescription2::initialize(const safe_VkAttachmentDescription2* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    format = copy_src->format;
    samples = copy_src->samples;
    loadOp = copy_src->loadOp;
    storeOp = copy_src->storeOp;
    stencilLoadOp = copy_src->stencilLoadOp;
    stencilStoreOp = copy_src->stencilStoreOp;
    initialLayout = copy_src->initialLayout;
    finalLayout = copy_src->finalLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkAttachmentReference2::safe_VkAttachmentReference2(const VkAttachmentReference2* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), attachment(in_struct->attachment), layout(in_struct->layout), aspectMask(in_struct->aspectMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkAttachmentReference2::safe_VkAttachmentReference2()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2), pNext(nullptr), attachment(), layout(), aspectMask() {}

safe_VkAttachmentReference2::safe_VkAttachmentReference2(const safe_VkAttachmentReference2& copy_src) {
    sType = copy_src.sType;
    attachment = copy_src.attachment;
    layout = copy_src.layout;
    aspectMask = copy_src.aspectMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkAttachmentReference2& safe_VkAttachmentReference2::operator=(const safe_VkAttachmentReference2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachment = copy_src.attachment;
    layout = copy_src.layout;
    aspectMask = copy_src.aspectMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkAttachmentReference2::~safe_VkAttachmentReference2() { FreePnextChain(pNext); }

void safe_VkAttachmentReference2::initialize(const VkAttachmentReference2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachment = in_struct->attachment;
    layout = in_struct->layout;
    aspectMask = in_struct->aspectMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkAttachmentReference2::initialize(const safe_VkAttachmentReference2* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachment = copy_src->attachment;
    layout = copy_src->layout;
    aspectMask = copy_src->aspectMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSubpassDescription2::safe_VkSubpassDescription2(const VkSubpassDescription2* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      pipelineBindPoint(in_struct->pipelineBindPoint),
      viewMask(in_struct->viewMask),
      inputAttachmentCount(in_struct->inputAttachmentCount),
      pInputAttachments(nullptr),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(in_struct->preserveAttachmentCount),
      pPreserveAttachments(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (inputAttachmentCount && in_struct->pInputAttachments) {
        pInputAttachments = new safe_VkAttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&in_struct->pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pResolveAttachments) {
        pResolveAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&in_struct->pResolveAttachments[i]);
        }
    }
    if (in_struct->pDepthStencilAttachment)
        pDepthStencilAttachment = new safe_VkAttachmentReference2(in_struct->pDepthStencilAttachment);

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

safe_VkSubpassDescription2::safe_VkSubpassDescription2()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2),
      pNext(nullptr),
      flags(),
      pipelineBindPoint(),
      viewMask(),
      inputAttachmentCount(),
      pInputAttachments(nullptr),
      colorAttachmentCount(),
      pColorAttachments(nullptr),
      pResolveAttachments(nullptr),
      pDepthStencilAttachment(nullptr),
      preserveAttachmentCount(),
      pPreserveAttachments(nullptr) {}

safe_VkSubpassDescription2::safe_VkSubpassDescription2(const safe_VkSubpassDescription2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    viewMask = copy_src.viewMask;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (inputAttachmentCount && copy_src.pInputAttachments) {
        pInputAttachments = new safe_VkAttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&copy_src.pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pResolveAttachments) {
        pResolveAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&copy_src.pResolveAttachments[i]);
        }
    }
    if (copy_src.pDepthStencilAttachment)
        pDepthStencilAttachment = new safe_VkAttachmentReference2(*copy_src.pDepthStencilAttachment);

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }
}

safe_VkSubpassDescription2& safe_VkSubpassDescription2::operator=(const safe_VkSubpassDescription2& copy_src) {
    if (&copy_src == this) return *this;

    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pipelineBindPoint = copy_src.pipelineBindPoint;
    viewMask = copy_src.viewMask;
    inputAttachmentCount = copy_src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (inputAttachmentCount && copy_src.pInputAttachments) {
        pInputAttachments = new safe_VkAttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&copy_src.pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src.pResolveAttachments) {
        pResolveAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&copy_src.pResolveAttachments[i]);
        }
    }
    if (copy_src.pDepthStencilAttachment)
        pDepthStencilAttachment = new safe_VkAttachmentReference2(*copy_src.pDepthStencilAttachment);

    if (copy_src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src.preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src.pPreserveAttachments,
               sizeof(uint32_t) * copy_src.preserveAttachmentCount);
    }

    return *this;
}

safe_VkSubpassDescription2::~safe_VkSubpassDescription2() {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    FreePnextChain(pNext);
}

void safe_VkSubpassDescription2::initialize(const VkSubpassDescription2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pInputAttachments) delete[] pInputAttachments;
    if (pColorAttachments) delete[] pColorAttachments;
    if (pResolveAttachments) delete[] pResolveAttachments;
    if (pDepthStencilAttachment) delete pDepthStencilAttachment;
    if (pPreserveAttachments) delete[] pPreserveAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    viewMask = in_struct->viewMask;
    inputAttachmentCount = in_struct->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = in_struct->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (inputAttachmentCount && in_struct->pInputAttachments) {
        pInputAttachments = new safe_VkAttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&in_struct->pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && in_struct->pResolveAttachments) {
        pResolveAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&in_struct->pResolveAttachments[i]);
        }
    }
    if (in_struct->pDepthStencilAttachment)
        pDepthStencilAttachment = new safe_VkAttachmentReference2(in_struct->pDepthStencilAttachment);

    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)in_struct->pPreserveAttachments,
               sizeof(uint32_t) * in_struct->preserveAttachmentCount);
    }
}

void safe_VkSubpassDescription2::initialize(const safe_VkSubpassDescription2* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pipelineBindPoint = copy_src->pipelineBindPoint;
    viewMask = copy_src->viewMask;
    inputAttachmentCount = copy_src->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = copy_src->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (inputAttachmentCount && copy_src->pInputAttachments) {
        pInputAttachments = new safe_VkAttachmentReference2[inputAttachmentCount];
        for (uint32_t i = 0; i < inputAttachmentCount; ++i) {
            pInputAttachments[i].initialize(&copy_src->pInputAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src->pColorAttachments) {
        pColorAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src->pColorAttachments[i]);
        }
    }
    if (colorAttachmentCount && copy_src->pResolveAttachments) {
        pResolveAttachments = new safe_VkAttachmentReference2[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pResolveAttachments[i].initialize(&copy_src->pResolveAttachments[i]);
        }
    }
    if (copy_src->pDepthStencilAttachment)
        pDepthStencilAttachment = new safe_VkAttachmentReference2(*copy_src->pDepthStencilAttachment);

    if (copy_src->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[copy_src->preserveAttachmentCount];
        memcpy((void*)pPreserveAttachments, (void*)copy_src->pPreserveAttachments,
               sizeof(uint32_t) * copy_src->preserveAttachmentCount);
    }
}

safe_VkSubpassDependency2::safe_VkSubpassDependency2(const VkSubpassDependency2* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcSubpass(in_struct->srcSubpass),
      dstSubpass(in_struct->dstSubpass),
      srcStageMask(in_struct->srcStageMask),
      dstStageMask(in_struct->dstStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstAccessMask(in_struct->dstAccessMask),
      dependencyFlags(in_struct->dependencyFlags),
      viewOffset(in_struct->viewOffset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSubpassDependency2::safe_VkSubpassDependency2()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2),
      pNext(nullptr),
      srcSubpass(),
      dstSubpass(),
      srcStageMask(),
      dstStageMask(),
      srcAccessMask(),
      dstAccessMask(),
      dependencyFlags(),
      viewOffset() {}

safe_VkSubpassDependency2::safe_VkSubpassDependency2(const safe_VkSubpassDependency2& copy_src) {
    sType = copy_src.sType;
    srcSubpass = copy_src.srcSubpass;
    dstSubpass = copy_src.dstSubpass;
    srcStageMask = copy_src.srcStageMask;
    dstStageMask = copy_src.dstStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    dependencyFlags = copy_src.dependencyFlags;
    viewOffset = copy_src.viewOffset;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSubpassDependency2& safe_VkSubpassDependency2::operator=(const safe_VkSubpassDependency2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubpass = copy_src.srcSubpass;
    dstSubpass = copy_src.dstSubpass;
    srcStageMask = copy_src.srcStageMask;
    dstStageMask = copy_src.dstStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstAccessMask = copy_src.dstAccessMask;
    dependencyFlags = copy_src.dependencyFlags;
    viewOffset = copy_src.viewOffset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSubpassDependency2::~safe_VkSubpassDependency2() { FreePnextChain(pNext); }

void safe_VkSubpassDependency2::initialize(const VkSubpassDependency2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubpass = in_struct->srcSubpass;
    dstSubpass = in_struct->dstSubpass;
    srcStageMask = in_struct->srcStageMask;
    dstStageMask = in_struct->dstStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    dependencyFlags = in_struct->dependencyFlags;
    viewOffset = in_struct->viewOffset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSubpassDependency2::initialize(const safe_VkSubpassDependency2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubpass = copy_src->srcSubpass;
    dstSubpass = copy_src->dstSubpass;
    srcStageMask = copy_src->srcStageMask;
    dstStageMask = copy_src->dstStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstAccessMask = copy_src->dstAccessMask;
    dependencyFlags = copy_src->dependencyFlags;
    viewOffset = copy_src->viewOffset;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderPassCreateInfo2::safe_VkRenderPassCreateInfo2(const VkRenderPassCreateInfo2* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      attachmentCount(in_struct->attachmentCount),
      pAttachments(nullptr),
      subpassCount(in_struct->subpassCount),
      pSubpasses(nullptr),
      dependencyCount(in_struct->dependencyCount),
      pDependencies(nullptr),
      correlatedViewMaskCount(in_struct->correlatedViewMaskCount),
      pCorrelatedViewMasks(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new safe_VkAttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&in_struct->pAttachments[i]);
        }
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (dependencyCount && in_struct->pDependencies) {
        pDependencies = new safe_VkSubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&in_struct->pDependencies[i]);
        }
    }

    if (in_struct->pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[in_struct->correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)in_struct->pCorrelatedViewMasks,
               sizeof(uint32_t) * in_struct->correlatedViewMaskCount);
    }
}

safe_VkRenderPassCreateInfo2::safe_VkRenderPassCreateInfo2()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2),
      pNext(nullptr),
      flags(),
      attachmentCount(),
      pAttachments(nullptr),
      subpassCount(),
      pSubpasses(nullptr),
      dependencyCount(),
      pDependencies(nullptr),
      correlatedViewMaskCount(),
      pCorrelatedViewMasks(nullptr) {}

safe_VkRenderPassCreateInfo2::safe_VkRenderPassCreateInfo2(const safe_VkRenderPassCreateInfo2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = copy_src.correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new safe_VkAttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&copy_src.pAttachments[i]);
        }
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }
    if (dependencyCount && copy_src.pDependencies) {
        pDependencies = new safe_VkSubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&copy_src.pDependencies[i]);
        }
    }

    if (copy_src.pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[copy_src.correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)copy_src.pCorrelatedViewMasks,
               sizeof(uint32_t) * copy_src.correlatedViewMaskCount);
    }
}

safe_VkRenderPassCreateInfo2& safe_VkRenderPassCreateInfo2::operator=(const safe_VkRenderPassCreateInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    if (pCorrelatedViewMasks) delete[] pCorrelatedViewMasks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src.dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = copy_src.correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new safe_VkAttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&copy_src.pAttachments[i]);
        }
    }
    if (subpassCount && copy_src.pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src.pSubpasses[i]);
        }
    }
    if (dependencyCount && copy_src.pDependencies) {
        pDependencies = new safe_VkSubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&copy_src.pDependencies[i]);
        }
    }

    if (copy_src.pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[copy_src.correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)copy_src.pCorrelatedViewMasks,
               sizeof(uint32_t) * copy_src.correlatedViewMaskCount);
    }

    return *this;
}

safe_VkRenderPassCreateInfo2::~safe_VkRenderPassCreateInfo2() {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    if (pCorrelatedViewMasks) delete[] pCorrelatedViewMasks;
    FreePnextChain(pNext);
}

void safe_VkRenderPassCreateInfo2::initialize(const VkRenderPassCreateInfo2* in_struct,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    if (pSubpasses) delete[] pSubpasses;
    if (pDependencies) delete[] pDependencies;
    if (pCorrelatedViewMasks) delete[] pCorrelatedViewMasks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    subpassCount = in_struct->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = in_struct->correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new safe_VkAttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&in_struct->pAttachments[i]);
        }
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (dependencyCount && in_struct->pDependencies) {
        pDependencies = new safe_VkSubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&in_struct->pDependencies[i]);
        }
    }

    if (in_struct->pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[in_struct->correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)in_struct->pCorrelatedViewMasks,
               sizeof(uint32_t) * in_struct->correlatedViewMaskCount);
    }
}

void safe_VkRenderPassCreateInfo2::initialize(const safe_VkRenderPassCreateInfo2* copy_src,
                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    subpassCount = copy_src->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = copy_src->dependencyCount;
    pDependencies = nullptr;
    correlatedViewMaskCount = copy_src->correlatedViewMaskCount;
    pCorrelatedViewMasks = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentCount && copy_src->pAttachments) {
        pAttachments = new safe_VkAttachmentDescription2[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i].initialize(&copy_src->pAttachments[i]);
        }
    }
    if (subpassCount && copy_src->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription2[subpassCount];
        for (uint32_t i = 0; i < subpassCount; ++i) {
            pSubpasses[i].initialize(&copy_src->pSubpasses[i]);
        }
    }
    if (dependencyCount && copy_src->pDependencies) {
        pDependencies = new safe_VkSubpassDependency2[dependencyCount];
        for (uint32_t i = 0; i < dependencyCount; ++i) {
            pDependencies[i].initialize(&copy_src->pDependencies[i]);
        }
    }

    if (copy_src->pCorrelatedViewMasks) {
        pCorrelatedViewMasks = new uint32_t[copy_src->correlatedViewMaskCount];
        memcpy((void*)pCorrelatedViewMasks, (void*)copy_src->pCorrelatedViewMasks,
               sizeof(uint32_t) * copy_src->correlatedViewMaskCount);
    }
}

safe_VkSubpassBeginInfo::safe_VkSubpassBeginInfo(const VkSubpassBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                                 bool copy_pnext)
    : sType(in_struct->sType), contents(in_struct->contents) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSubpassBeginInfo::safe_VkSubpassBeginInfo() : sType(VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO), pNext(nullptr), contents() {}

safe_VkSubpassBeginInfo::safe_VkSubpassBeginInfo(const safe_VkSubpassBeginInfo& copy_src) {
    sType = copy_src.sType;
    contents = copy_src.contents;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSubpassBeginInfo& safe_VkSubpassBeginInfo::operator=(const safe_VkSubpassBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    contents = copy_src.contents;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSubpassBeginInfo::~safe_VkSubpassBeginInfo() { FreePnextChain(pNext); }

void safe_VkSubpassBeginInfo::initialize(const VkSubpassBeginInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    contents = in_struct->contents;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSubpassBeginInfo::initialize(const safe_VkSubpassBeginInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    contents = copy_src->contents;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSubpassEndInfo::safe_VkSubpassEndInfo(const VkSubpassEndInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSubpassEndInfo::safe_VkSubpassEndInfo() : sType(VK_STRUCTURE_TYPE_SUBPASS_END_INFO), pNext(nullptr) {}

safe_VkSubpassEndInfo::safe_VkSubpassEndInfo(const safe_VkSubpassEndInfo& copy_src) {
    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSubpassEndInfo& safe_VkSubpassEndInfo::operator=(const safe_VkSubpassEndInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSubpassEndInfo::~safe_VkSubpassEndInfo() { FreePnextChain(pNext); }

void safe_VkSubpassEndInfo::initialize(const VkSubpassEndInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSubpassEndInfo::initialize(const safe_VkSubpassEndInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDevice8BitStorageFeatures::safe_VkPhysicalDevice8BitStorageFeatures(
    const VkPhysicalDevice8BitStorageFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageBuffer8BitAccess(in_struct->storageBuffer8BitAccess),
      uniformAndStorageBuffer8BitAccess(in_struct->uniformAndStorageBuffer8BitAccess),
      storagePushConstant8(in_struct->storagePushConstant8) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDevice8BitStorageFeatures::safe_VkPhysicalDevice8BitStorageFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES),
      pNext(nullptr),
      storageBuffer8BitAccess(),
      uniformAndStorageBuffer8BitAccess(),
      storagePushConstant8() {}

safe_VkPhysicalDevice8BitStorageFeatures::safe_VkPhysicalDevice8BitStorageFeatures(
    const safe_VkPhysicalDevice8BitStorageFeatures& copy_src) {
    sType = copy_src.sType;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDevice8BitStorageFeatures& safe_VkPhysicalDevice8BitStorageFeatures::operator=(
    const safe_VkPhysicalDevice8BitStorageFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageBuffer8BitAccess = copy_src.storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src.uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src.storagePushConstant8;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDevice8BitStorageFeatures::~safe_VkPhysicalDevice8BitStorageFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDevice8BitStorageFeatures::initialize(const VkPhysicalDevice8BitStorageFeatures* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageBuffer8BitAccess = in_struct->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = in_struct->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = in_struct->storagePushConstant8;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDevice8BitStorageFeatures::initialize(const safe_VkPhysicalDevice8BitStorageFeatures* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageBuffer8BitAccess = copy_src->storageBuffer8BitAccess;
    uniformAndStorageBuffer8BitAccess = copy_src->uniformAndStorageBuffer8BitAccess;
    storagePushConstant8 = copy_src->storagePushConstant8;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceDriverProperties::safe_VkPhysicalDeviceDriverProperties(const VkPhysicalDeviceDriverProperties* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), driverID(in_struct->driverID), conformanceVersion(in_struct->conformanceVersion) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

safe_VkPhysicalDeviceDriverProperties::safe_VkPhysicalDeviceDriverProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES), pNext(nullptr), driverID(), conformanceVersion() {}

safe_VkPhysicalDeviceDriverProperties::safe_VkPhysicalDeviceDriverProperties(
    const safe_VkPhysicalDeviceDriverProperties& copy_src) {
    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }
}

safe_VkPhysicalDeviceDriverProperties& safe_VkPhysicalDeviceDriverProperties::operator=(
    const safe_VkPhysicalDeviceDriverProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    driverID = copy_src.driverID;
    conformanceVersion = copy_src.conformanceVersion;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src.driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src.driverInfo[i];
    }

    return *this;
}

safe_VkPhysicalDeviceDriverProperties::~safe_VkPhysicalDeviceDriverProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDriverProperties::initialize(const VkPhysicalDeviceDriverProperties* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    driverID = in_struct->driverID;
    conformanceVersion = in_struct->conformanceVersion;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = in_struct->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = in_struct->driverInfo[i];
    }
}

void safe_VkPhysicalDeviceDriverProperties::initialize(const safe_VkPhysicalDeviceDriverProperties* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    driverID = copy_src->driverID;
    conformanceVersion = copy_src->conformanceVersion;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_DRIVER_NAME_SIZE; ++i) {
        driverName[i] = copy_src->driverName[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DRIVER_INFO_SIZE; ++i) {
        driverInfo[i] = copy_src->driverInfo[i];
    }
}

safe_VkPhysicalDeviceShaderAtomicInt64Features::safe_VkPhysicalDeviceShaderAtomicInt64Features(
    const VkPhysicalDeviceShaderAtomicInt64Features* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderBufferInt64Atomics(in_struct->shaderBufferInt64Atomics),
      shaderSharedInt64Atomics(in_struct->shaderSharedInt64Atomics) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderAtomicInt64Features::safe_VkPhysicalDeviceShaderAtomicInt64Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES),
      pNext(nullptr),
      shaderBufferInt64Atomics(),
      shaderSharedInt64Atomics() {}

safe_VkPhysicalDeviceShaderAtomicInt64Features::safe_VkPhysicalDeviceShaderAtomicInt64Features(
    const safe_VkPhysicalDeviceShaderAtomicInt64Features& copy_src) {
    sType = copy_src.sType;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderAtomicInt64Features& safe_VkPhysicalDeviceShaderAtomicInt64Features::operator=(
    const safe_VkPhysicalDeviceShaderAtomicInt64Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderBufferInt64Atomics = copy_src.shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src.shaderSharedInt64Atomics;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderAtomicInt64Features::~safe_VkPhysicalDeviceShaderAtomicInt64Features() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceShaderAtomicInt64Features::initialize(const VkPhysicalDeviceShaderAtomicInt64Features* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderBufferInt64Atomics = in_struct->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = in_struct->shaderSharedInt64Atomics;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderAtomicInt64Features::initialize(const safe_VkPhysicalDeviceShaderAtomicInt64Features* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderBufferInt64Atomics = copy_src->shaderBufferInt64Atomics;
    shaderSharedInt64Atomics = copy_src->shaderSharedInt64Atomics;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceShaderFloat16Int8Features::safe_VkPhysicalDeviceShaderFloat16Int8Features(
    const VkPhysicalDeviceShaderFloat16Int8Features* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderFloat16(in_struct->shaderFloat16), shaderInt8(in_struct->shaderInt8) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderFloat16Int8Features::safe_VkPhysicalDeviceShaderFloat16Int8Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES), pNext(nullptr), shaderFloat16(), shaderInt8() {}

safe_VkPhysicalDeviceShaderFloat16Int8Features::safe_VkPhysicalDeviceShaderFloat16Int8Features(
    const safe_VkPhysicalDeviceShaderFloat16Int8Features& copy_src) {
    sType = copy_src.sType;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderFloat16Int8Features& safe_VkPhysicalDeviceShaderFloat16Int8Features::operator=(
    const safe_VkPhysicalDeviceShaderFloat16Int8Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderFloat16 = copy_src.shaderFloat16;
    shaderInt8 = copy_src.shaderInt8;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderFloat16Int8Features::~safe_VkPhysicalDeviceShaderFloat16Int8Features() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceShaderFloat16Int8Features::initialize(const VkPhysicalDeviceShaderFloat16Int8Features* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderFloat16 = in_struct->shaderFloat16;
    shaderInt8 = in_struct->shaderInt8;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderFloat16Int8Features::initialize(const safe_VkPhysicalDeviceShaderFloat16Int8Features* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderFloat16 = copy_src->shaderFloat16;
    shaderInt8 = copy_src->shaderInt8;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceFloatControlsProperties::safe_VkPhysicalDeviceFloatControlsProperties(
    const VkPhysicalDeviceFloatControlsProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      denormBehaviorIndependence(in_struct->denormBehaviorIndependence),
      roundingModeIndependence(in_struct->roundingModeIndependence),
      shaderSignedZeroInfNanPreserveFloat16(in_struct->shaderSignedZeroInfNanPreserveFloat16),
      shaderSignedZeroInfNanPreserveFloat32(in_struct->shaderSignedZeroInfNanPreserveFloat32),
      shaderSignedZeroInfNanPreserveFloat64(in_struct->shaderSignedZeroInfNanPreserveFloat64),
      shaderDenormPreserveFloat16(in_struct->shaderDenormPreserveFloat16),
      shaderDenormPreserveFloat32(in_struct->shaderDenormPreserveFloat32),
      shaderDenormPreserveFloat64(in_struct->shaderDenormPreserveFloat64),
      shaderDenormFlushToZeroFloat16(in_struct->shaderDenormFlushToZeroFloat16),
      shaderDenormFlushToZeroFloat32(in_struct->shaderDenormFlushToZeroFloat32),
      shaderDenormFlushToZeroFloat64(in_struct->shaderDenormFlushToZeroFloat64),
      shaderRoundingModeRTEFloat16(in_struct->shaderRoundingModeRTEFloat16),
      shaderRoundingModeRTEFloat32(in_struct->shaderRoundingModeRTEFloat32),
      shaderRoundingModeRTEFloat64(in_struct->shaderRoundingModeRTEFloat64),
      shaderRoundingModeRTZFloat16(in_struct->shaderRoundingModeRTZFloat16),
      shaderRoundingModeRTZFloat32(in_struct->shaderRoundingModeRTZFloat32),
      shaderRoundingModeRTZFloat64(in_struct->shaderRoundingModeRTZFloat64) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceFloatControlsProperties::safe_VkPhysicalDeviceFloatControlsProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES),
      pNext(nullptr),
      denormBehaviorIndependence(),
      roundingModeIndependence(),
      shaderSignedZeroInfNanPreserveFloat16(),
      shaderSignedZeroInfNanPreserveFloat32(),
      shaderSignedZeroInfNanPreserveFloat64(),
      shaderDenormPreserveFloat16(),
      shaderDenormPreserveFloat32(),
      shaderDenormPreserveFloat64(),
      shaderDenormFlushToZeroFloat16(),
      shaderDenormFlushToZeroFloat32(),
      shaderDenormFlushToZeroFloat64(),
      shaderRoundingModeRTEFloat16(),
      shaderRoundingModeRTEFloat32(),
      shaderRoundingModeRTEFloat64(),
      shaderRoundingModeRTZFloat16(),
      shaderRoundingModeRTZFloat32(),
      shaderRoundingModeRTZFloat64() {}

safe_VkPhysicalDeviceFloatControlsProperties::safe_VkPhysicalDeviceFloatControlsProperties(
    const safe_VkPhysicalDeviceFloatControlsProperties& copy_src) {
    sType = copy_src.sType;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceFloatControlsProperties& safe_VkPhysicalDeviceFloatControlsProperties::operator=(
    const safe_VkPhysicalDeviceFloatControlsProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    denormBehaviorIndependence = copy_src.denormBehaviorIndependence;
    roundingModeIndependence = copy_src.roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src.shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src.shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src.shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src.shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src.shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src.shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src.shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src.shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src.shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src.shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src.shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src.shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src.shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src.shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src.shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceFloatControlsProperties::~safe_VkPhysicalDeviceFloatControlsProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceFloatControlsProperties::initialize(const VkPhysicalDeviceFloatControlsProperties* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    denormBehaviorIndependence = in_struct->denormBehaviorIndependence;
    roundingModeIndependence = in_struct->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = in_struct->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = in_struct->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = in_struct->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = in_struct->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = in_struct->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = in_struct->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = in_struct->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = in_struct->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = in_struct->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = in_struct->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = in_struct->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = in_struct->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = in_struct->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = in_struct->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = in_struct->shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceFloatControlsProperties::initialize(const safe_VkPhysicalDeviceFloatControlsProperties* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    denormBehaviorIndependence = copy_src->denormBehaviorIndependence;
    roundingModeIndependence = copy_src->roundingModeIndependence;
    shaderSignedZeroInfNanPreserveFloat16 = copy_src->shaderSignedZeroInfNanPreserveFloat16;
    shaderSignedZeroInfNanPreserveFloat32 = copy_src->shaderSignedZeroInfNanPreserveFloat32;
    shaderSignedZeroInfNanPreserveFloat64 = copy_src->shaderSignedZeroInfNanPreserveFloat64;
    shaderDenormPreserveFloat16 = copy_src->shaderDenormPreserveFloat16;
    shaderDenormPreserveFloat32 = copy_src->shaderDenormPreserveFloat32;
    shaderDenormPreserveFloat64 = copy_src->shaderDenormPreserveFloat64;
    shaderDenormFlushToZeroFloat16 = copy_src->shaderDenormFlushToZeroFloat16;
    shaderDenormFlushToZeroFloat32 = copy_src->shaderDenormFlushToZeroFloat32;
    shaderDenormFlushToZeroFloat64 = copy_src->shaderDenormFlushToZeroFloat64;
    shaderRoundingModeRTEFloat16 = copy_src->shaderRoundingModeRTEFloat16;
    shaderRoundingModeRTEFloat32 = copy_src->shaderRoundingModeRTEFloat32;
    shaderRoundingModeRTEFloat64 = copy_src->shaderRoundingModeRTEFloat64;
    shaderRoundingModeRTZFloat16 = copy_src->shaderRoundingModeRTZFloat16;
    shaderRoundingModeRTZFloat32 = copy_src->shaderRoundingModeRTZFloat32;
    shaderRoundingModeRTZFloat64 = copy_src->shaderRoundingModeRTZFloat64;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorSetLayoutBindingFlagsCreateInfo::safe_VkDescriptorSetLayoutBindingFlagsCreateInfo(
    const VkDescriptorSetLayoutBindingFlagsCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), bindingCount(in_struct->bindingCount), pBindingFlags(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[in_struct->bindingCount];
        memcpy((void*)pBindingFlags, (void*)in_struct->pBindingFlags, sizeof(VkDescriptorBindingFlags) * in_struct->bindingCount);
    }
}

safe_VkDescriptorSetLayoutBindingFlagsCreateInfo::safe_VkDescriptorSetLayoutBindingFlagsCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO),
      pNext(nullptr),
      bindingCount(),
      pBindingFlags(nullptr) {}

safe_VkDescriptorSetLayoutBindingFlagsCreateInfo::safe_VkDescriptorSetLayoutBindingFlagsCreateInfo(
    const safe_VkDescriptorSetLayoutBindingFlagsCreateInfo& copy_src) {
    sType = copy_src.sType;
    bindingCount = copy_src.bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[copy_src.bindingCount];
        memcpy((void*)pBindingFlags, (void*)copy_src.pBindingFlags, sizeof(VkDescriptorBindingFlags) * copy_src.bindingCount);
    }
}

safe_VkDescriptorSetLayoutBindingFlagsCreateInfo& safe_VkDescriptorSetLayoutBindingFlagsCreateInfo::operator=(
    const safe_VkDescriptorSetLayoutBindingFlagsCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pBindingFlags) delete[] pBindingFlags;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    bindingCount = copy_src.bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[copy_src.bindingCount];
        memcpy((void*)pBindingFlags, (void*)copy_src.pBindingFlags, sizeof(VkDescriptorBindingFlags) * copy_src.bindingCount);
    }

    return *this;
}

safe_VkDescriptorSetLayoutBindingFlagsCreateInfo::~safe_VkDescriptorSetLayoutBindingFlagsCreateInfo() {
    if (pBindingFlags) delete[] pBindingFlags;
    FreePnextChain(pNext);
}

void safe_VkDescriptorSetLayoutBindingFlagsCreateInfo::initialize(const VkDescriptorSetLayoutBindingFlagsCreateInfo* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    if (pBindingFlags) delete[] pBindingFlags;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    bindingCount = in_struct->bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[in_struct->bindingCount];
        memcpy((void*)pBindingFlags, (void*)in_struct->pBindingFlags, sizeof(VkDescriptorBindingFlags) * in_struct->bindingCount);
    }
}

void safe_VkDescriptorSetLayoutBindingFlagsCreateInfo::initialize(const safe_VkDescriptorSetLayoutBindingFlagsCreateInfo* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    bindingCount = copy_src->bindingCount;
    pBindingFlags = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pBindingFlags) {
        pBindingFlags = new VkDescriptorBindingFlags[copy_src->bindingCount];
        memcpy((void*)pBindingFlags, (void*)copy_src->pBindingFlags, sizeof(VkDescriptorBindingFlags) * copy_src->bindingCount);
    }
}

safe_VkPhysicalDeviceDescriptorIndexingFeatures::safe_VkPhysicalDeviceDescriptorIndexingFeatures(
    const VkPhysicalDeviceDescriptorIndexingFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      shaderInputAttachmentArrayDynamicIndexing(in_struct->shaderInputAttachmentArrayDynamicIndexing),
      shaderUniformTexelBufferArrayDynamicIndexing(in_struct->shaderUniformTexelBufferArrayDynamicIndexing),
      shaderStorageTexelBufferArrayDynamicIndexing(in_struct->shaderStorageTexelBufferArrayDynamicIndexing),
      shaderUniformBufferArrayNonUniformIndexing(in_struct->shaderUniformBufferArrayNonUniformIndexing),
      shaderSampledImageArrayNonUniformIndexing(in_struct->shaderSampledImageArrayNonUniformIndexing),
      shaderStorageBufferArrayNonUniformIndexing(in_struct->shaderStorageBufferArrayNonUniformIndexing),
      shaderStorageImageArrayNonUniformIndexing(in_struct->shaderStorageImageArrayNonUniformIndexing),
      shaderInputAttachmentArrayNonUniformIndexing(in_struct->shaderInputAttachmentArrayNonUniformIndexing),
      shaderUniformTexelBufferArrayNonUniformIndexing(in_struct->shaderUniformTexelBufferArrayNonUniformIndexing),
      shaderStorageTexelBufferArrayNonUniformIndexing(in_struct->shaderStorageTexelBufferArrayNonUniformIndexing),
      descriptorBindingUniformBufferUpdateAfterBind(in_struct->descriptorBindingUniformBufferUpdateAfterBind),
      descriptorBindingSampledImageUpdateAfterBind(in_struct->descriptorBindingSampledImageUpdateAfterBind),
      descriptorBindingStorageImageUpdateAfterBind(in_struct->descriptorBindingStorageImageUpdateAfterBind),
      descriptorBindingStorageBufferUpdateAfterBind(in_struct->descriptorBindingStorageBufferUpdateAfterBind),
      descriptorBindingUniformTexelBufferUpdateAfterBind(in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind),
      descriptorBindingStorageTexelBufferUpdateAfterBind(in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind),
      descriptorBindingUpdateUnusedWhilePending(in_struct->descriptorBindingUpdateUnusedWhilePending),
      descriptorBindingPartiallyBound(in_struct->descriptorBindingPartiallyBound),
      descriptorBindingVariableDescriptorCount(in_struct->descriptorBindingVariableDescriptorCount),
      runtimeDescriptorArray(in_struct->runtimeDescriptorArray) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceDescriptorIndexingFeatures::safe_VkPhysicalDeviceDescriptorIndexingFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES),
      pNext(nullptr),
      shaderInputAttachmentArrayDynamicIndexing(),
      shaderUniformTexelBufferArrayDynamicIndexing(),
      shaderStorageTexelBufferArrayDynamicIndexing(),
      shaderUniformBufferArrayNonUniformIndexing(),
      shaderSampledImageArrayNonUniformIndexing(),
      shaderStorageBufferArrayNonUniformIndexing(),
      shaderStorageImageArrayNonUniformIndexing(),
      shaderInputAttachmentArrayNonUniformIndexing(),
      shaderUniformTexelBufferArrayNonUniformIndexing(),
      shaderStorageTexelBufferArrayNonUniformIndexing(),
      descriptorBindingUniformBufferUpdateAfterBind(),
      descriptorBindingSampledImageUpdateAfterBind(),
      descriptorBindingStorageImageUpdateAfterBind(),
      descriptorBindingStorageBufferUpdateAfterBind(),
      descriptorBindingUniformTexelBufferUpdateAfterBind(),
      descriptorBindingStorageTexelBufferUpdateAfterBind(),
      descriptorBindingUpdateUnusedWhilePending(),
      descriptorBindingPartiallyBound(),
      descriptorBindingVariableDescriptorCount(),
      runtimeDescriptorArray() {}

safe_VkPhysicalDeviceDescriptorIndexingFeatures::safe_VkPhysicalDeviceDescriptorIndexingFeatures(
    const safe_VkPhysicalDeviceDescriptorIndexingFeatures& copy_src) {
    sType = copy_src.sType;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceDescriptorIndexingFeatures& safe_VkPhysicalDeviceDescriptorIndexingFeatures::operator=(
    const safe_VkPhysicalDeviceDescriptorIndexingFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderInputAttachmentArrayDynamicIndexing = copy_src.shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src.shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src.shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src.shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src.shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src.shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src.shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src.shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src.shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src.shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src.descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src.descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src.descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src.descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src.descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src.descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src.descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src.descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src.descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src.runtimeDescriptorArray;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceDescriptorIndexingFeatures::~safe_VkPhysicalDeviceDescriptorIndexingFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDescriptorIndexingFeatures::initialize(const VkPhysicalDeviceDescriptorIndexingFeatures* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderInputAttachmentArrayDynamicIndexing = in_struct->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = in_struct->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = in_struct->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = in_struct->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = in_struct->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = in_struct->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = in_struct->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = in_struct->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = in_struct->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = in_struct->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = in_struct->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = in_struct->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = in_struct->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = in_struct->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = in_struct->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = in_struct->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = in_struct->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = in_struct->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = in_struct->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = in_struct->runtimeDescriptorArray;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceDescriptorIndexingFeatures::initialize(const safe_VkPhysicalDeviceDescriptorIndexingFeatures* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderInputAttachmentArrayDynamicIndexing = copy_src->shaderInputAttachmentArrayDynamicIndexing;
    shaderUniformTexelBufferArrayDynamicIndexing = copy_src->shaderUniformTexelBufferArrayDynamicIndexing;
    shaderStorageTexelBufferArrayDynamicIndexing = copy_src->shaderStorageTexelBufferArrayDynamicIndexing;
    shaderUniformBufferArrayNonUniformIndexing = copy_src->shaderUniformBufferArrayNonUniformIndexing;
    shaderSampledImageArrayNonUniformIndexing = copy_src->shaderSampledImageArrayNonUniformIndexing;
    shaderStorageBufferArrayNonUniformIndexing = copy_src->shaderStorageBufferArrayNonUniformIndexing;
    shaderStorageImageArrayNonUniformIndexing = copy_src->shaderStorageImageArrayNonUniformIndexing;
    shaderInputAttachmentArrayNonUniformIndexing = copy_src->shaderInputAttachmentArrayNonUniformIndexing;
    shaderUniformTexelBufferArrayNonUniformIndexing = copy_src->shaderUniformTexelBufferArrayNonUniformIndexing;
    shaderStorageTexelBufferArrayNonUniformIndexing = copy_src->shaderStorageTexelBufferArrayNonUniformIndexing;
    descriptorBindingUniformBufferUpdateAfterBind = copy_src->descriptorBindingUniformBufferUpdateAfterBind;
    descriptorBindingSampledImageUpdateAfterBind = copy_src->descriptorBindingSampledImageUpdateAfterBind;
    descriptorBindingStorageImageUpdateAfterBind = copy_src->descriptorBindingStorageImageUpdateAfterBind;
    descriptorBindingStorageBufferUpdateAfterBind = copy_src->descriptorBindingStorageBufferUpdateAfterBind;
    descriptorBindingUniformTexelBufferUpdateAfterBind = copy_src->descriptorBindingUniformTexelBufferUpdateAfterBind;
    descriptorBindingStorageTexelBufferUpdateAfterBind = copy_src->descriptorBindingStorageTexelBufferUpdateAfterBind;
    descriptorBindingUpdateUnusedWhilePending = copy_src->descriptorBindingUpdateUnusedWhilePending;
    descriptorBindingPartiallyBound = copy_src->descriptorBindingPartiallyBound;
    descriptorBindingVariableDescriptorCount = copy_src->descriptorBindingVariableDescriptorCount;
    runtimeDescriptorArray = copy_src->runtimeDescriptorArray;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceDescriptorIndexingProperties::safe_VkPhysicalDeviceDescriptorIndexingProperties(
    const VkPhysicalDeviceDescriptorIndexingProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxUpdateAfterBindDescriptorsInAllPools(in_struct->maxUpdateAfterBindDescriptorsInAllPools),
      shaderUniformBufferArrayNonUniformIndexingNative(in_struct->shaderUniformBufferArrayNonUniformIndexingNative),
      shaderSampledImageArrayNonUniformIndexingNative(in_struct->shaderSampledImageArrayNonUniformIndexingNative),
      shaderStorageBufferArrayNonUniformIndexingNative(in_struct->shaderStorageBufferArrayNonUniformIndexingNative),
      shaderStorageImageArrayNonUniformIndexingNative(in_struct->shaderStorageImageArrayNonUniformIndexingNative),
      shaderInputAttachmentArrayNonUniformIndexingNative(in_struct->shaderInputAttachmentArrayNonUniformIndexingNative),
      robustBufferAccessUpdateAfterBind(in_struct->robustBufferAccessUpdateAfterBind),
      quadDivergentImplicitLod(in_struct->quadDivergentImplicitLod),
      maxPerStageDescriptorUpdateAfterBindSamplers(in_struct->maxPerStageDescriptorUpdateAfterBindSamplers),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers),
      maxPerStageDescriptorUpdateAfterBindSampledImages(in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages),
      maxPerStageDescriptorUpdateAfterBindStorageImages(in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments),
      maxPerStageUpdateAfterBindResources(in_struct->maxPerStageUpdateAfterBindResources),
      maxDescriptorSetUpdateAfterBindSamplers(in_struct->maxDescriptorSetUpdateAfterBindSamplers),
      maxDescriptorSetUpdateAfterBindUniformBuffers(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic),
      maxDescriptorSetUpdateAfterBindStorageBuffers(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic),
      maxDescriptorSetUpdateAfterBindSampledImages(in_struct->maxDescriptorSetUpdateAfterBindSampledImages),
      maxDescriptorSetUpdateAfterBindStorageImages(in_struct->maxDescriptorSetUpdateAfterBindStorageImages),
      maxDescriptorSetUpdateAfterBindInputAttachments(in_struct->maxDescriptorSetUpdateAfterBindInputAttachments) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceDescriptorIndexingProperties::safe_VkPhysicalDeviceDescriptorIndexingProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES),
      pNext(nullptr),
      maxUpdateAfterBindDescriptorsInAllPools(),
      shaderUniformBufferArrayNonUniformIndexingNative(),
      shaderSampledImageArrayNonUniformIndexingNative(),
      shaderStorageBufferArrayNonUniformIndexingNative(),
      shaderStorageImageArrayNonUniformIndexingNative(),
      shaderInputAttachmentArrayNonUniformIndexingNative(),
      robustBufferAccessUpdateAfterBind(),
      quadDivergentImplicitLod(),
      maxPerStageDescriptorUpdateAfterBindSamplers(),
      maxPerStageDescriptorUpdateAfterBindUniformBuffers(),
      maxPerStageDescriptorUpdateAfterBindStorageBuffers(),
      maxPerStageDescriptorUpdateAfterBindSampledImages(),
      maxPerStageDescriptorUpdateAfterBindStorageImages(),
      maxPerStageDescriptorUpdateAfterBindInputAttachments(),
      maxPerStageUpdateAfterBindResources(),
      maxDescriptorSetUpdateAfterBindSamplers(),
      maxDescriptorSetUpdateAfterBindUniformBuffers(),
      maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindStorageBuffers(),
      maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(),
      maxDescriptorSetUpdateAfterBindSampledImages(),
      maxDescriptorSetUpdateAfterBindStorageImages(),
      maxDescriptorSetUpdateAfterBindInputAttachments() {}

safe_VkPhysicalDeviceDescriptorIndexingProperties::safe_VkPhysicalDeviceDescriptorIndexingProperties(
    const safe_VkPhysicalDeviceDescriptorIndexingProperties& copy_src) {
    sType = copy_src.sType;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceDescriptorIndexingProperties& safe_VkPhysicalDeviceDescriptorIndexingProperties::operator=(
    const safe_VkPhysicalDeviceDescriptorIndexingProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src.maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src.shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src.shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src.shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src.shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src.shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src.robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src.quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src.maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src.maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src.maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src.maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src.maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src.maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src.maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src.maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceDescriptorIndexingProperties::~safe_VkPhysicalDeviceDescriptorIndexingProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDescriptorIndexingProperties::initialize(const VkPhysicalDeviceDescriptorIndexingProperties* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxUpdateAfterBindDescriptorsInAllPools = in_struct->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = in_struct->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = in_struct->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = in_struct->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = in_struct->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = in_struct->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = in_struct->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = in_struct->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = in_struct->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = in_struct->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = in_struct->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = in_struct->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = in_struct->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = in_struct->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = in_struct->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = in_struct->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = in_struct->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = in_struct->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = in_struct->maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceDescriptorIndexingProperties::initialize(
    const safe_VkPhysicalDeviceDescriptorIndexingProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxUpdateAfterBindDescriptorsInAllPools = copy_src->maxUpdateAfterBindDescriptorsInAllPools;
    shaderUniformBufferArrayNonUniformIndexingNative = copy_src->shaderUniformBufferArrayNonUniformIndexingNative;
    shaderSampledImageArrayNonUniformIndexingNative = copy_src->shaderSampledImageArrayNonUniformIndexingNative;
    shaderStorageBufferArrayNonUniformIndexingNative = copy_src->shaderStorageBufferArrayNonUniformIndexingNative;
    shaderStorageImageArrayNonUniformIndexingNative = copy_src->shaderStorageImageArrayNonUniformIndexingNative;
    shaderInputAttachmentArrayNonUniformIndexingNative = copy_src->shaderInputAttachmentArrayNonUniformIndexingNative;
    robustBufferAccessUpdateAfterBind = copy_src->robustBufferAccessUpdateAfterBind;
    quadDivergentImplicitLod = copy_src->quadDivergentImplicitLod;
    maxPerStageDescriptorUpdateAfterBindSamplers = copy_src->maxPerStageDescriptorUpdateAfterBindSamplers;
    maxPerStageDescriptorUpdateAfterBindUniformBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    maxPerStageDescriptorUpdateAfterBindStorageBuffers = copy_src->maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    maxPerStageDescriptorUpdateAfterBindSampledImages = copy_src->maxPerStageDescriptorUpdateAfterBindSampledImages;
    maxPerStageDescriptorUpdateAfterBindStorageImages = copy_src->maxPerStageDescriptorUpdateAfterBindStorageImages;
    maxPerStageDescriptorUpdateAfterBindInputAttachments = copy_src->maxPerStageDescriptorUpdateAfterBindInputAttachments;
    maxPerStageUpdateAfterBindResources = copy_src->maxPerStageUpdateAfterBindResources;
    maxDescriptorSetUpdateAfterBindSamplers = copy_src->maxDescriptorSetUpdateAfterBindSamplers;
    maxDescriptorSetUpdateAfterBindUniformBuffers = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffers;
    maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    maxDescriptorSetUpdateAfterBindStorageBuffers = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffers;
    maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = copy_src->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    maxDescriptorSetUpdateAfterBindSampledImages = copy_src->maxDescriptorSetUpdateAfterBindSampledImages;
    maxDescriptorSetUpdateAfterBindStorageImages = copy_src->maxDescriptorSetUpdateAfterBindStorageImages;
    maxDescriptorSetUpdateAfterBindInputAttachments = copy_src->maxDescriptorSetUpdateAfterBindInputAttachments;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDescriptorSetVariableDescriptorCountAllocateInfo::safe_VkDescriptorSetVariableDescriptorCountAllocateInfo(
    const VkDescriptorSetVariableDescriptorCountAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), descriptorSetCount(in_struct->descriptorSetCount), pDescriptorCounts(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[in_struct->descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)in_struct->pDescriptorCounts, sizeof(uint32_t) * in_struct->descriptorSetCount);
    }
}

safe_VkDescriptorSetVariableDescriptorCountAllocateInfo::safe_VkDescriptorSetVariableDescriptorCountAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO),
      pNext(nullptr),
      descriptorSetCount(),
      pDescriptorCounts(nullptr) {}

safe_VkDescriptorSetVariableDescriptorCountAllocateInfo::safe_VkDescriptorSetVariableDescriptorCountAllocateInfo(
    const safe_VkDescriptorSetVariableDescriptorCountAllocateInfo& copy_src) {
    sType = copy_src.sType;
    descriptorSetCount = copy_src.descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[copy_src.descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)copy_src.pDescriptorCounts, sizeof(uint32_t) * copy_src.descriptorSetCount);
    }
}

safe_VkDescriptorSetVariableDescriptorCountAllocateInfo& safe_VkDescriptorSetVariableDescriptorCountAllocateInfo::operator=(
    const safe_VkDescriptorSetVariableDescriptorCountAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pDescriptorCounts) delete[] pDescriptorCounts;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    descriptorSetCount = copy_src.descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[copy_src.descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)copy_src.pDescriptorCounts, sizeof(uint32_t) * copy_src.descriptorSetCount);
    }

    return *this;
}

safe_VkDescriptorSetVariableDescriptorCountAllocateInfo::~safe_VkDescriptorSetVariableDescriptorCountAllocateInfo() {
    if (pDescriptorCounts) delete[] pDescriptorCounts;
    FreePnextChain(pNext);
}

void safe_VkDescriptorSetVariableDescriptorCountAllocateInfo::initialize(
    const VkDescriptorSetVariableDescriptorCountAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDescriptorCounts) delete[] pDescriptorCounts;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    descriptorSetCount = in_struct->descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[in_struct->descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)in_struct->pDescriptorCounts, sizeof(uint32_t) * in_struct->descriptorSetCount);
    }
}

void safe_VkDescriptorSetVariableDescriptorCountAllocateInfo::initialize(
    const safe_VkDescriptorSetVariableDescriptorCountAllocateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    descriptorSetCount = copy_src->descriptorSetCount;
    pDescriptorCounts = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pDescriptorCounts) {
        pDescriptorCounts = new uint32_t[copy_src->descriptorSetCount];
        memcpy((void*)pDescriptorCounts, (void*)copy_src->pDescriptorCounts, sizeof(uint32_t) * copy_src->descriptorSetCount);
    }
}

safe_VkDescriptorSetVariableDescriptorCountLayoutSupport::safe_VkDescriptorSetVariableDescriptorCountLayoutSupport(
    const VkDescriptorSetVariableDescriptorCountLayoutSupport* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), maxVariableDescriptorCount(in_struct->maxVariableDescriptorCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDescriptorSetVariableDescriptorCountLayoutSupport::safe_VkDescriptorSetVariableDescriptorCountLayoutSupport()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT),
      pNext(nullptr),
      maxVariableDescriptorCount() {}

safe_VkDescriptorSetVariableDescriptorCountLayoutSupport::safe_VkDescriptorSetVariableDescriptorCountLayoutSupport(
    const safe_VkDescriptorSetVariableDescriptorCountLayoutSupport& copy_src) {
    sType = copy_src.sType;
    maxVariableDescriptorCount = copy_src.maxVariableDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDescriptorSetVariableDescriptorCountLayoutSupport& safe_VkDescriptorSetVariableDescriptorCountLayoutSupport::operator=(
    const safe_VkDescriptorSetVariableDescriptorCountLayoutSupport& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxVariableDescriptorCount = copy_src.maxVariableDescriptorCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDescriptorSetVariableDescriptorCountLayoutSupport::~safe_VkDescriptorSetVariableDescriptorCountLayoutSupport() {
    FreePnextChain(pNext);
}

void safe_VkDescriptorSetVariableDescriptorCountLayoutSupport::initialize(
    const VkDescriptorSetVariableDescriptorCountLayoutSupport* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxVariableDescriptorCount = in_struct->maxVariableDescriptorCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDescriptorSetVariableDescriptorCountLayoutSupport::initialize(
    const safe_VkDescriptorSetVariableDescriptorCountLayoutSupport* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxVariableDescriptorCount = copy_src->maxVariableDescriptorCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSubpassDescriptionDepthStencilResolve::safe_VkSubpassDescriptionDepthStencilResolve(
    const VkSubpassDescriptionDepthStencilResolve* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      depthResolveMode(in_struct->depthResolveMode),
      stencilResolveMode(in_struct->stencilResolveMode),
      pDepthStencilResolveAttachment(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new safe_VkAttachmentReference2(in_struct->pDepthStencilResolveAttachment);
}

safe_VkSubpassDescriptionDepthStencilResolve::safe_VkSubpassDescriptionDepthStencilResolve()
    : sType(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE),
      pNext(nullptr),
      depthResolveMode(),
      stencilResolveMode(),
      pDepthStencilResolveAttachment(nullptr) {}

safe_VkSubpassDescriptionDepthStencilResolve::safe_VkSubpassDescriptionDepthStencilResolve(
    const safe_VkSubpassDescriptionDepthStencilResolve& copy_src) {
    sType = copy_src.sType;
    depthResolveMode = copy_src.depthResolveMode;
    stencilResolveMode = copy_src.stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new safe_VkAttachmentReference2(*copy_src.pDepthStencilResolveAttachment);
}

safe_VkSubpassDescriptionDepthStencilResolve& safe_VkSubpassDescriptionDepthStencilResolve::operator=(
    const safe_VkSubpassDescriptionDepthStencilResolve& copy_src) {
    if (&copy_src == this) return *this;

    if (pDepthStencilResolveAttachment) delete pDepthStencilResolveAttachment;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    depthResolveMode = copy_src.depthResolveMode;
    stencilResolveMode = copy_src.stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new safe_VkAttachmentReference2(*copy_src.pDepthStencilResolveAttachment);

    return *this;
}

safe_VkSubpassDescriptionDepthStencilResolve::~safe_VkSubpassDescriptionDepthStencilResolve() {
    if (pDepthStencilResolveAttachment) delete pDepthStencilResolveAttachment;
    FreePnextChain(pNext);
}

void safe_VkSubpassDescriptionDepthStencilResolve::initialize(const VkSubpassDescriptionDepthStencilResolve* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pDepthStencilResolveAttachment) delete pDepthStencilResolveAttachment;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    depthResolveMode = in_struct->depthResolveMode;
    stencilResolveMode = in_struct->stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new safe_VkAttachmentReference2(in_struct->pDepthStencilResolveAttachment);
}

void safe_VkSubpassDescriptionDepthStencilResolve::initialize(const safe_VkSubpassDescriptionDepthStencilResolve* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    depthResolveMode = copy_src->depthResolveMode;
    stencilResolveMode = copy_src->stencilResolveMode;
    pDepthStencilResolveAttachment = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pDepthStencilResolveAttachment)
        pDepthStencilResolveAttachment = new safe_VkAttachmentReference2(*copy_src->pDepthStencilResolveAttachment);
}

safe_VkPhysicalDeviceDepthStencilResolveProperties::safe_VkPhysicalDeviceDepthStencilResolveProperties(
    const VkPhysicalDeviceDepthStencilResolveProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      supportedDepthResolveModes(in_struct->supportedDepthResolveModes),
      supportedStencilResolveModes(in_struct->supportedStencilResolveModes),
      independentResolveNone(in_struct->independentResolveNone),
      independentResolve(in_struct->independentResolve) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceDepthStencilResolveProperties::safe_VkPhysicalDeviceDepthStencilResolveProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES),
      pNext(nullptr),
      supportedDepthResolveModes(),
      supportedStencilResolveModes(),
      independentResolveNone(),
      independentResolve() {}

safe_VkPhysicalDeviceDepthStencilResolveProperties::safe_VkPhysicalDeviceDepthStencilResolveProperties(
    const safe_VkPhysicalDeviceDepthStencilResolveProperties& copy_src) {
    sType = copy_src.sType;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceDepthStencilResolveProperties& safe_VkPhysicalDeviceDepthStencilResolveProperties::operator=(
    const safe_VkPhysicalDeviceDepthStencilResolveProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    supportedDepthResolveModes = copy_src.supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src.supportedStencilResolveModes;
    independentResolveNone = copy_src.independentResolveNone;
    independentResolve = copy_src.independentResolve;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceDepthStencilResolveProperties::~safe_VkPhysicalDeviceDepthStencilResolveProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDepthStencilResolveProperties::initialize(const VkPhysicalDeviceDepthStencilResolveProperties* in_struct,
                                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    supportedDepthResolveModes = in_struct->supportedDepthResolveModes;
    supportedStencilResolveModes = in_struct->supportedStencilResolveModes;
    independentResolveNone = in_struct->independentResolveNone;
    independentResolve = in_struct->independentResolve;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceDepthStencilResolveProperties::initialize(
    const safe_VkPhysicalDeviceDepthStencilResolveProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    supportedDepthResolveModes = copy_src->supportedDepthResolveModes;
    supportedStencilResolveModes = copy_src->supportedStencilResolveModes;
    independentResolveNone = copy_src->independentResolveNone;
    independentResolve = copy_src->independentResolve;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceScalarBlockLayoutFeatures::safe_VkPhysicalDeviceScalarBlockLayoutFeatures(
    const VkPhysicalDeviceScalarBlockLayoutFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), scalarBlockLayout(in_struct->scalarBlockLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceScalarBlockLayoutFeatures::safe_VkPhysicalDeviceScalarBlockLayoutFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES), pNext(nullptr), scalarBlockLayout() {}

safe_VkPhysicalDeviceScalarBlockLayoutFeatures::safe_VkPhysicalDeviceScalarBlockLayoutFeatures(
    const safe_VkPhysicalDeviceScalarBlockLayoutFeatures& copy_src) {
    sType = copy_src.sType;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceScalarBlockLayoutFeatures& safe_VkPhysicalDeviceScalarBlockLayoutFeatures::operator=(
    const safe_VkPhysicalDeviceScalarBlockLayoutFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    scalarBlockLayout = copy_src.scalarBlockLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceScalarBlockLayoutFeatures::~safe_VkPhysicalDeviceScalarBlockLayoutFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceScalarBlockLayoutFeatures::initialize(const VkPhysicalDeviceScalarBlockLayoutFeatures* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    scalarBlockLayout = in_struct->scalarBlockLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceScalarBlockLayoutFeatures::initialize(const safe_VkPhysicalDeviceScalarBlockLayoutFeatures* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    scalarBlockLayout = copy_src->scalarBlockLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageStencilUsageCreateInfo::safe_VkImageStencilUsageCreateInfo(const VkImageStencilUsageCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stencilUsage(in_struct->stencilUsage) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageStencilUsageCreateInfo::safe_VkImageStencilUsageCreateInfo()
    : sType(VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO), pNext(nullptr), stencilUsage() {}

safe_VkImageStencilUsageCreateInfo::safe_VkImageStencilUsageCreateInfo(const safe_VkImageStencilUsageCreateInfo& copy_src) {
    sType = copy_src.sType;
    stencilUsage = copy_src.stencilUsage;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageStencilUsageCreateInfo& safe_VkImageStencilUsageCreateInfo::operator=(
    const safe_VkImageStencilUsageCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stencilUsage = copy_src.stencilUsage;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageStencilUsageCreateInfo::~safe_VkImageStencilUsageCreateInfo() { FreePnextChain(pNext); }

void safe_VkImageStencilUsageCreateInfo::initialize(const VkImageStencilUsageCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stencilUsage = in_struct->stencilUsage;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageStencilUsageCreateInfo::initialize(const safe_VkImageStencilUsageCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stencilUsage = copy_src->stencilUsage;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSamplerReductionModeCreateInfo::safe_VkSamplerReductionModeCreateInfo(const VkSamplerReductionModeCreateInfo* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), reductionMode(in_struct->reductionMode) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSamplerReductionModeCreateInfo::safe_VkSamplerReductionModeCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO), pNext(nullptr), reductionMode() {}

safe_VkSamplerReductionModeCreateInfo::safe_VkSamplerReductionModeCreateInfo(
    const safe_VkSamplerReductionModeCreateInfo& copy_src) {
    sType = copy_src.sType;
    reductionMode = copy_src.reductionMode;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSamplerReductionModeCreateInfo& safe_VkSamplerReductionModeCreateInfo::operator=(
    const safe_VkSamplerReductionModeCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    reductionMode = copy_src.reductionMode;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSamplerReductionModeCreateInfo::~safe_VkSamplerReductionModeCreateInfo() { FreePnextChain(pNext); }

void safe_VkSamplerReductionModeCreateInfo::initialize(const VkSamplerReductionModeCreateInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    reductionMode = in_struct->reductionMode;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSamplerReductionModeCreateInfo::initialize(const safe_VkSamplerReductionModeCreateInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    reductionMode = copy_src->reductionMode;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceSamplerFilterMinmaxProperties::safe_VkPhysicalDeviceSamplerFilterMinmaxProperties(
    const VkPhysicalDeviceSamplerFilterMinmaxProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      filterMinmaxSingleComponentFormats(in_struct->filterMinmaxSingleComponentFormats),
      filterMinmaxImageComponentMapping(in_struct->filterMinmaxImageComponentMapping) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSamplerFilterMinmaxProperties::safe_VkPhysicalDeviceSamplerFilterMinmaxProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES),
      pNext(nullptr),
      filterMinmaxSingleComponentFormats(),
      filterMinmaxImageComponentMapping() {}

safe_VkPhysicalDeviceSamplerFilterMinmaxProperties::safe_VkPhysicalDeviceSamplerFilterMinmaxProperties(
    const safe_VkPhysicalDeviceSamplerFilterMinmaxProperties& copy_src) {
    sType = copy_src.sType;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSamplerFilterMinmaxProperties& safe_VkPhysicalDeviceSamplerFilterMinmaxProperties::operator=(
    const safe_VkPhysicalDeviceSamplerFilterMinmaxProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    filterMinmaxSingleComponentFormats = copy_src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src.filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSamplerFilterMinmaxProperties::~safe_VkPhysicalDeviceSamplerFilterMinmaxProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceSamplerFilterMinmaxProperties::initialize(const VkPhysicalDeviceSamplerFilterMinmaxProperties* in_struct,
                                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    filterMinmaxSingleComponentFormats = in_struct->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = in_struct->filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSamplerFilterMinmaxProperties::initialize(
    const safe_VkPhysicalDeviceSamplerFilterMinmaxProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    filterMinmaxSingleComponentFormats = copy_src->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = copy_src->filterMinmaxImageComponentMapping;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVulkanMemoryModelFeatures::safe_VkPhysicalDeviceVulkanMemoryModelFeatures(
    const VkPhysicalDeviceVulkanMemoryModelFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      vulkanMemoryModel(in_struct->vulkanMemoryModel),
      vulkanMemoryModelDeviceScope(in_struct->vulkanMemoryModelDeviceScope),
      vulkanMemoryModelAvailabilityVisibilityChains(in_struct->vulkanMemoryModelAvailabilityVisibilityChains) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceVulkanMemoryModelFeatures::safe_VkPhysicalDeviceVulkanMemoryModelFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES),
      pNext(nullptr),
      vulkanMemoryModel(),
      vulkanMemoryModelDeviceScope(),
      vulkanMemoryModelAvailabilityVisibilityChains() {}

safe_VkPhysicalDeviceVulkanMemoryModelFeatures::safe_VkPhysicalDeviceVulkanMemoryModelFeatures(
    const safe_VkPhysicalDeviceVulkanMemoryModelFeatures& copy_src) {
    sType = copy_src.sType;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceVulkanMemoryModelFeatures& safe_VkPhysicalDeviceVulkanMemoryModelFeatures::operator=(
    const safe_VkPhysicalDeviceVulkanMemoryModelFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    vulkanMemoryModel = copy_src.vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src.vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src.vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceVulkanMemoryModelFeatures::~safe_VkPhysicalDeviceVulkanMemoryModelFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVulkanMemoryModelFeatures::initialize(const VkPhysicalDeviceVulkanMemoryModelFeatures* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    vulkanMemoryModel = in_struct->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = in_struct->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = in_struct->vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceVulkanMemoryModelFeatures::initialize(const safe_VkPhysicalDeviceVulkanMemoryModelFeatures* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    vulkanMemoryModel = copy_src->vulkanMemoryModel;
    vulkanMemoryModelDeviceScope = copy_src->vulkanMemoryModelDeviceScope;
    vulkanMemoryModelAvailabilityVisibilityChains = copy_src->vulkanMemoryModelAvailabilityVisibilityChains;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceImagelessFramebufferFeatures::safe_VkPhysicalDeviceImagelessFramebufferFeatures(
    const VkPhysicalDeviceImagelessFramebufferFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), imagelessFramebuffer(in_struct->imagelessFramebuffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceImagelessFramebufferFeatures::safe_VkPhysicalDeviceImagelessFramebufferFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES), pNext(nullptr), imagelessFramebuffer() {}

safe_VkPhysicalDeviceImagelessFramebufferFeatures::safe_VkPhysicalDeviceImagelessFramebufferFeatures(
    const safe_VkPhysicalDeviceImagelessFramebufferFeatures& copy_src) {
    sType = copy_src.sType;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceImagelessFramebufferFeatures& safe_VkPhysicalDeviceImagelessFramebufferFeatures::operator=(
    const safe_VkPhysicalDeviceImagelessFramebufferFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imagelessFramebuffer = copy_src.imagelessFramebuffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceImagelessFramebufferFeatures::~safe_VkPhysicalDeviceImagelessFramebufferFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceImagelessFramebufferFeatures::initialize(const VkPhysicalDeviceImagelessFramebufferFeatures* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imagelessFramebuffer = in_struct->imagelessFramebuffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceImagelessFramebufferFeatures::initialize(
    const safe_VkPhysicalDeviceImagelessFramebufferFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imagelessFramebuffer = copy_src->imagelessFramebuffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkFramebufferAttachmentImageInfo::safe_VkFramebufferAttachmentImageInfo(const VkFramebufferAttachmentImageInfo* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      usage(in_struct->usage),
      width(in_struct->width),
      height(in_struct->height),
      layerCount(in_struct->layerCount),
      viewFormatCount(in_struct->viewFormatCount),
      pViewFormats(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

safe_VkFramebufferAttachmentImageInfo::safe_VkFramebufferAttachmentImageInfo()
    : sType(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO),
      pNext(nullptr),
      flags(),
      usage(),
      width(),
      height(),
      layerCount(),
      viewFormatCount(),
      pViewFormats(nullptr) {}

safe_VkFramebufferAttachmentImageInfo::safe_VkFramebufferAttachmentImageInfo(
    const safe_VkFramebufferAttachmentImageInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    width = copy_src.width;
    height = copy_src.height;
    layerCount = copy_src.layerCount;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }
}

safe_VkFramebufferAttachmentImageInfo& safe_VkFramebufferAttachmentImageInfo::operator=(
    const safe_VkFramebufferAttachmentImageInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    usage = copy_src.usage;
    width = copy_src.width;
    height = copy_src.height;
    layerCount = copy_src.layerCount;
    viewFormatCount = copy_src.viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pViewFormats) {
        pViewFormats = new VkFormat[copy_src.viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src.pViewFormats, sizeof(VkFormat) * copy_src.viewFormatCount);
    }

    return *this;
}

safe_VkFramebufferAttachmentImageInfo::~safe_VkFramebufferAttachmentImageInfo() {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
}

void safe_VkFramebufferAttachmentImageInfo::initialize(const VkFramebufferAttachmentImageInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pViewFormats) delete[] pViewFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    usage = in_struct->usage;
    width = in_struct->width;
    height = in_struct->height;
    layerCount = in_struct->layerCount;
    viewFormatCount = in_struct->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)in_struct->pViewFormats, sizeof(VkFormat) * in_struct->viewFormatCount);
    }
}

void safe_VkFramebufferAttachmentImageInfo::initialize(const safe_VkFramebufferAttachmentImageInfo* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    usage = copy_src->usage;
    width = copy_src->width;
    height = copy_src->height;
    layerCount = copy_src->layerCount;
    viewFormatCount = copy_src->viewFormatCount;
    pViewFormats = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pViewFormats) {
        pViewFormats = new VkFormat[copy_src->viewFormatCount];
        memcpy((void*)pViewFormats, (void*)copy_src->pViewFormats, sizeof(VkFormat) * copy_src->viewFormatCount);
    }
}

safe_VkFramebufferAttachmentsCreateInfo::safe_VkFramebufferAttachmentsCreateInfo(
    const VkFramebufferAttachmentsCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), attachmentImageInfoCount(in_struct->attachmentImageInfoCount), pAttachmentImageInfos(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentImageInfoCount && in_struct->pAttachmentImageInfos) {
        pAttachmentImageInfos = new safe_VkFramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&in_struct->pAttachmentImageInfos[i]);
        }
    }
}

safe_VkFramebufferAttachmentsCreateInfo::safe_VkFramebufferAttachmentsCreateInfo()
    : sType(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO),
      pNext(nullptr),
      attachmentImageInfoCount(),
      pAttachmentImageInfos(nullptr) {}

safe_VkFramebufferAttachmentsCreateInfo::safe_VkFramebufferAttachmentsCreateInfo(
    const safe_VkFramebufferAttachmentsCreateInfo& copy_src) {
    sType = copy_src.sType;
    attachmentImageInfoCount = copy_src.attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentImageInfoCount && copy_src.pAttachmentImageInfos) {
        pAttachmentImageInfos = new safe_VkFramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&copy_src.pAttachmentImageInfos[i]);
        }
    }
}

safe_VkFramebufferAttachmentsCreateInfo& safe_VkFramebufferAttachmentsCreateInfo::operator=(
    const safe_VkFramebufferAttachmentsCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachmentImageInfos) delete[] pAttachmentImageInfos;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentImageInfoCount = copy_src.attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentImageInfoCount && copy_src.pAttachmentImageInfos) {
        pAttachmentImageInfos = new safe_VkFramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&copy_src.pAttachmentImageInfos[i]);
        }
    }

    return *this;
}

safe_VkFramebufferAttachmentsCreateInfo::~safe_VkFramebufferAttachmentsCreateInfo() {
    if (pAttachmentImageInfos) delete[] pAttachmentImageInfos;
    FreePnextChain(pNext);
}

void safe_VkFramebufferAttachmentsCreateInfo::initialize(const VkFramebufferAttachmentsCreateInfo* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachmentImageInfos) delete[] pAttachmentImageInfos;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentImageInfoCount = in_struct->attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (attachmentImageInfoCount && in_struct->pAttachmentImageInfos) {
        pAttachmentImageInfos = new safe_VkFramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&in_struct->pAttachmentImageInfos[i]);
        }
    }
}

void safe_VkFramebufferAttachmentsCreateInfo::initialize(const safe_VkFramebufferAttachmentsCreateInfo* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentImageInfoCount = copy_src->attachmentImageInfoCount;
    pAttachmentImageInfos = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentImageInfoCount && copy_src->pAttachmentImageInfos) {
        pAttachmentImageInfos = new safe_VkFramebufferAttachmentImageInfo[attachmentImageInfoCount];
        for (uint32_t i = 0; i < attachmentImageInfoCount; ++i) {
            pAttachmentImageInfos[i].initialize(&copy_src->pAttachmentImageInfos[i]);
        }
    }
}

safe_VkRenderPassAttachmentBeginInfo::safe_VkRenderPassAttachmentBeginInfo(const VkRenderPassAttachmentBeginInfo* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), attachmentCount(in_struct->attachmentCount), pAttachments(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

safe_VkRenderPassAttachmentBeginInfo::safe_VkRenderPassAttachmentBeginInfo()
    : sType(VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO), pNext(nullptr), attachmentCount(), pAttachments(nullptr) {}

safe_VkRenderPassAttachmentBeginInfo::safe_VkRenderPassAttachmentBeginInfo(const safe_VkRenderPassAttachmentBeginInfo& copy_src) {
    sType = copy_src.sType;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }
}

safe_VkRenderPassAttachmentBeginInfo& safe_VkRenderPassAttachmentBeginInfo::operator=(
    const safe_VkRenderPassAttachmentBeginInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    attachmentCount = copy_src.attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (attachmentCount && copy_src.pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src.pAttachments[i];
        }
    }

    return *this;
}

safe_VkRenderPassAttachmentBeginInfo::~safe_VkRenderPassAttachmentBeginInfo() {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
}

void safe_VkRenderPassAttachmentBeginInfo::initialize(const VkRenderPassAttachmentBeginInfo* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pAttachments) delete[] pAttachments;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

void safe_VkRenderPassAttachmentBeginInfo::initialize(const safe_VkRenderPassAttachmentBeginInfo* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    attachmentCount = copy_src->attachmentCount;
    pAttachments = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (attachmentCount && copy_src->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i = 0; i < attachmentCount; ++i) {
            pAttachments[i] = copy_src->pAttachments[i];
        }
    }
}

safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures::safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(
    const VkPhysicalDeviceUniformBufferStandardLayoutFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), uniformBufferStandardLayout(in_struct->uniformBufferStandardLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures::safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES),
      pNext(nullptr),
      uniformBufferStandardLayout() {}

safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures::safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(
    const safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures& copy_src) {
    sType = copy_src.sType;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures& safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures::operator=(
    const safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    uniformBufferStandardLayout = copy_src.uniformBufferStandardLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures::~safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures::initialize(
    const VkPhysicalDeviceUniformBufferStandardLayoutFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    uniformBufferStandardLayout = in_struct->uniformBufferStandardLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures::initialize(
    const safe_VkPhysicalDeviceUniformBufferStandardLayoutFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    uniformBufferStandardLayout = copy_src->uniformBufferStandardLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(
    const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderSubgroupExtendedTypes(in_struct->shaderSubgroupExtendedTypes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES),
      pNext(nullptr),
      shaderSubgroupExtendedTypes() {}

safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(
    const safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& copy_src) {
    sType = copy_src.sType;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::operator=(
    const safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderSubgroupExtendedTypes = copy_src.shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::~safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::initialize(
    const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderSubgroupExtendedTypes = in_struct->shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::initialize(
    const safe_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderSubgroupExtendedTypes = copy_src->shaderSubgroupExtendedTypes;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(
    const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), separateDepthStencilLayouts(in_struct->separateDepthStencilLayouts) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES),
      pNext(nullptr),
      separateDepthStencilLayouts() {}

safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(
    const safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& copy_src) {
    sType = copy_src.sType;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::operator=(
    const safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    separateDepthStencilLayouts = copy_src.separateDepthStencilLayouts;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::~safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::initialize(
    const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    separateDepthStencilLayouts = in_struct->separateDepthStencilLayouts;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::initialize(
    const safe_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    separateDepthStencilLayouts = copy_src->separateDepthStencilLayouts;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkAttachmentReferenceStencilLayout::safe_VkAttachmentReferenceStencilLayout(
    const VkAttachmentReferenceStencilLayout* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), stencilLayout(in_struct->stencilLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkAttachmentReferenceStencilLayout::safe_VkAttachmentReferenceStencilLayout()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT), pNext(nullptr), stencilLayout() {}

safe_VkAttachmentReferenceStencilLayout::safe_VkAttachmentReferenceStencilLayout(
    const safe_VkAttachmentReferenceStencilLayout& copy_src) {
    sType = copy_src.sType;
    stencilLayout = copy_src.stencilLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkAttachmentReferenceStencilLayout& safe_VkAttachmentReferenceStencilLayout::operator=(
    const safe_VkAttachmentReferenceStencilLayout& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stencilLayout = copy_src.stencilLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkAttachmentReferenceStencilLayout::~safe_VkAttachmentReferenceStencilLayout() { FreePnextChain(pNext); }

void safe_VkAttachmentReferenceStencilLayout::initialize(const VkAttachmentReferenceStencilLayout* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stencilLayout = in_struct->stencilLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkAttachmentReferenceStencilLayout::initialize(const safe_VkAttachmentReferenceStencilLayout* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stencilLayout = copy_src->stencilLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkAttachmentDescriptionStencilLayout::safe_VkAttachmentDescriptionStencilLayout(
    const VkAttachmentDescriptionStencilLayout* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      stencilInitialLayout(in_struct->stencilInitialLayout),
      stencilFinalLayout(in_struct->stencilFinalLayout) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkAttachmentDescriptionStencilLayout::safe_VkAttachmentDescriptionStencilLayout()
    : sType(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT),
      pNext(nullptr),
      stencilInitialLayout(),
      stencilFinalLayout() {}

safe_VkAttachmentDescriptionStencilLayout::safe_VkAttachmentDescriptionStencilLayout(
    const safe_VkAttachmentDescriptionStencilLayout& copy_src) {
    sType = copy_src.sType;
    stencilInitialLayout = copy_src.stencilInitialLayout;
    stencilFinalLayout = copy_src.stencilFinalLayout;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkAttachmentDescriptionStencilLayout& safe_VkAttachmentDescriptionStencilLayout::operator=(
    const safe_VkAttachmentDescriptionStencilLayout& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    stencilInitialLayout = copy_src.stencilInitialLayout;
    stencilFinalLayout = copy_src.stencilFinalLayout;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkAttachmentDescriptionStencilLayout::~safe_VkAttachmentDescriptionStencilLayout() { FreePnextChain(pNext); }

void safe_VkAttachmentDescriptionStencilLayout::initialize(const VkAttachmentDescriptionStencilLayout* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    stencilInitialLayout = in_struct->stencilInitialLayout;
    stencilFinalLayout = in_struct->stencilFinalLayout;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkAttachmentDescriptionStencilLayout::initialize(const safe_VkAttachmentDescriptionStencilLayout* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    stencilInitialLayout = copy_src->stencilInitialLayout;
    stencilFinalLayout = copy_src->stencilFinalLayout;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceHostQueryResetFeatures::safe_VkPhysicalDeviceHostQueryResetFeatures(
    const VkPhysicalDeviceHostQueryResetFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), hostQueryReset(in_struct->hostQueryReset) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceHostQueryResetFeatures::safe_VkPhysicalDeviceHostQueryResetFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES), pNext(nullptr), hostQueryReset() {}

safe_VkPhysicalDeviceHostQueryResetFeatures::safe_VkPhysicalDeviceHostQueryResetFeatures(
    const safe_VkPhysicalDeviceHostQueryResetFeatures& copy_src) {
    sType = copy_src.sType;
    hostQueryReset = copy_src.hostQueryReset;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceHostQueryResetFeatures& safe_VkPhysicalDeviceHostQueryResetFeatures::operator=(
    const safe_VkPhysicalDeviceHostQueryResetFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    hostQueryReset = copy_src.hostQueryReset;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceHostQueryResetFeatures::~safe_VkPhysicalDeviceHostQueryResetFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceHostQueryResetFeatures::initialize(const VkPhysicalDeviceHostQueryResetFeatures* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    hostQueryReset = in_struct->hostQueryReset;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceHostQueryResetFeatures::initialize(const safe_VkPhysicalDeviceHostQueryResetFeatures* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    hostQueryReset = copy_src->hostQueryReset;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceTimelineSemaphoreFeatures::safe_VkPhysicalDeviceTimelineSemaphoreFeatures(
    const VkPhysicalDeviceTimelineSemaphoreFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), timelineSemaphore(in_struct->timelineSemaphore) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceTimelineSemaphoreFeatures::safe_VkPhysicalDeviceTimelineSemaphoreFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES), pNext(nullptr), timelineSemaphore() {}

safe_VkPhysicalDeviceTimelineSemaphoreFeatures::safe_VkPhysicalDeviceTimelineSemaphoreFeatures(
    const safe_VkPhysicalDeviceTimelineSemaphoreFeatures& copy_src) {
    sType = copy_src.sType;
    timelineSemaphore = copy_src.timelineSemaphore;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceTimelineSemaphoreFeatures& safe_VkPhysicalDeviceTimelineSemaphoreFeatures::operator=(
    const safe_VkPhysicalDeviceTimelineSemaphoreFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    timelineSemaphore = copy_src.timelineSemaphore;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceTimelineSemaphoreFeatures::~safe_VkPhysicalDeviceTimelineSemaphoreFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceTimelineSemaphoreFeatures::initialize(const VkPhysicalDeviceTimelineSemaphoreFeatures* in_struct,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    timelineSemaphore = in_struct->timelineSemaphore;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceTimelineSemaphoreFeatures::initialize(const safe_VkPhysicalDeviceTimelineSemaphoreFeatures* copy_src,
                                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    timelineSemaphore = copy_src->timelineSemaphore;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceTimelineSemaphoreProperties::safe_VkPhysicalDeviceTimelineSemaphoreProperties(
    const VkPhysicalDeviceTimelineSemaphoreProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxTimelineSemaphoreValueDifference(in_struct->maxTimelineSemaphoreValueDifference) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceTimelineSemaphoreProperties::safe_VkPhysicalDeviceTimelineSemaphoreProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES),
      pNext(nullptr),
      maxTimelineSemaphoreValueDifference() {}

safe_VkPhysicalDeviceTimelineSemaphoreProperties::safe_VkPhysicalDeviceTimelineSemaphoreProperties(
    const safe_VkPhysicalDeviceTimelineSemaphoreProperties& copy_src) {
    sType = copy_src.sType;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceTimelineSemaphoreProperties& safe_VkPhysicalDeviceTimelineSemaphoreProperties::operator=(
    const safe_VkPhysicalDeviceTimelineSemaphoreProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxTimelineSemaphoreValueDifference = copy_src.maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceTimelineSemaphoreProperties::~safe_VkPhysicalDeviceTimelineSemaphoreProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceTimelineSemaphoreProperties::initialize(const VkPhysicalDeviceTimelineSemaphoreProperties* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxTimelineSemaphoreValueDifference = in_struct->maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceTimelineSemaphoreProperties::initialize(const safe_VkPhysicalDeviceTimelineSemaphoreProperties* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxTimelineSemaphoreValueDifference = copy_src->maxTimelineSemaphoreValueDifference;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSemaphoreTypeCreateInfo::safe_VkSemaphoreTypeCreateInfo(const VkSemaphoreTypeCreateInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), semaphoreType(in_struct->semaphoreType), initialValue(in_struct->initialValue) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSemaphoreTypeCreateInfo::safe_VkSemaphoreTypeCreateInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO), pNext(nullptr), semaphoreType(), initialValue() {}

safe_VkSemaphoreTypeCreateInfo::safe_VkSemaphoreTypeCreateInfo(const safe_VkSemaphoreTypeCreateInfo& copy_src) {
    sType = copy_src.sType;
    semaphoreType = copy_src.semaphoreType;
    initialValue = copy_src.initialValue;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSemaphoreTypeCreateInfo& safe_VkSemaphoreTypeCreateInfo::operator=(const safe_VkSemaphoreTypeCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphoreType = copy_src.semaphoreType;
    initialValue = copy_src.initialValue;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSemaphoreTypeCreateInfo::~safe_VkSemaphoreTypeCreateInfo() { FreePnextChain(pNext); }

void safe_VkSemaphoreTypeCreateInfo::initialize(const VkSemaphoreTypeCreateInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphoreType = in_struct->semaphoreType;
    initialValue = in_struct->initialValue;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSemaphoreTypeCreateInfo::initialize(const safe_VkSemaphoreTypeCreateInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphoreType = copy_src->semaphoreType;
    initialValue = copy_src->initialValue;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkTimelineSemaphoreSubmitInfo::safe_VkTimelineSemaphoreSubmitInfo(const VkTimelineSemaphoreSubmitInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      waitSemaphoreValueCount(in_struct->waitSemaphoreValueCount),
      pWaitSemaphoreValues(nullptr),
      signalSemaphoreValueCount(in_struct->signalSemaphoreValueCount),
      pSignalSemaphoreValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)in_struct->pWaitSemaphoreValues,
               sizeof(uint64_t) * in_struct->waitSemaphoreValueCount);
    }

    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)in_struct->pSignalSemaphoreValues,
               sizeof(uint64_t) * in_struct->signalSemaphoreValueCount);
    }
}

safe_VkTimelineSemaphoreSubmitInfo::safe_VkTimelineSemaphoreSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO),
      pNext(nullptr),
      waitSemaphoreValueCount(),
      pWaitSemaphoreValues(nullptr),
      signalSemaphoreValueCount(),
      pSignalSemaphoreValues(nullptr) {}

safe_VkTimelineSemaphoreSubmitInfo::safe_VkTimelineSemaphoreSubmitInfo(const safe_VkTimelineSemaphoreSubmitInfo& copy_src) {
    sType = copy_src.sType;
    waitSemaphoreValueCount = copy_src.waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = copy_src.signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src.waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src.pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src.waitSemaphoreValueCount);
    }

    if (copy_src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src.signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src.pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src.signalSemaphoreValueCount);
    }
}

safe_VkTimelineSemaphoreSubmitInfo& safe_VkTimelineSemaphoreSubmitInfo::operator=(
    const safe_VkTimelineSemaphoreSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    waitSemaphoreValueCount = copy_src.waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = copy_src.signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src.waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src.pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src.waitSemaphoreValueCount);
    }

    if (copy_src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src.signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src.pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src.signalSemaphoreValueCount);
    }

    return *this;
}

safe_VkTimelineSemaphoreSubmitInfo::~safe_VkTimelineSemaphoreSubmitInfo() {
    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);
}

void safe_VkTimelineSemaphoreSubmitInfo::initialize(const VkTimelineSemaphoreSubmitInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphoreValues) delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues) delete[] pSignalSemaphoreValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    waitSemaphoreValueCount = in_struct->waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = in_struct->signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)in_struct->pWaitSemaphoreValues,
               sizeof(uint64_t) * in_struct->waitSemaphoreValueCount);
    }

    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)in_struct->pSignalSemaphoreValues,
               sizeof(uint64_t) * in_struct->signalSemaphoreValueCount);
    }
}

void safe_VkTimelineSemaphoreSubmitInfo::initialize(const safe_VkTimelineSemaphoreSubmitInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    waitSemaphoreValueCount = copy_src->waitSemaphoreValueCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValueCount = copy_src->signalSemaphoreValueCount;
    pSignalSemaphoreValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[copy_src->waitSemaphoreValueCount];
        memcpy((void*)pWaitSemaphoreValues, (void*)copy_src->pWaitSemaphoreValues,
               sizeof(uint64_t) * copy_src->waitSemaphoreValueCount);
    }

    if (copy_src->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[copy_src->signalSemaphoreValueCount];
        memcpy((void*)pSignalSemaphoreValues, (void*)copy_src->pSignalSemaphoreValues,
               sizeof(uint64_t) * copy_src->signalSemaphoreValueCount);
    }
}

safe_VkSemaphoreWaitInfo::safe_VkSemaphoreWaitInfo(const VkSemaphoreWaitInfo* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      semaphoreCount(in_struct->semaphoreCount),
      pSemaphores(nullptr),
      pValues(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (semaphoreCount && in_struct->pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = in_struct->pSemaphores[i];
        }
    }

    if (in_struct->pValues) {
        pValues = new uint64_t[in_struct->semaphoreCount];
        memcpy((void*)pValues, (void*)in_struct->pValues, sizeof(uint64_t) * in_struct->semaphoreCount);
    }
}

safe_VkSemaphoreWaitInfo::safe_VkSemaphoreWaitInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO),
      pNext(nullptr),
      flags(),
      semaphoreCount(),
      pSemaphores(nullptr),
      pValues(nullptr) {}

safe_VkSemaphoreWaitInfo::safe_VkSemaphoreWaitInfo(const safe_VkSemaphoreWaitInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    semaphoreCount = copy_src.semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (semaphoreCount && copy_src.pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = copy_src.pSemaphores[i];
        }
    }

    if (copy_src.pValues) {
        pValues = new uint64_t[copy_src.semaphoreCount];
        memcpy((void*)pValues, (void*)copy_src.pValues, sizeof(uint64_t) * copy_src.semaphoreCount);
    }
}

safe_VkSemaphoreWaitInfo& safe_VkSemaphoreWaitInfo::operator=(const safe_VkSemaphoreWaitInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pSemaphores) delete[] pSemaphores;
    if (pValues) delete[] pValues;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    semaphoreCount = copy_src.semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (semaphoreCount && copy_src.pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = copy_src.pSemaphores[i];
        }
    }

    if (copy_src.pValues) {
        pValues = new uint64_t[copy_src.semaphoreCount];
        memcpy((void*)pValues, (void*)copy_src.pValues, sizeof(uint64_t) * copy_src.semaphoreCount);
    }

    return *this;
}

safe_VkSemaphoreWaitInfo::~safe_VkSemaphoreWaitInfo() {
    if (pSemaphores) delete[] pSemaphores;
    if (pValues) delete[] pValues;
    FreePnextChain(pNext);
}

void safe_VkSemaphoreWaitInfo::initialize(const VkSemaphoreWaitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pSemaphores) delete[] pSemaphores;
    if (pValues) delete[] pValues;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    semaphoreCount = in_struct->semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (semaphoreCount && in_struct->pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = in_struct->pSemaphores[i];
        }
    }

    if (in_struct->pValues) {
        pValues = new uint64_t[in_struct->semaphoreCount];
        memcpy((void*)pValues, (void*)in_struct->pValues, sizeof(uint64_t) * in_struct->semaphoreCount);
    }
}

void safe_VkSemaphoreWaitInfo::initialize(const safe_VkSemaphoreWaitInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    semaphoreCount = copy_src->semaphoreCount;
    pSemaphores = nullptr;
    pValues = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (semaphoreCount && copy_src->pSemaphores) {
        pSemaphores = new VkSemaphore[semaphoreCount];
        for (uint32_t i = 0; i < semaphoreCount; ++i) {
            pSemaphores[i] = copy_src->pSemaphores[i];
        }
    }

    if (copy_src->pValues) {
        pValues = new uint64_t[copy_src->semaphoreCount];
        memcpy((void*)pValues, (void*)copy_src->pValues, sizeof(uint64_t) * copy_src->semaphoreCount);
    }
}

safe_VkSemaphoreSignalInfo::safe_VkSemaphoreSignalInfo(const VkSemaphoreSignalInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), semaphore(in_struct->semaphore), value(in_struct->value) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSemaphoreSignalInfo::safe_VkSemaphoreSignalInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO), pNext(nullptr), semaphore(), value() {}

safe_VkSemaphoreSignalInfo::safe_VkSemaphoreSignalInfo(const safe_VkSemaphoreSignalInfo& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSemaphoreSignalInfo& safe_VkSemaphoreSignalInfo::operator=(const safe_VkSemaphoreSignalInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSemaphoreSignalInfo::~safe_VkSemaphoreSignalInfo() { FreePnextChain(pNext); }

void safe_VkSemaphoreSignalInfo::initialize(const VkSemaphoreSignalInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    value = in_struct->value;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSemaphoreSignalInfo::initialize(const safe_VkSemaphoreSignalInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    value = copy_src->value;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceBufferDeviceAddressFeatures::safe_VkPhysicalDeviceBufferDeviceAddressFeatures(
    const VkPhysicalDeviceBufferDeviceAddressFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      bufferDeviceAddress(in_struct->bufferDeviceAddress),
      bufferDeviceAddressCaptureReplay(in_struct->bufferDeviceAddressCaptureReplay),
      bufferDeviceAddressMultiDevice(in_struct->bufferDeviceAddressMultiDevice) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceBufferDeviceAddressFeatures::safe_VkPhysicalDeviceBufferDeviceAddressFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES),
      pNext(nullptr),
      bufferDeviceAddress(),
      bufferDeviceAddressCaptureReplay(),
      bufferDeviceAddressMultiDevice() {}

safe_VkPhysicalDeviceBufferDeviceAddressFeatures::safe_VkPhysicalDeviceBufferDeviceAddressFeatures(
    const safe_VkPhysicalDeviceBufferDeviceAddressFeatures& copy_src) {
    sType = copy_src.sType;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceBufferDeviceAddressFeatures& safe_VkPhysicalDeviceBufferDeviceAddressFeatures::operator=(
    const safe_VkPhysicalDeviceBufferDeviceAddressFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    bufferDeviceAddress = copy_src.bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src.bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src.bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceBufferDeviceAddressFeatures::~safe_VkPhysicalDeviceBufferDeviceAddressFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceBufferDeviceAddressFeatures::initialize(const VkPhysicalDeviceBufferDeviceAddressFeatures* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    bufferDeviceAddress = in_struct->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = in_struct->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = in_struct->bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceBufferDeviceAddressFeatures::initialize(const safe_VkPhysicalDeviceBufferDeviceAddressFeatures* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    bufferDeviceAddress = copy_src->bufferDeviceAddress;
    bufferDeviceAddressCaptureReplay = copy_src->bufferDeviceAddressCaptureReplay;
    bufferDeviceAddressMultiDevice = copy_src->bufferDeviceAddressMultiDevice;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBufferDeviceAddressInfo::safe_VkBufferDeviceAddressInfo(const VkBufferDeviceAddressInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), buffer(in_struct->buffer) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferDeviceAddressInfo::safe_VkBufferDeviceAddressInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO), pNext(nullptr), buffer() {}

safe_VkBufferDeviceAddressInfo::safe_VkBufferDeviceAddressInfo(const safe_VkBufferDeviceAddressInfo& copy_src) {
    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferDeviceAddressInfo& safe_VkBufferDeviceAddressInfo::operator=(const safe_VkBufferDeviceAddressInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    buffer = copy_src.buffer;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferDeviceAddressInfo::~safe_VkBufferDeviceAddressInfo() { FreePnextChain(pNext); }

void safe_VkBufferDeviceAddressInfo::initialize(const VkBufferDeviceAddressInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    buffer = in_struct->buffer;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferDeviceAddressInfo::initialize(const safe_VkBufferDeviceAddressInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    buffer = copy_src->buffer;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBufferOpaqueCaptureAddressCreateInfo::safe_VkBufferOpaqueCaptureAddressCreateInfo(
    const VkBufferOpaqueCaptureAddressCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), opaqueCaptureAddress(in_struct->opaqueCaptureAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferOpaqueCaptureAddressCreateInfo::safe_VkBufferOpaqueCaptureAddressCreateInfo()
    : sType(VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO), pNext(nullptr), opaqueCaptureAddress() {}

safe_VkBufferOpaqueCaptureAddressCreateInfo::safe_VkBufferOpaqueCaptureAddressCreateInfo(
    const safe_VkBufferOpaqueCaptureAddressCreateInfo& copy_src) {
    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferOpaqueCaptureAddressCreateInfo& safe_VkBufferOpaqueCaptureAddressCreateInfo::operator=(
    const safe_VkBufferOpaqueCaptureAddressCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferOpaqueCaptureAddressCreateInfo::~safe_VkBufferOpaqueCaptureAddressCreateInfo() { FreePnextChain(pNext); }

void safe_VkBufferOpaqueCaptureAddressCreateInfo::initialize(const VkBufferOpaqueCaptureAddressCreateInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    opaqueCaptureAddress = in_struct->opaqueCaptureAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferOpaqueCaptureAddressCreateInfo::initialize(const safe_VkBufferOpaqueCaptureAddressCreateInfo* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    opaqueCaptureAddress = copy_src->opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryOpaqueCaptureAddressAllocateInfo::safe_VkMemoryOpaqueCaptureAddressAllocateInfo(
    const VkMemoryOpaqueCaptureAddressAllocateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), opaqueCaptureAddress(in_struct->opaqueCaptureAddress) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryOpaqueCaptureAddressAllocateInfo::safe_VkMemoryOpaqueCaptureAddressAllocateInfo()
    : sType(VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO), pNext(nullptr), opaqueCaptureAddress() {}

safe_VkMemoryOpaqueCaptureAddressAllocateInfo::safe_VkMemoryOpaqueCaptureAddressAllocateInfo(
    const safe_VkMemoryOpaqueCaptureAddressAllocateInfo& copy_src) {
    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryOpaqueCaptureAddressAllocateInfo& safe_VkMemoryOpaqueCaptureAddressAllocateInfo::operator=(
    const safe_VkMemoryOpaqueCaptureAddressAllocateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    opaqueCaptureAddress = copy_src.opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryOpaqueCaptureAddressAllocateInfo::~safe_VkMemoryOpaqueCaptureAddressAllocateInfo() { FreePnextChain(pNext); }

void safe_VkMemoryOpaqueCaptureAddressAllocateInfo::initialize(const VkMemoryOpaqueCaptureAddressAllocateInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    opaqueCaptureAddress = in_struct->opaqueCaptureAddress;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryOpaqueCaptureAddressAllocateInfo::initialize(const safe_VkMemoryOpaqueCaptureAddressAllocateInfo* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    opaqueCaptureAddress = copy_src->opaqueCaptureAddress;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceMemoryOpaqueCaptureAddressInfo::safe_VkDeviceMemoryOpaqueCaptureAddressInfo(
    const VkDeviceMemoryOpaqueCaptureAddressInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), memory(in_struct->memory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDeviceMemoryOpaqueCaptureAddressInfo::safe_VkDeviceMemoryOpaqueCaptureAddressInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO), pNext(nullptr), memory() {}

safe_VkDeviceMemoryOpaqueCaptureAddressInfo::safe_VkDeviceMemoryOpaqueCaptureAddressInfo(
    const safe_VkDeviceMemoryOpaqueCaptureAddressInfo& copy_src) {
    sType = copy_src.sType;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDeviceMemoryOpaqueCaptureAddressInfo& safe_VkDeviceMemoryOpaqueCaptureAddressInfo::operator=(
    const safe_VkDeviceMemoryOpaqueCaptureAddressInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    memory = copy_src.memory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDeviceMemoryOpaqueCaptureAddressInfo::~safe_VkDeviceMemoryOpaqueCaptureAddressInfo() { FreePnextChain(pNext); }

void safe_VkDeviceMemoryOpaqueCaptureAddressInfo::initialize(const VkDeviceMemoryOpaqueCaptureAddressInfo* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    memory = in_struct->memory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDeviceMemoryOpaqueCaptureAddressInfo::initialize(const safe_VkDeviceMemoryOpaqueCaptureAddressInfo* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    memory = copy_src->memory;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVulkan13Features::safe_VkPhysicalDeviceVulkan13Features(const VkPhysicalDeviceVulkan13Features* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType),
      robustImageAccess(in_struct->robustImageAccess),
      inlineUniformBlock(in_struct->inlineUniformBlock),
      descriptorBindingInlineUniformBlockUpdateAfterBind(in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind),
      pipelineCreationCacheControl(in_struct->pipelineCreationCacheControl),
      privateData(in_struct->privateData),
      shaderDemoteToHelperInvocation(in_struct->shaderDemoteToHelperInvocation),
      shaderTerminateInvocation(in_struct->shaderTerminateInvocation),
      subgroupSizeControl(in_struct->subgroupSizeControl),
      computeFullSubgroups(in_struct->computeFullSubgroups),
      synchronization2(in_struct->synchronization2),
      textureCompressionASTC_HDR(in_struct->textureCompressionASTC_HDR),
      shaderZeroInitializeWorkgroupMemory(in_struct->shaderZeroInitializeWorkgroupMemory),
      dynamicRendering(in_struct->dynamicRendering),
      shaderIntegerDotProduct(in_struct->shaderIntegerDotProduct),
      maintenance4(in_struct->maintenance4) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceVulkan13Features::safe_VkPhysicalDeviceVulkan13Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES),
      pNext(nullptr),
      robustImageAccess(),
      inlineUniformBlock(),
      descriptorBindingInlineUniformBlockUpdateAfterBind(),
      pipelineCreationCacheControl(),
      privateData(),
      shaderDemoteToHelperInvocation(),
      shaderTerminateInvocation(),
      subgroupSizeControl(),
      computeFullSubgroups(),
      synchronization2(),
      textureCompressionASTC_HDR(),
      shaderZeroInitializeWorkgroupMemory(),
      dynamicRendering(),
      shaderIntegerDotProduct(),
      maintenance4() {}

safe_VkPhysicalDeviceVulkan13Features::safe_VkPhysicalDeviceVulkan13Features(
    const safe_VkPhysicalDeviceVulkan13Features& copy_src) {
    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    privateData = copy_src.privateData;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    synchronization2 = copy_src.synchronization2;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = copy_src.dynamicRendering;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceVulkan13Features& safe_VkPhysicalDeviceVulkan13Features::operator=(
    const safe_VkPhysicalDeviceVulkan13Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    privateData = copy_src.privateData;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    synchronization2 = copy_src.synchronization2;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = copy_src.dynamicRendering;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceVulkan13Features::~safe_VkPhysicalDeviceVulkan13Features() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVulkan13Features::initialize(const VkPhysicalDeviceVulkan13Features* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    robustImageAccess = in_struct->robustImageAccess;
    inlineUniformBlock = in_struct->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = in_struct->pipelineCreationCacheControl;
    privateData = in_struct->privateData;
    shaderDemoteToHelperInvocation = in_struct->shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = in_struct->shaderTerminateInvocation;
    subgroupSizeControl = in_struct->subgroupSizeControl;
    computeFullSubgroups = in_struct->computeFullSubgroups;
    synchronization2 = in_struct->synchronization2;
    textureCompressionASTC_HDR = in_struct->textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = in_struct->shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = in_struct->dynamicRendering;
    shaderIntegerDotProduct = in_struct->shaderIntegerDotProduct;
    maintenance4 = in_struct->maintenance4;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceVulkan13Features::initialize(const safe_VkPhysicalDeviceVulkan13Features* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    robustImageAccess = copy_src->robustImageAccess;
    inlineUniformBlock = copy_src->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pipelineCreationCacheControl = copy_src->pipelineCreationCacheControl;
    privateData = copy_src->privateData;
    shaderDemoteToHelperInvocation = copy_src->shaderDemoteToHelperInvocation;
    shaderTerminateInvocation = copy_src->shaderTerminateInvocation;
    subgroupSizeControl = copy_src->subgroupSizeControl;
    computeFullSubgroups = copy_src->computeFullSubgroups;
    synchronization2 = copy_src->synchronization2;
    textureCompressionASTC_HDR = copy_src->textureCompressionASTC_HDR;
    shaderZeroInitializeWorkgroupMemory = copy_src->shaderZeroInitializeWorkgroupMemory;
    dynamicRendering = copy_src->dynamicRendering;
    shaderIntegerDotProduct = copy_src->shaderIntegerDotProduct;
    maintenance4 = copy_src->maintenance4;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceVulkan13Properties::safe_VkPhysicalDeviceVulkan13Properties(
    const VkPhysicalDeviceVulkan13Properties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minSubgroupSize(in_struct->minSubgroupSize),
      maxSubgroupSize(in_struct->maxSubgroupSize),
      maxComputeWorkgroupSubgroups(in_struct->maxComputeWorkgroupSubgroups),
      requiredSubgroupSizeStages(in_struct->requiredSubgroupSizeStages),
      maxInlineUniformBlockSize(in_struct->maxInlineUniformBlockSize),
      maxPerStageDescriptorInlineUniformBlocks(in_struct->maxPerStageDescriptorInlineUniformBlocks),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks),
      maxDescriptorSetInlineUniformBlocks(in_struct->maxDescriptorSetInlineUniformBlocks),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks(in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks),
      maxInlineUniformTotalSize(in_struct->maxInlineUniformTotalSize),
      integerDotProduct8BitUnsignedAccelerated(in_struct->integerDotProduct8BitUnsignedAccelerated),
      integerDotProduct8BitSignedAccelerated(in_struct->integerDotProduct8BitSignedAccelerated),
      integerDotProduct8BitMixedSignednessAccelerated(in_struct->integerDotProduct8BitMixedSignednessAccelerated),
      integerDotProduct4x8BitPackedUnsignedAccelerated(in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated),
      integerDotProduct4x8BitPackedSignedAccelerated(in_struct->integerDotProduct4x8BitPackedSignedAccelerated),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated),
      integerDotProduct16BitUnsignedAccelerated(in_struct->integerDotProduct16BitUnsignedAccelerated),
      integerDotProduct16BitSignedAccelerated(in_struct->integerDotProduct16BitSignedAccelerated),
      integerDotProduct16BitMixedSignednessAccelerated(in_struct->integerDotProduct16BitMixedSignednessAccelerated),
      integerDotProduct32BitUnsignedAccelerated(in_struct->integerDotProduct32BitUnsignedAccelerated),
      integerDotProduct32BitSignedAccelerated(in_struct->integerDotProduct32BitSignedAccelerated),
      integerDotProduct32BitMixedSignednessAccelerated(in_struct->integerDotProduct32BitMixedSignednessAccelerated),
      integerDotProduct64BitUnsignedAccelerated(in_struct->integerDotProduct64BitUnsignedAccelerated),
      integerDotProduct64BitSignedAccelerated(in_struct->integerDotProduct64BitSignedAccelerated),
      integerDotProduct64BitMixedSignednessAccelerated(in_struct->integerDotProduct64BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated),
      storageTexelBufferOffsetAlignmentBytes(in_struct->storageTexelBufferOffsetAlignmentBytes),
      storageTexelBufferOffsetSingleTexelAlignment(in_struct->storageTexelBufferOffsetSingleTexelAlignment),
      uniformTexelBufferOffsetAlignmentBytes(in_struct->uniformTexelBufferOffsetAlignmentBytes),
      uniformTexelBufferOffsetSingleTexelAlignment(in_struct->uniformTexelBufferOffsetSingleTexelAlignment),
      maxBufferSize(in_struct->maxBufferSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceVulkan13Properties::safe_VkPhysicalDeviceVulkan13Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES),
      pNext(nullptr),
      minSubgroupSize(),
      maxSubgroupSize(),
      maxComputeWorkgroupSubgroups(),
      requiredSubgroupSizeStages(),
      maxInlineUniformBlockSize(),
      maxPerStageDescriptorInlineUniformBlocks(),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(),
      maxDescriptorSetInlineUniformBlocks(),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks(),
      maxInlineUniformTotalSize(),
      integerDotProduct8BitUnsignedAccelerated(),
      integerDotProduct8BitSignedAccelerated(),
      integerDotProduct8BitMixedSignednessAccelerated(),
      integerDotProduct4x8BitPackedUnsignedAccelerated(),
      integerDotProduct4x8BitPackedSignedAccelerated(),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(),
      integerDotProduct16BitUnsignedAccelerated(),
      integerDotProduct16BitSignedAccelerated(),
      integerDotProduct16BitMixedSignednessAccelerated(),
      integerDotProduct32BitUnsignedAccelerated(),
      integerDotProduct32BitSignedAccelerated(),
      integerDotProduct32BitMixedSignednessAccelerated(),
      integerDotProduct64BitUnsignedAccelerated(),
      integerDotProduct64BitSignedAccelerated(),
      integerDotProduct64BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated(),
      storageTexelBufferOffsetAlignmentBytes(),
      storageTexelBufferOffsetSingleTexelAlignment(),
      uniformTexelBufferOffsetAlignmentBytes(),
      uniformTexelBufferOffsetSingleTexelAlignment(),
      maxBufferSize() {}

safe_VkPhysicalDeviceVulkan13Properties::safe_VkPhysicalDeviceVulkan13Properties(
    const safe_VkPhysicalDeviceVulkan13Properties& copy_src) {
    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = copy_src.maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceVulkan13Properties& safe_VkPhysicalDeviceVulkan13Properties::operator=(
    const safe_VkPhysicalDeviceVulkan13Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = copy_src.maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceVulkan13Properties::~safe_VkPhysicalDeviceVulkan13Properties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceVulkan13Properties::initialize(const VkPhysicalDeviceVulkan13Properties* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minSubgroupSize = in_struct->minSubgroupSize;
    maxSubgroupSize = in_struct->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = in_struct->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = in_struct->requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = in_struct->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = in_struct->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = in_struct->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = in_struct->maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = in_struct->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = in_struct->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = in_struct->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = in_struct->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = in_struct->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = in_struct->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = in_struct->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = in_struct->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = in_struct->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = in_struct->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = in_struct->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = in_struct->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = in_struct->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = in_struct->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = in_struct->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = in_struct->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = in_struct->uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = in_struct->maxBufferSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceVulkan13Properties::initialize(const safe_VkPhysicalDeviceVulkan13Properties* copy_src,
                                                         [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minSubgroupSize = copy_src->minSubgroupSize;
    maxSubgroupSize = copy_src->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src->requiredSubgroupSizeStages;
    maxInlineUniformBlockSize = copy_src->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    maxInlineUniformTotalSize = copy_src->maxInlineUniformTotalSize;
    integerDotProduct8BitUnsignedAccelerated = copy_src->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    storageTexelBufferOffsetAlignmentBytes = copy_src->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src->uniformTexelBufferOffsetSingleTexelAlignment;
    maxBufferSize = copy_src->maxBufferSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineCreationFeedbackCreateInfo::safe_VkPipelineCreationFeedbackCreateInfo(
    const VkPipelineCreationFeedbackCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      pPipelineCreationFeedback(nullptr),
      pipelineStageCreationFeedbackCount(in_struct->pipelineStageCreationFeedbackCount),
      pPipelineStageCreationFeedbacks(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*in_struct->pPipelineCreationFeedback);
    }

    if (in_struct->pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[in_struct->pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)in_struct->pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * in_struct->pipelineStageCreationFeedbackCount);
    }
}

safe_VkPipelineCreationFeedbackCreateInfo::safe_VkPipelineCreationFeedbackCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO),
      pNext(nullptr),
      pPipelineCreationFeedback(nullptr),
      pipelineStageCreationFeedbackCount(),
      pPipelineStageCreationFeedbacks(nullptr) {}

safe_VkPipelineCreationFeedbackCreateInfo::safe_VkPipelineCreationFeedbackCreateInfo(
    const safe_VkPipelineCreationFeedbackCreateInfo& copy_src) {
    sType = copy_src.sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = copy_src.pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*copy_src.pPipelineCreationFeedback);
    }

    if (copy_src.pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[copy_src.pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)copy_src.pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * copy_src.pipelineStageCreationFeedbackCount);
    }
}

safe_VkPipelineCreationFeedbackCreateInfo& safe_VkPipelineCreationFeedbackCreateInfo::operator=(
    const safe_VkPipelineCreationFeedbackCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pPipelineCreationFeedback) delete pPipelineCreationFeedback;
    if (pPipelineStageCreationFeedbacks) delete[] pPipelineStageCreationFeedbacks;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = copy_src.pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*copy_src.pPipelineCreationFeedback);
    }

    if (copy_src.pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[copy_src.pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)copy_src.pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * copy_src.pipelineStageCreationFeedbackCount);
    }

    return *this;
}

safe_VkPipelineCreationFeedbackCreateInfo::~safe_VkPipelineCreationFeedbackCreateInfo() {
    if (pPipelineCreationFeedback) delete pPipelineCreationFeedback;
    if (pPipelineStageCreationFeedbacks) delete[] pPipelineStageCreationFeedbacks;
    FreePnextChain(pNext);
}

void safe_VkPipelineCreationFeedbackCreateInfo::initialize(const VkPipelineCreationFeedbackCreateInfo* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    if (pPipelineCreationFeedback) delete pPipelineCreationFeedback;
    if (pPipelineStageCreationFeedbacks) delete[] pPipelineStageCreationFeedbacks;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = in_struct->pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*in_struct->pPipelineCreationFeedback);
    }

    if (in_struct->pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[in_struct->pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)in_struct->pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * in_struct->pipelineStageCreationFeedbackCount);
    }
}

void safe_VkPipelineCreationFeedbackCreateInfo::initialize(const safe_VkPipelineCreationFeedbackCreateInfo* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pPipelineCreationFeedback = nullptr;
    pipelineStageCreationFeedbackCount = copy_src->pipelineStageCreationFeedbackCount;
    pPipelineStageCreationFeedbacks = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pPipelineCreationFeedback) {
        pPipelineCreationFeedback = new VkPipelineCreationFeedback(*copy_src->pPipelineCreationFeedback);
    }

    if (copy_src->pPipelineStageCreationFeedbacks) {
        pPipelineStageCreationFeedbacks = new VkPipelineCreationFeedback[copy_src->pipelineStageCreationFeedbackCount];
        memcpy((void*)pPipelineStageCreationFeedbacks, (void*)copy_src->pPipelineStageCreationFeedbacks,
               sizeof(VkPipelineCreationFeedback) * copy_src->pipelineStageCreationFeedbackCount);
    }
}

safe_VkPhysicalDeviceShaderTerminateInvocationFeatures::safe_VkPhysicalDeviceShaderTerminateInvocationFeatures(
    const VkPhysicalDeviceShaderTerminateInvocationFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderTerminateInvocation(in_struct->shaderTerminateInvocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderTerminateInvocationFeatures::safe_VkPhysicalDeviceShaderTerminateInvocationFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES), pNext(nullptr), shaderTerminateInvocation() {}

safe_VkPhysicalDeviceShaderTerminateInvocationFeatures::safe_VkPhysicalDeviceShaderTerminateInvocationFeatures(
    const safe_VkPhysicalDeviceShaderTerminateInvocationFeatures& copy_src) {
    sType = copy_src.sType;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderTerminateInvocationFeatures& safe_VkPhysicalDeviceShaderTerminateInvocationFeatures::operator=(
    const safe_VkPhysicalDeviceShaderTerminateInvocationFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderTerminateInvocation = copy_src.shaderTerminateInvocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderTerminateInvocationFeatures::~safe_VkPhysicalDeviceShaderTerminateInvocationFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceShaderTerminateInvocationFeatures::initialize(
    const VkPhysicalDeviceShaderTerminateInvocationFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderTerminateInvocation = in_struct->shaderTerminateInvocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderTerminateInvocationFeatures::initialize(
    const safe_VkPhysicalDeviceShaderTerminateInvocationFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderTerminateInvocation = copy_src->shaderTerminateInvocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceToolProperties::safe_VkPhysicalDeviceToolProperties(const VkPhysicalDeviceToolProperties* in_struct,
                                                                         [[maybe_unused]] PNextCopyState* copy_state,
                                                                         bool copy_pnext)
    : sType(in_struct->sType), purposes(in_struct->purposes) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = in_struct->version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = in_struct->layer[i];
    }
}

safe_VkPhysicalDeviceToolProperties::safe_VkPhysicalDeviceToolProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES), pNext(nullptr), purposes() {}

safe_VkPhysicalDeviceToolProperties::safe_VkPhysicalDeviceToolProperties(const safe_VkPhysicalDeviceToolProperties& copy_src) {
    sType = copy_src.sType;
    purposes = copy_src.purposes;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = copy_src.version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = copy_src.layer[i];
    }
}

safe_VkPhysicalDeviceToolProperties& safe_VkPhysicalDeviceToolProperties::operator=(
    const safe_VkPhysicalDeviceToolProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    purposes = copy_src.purposes;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = copy_src.name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = copy_src.version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src.description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = copy_src.layer[i];
    }

    return *this;
}

safe_VkPhysicalDeviceToolProperties::~safe_VkPhysicalDeviceToolProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceToolProperties::initialize(const VkPhysicalDeviceToolProperties* in_struct,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    purposes = in_struct->purposes;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = in_struct->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = in_struct->version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = in_struct->description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = in_struct->layer[i];
    }
}

void safe_VkPhysicalDeviceToolProperties::initialize(const safe_VkPhysicalDeviceToolProperties* copy_src,
                                                     [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    purposes = copy_src->purposes;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        name[i] = copy_src->name[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        version[i] = copy_src->version[i];
    }

    for (uint32_t i = 0; i < VK_MAX_DESCRIPTION_SIZE; ++i) {
        description[i] = copy_src->description[i];
    }

    for (uint32_t i = 0; i < VK_MAX_EXTENSION_NAME_SIZE; ++i) {
        layer[i] = copy_src->layer[i];
    }
}

safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(
    const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderDemoteToHelperInvocation(in_struct->shaderDemoteToHelperInvocation) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES),
      pNext(nullptr),
      shaderDemoteToHelperInvocation() {}

safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(
    const safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& copy_src) {
    sType = copy_src.sType;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::operator=(
    const safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderDemoteToHelperInvocation = copy_src.shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::~safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::initialize(
    const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderDemoteToHelperInvocation = in_struct->shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::initialize(
    const safe_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderDemoteToHelperInvocation = copy_src->shaderDemoteToHelperInvocation;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDevicePrivateDataFeatures::safe_VkPhysicalDevicePrivateDataFeatures(
    const VkPhysicalDevicePrivateDataFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), privateData(in_struct->privateData) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDevicePrivateDataFeatures::safe_VkPhysicalDevicePrivateDataFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES), pNext(nullptr), privateData() {}

safe_VkPhysicalDevicePrivateDataFeatures::safe_VkPhysicalDevicePrivateDataFeatures(
    const safe_VkPhysicalDevicePrivateDataFeatures& copy_src) {
    sType = copy_src.sType;
    privateData = copy_src.privateData;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDevicePrivateDataFeatures& safe_VkPhysicalDevicePrivateDataFeatures::operator=(
    const safe_VkPhysicalDevicePrivateDataFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    privateData = copy_src.privateData;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDevicePrivateDataFeatures::~safe_VkPhysicalDevicePrivateDataFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDevicePrivateDataFeatures::initialize(const VkPhysicalDevicePrivateDataFeatures* in_struct,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    privateData = in_struct->privateData;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDevicePrivateDataFeatures::initialize(const safe_VkPhysicalDevicePrivateDataFeatures* copy_src,
                                                          [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    privateData = copy_src->privateData;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDevicePrivateDataCreateInfo::safe_VkDevicePrivateDataCreateInfo(const VkDevicePrivateDataCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), privateDataSlotRequestCount(in_struct->privateDataSlotRequestCount) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDevicePrivateDataCreateInfo::safe_VkDevicePrivateDataCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO), pNext(nullptr), privateDataSlotRequestCount() {}

safe_VkDevicePrivateDataCreateInfo::safe_VkDevicePrivateDataCreateInfo(const safe_VkDevicePrivateDataCreateInfo& copy_src) {
    sType = copy_src.sType;
    privateDataSlotRequestCount = copy_src.privateDataSlotRequestCount;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDevicePrivateDataCreateInfo& safe_VkDevicePrivateDataCreateInfo::operator=(
    const safe_VkDevicePrivateDataCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    privateDataSlotRequestCount = copy_src.privateDataSlotRequestCount;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDevicePrivateDataCreateInfo::~safe_VkDevicePrivateDataCreateInfo() { FreePnextChain(pNext); }

void safe_VkDevicePrivateDataCreateInfo::initialize(const VkDevicePrivateDataCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    privateDataSlotRequestCount = in_struct->privateDataSlotRequestCount;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDevicePrivateDataCreateInfo::initialize(const safe_VkDevicePrivateDataCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    privateDataSlotRequestCount = copy_src->privateDataSlotRequestCount;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPrivateDataSlotCreateInfo::safe_VkPrivateDataSlotCreateInfo(const VkPrivateDataSlotCreateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), flags(in_struct->flags) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPrivateDataSlotCreateInfo::safe_VkPrivateDataSlotCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO), pNext(nullptr), flags() {}

safe_VkPrivateDataSlotCreateInfo::safe_VkPrivateDataSlotCreateInfo(const safe_VkPrivateDataSlotCreateInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPrivateDataSlotCreateInfo& safe_VkPrivateDataSlotCreateInfo::operator=(const safe_VkPrivateDataSlotCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPrivateDataSlotCreateInfo::~safe_VkPrivateDataSlotCreateInfo() { FreePnextChain(pNext); }

void safe_VkPrivateDataSlotCreateInfo::initialize(const VkPrivateDataSlotCreateInfo* in_struct,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPrivateDataSlotCreateInfo::initialize(const safe_VkPrivateDataSlotCreateInfo* copy_src,
                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDevicePipelineCreationCacheControlFeatures::safe_VkPhysicalDevicePipelineCreationCacheControlFeatures(
    const VkPhysicalDevicePipelineCreationCacheControlFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), pipelineCreationCacheControl(in_struct->pipelineCreationCacheControl) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDevicePipelineCreationCacheControlFeatures::safe_VkPhysicalDevicePipelineCreationCacheControlFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES),
      pNext(nullptr),
      pipelineCreationCacheControl() {}

safe_VkPhysicalDevicePipelineCreationCacheControlFeatures::safe_VkPhysicalDevicePipelineCreationCacheControlFeatures(
    const safe_VkPhysicalDevicePipelineCreationCacheControlFeatures& copy_src) {
    sType = copy_src.sType;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDevicePipelineCreationCacheControlFeatures& safe_VkPhysicalDevicePipelineCreationCacheControlFeatures::operator=(
    const safe_VkPhysicalDevicePipelineCreationCacheControlFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    pipelineCreationCacheControl = copy_src.pipelineCreationCacheControl;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDevicePipelineCreationCacheControlFeatures::~safe_VkPhysicalDevicePipelineCreationCacheControlFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDevicePipelineCreationCacheControlFeatures::initialize(
    const VkPhysicalDevicePipelineCreationCacheControlFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pipelineCreationCacheControl = in_struct->pipelineCreationCacheControl;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDevicePipelineCreationCacheControlFeatures::initialize(
    const safe_VkPhysicalDevicePipelineCreationCacheControlFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pipelineCreationCacheControl = copy_src->pipelineCreationCacheControl;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkMemoryBarrier2::safe_VkMemoryBarrier2(const VkMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      srcStageMask(in_struct->srcStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstStageMask(in_struct->dstStageMask),
      dstAccessMask(in_struct->dstAccessMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkMemoryBarrier2::safe_VkMemoryBarrier2()
    : sType(VK_STRUCTURE_TYPE_MEMORY_BARRIER_2), pNext(nullptr), srcStageMask(), srcAccessMask(), dstStageMask(), dstAccessMask() {}

safe_VkMemoryBarrier2::safe_VkMemoryBarrier2(const safe_VkMemoryBarrier2& copy_src) {
    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkMemoryBarrier2& safe_VkMemoryBarrier2::operator=(const safe_VkMemoryBarrier2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkMemoryBarrier2::~safe_VkMemoryBarrier2() { FreePnextChain(pNext); }

void safe_VkMemoryBarrier2::initialize(const VkMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcStageMask = in_struct->srcStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstStageMask = in_struct->dstStageMask;
    dstAccessMask = in_struct->dstAccessMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkMemoryBarrier2::initialize(const safe_VkMemoryBarrier2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcStageMask = copy_src->srcStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstStageMask = copy_src->dstStageMask;
    dstAccessMask = copy_src->dstAccessMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBufferMemoryBarrier2::safe_VkBufferMemoryBarrier2(const VkBufferMemoryBarrier2* in_struct,
                                                         [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcStageMask(in_struct->srcStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstStageMask(in_struct->dstStageMask),
      dstAccessMask(in_struct->dstAccessMask),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      buffer(in_struct->buffer),
      offset(in_struct->offset),
      size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferMemoryBarrier2::safe_VkBufferMemoryBarrier2()
    : sType(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2),
      pNext(nullptr),
      srcStageMask(),
      srcAccessMask(),
      dstStageMask(),
      dstAccessMask(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      buffer(),
      offset(),
      size() {}

safe_VkBufferMemoryBarrier2::safe_VkBufferMemoryBarrier2(const safe_VkBufferMemoryBarrier2& copy_src) {
    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferMemoryBarrier2& safe_VkBufferMemoryBarrier2::operator=(const safe_VkBufferMemoryBarrier2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    buffer = copy_src.buffer;
    offset = copy_src.offset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferMemoryBarrier2::~safe_VkBufferMemoryBarrier2() { FreePnextChain(pNext); }

void safe_VkBufferMemoryBarrier2::initialize(const VkBufferMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcStageMask = in_struct->srcStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstStageMask = in_struct->dstStageMask;
    dstAccessMask = in_struct->dstAccessMask;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferMemoryBarrier2::initialize(const safe_VkBufferMemoryBarrier2* copy_src,
                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcStageMask = copy_src->srcStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstStageMask = copy_src->dstStageMask;
    dstAccessMask = copy_src->dstAccessMask;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    buffer = copy_src->buffer;
    offset = copy_src->offset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkImageMemoryBarrier2::safe_VkImageMemoryBarrier2(const VkImageMemoryBarrier2* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcStageMask(in_struct->srcStageMask),
      srcAccessMask(in_struct->srcAccessMask),
      dstStageMask(in_struct->dstStageMask),
      dstAccessMask(in_struct->dstAccessMask),
      oldLayout(in_struct->oldLayout),
      newLayout(in_struct->newLayout),
      srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
      dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
      image(in_struct->image),
      subresourceRange(in_struct->subresourceRange) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageMemoryBarrier2::safe_VkImageMemoryBarrier2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2),
      pNext(nullptr),
      srcStageMask(),
      srcAccessMask(),
      dstStageMask(),
      dstAccessMask(),
      oldLayout(),
      newLayout(),
      srcQueueFamilyIndex(),
      dstQueueFamilyIndex(),
      image(),
      subresourceRange() {}

safe_VkImageMemoryBarrier2::safe_VkImageMemoryBarrier2(const safe_VkImageMemoryBarrier2& copy_src) {
    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageMemoryBarrier2& safe_VkImageMemoryBarrier2::operator=(const safe_VkImageMemoryBarrier2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcStageMask = copy_src.srcStageMask;
    srcAccessMask = copy_src.srcAccessMask;
    dstStageMask = copy_src.dstStageMask;
    dstAccessMask = copy_src.dstAccessMask;
    oldLayout = copy_src.oldLayout;
    newLayout = copy_src.newLayout;
    srcQueueFamilyIndex = copy_src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src.dstQueueFamilyIndex;
    image = copy_src.image;
    subresourceRange = copy_src.subresourceRange;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageMemoryBarrier2::~safe_VkImageMemoryBarrier2() { FreePnextChain(pNext); }

void safe_VkImageMemoryBarrier2::initialize(const VkImageMemoryBarrier2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcStageMask = in_struct->srcStageMask;
    srcAccessMask = in_struct->srcAccessMask;
    dstStageMask = in_struct->dstStageMask;
    dstAccessMask = in_struct->dstAccessMask;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    image = in_struct->image;
    subresourceRange = in_struct->subresourceRange;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageMemoryBarrier2::initialize(const safe_VkImageMemoryBarrier2* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcStageMask = copy_src->srcStageMask;
    srcAccessMask = copy_src->srcAccessMask;
    dstStageMask = copy_src->dstStageMask;
    dstAccessMask = copy_src->dstAccessMask;
    oldLayout = copy_src->oldLayout;
    newLayout = copy_src->newLayout;
    srcQueueFamilyIndex = copy_src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = copy_src->dstQueueFamilyIndex;
    image = copy_src->image;
    subresourceRange = copy_src->subresourceRange;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDependencyInfo::safe_VkDependencyInfo(const VkDependencyInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      dependencyFlags(in_struct->dependencyFlags),
      memoryBarrierCount(in_struct->memoryBarrierCount),
      pMemoryBarriers(nullptr),
      bufferMemoryBarrierCount(in_struct->bufferMemoryBarrierCount),
      pBufferMemoryBarriers(nullptr),
      imageMemoryBarrierCount(in_struct->imageMemoryBarrierCount),
      pImageMemoryBarriers(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (memoryBarrierCount && in_struct->pMemoryBarriers) {
        pMemoryBarriers = new safe_VkMemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&in_struct->pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && in_struct->pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new safe_VkBufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&in_struct->pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && in_struct->pImageMemoryBarriers) {
        pImageMemoryBarriers = new safe_VkImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&in_struct->pImageMemoryBarriers[i]);
        }
    }
}

safe_VkDependencyInfo::safe_VkDependencyInfo()
    : sType(VK_STRUCTURE_TYPE_DEPENDENCY_INFO),
      pNext(nullptr),
      dependencyFlags(),
      memoryBarrierCount(),
      pMemoryBarriers(nullptr),
      bufferMemoryBarrierCount(),
      pBufferMemoryBarriers(nullptr),
      imageMemoryBarrierCount(),
      pImageMemoryBarriers(nullptr) {}

safe_VkDependencyInfo::safe_VkDependencyInfo(const safe_VkDependencyInfo& copy_src) {
    sType = copy_src.sType;
    dependencyFlags = copy_src.dependencyFlags;
    memoryBarrierCount = copy_src.memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = copy_src.bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = copy_src.imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (memoryBarrierCount && copy_src.pMemoryBarriers) {
        pMemoryBarriers = new safe_VkMemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&copy_src.pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && copy_src.pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new safe_VkBufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&copy_src.pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && copy_src.pImageMemoryBarriers) {
        pImageMemoryBarriers = new safe_VkImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&copy_src.pImageMemoryBarriers[i]);
        }
    }
}

safe_VkDependencyInfo& safe_VkDependencyInfo::operator=(const safe_VkDependencyInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pMemoryBarriers) delete[] pMemoryBarriers;
    if (pBufferMemoryBarriers) delete[] pBufferMemoryBarriers;
    if (pImageMemoryBarriers) delete[] pImageMemoryBarriers;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    dependencyFlags = copy_src.dependencyFlags;
    memoryBarrierCount = copy_src.memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = copy_src.bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = copy_src.imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (memoryBarrierCount && copy_src.pMemoryBarriers) {
        pMemoryBarriers = new safe_VkMemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&copy_src.pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && copy_src.pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new safe_VkBufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&copy_src.pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && copy_src.pImageMemoryBarriers) {
        pImageMemoryBarriers = new safe_VkImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&copy_src.pImageMemoryBarriers[i]);
        }
    }

    return *this;
}

safe_VkDependencyInfo::~safe_VkDependencyInfo() {
    if (pMemoryBarriers) delete[] pMemoryBarriers;
    if (pBufferMemoryBarriers) delete[] pBufferMemoryBarriers;
    if (pImageMemoryBarriers) delete[] pImageMemoryBarriers;
    FreePnextChain(pNext);
}

void safe_VkDependencyInfo::initialize(const VkDependencyInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pMemoryBarriers) delete[] pMemoryBarriers;
    if (pBufferMemoryBarriers) delete[] pBufferMemoryBarriers;
    if (pImageMemoryBarriers) delete[] pImageMemoryBarriers;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dependencyFlags = in_struct->dependencyFlags;
    memoryBarrierCount = in_struct->memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = in_struct->bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = in_struct->imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (memoryBarrierCount && in_struct->pMemoryBarriers) {
        pMemoryBarriers = new safe_VkMemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&in_struct->pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && in_struct->pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new safe_VkBufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&in_struct->pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && in_struct->pImageMemoryBarriers) {
        pImageMemoryBarriers = new safe_VkImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&in_struct->pImageMemoryBarriers[i]);
        }
    }
}

void safe_VkDependencyInfo::initialize(const safe_VkDependencyInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dependencyFlags = copy_src->dependencyFlags;
    memoryBarrierCount = copy_src->memoryBarrierCount;
    pMemoryBarriers = nullptr;
    bufferMemoryBarrierCount = copy_src->bufferMemoryBarrierCount;
    pBufferMemoryBarriers = nullptr;
    imageMemoryBarrierCount = copy_src->imageMemoryBarrierCount;
    pImageMemoryBarriers = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (memoryBarrierCount && copy_src->pMemoryBarriers) {
        pMemoryBarriers = new safe_VkMemoryBarrier2[memoryBarrierCount];
        for (uint32_t i = 0; i < memoryBarrierCount; ++i) {
            pMemoryBarriers[i].initialize(&copy_src->pMemoryBarriers[i]);
        }
    }
    if (bufferMemoryBarrierCount && copy_src->pBufferMemoryBarriers) {
        pBufferMemoryBarriers = new safe_VkBufferMemoryBarrier2[bufferMemoryBarrierCount];
        for (uint32_t i = 0; i < bufferMemoryBarrierCount; ++i) {
            pBufferMemoryBarriers[i].initialize(&copy_src->pBufferMemoryBarriers[i]);
        }
    }
    if (imageMemoryBarrierCount && copy_src->pImageMemoryBarriers) {
        pImageMemoryBarriers = new safe_VkImageMemoryBarrier2[imageMemoryBarrierCount];
        for (uint32_t i = 0; i < imageMemoryBarrierCount; ++i) {
            pImageMemoryBarriers[i].initialize(&copy_src->pImageMemoryBarriers[i]);
        }
    }
}

safe_VkSemaphoreSubmitInfo::safe_VkSemaphoreSubmitInfo(const VkSemaphoreSubmitInfo* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      semaphore(in_struct->semaphore),
      value(in_struct->value),
      stageMask(in_struct->stageMask),
      deviceIndex(in_struct->deviceIndex) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkSemaphoreSubmitInfo::safe_VkSemaphoreSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO), pNext(nullptr), semaphore(), value(), stageMask(), deviceIndex() {}

safe_VkSemaphoreSubmitInfo::safe_VkSemaphoreSubmitInfo(const safe_VkSemaphoreSubmitInfo& copy_src) {
    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    stageMask = copy_src.stageMask;
    deviceIndex = copy_src.deviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkSemaphoreSubmitInfo& safe_VkSemaphoreSubmitInfo::operator=(const safe_VkSemaphoreSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    semaphore = copy_src.semaphore;
    value = copy_src.value;
    stageMask = copy_src.stageMask;
    deviceIndex = copy_src.deviceIndex;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkSemaphoreSubmitInfo::~safe_VkSemaphoreSubmitInfo() { FreePnextChain(pNext); }

void safe_VkSemaphoreSubmitInfo::initialize(const VkSemaphoreSubmitInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    semaphore = in_struct->semaphore;
    value = in_struct->value;
    stageMask = in_struct->stageMask;
    deviceIndex = in_struct->deviceIndex;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkSemaphoreSubmitInfo::initialize(const safe_VkSemaphoreSubmitInfo* copy_src,
                                            [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    semaphore = copy_src->semaphore;
    value = copy_src->value;
    stageMask = copy_src->stageMask;
    deviceIndex = copy_src->deviceIndex;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCommandBufferSubmitInfo::safe_VkCommandBufferSubmitInfo(const VkCommandBufferSubmitInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), commandBuffer(in_struct->commandBuffer), deviceMask(in_struct->deviceMask) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkCommandBufferSubmitInfo::safe_VkCommandBufferSubmitInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO), pNext(nullptr), commandBuffer(), deviceMask() {}

safe_VkCommandBufferSubmitInfo::safe_VkCommandBufferSubmitInfo(const safe_VkCommandBufferSubmitInfo& copy_src) {
    sType = copy_src.sType;
    commandBuffer = copy_src.commandBuffer;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkCommandBufferSubmitInfo& safe_VkCommandBufferSubmitInfo::operator=(const safe_VkCommandBufferSubmitInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    commandBuffer = copy_src.commandBuffer;
    deviceMask = copy_src.deviceMask;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkCommandBufferSubmitInfo::~safe_VkCommandBufferSubmitInfo() { FreePnextChain(pNext); }

void safe_VkCommandBufferSubmitInfo::initialize(const VkCommandBufferSubmitInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    commandBuffer = in_struct->commandBuffer;
    deviceMask = in_struct->deviceMask;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkCommandBufferSubmitInfo::initialize(const safe_VkCommandBufferSubmitInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    commandBuffer = copy_src->commandBuffer;
    deviceMask = copy_src->deviceMask;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkSubmitInfo2::safe_VkSubmitInfo2(const VkSubmitInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      waitSemaphoreInfoCount(in_struct->waitSemaphoreInfoCount),
      pWaitSemaphoreInfos(nullptr),
      commandBufferInfoCount(in_struct->commandBufferInfoCount),
      pCommandBufferInfos(nullptr),
      signalSemaphoreInfoCount(in_struct->signalSemaphoreInfoCount),
      pSignalSemaphoreInfos(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (waitSemaphoreInfoCount && in_struct->pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&in_struct->pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && in_struct->pCommandBufferInfos) {
        pCommandBufferInfos = new safe_VkCommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&in_struct->pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && in_struct->pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&in_struct->pSignalSemaphoreInfos[i]);
        }
    }
}

safe_VkSubmitInfo2::safe_VkSubmitInfo2()
    : sType(VK_STRUCTURE_TYPE_SUBMIT_INFO_2),
      pNext(nullptr),
      flags(),
      waitSemaphoreInfoCount(),
      pWaitSemaphoreInfos(nullptr),
      commandBufferInfoCount(),
      pCommandBufferInfos(nullptr),
      signalSemaphoreInfoCount(),
      pSignalSemaphoreInfos(nullptr) {}

safe_VkSubmitInfo2::safe_VkSubmitInfo2(const safe_VkSubmitInfo2& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    waitSemaphoreInfoCount = copy_src.waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = copy_src.commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = copy_src.signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreInfoCount && copy_src.pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&copy_src.pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && copy_src.pCommandBufferInfos) {
        pCommandBufferInfos = new safe_VkCommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&copy_src.pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && copy_src.pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&copy_src.pSignalSemaphoreInfos[i]);
        }
    }
}

safe_VkSubmitInfo2& safe_VkSubmitInfo2::operator=(const safe_VkSubmitInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pWaitSemaphoreInfos) delete[] pWaitSemaphoreInfos;
    if (pCommandBufferInfos) delete[] pCommandBufferInfos;
    if (pSignalSemaphoreInfos) delete[] pSignalSemaphoreInfos;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    waitSemaphoreInfoCount = copy_src.waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = copy_src.commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = copy_src.signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (waitSemaphoreInfoCount && copy_src.pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&copy_src.pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && copy_src.pCommandBufferInfos) {
        pCommandBufferInfos = new safe_VkCommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&copy_src.pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && copy_src.pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&copy_src.pSignalSemaphoreInfos[i]);
        }
    }

    return *this;
}

safe_VkSubmitInfo2::~safe_VkSubmitInfo2() {
    if (pWaitSemaphoreInfos) delete[] pWaitSemaphoreInfos;
    if (pCommandBufferInfos) delete[] pCommandBufferInfos;
    if (pSignalSemaphoreInfos) delete[] pSignalSemaphoreInfos;
    FreePnextChain(pNext);
}

void safe_VkSubmitInfo2::initialize(const VkSubmitInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pWaitSemaphoreInfos) delete[] pWaitSemaphoreInfos;
    if (pCommandBufferInfos) delete[] pCommandBufferInfos;
    if (pSignalSemaphoreInfos) delete[] pSignalSemaphoreInfos;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    waitSemaphoreInfoCount = in_struct->waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = in_struct->commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = in_struct->signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (waitSemaphoreInfoCount && in_struct->pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&in_struct->pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && in_struct->pCommandBufferInfos) {
        pCommandBufferInfos = new safe_VkCommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&in_struct->pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && in_struct->pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&in_struct->pSignalSemaphoreInfos[i]);
        }
    }
}

void safe_VkSubmitInfo2::initialize(const safe_VkSubmitInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    waitSemaphoreInfoCount = copy_src->waitSemaphoreInfoCount;
    pWaitSemaphoreInfos = nullptr;
    commandBufferInfoCount = copy_src->commandBufferInfoCount;
    pCommandBufferInfos = nullptr;
    signalSemaphoreInfoCount = copy_src->signalSemaphoreInfoCount;
    pSignalSemaphoreInfos = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (waitSemaphoreInfoCount && copy_src->pWaitSemaphoreInfos) {
        pWaitSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[waitSemaphoreInfoCount];
        for (uint32_t i = 0; i < waitSemaphoreInfoCount; ++i) {
            pWaitSemaphoreInfos[i].initialize(&copy_src->pWaitSemaphoreInfos[i]);
        }
    }
    if (commandBufferInfoCount && copy_src->pCommandBufferInfos) {
        pCommandBufferInfos = new safe_VkCommandBufferSubmitInfo[commandBufferInfoCount];
        for (uint32_t i = 0; i < commandBufferInfoCount; ++i) {
            pCommandBufferInfos[i].initialize(&copy_src->pCommandBufferInfos[i]);
        }
    }
    if (signalSemaphoreInfoCount && copy_src->pSignalSemaphoreInfos) {
        pSignalSemaphoreInfos = new safe_VkSemaphoreSubmitInfo[signalSemaphoreInfoCount];
        for (uint32_t i = 0; i < signalSemaphoreInfoCount; ++i) {
            pSignalSemaphoreInfos[i].initialize(&copy_src->pSignalSemaphoreInfos[i]);
        }
    }
}

safe_VkPhysicalDeviceSynchronization2Features::safe_VkPhysicalDeviceSynchronization2Features(
    const VkPhysicalDeviceSynchronization2Features* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), synchronization2(in_struct->synchronization2) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSynchronization2Features::safe_VkPhysicalDeviceSynchronization2Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES), pNext(nullptr), synchronization2() {}

safe_VkPhysicalDeviceSynchronization2Features::safe_VkPhysicalDeviceSynchronization2Features(
    const safe_VkPhysicalDeviceSynchronization2Features& copy_src) {
    sType = copy_src.sType;
    synchronization2 = copy_src.synchronization2;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSynchronization2Features& safe_VkPhysicalDeviceSynchronization2Features::operator=(
    const safe_VkPhysicalDeviceSynchronization2Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    synchronization2 = copy_src.synchronization2;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSynchronization2Features::~safe_VkPhysicalDeviceSynchronization2Features() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceSynchronization2Features::initialize(const VkPhysicalDeviceSynchronization2Features* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    synchronization2 = in_struct->synchronization2;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSynchronization2Features::initialize(const safe_VkPhysicalDeviceSynchronization2Features* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    synchronization2 = copy_src->synchronization2;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(
    const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), shaderZeroInitializeWorkgroupMemory(in_struct->shaderZeroInitializeWorkgroupMemory) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES),
      pNext(nullptr),
      shaderZeroInitializeWorkgroupMemory() {}

safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(
    const safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& copy_src) {
    sType = copy_src.sType;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::operator=(
    const safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderZeroInitializeWorkgroupMemory = copy_src.shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::~safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::initialize(
    const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderZeroInitializeWorkgroupMemory = in_struct->shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::initialize(
    const safe_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderZeroInitializeWorkgroupMemory = copy_src->shaderZeroInitializeWorkgroupMemory;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceImageRobustnessFeatures::safe_VkPhysicalDeviceImageRobustnessFeatures(
    const VkPhysicalDeviceImageRobustnessFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), robustImageAccess(in_struct->robustImageAccess) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceImageRobustnessFeatures::safe_VkPhysicalDeviceImageRobustnessFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES), pNext(nullptr), robustImageAccess() {}

safe_VkPhysicalDeviceImageRobustnessFeatures::safe_VkPhysicalDeviceImageRobustnessFeatures(
    const safe_VkPhysicalDeviceImageRobustnessFeatures& copy_src) {
    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceImageRobustnessFeatures& safe_VkPhysicalDeviceImageRobustnessFeatures::operator=(
    const safe_VkPhysicalDeviceImageRobustnessFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    robustImageAccess = copy_src.robustImageAccess;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceImageRobustnessFeatures::~safe_VkPhysicalDeviceImageRobustnessFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceImageRobustnessFeatures::initialize(const VkPhysicalDeviceImageRobustnessFeatures* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    robustImageAccess = in_struct->robustImageAccess;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceImageRobustnessFeatures::initialize(const safe_VkPhysicalDeviceImageRobustnessFeatures* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    robustImageAccess = copy_src->robustImageAccess;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkBufferCopy2::safe_VkBufferCopy2(const VkBufferCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), srcOffset(in_struct->srcOffset), dstOffset(in_struct->dstOffset), size(in_struct->size) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferCopy2::safe_VkBufferCopy2()
    : sType(VK_STRUCTURE_TYPE_BUFFER_COPY_2), pNext(nullptr), srcOffset(), dstOffset(), size() {}

safe_VkBufferCopy2::safe_VkBufferCopy2(const safe_VkBufferCopy2& copy_src) {
    sType = copy_src.sType;
    srcOffset = copy_src.srcOffset;
    dstOffset = copy_src.dstOffset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferCopy2& safe_VkBufferCopy2::operator=(const safe_VkBufferCopy2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcOffset = copy_src.srcOffset;
    dstOffset = copy_src.dstOffset;
    size = copy_src.size;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferCopy2::~safe_VkBufferCopy2() { FreePnextChain(pNext); }

void safe_VkBufferCopy2::initialize(const VkBufferCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcOffset = in_struct->srcOffset;
    dstOffset = in_struct->dstOffset;
    size = in_struct->size;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferCopy2::initialize(const safe_VkBufferCopy2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcOffset = copy_src->srcOffset;
    dstOffset = copy_src->dstOffset;
    size = copy_src->size;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCopyBufferInfo2::safe_VkCopyBufferInfo2(const VkCopyBufferInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                               bool copy_pnext)
    : sType(in_struct->sType),
      srcBuffer(in_struct->srcBuffer),
      dstBuffer(in_struct->dstBuffer),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkBufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkCopyBufferInfo2::safe_VkCopyBufferInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2), pNext(nullptr), srcBuffer(), dstBuffer(), regionCount(), pRegions(nullptr) {}

safe_VkCopyBufferInfo2::safe_VkCopyBufferInfo2(const safe_VkCopyBufferInfo2& copy_src) {
    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkBufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkCopyBufferInfo2& safe_VkCopyBufferInfo2::operator=(const safe_VkCopyBufferInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkBufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkCopyBufferInfo2::~safe_VkCopyBufferInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkCopyBufferInfo2::initialize(const VkCopyBufferInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcBuffer = in_struct->srcBuffer;
    dstBuffer = in_struct->dstBuffer;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkBufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkCopyBufferInfo2::initialize(const safe_VkCopyBufferInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcBuffer = copy_src->srcBuffer;
    dstBuffer = copy_src->dstBuffer;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkBufferCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkImageCopy2::safe_VkImageCopy2(const VkImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcSubresource(in_struct->srcSubresource),
      srcOffset(in_struct->srcOffset),
      dstSubresource(in_struct->dstSubresource),
      dstOffset(in_struct->dstOffset),
      extent(in_struct->extent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageCopy2::safe_VkImageCopy2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_COPY_2),
      pNext(nullptr),
      srcSubresource(),
      srcOffset(),
      dstSubresource(),
      dstOffset(),
      extent() {}

safe_VkImageCopy2::safe_VkImageCopy2(const safe_VkImageCopy2& copy_src) {
    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageCopy2& safe_VkImageCopy2::operator=(const safe_VkImageCopy2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageCopy2::~safe_VkImageCopy2() { FreePnextChain(pNext); }

void safe_VkImageCopy2::initialize(const VkImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubresource = in_struct->srcSubresource;
    srcOffset = in_struct->srcOffset;
    dstSubresource = in_struct->dstSubresource;
    dstOffset = in_struct->dstOffset;
    extent = in_struct->extent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageCopy2::initialize(const safe_VkImageCopy2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubresource = copy_src->srcSubresource;
    srcOffset = copy_src->srcOffset;
    dstSubresource = copy_src->dstSubresource;
    dstOffset = copy_src->dstOffset;
    extent = copy_src->extent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCopyImageInfo2::safe_VkCopyImageInfo2(const VkCopyImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkCopyImageInfo2::safe_VkCopyImageInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

safe_VkCopyImageInfo2::safe_VkCopyImageInfo2(const safe_VkCopyImageInfo2& copy_src) {
    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkCopyImageInfo2& safe_VkCopyImageInfo2::operator=(const safe_VkCopyImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkCopyImageInfo2::~safe_VkCopyImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkCopyImageInfo2::initialize(const VkCopyImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkCopyImageInfo2::initialize(const safe_VkCopyImageInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkBufferImageCopy2::safe_VkBufferImageCopy2(const VkBufferImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                                 bool copy_pnext)
    : sType(in_struct->sType),
      bufferOffset(in_struct->bufferOffset),
      bufferRowLength(in_struct->bufferRowLength),
      bufferImageHeight(in_struct->bufferImageHeight),
      imageSubresource(in_struct->imageSubresource),
      imageOffset(in_struct->imageOffset),
      imageExtent(in_struct->imageExtent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkBufferImageCopy2::safe_VkBufferImageCopy2()
    : sType(VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2),
      pNext(nullptr),
      bufferOffset(),
      bufferRowLength(),
      bufferImageHeight(),
      imageSubresource(),
      imageOffset(),
      imageExtent() {}

safe_VkBufferImageCopy2::safe_VkBufferImageCopy2(const safe_VkBufferImageCopy2& copy_src) {
    sType = copy_src.sType;
    bufferOffset = copy_src.bufferOffset;
    bufferRowLength = copy_src.bufferRowLength;
    bufferImageHeight = copy_src.bufferImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkBufferImageCopy2& safe_VkBufferImageCopy2::operator=(const safe_VkBufferImageCopy2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    bufferOffset = copy_src.bufferOffset;
    bufferRowLength = copy_src.bufferRowLength;
    bufferImageHeight = copy_src.bufferImageHeight;
    imageSubresource = copy_src.imageSubresource;
    imageOffset = copy_src.imageOffset;
    imageExtent = copy_src.imageExtent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkBufferImageCopy2::~safe_VkBufferImageCopy2() { FreePnextChain(pNext); }

void safe_VkBufferImageCopy2::initialize(const VkBufferImageCopy2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    bufferOffset = in_struct->bufferOffset;
    bufferRowLength = in_struct->bufferRowLength;
    bufferImageHeight = in_struct->bufferImageHeight;
    imageSubresource = in_struct->imageSubresource;
    imageOffset = in_struct->imageOffset;
    imageExtent = in_struct->imageExtent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkBufferImageCopy2::initialize(const safe_VkBufferImageCopy2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    bufferOffset = copy_src->bufferOffset;
    bufferRowLength = copy_src->bufferRowLength;
    bufferImageHeight = copy_src->bufferImageHeight;
    imageSubresource = copy_src->imageSubresource;
    imageOffset = copy_src->imageOffset;
    imageExtent = copy_src->imageExtent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCopyBufferToImageInfo2::safe_VkCopyBufferToImageInfo2(const VkCopyBufferToImageInfo2* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcBuffer(in_struct->srcBuffer),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkCopyBufferToImageInfo2::safe_VkCopyBufferToImageInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2),
      pNext(nullptr),
      srcBuffer(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

safe_VkCopyBufferToImageInfo2::safe_VkCopyBufferToImageInfo2(const safe_VkCopyBufferToImageInfo2& copy_src) {
    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkCopyBufferToImageInfo2& safe_VkCopyBufferToImageInfo2::operator=(const safe_VkCopyBufferToImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcBuffer = copy_src.srcBuffer;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkCopyBufferToImageInfo2::~safe_VkCopyBufferToImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkCopyBufferToImageInfo2::initialize(const VkCopyBufferToImageInfo2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcBuffer = in_struct->srcBuffer;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkCopyBufferToImageInfo2::initialize(const safe_VkCopyBufferToImageInfo2* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcBuffer = copy_src->srcBuffer;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkCopyImageToBufferInfo2::safe_VkCopyImageToBufferInfo2(const VkCopyImageToBufferInfo2* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      dstBuffer(in_struct->dstBuffer),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkCopyImageToBufferInfo2::safe_VkCopyImageToBufferInfo2()
    : sType(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstBuffer(),
      regionCount(),
      pRegions(nullptr) {}

safe_VkCopyImageToBufferInfo2::safe_VkCopyImageToBufferInfo2(const safe_VkCopyImageToBufferInfo2& copy_src) {
    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkCopyImageToBufferInfo2& safe_VkCopyImageToBufferInfo2::operator=(const safe_VkCopyImageToBufferInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstBuffer = copy_src.dstBuffer;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkCopyImageToBufferInfo2::~safe_VkCopyImageToBufferInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkCopyImageToBufferInfo2::initialize(const VkCopyImageToBufferInfo2* in_struct,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstBuffer = in_struct->dstBuffer;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkCopyImageToBufferInfo2::initialize(const safe_VkCopyImageToBufferInfo2* copy_src,
                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstBuffer = copy_src->dstBuffer;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkBufferImageCopy2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkImageBlit2::safe_VkImageBlit2(const VkImageBlit2* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), srcSubresource(in_struct->srcSubresource), dstSubresource(in_struct->dstSubresource) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = in_struct->srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = in_struct->dstOffsets[i];
    }
}

safe_VkImageBlit2::safe_VkImageBlit2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_BLIT_2), pNext(nullptr), srcSubresource(), dstSubresource() {}

safe_VkImageBlit2::safe_VkImageBlit2(const safe_VkImageBlit2& copy_src) {
    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    dstSubresource = copy_src.dstSubresource;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = copy_src.srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = copy_src.dstOffsets[i];
    }
}

safe_VkImageBlit2& safe_VkImageBlit2::operator=(const safe_VkImageBlit2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    dstSubresource = copy_src.dstSubresource;
    pNext = SafePnextCopy(copy_src.pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = copy_src.srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = copy_src.dstOffsets[i];
    }

    return *this;
}

safe_VkImageBlit2::~safe_VkImageBlit2() { FreePnextChain(pNext); }

void safe_VkImageBlit2::initialize(const VkImageBlit2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubresource = in_struct->srcSubresource;
    dstSubresource = in_struct->dstSubresource;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = in_struct->srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = in_struct->dstOffsets[i];
    }
}

void safe_VkImageBlit2::initialize(const safe_VkImageBlit2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubresource = copy_src->srcSubresource;
    dstSubresource = copy_src->dstSubresource;
    pNext = SafePnextCopy(copy_src->pNext);

    for (uint32_t i = 0; i < 2; ++i) {
        srcOffsets[i] = copy_src->srcOffsets[i];
    }

    for (uint32_t i = 0; i < 2; ++i) {
        dstOffsets[i] = copy_src->dstOffsets[i];
    }
}

safe_VkBlitImageInfo2::safe_VkBlitImageInfo2(const VkBlitImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                             bool copy_pnext)
    : sType(in_struct->sType),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr),
      filter(in_struct->filter) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkBlitImageInfo2::safe_VkBlitImageInfo2()
    : sType(VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr),
      filter() {}

safe_VkBlitImageInfo2::safe_VkBlitImageInfo2(const safe_VkBlitImageInfo2& copy_src) {
    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    filter = copy_src.filter;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkBlitImageInfo2& safe_VkBlitImageInfo2::operator=(const safe_VkBlitImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    filter = copy_src.filter;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkBlitImageInfo2::~safe_VkBlitImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkBlitImageInfo2::initialize(const VkBlitImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    filter = in_struct->filter;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkBlitImageInfo2::initialize(const safe_VkBlitImageInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    filter = copy_src->filter;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkImageBlit2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkImageResolve2::safe_VkImageResolve2(const VkImageResolve2* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      srcSubresource(in_struct->srcSubresource),
      srcOffset(in_struct->srcOffset),
      dstSubresource(in_struct->dstSubresource),
      dstOffset(in_struct->dstOffset),
      extent(in_struct->extent) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkImageResolve2::safe_VkImageResolve2()
    : sType(VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2),
      pNext(nullptr),
      srcSubresource(),
      srcOffset(),
      dstSubresource(),
      dstOffset(),
      extent() {}

safe_VkImageResolve2::safe_VkImageResolve2(const safe_VkImageResolve2& copy_src) {
    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkImageResolve2& safe_VkImageResolve2::operator=(const safe_VkImageResolve2& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcSubresource = copy_src.srcSubresource;
    srcOffset = copy_src.srcOffset;
    dstSubresource = copy_src.dstSubresource;
    dstOffset = copy_src.dstOffset;
    extent = copy_src.extent;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkImageResolve2::~safe_VkImageResolve2() { FreePnextChain(pNext); }

void safe_VkImageResolve2::initialize(const VkImageResolve2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcSubresource = in_struct->srcSubresource;
    srcOffset = in_struct->srcOffset;
    dstSubresource = in_struct->dstSubresource;
    dstOffset = in_struct->dstOffset;
    extent = in_struct->extent;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkImageResolve2::initialize(const safe_VkImageResolve2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcSubresource = copy_src->srcSubresource;
    srcOffset = copy_src->srcOffset;
    dstSubresource = copy_src->dstSubresource;
    dstOffset = copy_src->dstOffset;
    extent = copy_src->extent;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkResolveImageInfo2::safe_VkResolveImageInfo2(const VkResolveImageInfo2* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      srcImage(in_struct->srcImage),
      srcImageLayout(in_struct->srcImageLayout),
      dstImage(in_struct->dstImage),
      dstImageLayout(in_struct->dstImageLayout),
      regionCount(in_struct->regionCount),
      pRegions(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkResolveImageInfo2::safe_VkResolveImageInfo2()
    : sType(VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2),
      pNext(nullptr),
      srcImage(),
      srcImageLayout(),
      dstImage(),
      dstImageLayout(),
      regionCount(),
      pRegions(nullptr) {}

safe_VkResolveImageInfo2::safe_VkResolveImageInfo2(const safe_VkResolveImageInfo2& copy_src) {
    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }
}

safe_VkResolveImageInfo2& safe_VkResolveImageInfo2::operator=(const safe_VkResolveImageInfo2& copy_src) {
    if (&copy_src == this) return *this;

    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    srcImage = copy_src.srcImage;
    srcImageLayout = copy_src.srcImageLayout;
    dstImage = copy_src.dstImage;
    dstImageLayout = copy_src.dstImageLayout;
    regionCount = copy_src.regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (regionCount && copy_src.pRegions) {
        pRegions = new safe_VkImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkResolveImageInfo2::~safe_VkResolveImageInfo2() {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
}

void safe_VkResolveImageInfo2::initialize(const VkResolveImageInfo2* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pRegions) delete[] pRegions;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    srcImage = in_struct->srcImage;
    srcImageLayout = in_struct->srcImageLayout;
    dstImage = in_struct->dstImage;
    dstImageLayout = in_struct->dstImageLayout;
    regionCount = in_struct->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (regionCount && in_struct->pRegions) {
        pRegions = new safe_VkImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkResolveImageInfo2::initialize(const safe_VkResolveImageInfo2* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    srcImage = copy_src->srcImage;
    srcImageLayout = copy_src->srcImageLayout;
    dstImage = copy_src->dstImage;
    dstImageLayout = copy_src->dstImageLayout;
    regionCount = copy_src->regionCount;
    pRegions = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (regionCount && copy_src->pRegions) {
        pRegions = new safe_VkImageResolve2[regionCount];
        for (uint32_t i = 0; i < regionCount; ++i) {
            pRegions[i].initialize(&copy_src->pRegions[i]);
        }
    }
}

safe_VkPhysicalDeviceSubgroupSizeControlFeatures::safe_VkPhysicalDeviceSubgroupSizeControlFeatures(
    const VkPhysicalDeviceSubgroupSizeControlFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      subgroupSizeControl(in_struct->subgroupSizeControl),
      computeFullSubgroups(in_struct->computeFullSubgroups) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSubgroupSizeControlFeatures::safe_VkPhysicalDeviceSubgroupSizeControlFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES),
      pNext(nullptr),
      subgroupSizeControl(),
      computeFullSubgroups() {}

safe_VkPhysicalDeviceSubgroupSizeControlFeatures::safe_VkPhysicalDeviceSubgroupSizeControlFeatures(
    const safe_VkPhysicalDeviceSubgroupSizeControlFeatures& copy_src) {
    sType = copy_src.sType;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSubgroupSizeControlFeatures& safe_VkPhysicalDeviceSubgroupSizeControlFeatures::operator=(
    const safe_VkPhysicalDeviceSubgroupSizeControlFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    subgroupSizeControl = copy_src.subgroupSizeControl;
    computeFullSubgroups = copy_src.computeFullSubgroups;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSubgroupSizeControlFeatures::~safe_VkPhysicalDeviceSubgroupSizeControlFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceSubgroupSizeControlFeatures::initialize(const VkPhysicalDeviceSubgroupSizeControlFeatures* in_struct,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    subgroupSizeControl = in_struct->subgroupSizeControl;
    computeFullSubgroups = in_struct->computeFullSubgroups;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSubgroupSizeControlFeatures::initialize(const safe_VkPhysicalDeviceSubgroupSizeControlFeatures* copy_src,
                                                                  [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    subgroupSizeControl = copy_src->subgroupSizeControl;
    computeFullSubgroups = copy_src->computeFullSubgroups;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceSubgroupSizeControlProperties::safe_VkPhysicalDeviceSubgroupSizeControlProperties(
    const VkPhysicalDeviceSubgroupSizeControlProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      minSubgroupSize(in_struct->minSubgroupSize),
      maxSubgroupSize(in_struct->maxSubgroupSize),
      maxComputeWorkgroupSubgroups(in_struct->maxComputeWorkgroupSubgroups),
      requiredSubgroupSizeStages(in_struct->requiredSubgroupSizeStages) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceSubgroupSizeControlProperties::safe_VkPhysicalDeviceSubgroupSizeControlProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES),
      pNext(nullptr),
      minSubgroupSize(),
      maxSubgroupSize(),
      maxComputeWorkgroupSubgroups(),
      requiredSubgroupSizeStages() {}

safe_VkPhysicalDeviceSubgroupSizeControlProperties::safe_VkPhysicalDeviceSubgroupSizeControlProperties(
    const safe_VkPhysicalDeviceSubgroupSizeControlProperties& copy_src) {
    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceSubgroupSizeControlProperties& safe_VkPhysicalDeviceSubgroupSizeControlProperties::operator=(
    const safe_VkPhysicalDeviceSubgroupSizeControlProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    minSubgroupSize = copy_src.minSubgroupSize;
    maxSubgroupSize = copy_src.maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src.maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src.requiredSubgroupSizeStages;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceSubgroupSizeControlProperties::~safe_VkPhysicalDeviceSubgroupSizeControlProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceSubgroupSizeControlProperties::initialize(const VkPhysicalDeviceSubgroupSizeControlProperties* in_struct,
                                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    minSubgroupSize = in_struct->minSubgroupSize;
    maxSubgroupSize = in_struct->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = in_struct->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = in_struct->requiredSubgroupSizeStages;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceSubgroupSizeControlProperties::initialize(
    const safe_VkPhysicalDeviceSubgroupSizeControlProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    minSubgroupSize = copy_src->minSubgroupSize;
    maxSubgroupSize = copy_src->maxSubgroupSize;
    maxComputeWorkgroupSubgroups = copy_src->maxComputeWorkgroupSubgroups;
    requiredSubgroupSizeStages = copy_src->requiredSubgroupSizeStages;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(
    const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), requiredSubgroupSize(in_struct->requiredSubgroupSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO), pNext(nullptr), requiredSubgroupSize() {}

safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(
    const safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& copy_src) {
    sType = copy_src.sType;
    requiredSubgroupSize = copy_src.requiredSubgroupSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::operator=(
    const safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    requiredSubgroupSize = copy_src.requiredSubgroupSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::~safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo() {
    FreePnextChain(pNext);
}

void safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::initialize(
    const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    requiredSubgroupSize = in_struct->requiredSubgroupSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::initialize(
    const safe_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    requiredSubgroupSize = copy_src->requiredSubgroupSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceInlineUniformBlockFeatures::safe_VkPhysicalDeviceInlineUniformBlockFeatures(
    const VkPhysicalDeviceInlineUniformBlockFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      inlineUniformBlock(in_struct->inlineUniformBlock),
      descriptorBindingInlineUniformBlockUpdateAfterBind(in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceInlineUniformBlockFeatures::safe_VkPhysicalDeviceInlineUniformBlockFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES),
      pNext(nullptr),
      inlineUniformBlock(),
      descriptorBindingInlineUniformBlockUpdateAfterBind() {}

safe_VkPhysicalDeviceInlineUniformBlockFeatures::safe_VkPhysicalDeviceInlineUniformBlockFeatures(
    const safe_VkPhysicalDeviceInlineUniformBlockFeatures& copy_src) {
    sType = copy_src.sType;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceInlineUniformBlockFeatures& safe_VkPhysicalDeviceInlineUniformBlockFeatures::operator=(
    const safe_VkPhysicalDeviceInlineUniformBlockFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    inlineUniformBlock = copy_src.inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src.descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceInlineUniformBlockFeatures::~safe_VkPhysicalDeviceInlineUniformBlockFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceInlineUniformBlockFeatures::initialize(const VkPhysicalDeviceInlineUniformBlockFeatures* in_struct,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    inlineUniformBlock = in_struct->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = in_struct->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceInlineUniformBlockFeatures::initialize(const safe_VkPhysicalDeviceInlineUniformBlockFeatures* copy_src,
                                                                 [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    inlineUniformBlock = copy_src->inlineUniformBlock;
    descriptorBindingInlineUniformBlockUpdateAfterBind = copy_src->descriptorBindingInlineUniformBlockUpdateAfterBind;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceInlineUniformBlockProperties::safe_VkPhysicalDeviceInlineUniformBlockProperties(
    const VkPhysicalDeviceInlineUniformBlockProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      maxInlineUniformBlockSize(in_struct->maxInlineUniformBlockSize),
      maxPerStageDescriptorInlineUniformBlocks(in_struct->maxPerStageDescriptorInlineUniformBlocks),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks),
      maxDescriptorSetInlineUniformBlocks(in_struct->maxDescriptorSetInlineUniformBlocks),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks(in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceInlineUniformBlockProperties::safe_VkPhysicalDeviceInlineUniformBlockProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES),
      pNext(nullptr),
      maxInlineUniformBlockSize(),
      maxPerStageDescriptorInlineUniformBlocks(),
      maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(),
      maxDescriptorSetInlineUniformBlocks(),
      maxDescriptorSetUpdateAfterBindInlineUniformBlocks() {}

safe_VkPhysicalDeviceInlineUniformBlockProperties::safe_VkPhysicalDeviceInlineUniformBlockProperties(
    const safe_VkPhysicalDeviceInlineUniformBlockProperties& copy_src) {
    sType = copy_src.sType;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceInlineUniformBlockProperties& safe_VkPhysicalDeviceInlineUniformBlockProperties::operator=(
    const safe_VkPhysicalDeviceInlineUniformBlockProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxInlineUniformBlockSize = copy_src.maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src.maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src.maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceInlineUniformBlockProperties::~safe_VkPhysicalDeviceInlineUniformBlockProperties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceInlineUniformBlockProperties::initialize(const VkPhysicalDeviceInlineUniformBlockProperties* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxInlineUniformBlockSize = in_struct->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = in_struct->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = in_struct->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = in_struct->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = in_struct->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceInlineUniformBlockProperties::initialize(
    const safe_VkPhysicalDeviceInlineUniformBlockProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxInlineUniformBlockSize = copy_src->maxInlineUniformBlockSize;
    maxPerStageDescriptorInlineUniformBlocks = copy_src->maxPerStageDescriptorInlineUniformBlocks;
    maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = copy_src->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    maxDescriptorSetInlineUniformBlocks = copy_src->maxDescriptorSetInlineUniformBlocks;
    maxDescriptorSetUpdateAfterBindInlineUniformBlocks = copy_src->maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkWriteDescriptorSetInlineUniformBlock::safe_VkWriteDescriptorSetInlineUniformBlock(
    const VkWriteDescriptorSetInlineUniformBlock* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), dataSize(in_struct->dataSize), pData(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

safe_VkWriteDescriptorSetInlineUniformBlock::safe_VkWriteDescriptorSetInlineUniformBlock()
    : sType(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK), pNext(nullptr), dataSize(), pData(nullptr) {}

safe_VkWriteDescriptorSetInlineUniformBlock::safe_VkWriteDescriptorSetInlineUniformBlock(
    const safe_VkWriteDescriptorSetInlineUniformBlock& copy_src) {
    sType = copy_src.sType;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }
}

safe_VkWriteDescriptorSetInlineUniformBlock& safe_VkWriteDescriptorSetInlineUniformBlock::operator=(
    const safe_VkWriteDescriptorSetInlineUniformBlock& copy_src) {
    if (&copy_src == this) return *this;

    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);

    sType = copy_src.sType;
    dataSize = copy_src.dataSize;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pData != nullptr) {
        auto temp = new std::byte[copy_src.dataSize];
        std::memcpy(temp, copy_src.pData, copy_src.dataSize);
        pData = temp;
    }

    return *this;
}

safe_VkWriteDescriptorSetInlineUniformBlock::~safe_VkWriteDescriptorSetInlineUniformBlock() {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
}

void safe_VkWriteDescriptorSetInlineUniformBlock::initialize(const VkWriteDescriptorSetInlineUniformBlock* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    if (pData != nullptr) {
        auto temp = reinterpret_cast<const std::byte*>(pData);
        delete[] temp;
    }
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dataSize = in_struct->dataSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pData != nullptr) {
        auto temp = new std::byte[in_struct->dataSize];
        std::memcpy(temp, in_struct->pData, in_struct->dataSize);
        pData = temp;
    }
}

void safe_VkWriteDescriptorSetInlineUniformBlock::initialize(const safe_VkWriteDescriptorSetInlineUniformBlock* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dataSize = copy_src->dataSize;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pData != nullptr) {
        auto temp = new std::byte[copy_src->dataSize];
        std::memcpy(temp, copy_src->pData, copy_src->dataSize);
        pData = temp;
    }
}

safe_VkDescriptorPoolInlineUniformBlockCreateInfo::safe_VkDescriptorPoolInlineUniformBlockCreateInfo(
    const VkDescriptorPoolInlineUniformBlockCreateInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxInlineUniformBlockBindings(in_struct->maxInlineUniformBlockBindings) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkDescriptorPoolInlineUniformBlockCreateInfo::safe_VkDescriptorPoolInlineUniformBlockCreateInfo()
    : sType(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO), pNext(nullptr), maxInlineUniformBlockBindings() {}

safe_VkDescriptorPoolInlineUniformBlockCreateInfo::safe_VkDescriptorPoolInlineUniformBlockCreateInfo(
    const safe_VkDescriptorPoolInlineUniformBlockCreateInfo& copy_src) {
    sType = copy_src.sType;
    maxInlineUniformBlockBindings = copy_src.maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkDescriptorPoolInlineUniformBlockCreateInfo& safe_VkDescriptorPoolInlineUniformBlockCreateInfo::operator=(
    const safe_VkDescriptorPoolInlineUniformBlockCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxInlineUniformBlockBindings = copy_src.maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkDescriptorPoolInlineUniformBlockCreateInfo::~safe_VkDescriptorPoolInlineUniformBlockCreateInfo() { FreePnextChain(pNext); }

void safe_VkDescriptorPoolInlineUniformBlockCreateInfo::initialize(const VkDescriptorPoolInlineUniformBlockCreateInfo* in_struct,
                                                                   [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxInlineUniformBlockBindings = in_struct->maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkDescriptorPoolInlineUniformBlockCreateInfo::initialize(
    const safe_VkDescriptorPoolInlineUniformBlockCreateInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxInlineUniformBlockBindings = copy_src->maxInlineUniformBlockBindings;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures::safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(
    const VkPhysicalDeviceTextureCompressionASTCHDRFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType), textureCompressionASTC_HDR(in_struct->textureCompressionASTC_HDR) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures::safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES),
      pNext(nullptr),
      textureCompressionASTC_HDR() {}

safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures::safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(
    const safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures& copy_src) {
    sType = copy_src.sType;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures& safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures::operator=(
    const safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    textureCompressionASTC_HDR = copy_src.textureCompressionASTC_HDR;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures::~safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures::initialize(
    const VkPhysicalDeviceTextureCompressionASTCHDRFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    textureCompressionASTC_HDR = in_struct->textureCompressionASTC_HDR;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures::initialize(
    const safe_VkPhysicalDeviceTextureCompressionASTCHDRFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    textureCompressionASTC_HDR = copy_src->textureCompressionASTC_HDR;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderingAttachmentInfo::safe_VkRenderingAttachmentInfo(const VkRenderingAttachmentInfo* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      imageView(in_struct->imageView),
      imageLayout(in_struct->imageLayout),
      resolveMode(in_struct->resolveMode),
      resolveImageView(in_struct->resolveImageView),
      resolveImageLayout(in_struct->resolveImageLayout),
      loadOp(in_struct->loadOp),
      storeOp(in_struct->storeOp),
      clearValue(in_struct->clearValue) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkRenderingAttachmentInfo::safe_VkRenderingAttachmentInfo()
    : sType(VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO),
      pNext(nullptr),
      imageView(),
      imageLayout(),
      resolveMode(),
      resolveImageView(),
      resolveImageLayout(),
      loadOp(),
      storeOp(),
      clearValue() {}

safe_VkRenderingAttachmentInfo::safe_VkRenderingAttachmentInfo(const safe_VkRenderingAttachmentInfo& copy_src) {
    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    resolveMode = copy_src.resolveMode;
    resolveImageView = copy_src.resolveImageView;
    resolveImageLayout = copy_src.resolveImageLayout;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    clearValue = copy_src.clearValue;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkRenderingAttachmentInfo& safe_VkRenderingAttachmentInfo::operator=(const safe_VkRenderingAttachmentInfo& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    imageView = copy_src.imageView;
    imageLayout = copy_src.imageLayout;
    resolveMode = copy_src.resolveMode;
    resolveImageView = copy_src.resolveImageView;
    resolveImageLayout = copy_src.resolveImageLayout;
    loadOp = copy_src.loadOp;
    storeOp = copy_src.storeOp;
    clearValue = copy_src.clearValue;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkRenderingAttachmentInfo::~safe_VkRenderingAttachmentInfo() { FreePnextChain(pNext); }

void safe_VkRenderingAttachmentInfo::initialize(const VkRenderingAttachmentInfo* in_struct,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    imageView = in_struct->imageView;
    imageLayout = in_struct->imageLayout;
    resolveMode = in_struct->resolveMode;
    resolveImageView = in_struct->resolveImageView;
    resolveImageLayout = in_struct->resolveImageLayout;
    loadOp = in_struct->loadOp;
    storeOp = in_struct->storeOp;
    clearValue = in_struct->clearValue;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkRenderingAttachmentInfo::initialize(const safe_VkRenderingAttachmentInfo* copy_src,
                                                [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    imageView = copy_src->imageView;
    imageLayout = copy_src->imageLayout;
    resolveMode = copy_src->resolveMode;
    resolveImageView = copy_src->resolveImageView;
    resolveImageLayout = copy_src->resolveImageLayout;
    loadOp = copy_src->loadOp;
    storeOp = copy_src->storeOp;
    clearValue = copy_src->clearValue;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkRenderingInfo::safe_VkRenderingInfo(const VkRenderingInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
                                           bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      renderArea(in_struct->renderArea),
      layerCount(in_struct->layerCount),
      viewMask(in_struct->viewMask),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachments(nullptr),
      pDepthAttachment(nullptr),
      pStencilAttachment(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new safe_VkRenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (in_struct->pDepthAttachment) pDepthAttachment = new safe_VkRenderingAttachmentInfo(in_struct->pDepthAttachment);
    if (in_struct->pStencilAttachment) pStencilAttachment = new safe_VkRenderingAttachmentInfo(in_struct->pStencilAttachment);
}

safe_VkRenderingInfo::safe_VkRenderingInfo()
    : sType(VK_STRUCTURE_TYPE_RENDERING_INFO),
      pNext(nullptr),
      flags(),
      renderArea(),
      layerCount(),
      viewMask(),
      colorAttachmentCount(),
      pColorAttachments(nullptr),
      pDepthAttachment(nullptr),
      pStencilAttachment(nullptr) {}

safe_VkRenderingInfo::safe_VkRenderingInfo(const safe_VkRenderingInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    renderArea = copy_src.renderArea;
    layerCount = copy_src.layerCount;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new safe_VkRenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (copy_src.pDepthAttachment) pDepthAttachment = new safe_VkRenderingAttachmentInfo(*copy_src.pDepthAttachment);
    if (copy_src.pStencilAttachment) pStencilAttachment = new safe_VkRenderingAttachmentInfo(*copy_src.pStencilAttachment);
}

safe_VkRenderingInfo& safe_VkRenderingInfo::operator=(const safe_VkRenderingInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachments) delete[] pColorAttachments;
    if (pDepthAttachment) delete pDepthAttachment;
    if (pStencilAttachment) delete pStencilAttachment;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    renderArea = copy_src.renderArea;
    layerCount = copy_src.layerCount;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (colorAttachmentCount && copy_src.pColorAttachments) {
        pColorAttachments = new safe_VkRenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src.pColorAttachments[i]);
        }
    }
    if (copy_src.pDepthAttachment) pDepthAttachment = new safe_VkRenderingAttachmentInfo(*copy_src.pDepthAttachment);
    if (copy_src.pStencilAttachment) pStencilAttachment = new safe_VkRenderingAttachmentInfo(*copy_src.pStencilAttachment);

    return *this;
}

safe_VkRenderingInfo::~safe_VkRenderingInfo() {
    if (pColorAttachments) delete[] pColorAttachments;
    if (pDepthAttachment) delete pDepthAttachment;
    if (pStencilAttachment) delete pStencilAttachment;
    FreePnextChain(pNext);
}

void safe_VkRenderingInfo::initialize(const VkRenderingInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachments) delete[] pColorAttachments;
    if (pDepthAttachment) delete pDepthAttachment;
    if (pStencilAttachment) delete pStencilAttachment;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    renderArea = in_struct->renderArea;
    layerCount = in_struct->layerCount;
    viewMask = in_struct->viewMask;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (colorAttachmentCount && in_struct->pColorAttachments) {
        pColorAttachments = new safe_VkRenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&in_struct->pColorAttachments[i]);
        }
    }
    if (in_struct->pDepthAttachment) pDepthAttachment = new safe_VkRenderingAttachmentInfo(in_struct->pDepthAttachment);
    if (in_struct->pStencilAttachment) pStencilAttachment = new safe_VkRenderingAttachmentInfo(in_struct->pStencilAttachment);
}

void safe_VkRenderingInfo::initialize(const safe_VkRenderingInfo* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    renderArea = copy_src->renderArea;
    layerCount = copy_src->layerCount;
    viewMask = copy_src->viewMask;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pDepthAttachment = nullptr;
    pStencilAttachment = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (colorAttachmentCount && copy_src->pColorAttachments) {
        pColorAttachments = new safe_VkRenderingAttachmentInfo[colorAttachmentCount];
        for (uint32_t i = 0; i < colorAttachmentCount; ++i) {
            pColorAttachments[i].initialize(&copy_src->pColorAttachments[i]);
        }
    }
    if (copy_src->pDepthAttachment) pDepthAttachment = new safe_VkRenderingAttachmentInfo(*copy_src->pDepthAttachment);
    if (copy_src->pStencilAttachment) pStencilAttachment = new safe_VkRenderingAttachmentInfo(*copy_src->pStencilAttachment);
}

safe_VkPipelineRenderingCreateInfo::safe_VkPipelineRenderingCreateInfo(const VkPipelineRenderingCreateInfo* in_struct,
                                                                       [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      viewMask(in_struct->viewMask),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(in_struct->depthAttachmentFormat),
      stencilAttachmentFormat(in_struct->stencilAttachmentFormat) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    bool custom_init = copy_state && copy_state->init;
    if (custom_init) {
        custom_init =
            copy_state->init(reinterpret_cast<VkBaseOutStructure*>(this), reinterpret_cast<const VkBaseOutStructure*>(in_struct));
    }
    if (!custom_init) {
        // The custom iniitalization was not used, so do the regular initialization
        if (in_struct->pColorAttachmentFormats) {
            pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
            memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
                   sizeof(VkFormat) * in_struct->colorAttachmentCount);
        }
    }
}

safe_VkPipelineRenderingCreateInfo::safe_VkPipelineRenderingCreateInfo()
    : sType(VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO),
      pNext(nullptr),
      viewMask(),
      colorAttachmentCount(),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(),
      stencilAttachmentFormat() {}

safe_VkPipelineRenderingCreateInfo::safe_VkPipelineRenderingCreateInfo(const safe_VkPipelineRenderingCreateInfo& copy_src) {
    sType = copy_src.sType;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }
}

safe_VkPipelineRenderingCreateInfo& safe_VkPipelineRenderingCreateInfo::operator=(
    const safe_VkPipelineRenderingCreateInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }

    return *this;
}

safe_VkPipelineRenderingCreateInfo::~safe_VkPipelineRenderingCreateInfo() {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
}

void safe_VkPipelineRenderingCreateInfo::initialize(const VkPipelineRenderingCreateInfo* in_struct,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    viewMask = in_struct->viewMask;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = in_struct->depthAttachmentFormat;
    stencilAttachmentFormat = in_struct->stencilAttachmentFormat;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    bool custom_init = copy_state && copy_state->init;
    if (custom_init) {
        custom_init =
            copy_state->init(reinterpret_cast<VkBaseOutStructure*>(this), reinterpret_cast<const VkBaseOutStructure*>(in_struct));
    }
    if (!custom_init) {
        // The custom iniitalization was not used, so do the regular initialization
        if (in_struct->pColorAttachmentFormats) {
            pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
            memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
                   sizeof(VkFormat) * in_struct->colorAttachmentCount);
        }
    }
}

void safe_VkPipelineRenderingCreateInfo::initialize(const safe_VkPipelineRenderingCreateInfo* copy_src,
                                                    [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    viewMask = copy_src->viewMask;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src->depthAttachmentFormat;
    stencilAttachmentFormat = copy_src->stencilAttachmentFormat;

    if (copy_src->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src->pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src->colorAttachmentCount);
    }
}

safe_VkPhysicalDeviceDynamicRenderingFeatures::safe_VkPhysicalDeviceDynamicRenderingFeatures(
    const VkPhysicalDeviceDynamicRenderingFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), dynamicRendering(in_struct->dynamicRendering) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceDynamicRenderingFeatures::safe_VkPhysicalDeviceDynamicRenderingFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES), pNext(nullptr), dynamicRendering() {}

safe_VkPhysicalDeviceDynamicRenderingFeatures::safe_VkPhysicalDeviceDynamicRenderingFeatures(
    const safe_VkPhysicalDeviceDynamicRenderingFeatures& copy_src) {
    sType = copy_src.sType;
    dynamicRendering = copy_src.dynamicRendering;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceDynamicRenderingFeatures& safe_VkPhysicalDeviceDynamicRenderingFeatures::operator=(
    const safe_VkPhysicalDeviceDynamicRenderingFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    dynamicRendering = copy_src.dynamicRendering;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceDynamicRenderingFeatures::~safe_VkPhysicalDeviceDynamicRenderingFeatures() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceDynamicRenderingFeatures::initialize(const VkPhysicalDeviceDynamicRenderingFeatures* in_struct,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    dynamicRendering = in_struct->dynamicRendering;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceDynamicRenderingFeatures::initialize(const safe_VkPhysicalDeviceDynamicRenderingFeatures* copy_src,
                                                               [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    dynamicRendering = copy_src->dynamicRendering;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkCommandBufferInheritanceRenderingInfo::safe_VkCommandBufferInheritanceRenderingInfo(
    const VkCommandBufferInheritanceRenderingInfo* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      flags(in_struct->flags),
      viewMask(in_struct->viewMask),
      colorAttachmentCount(in_struct->colorAttachmentCount),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(in_struct->depthAttachmentFormat),
      stencilAttachmentFormat(in_struct->stencilAttachmentFormat),
      rasterizationSamples(in_struct->rasterizationSamples) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
               sizeof(VkFormat) * in_struct->colorAttachmentCount);
    }
}

safe_VkCommandBufferInheritanceRenderingInfo::safe_VkCommandBufferInheritanceRenderingInfo()
    : sType(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO),
      pNext(nullptr),
      flags(),
      viewMask(),
      colorAttachmentCount(),
      pColorAttachmentFormats(nullptr),
      depthAttachmentFormat(),
      stencilAttachmentFormat(),
      rasterizationSamples() {}

safe_VkCommandBufferInheritanceRenderingInfo::safe_VkCommandBufferInheritanceRenderingInfo(
    const safe_VkCommandBufferInheritanceRenderingInfo& copy_src) {
    sType = copy_src.sType;
    flags = copy_src.flags;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }
}

safe_VkCommandBufferInheritanceRenderingInfo& safe_VkCommandBufferInheritanceRenderingInfo::operator=(
    const safe_VkCommandBufferInheritanceRenderingInfo& copy_src) {
    if (&copy_src == this) return *this;

    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    flags = copy_src.flags;
    viewMask = copy_src.viewMask;
    colorAttachmentCount = copy_src.colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src.depthAttachmentFormat;
    stencilAttachmentFormat = copy_src.stencilAttachmentFormat;
    rasterizationSamples = copy_src.rasterizationSamples;
    pNext = SafePnextCopy(copy_src.pNext);

    if (copy_src.pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src.colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src.pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src.colorAttachmentCount);
    }

    return *this;
}

safe_VkCommandBufferInheritanceRenderingInfo::~safe_VkCommandBufferInheritanceRenderingInfo() {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
}

void safe_VkCommandBufferInheritanceRenderingInfo::initialize(const VkCommandBufferInheritanceRenderingInfo* in_struct,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    if (pColorAttachmentFormats) delete[] pColorAttachmentFormats;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    flags = in_struct->flags;
    viewMask = in_struct->viewMask;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = in_struct->depthAttachmentFormat;
    stencilAttachmentFormat = in_struct->stencilAttachmentFormat;
    rasterizationSamples = in_struct->rasterizationSamples;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);

    if (in_struct->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[in_struct->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)in_struct->pColorAttachmentFormats,
               sizeof(VkFormat) * in_struct->colorAttachmentCount);
    }
}

void safe_VkCommandBufferInheritanceRenderingInfo::initialize(const safe_VkCommandBufferInheritanceRenderingInfo* copy_src,
                                                              [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    flags = copy_src->flags;
    viewMask = copy_src->viewMask;
    colorAttachmentCount = copy_src->colorAttachmentCount;
    pColorAttachmentFormats = nullptr;
    depthAttachmentFormat = copy_src->depthAttachmentFormat;
    stencilAttachmentFormat = copy_src->stencilAttachmentFormat;
    rasterizationSamples = copy_src->rasterizationSamples;
    pNext = SafePnextCopy(copy_src->pNext);

    if (copy_src->pColorAttachmentFormats) {
        pColorAttachmentFormats = new VkFormat[copy_src->colorAttachmentCount];
        memcpy((void*)pColorAttachmentFormats, (void*)copy_src->pColorAttachmentFormats,
               sizeof(VkFormat) * copy_src->colorAttachmentCount);
    }
}

safe_VkPhysicalDeviceShaderIntegerDotProductFeatures::safe_VkPhysicalDeviceShaderIntegerDotProductFeatures(
    const VkPhysicalDeviceShaderIntegerDotProductFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), shaderIntegerDotProduct(in_struct->shaderIntegerDotProduct) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderIntegerDotProductFeatures::safe_VkPhysicalDeviceShaderIntegerDotProductFeatures()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES), pNext(nullptr), shaderIntegerDotProduct() {}

safe_VkPhysicalDeviceShaderIntegerDotProductFeatures::safe_VkPhysicalDeviceShaderIntegerDotProductFeatures(
    const safe_VkPhysicalDeviceShaderIntegerDotProductFeatures& copy_src) {
    sType = copy_src.sType;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderIntegerDotProductFeatures& safe_VkPhysicalDeviceShaderIntegerDotProductFeatures::operator=(
    const safe_VkPhysicalDeviceShaderIntegerDotProductFeatures& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    shaderIntegerDotProduct = copy_src.shaderIntegerDotProduct;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderIntegerDotProductFeatures::~safe_VkPhysicalDeviceShaderIntegerDotProductFeatures() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceShaderIntegerDotProductFeatures::initialize(
    const VkPhysicalDeviceShaderIntegerDotProductFeatures* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    shaderIntegerDotProduct = in_struct->shaderIntegerDotProduct;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderIntegerDotProductFeatures::initialize(
    const safe_VkPhysicalDeviceShaderIntegerDotProductFeatures* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    shaderIntegerDotProduct = copy_src->shaderIntegerDotProduct;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceShaderIntegerDotProductProperties::safe_VkPhysicalDeviceShaderIntegerDotProductProperties(
    const VkPhysicalDeviceShaderIntegerDotProductProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state,
    bool copy_pnext)
    : sType(in_struct->sType),
      integerDotProduct8BitUnsignedAccelerated(in_struct->integerDotProduct8BitUnsignedAccelerated),
      integerDotProduct8BitSignedAccelerated(in_struct->integerDotProduct8BitSignedAccelerated),
      integerDotProduct8BitMixedSignednessAccelerated(in_struct->integerDotProduct8BitMixedSignednessAccelerated),
      integerDotProduct4x8BitPackedUnsignedAccelerated(in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated),
      integerDotProduct4x8BitPackedSignedAccelerated(in_struct->integerDotProduct4x8BitPackedSignedAccelerated),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated),
      integerDotProduct16BitUnsignedAccelerated(in_struct->integerDotProduct16BitUnsignedAccelerated),
      integerDotProduct16BitSignedAccelerated(in_struct->integerDotProduct16BitSignedAccelerated),
      integerDotProduct16BitMixedSignednessAccelerated(in_struct->integerDotProduct16BitMixedSignednessAccelerated),
      integerDotProduct32BitUnsignedAccelerated(in_struct->integerDotProduct32BitUnsignedAccelerated),
      integerDotProduct32BitSignedAccelerated(in_struct->integerDotProduct32BitSignedAccelerated),
      integerDotProduct32BitMixedSignednessAccelerated(in_struct->integerDotProduct32BitMixedSignednessAccelerated),
      integerDotProduct64BitUnsignedAccelerated(in_struct->integerDotProduct64BitUnsignedAccelerated),
      integerDotProduct64BitSignedAccelerated(in_struct->integerDotProduct64BitSignedAccelerated),
      integerDotProduct64BitMixedSignednessAccelerated(in_struct->integerDotProduct64BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated(
          in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceShaderIntegerDotProductProperties::safe_VkPhysicalDeviceShaderIntegerDotProductProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES),
      pNext(nullptr),
      integerDotProduct8BitUnsignedAccelerated(),
      integerDotProduct8BitSignedAccelerated(),
      integerDotProduct8BitMixedSignednessAccelerated(),
      integerDotProduct4x8BitPackedUnsignedAccelerated(),
      integerDotProduct4x8BitPackedSignedAccelerated(),
      integerDotProduct4x8BitPackedMixedSignednessAccelerated(),
      integerDotProduct16BitUnsignedAccelerated(),
      integerDotProduct16BitSignedAccelerated(),
      integerDotProduct16BitMixedSignednessAccelerated(),
      integerDotProduct32BitUnsignedAccelerated(),
      integerDotProduct32BitSignedAccelerated(),
      integerDotProduct32BitMixedSignednessAccelerated(),
      integerDotProduct64BitUnsignedAccelerated(),
      integerDotProduct64BitSignedAccelerated(),
      integerDotProduct64BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating8BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated(),
      integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating16BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating32BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated(),
      integerDotProductAccumulatingSaturating64BitUnsignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitSignedAccelerated(),
      integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated() {}

safe_VkPhysicalDeviceShaderIntegerDotProductProperties::safe_VkPhysicalDeviceShaderIntegerDotProductProperties(
    const safe_VkPhysicalDeviceShaderIntegerDotProductProperties& copy_src) {
    sType = copy_src.sType;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceShaderIntegerDotProductProperties& safe_VkPhysicalDeviceShaderIntegerDotProductProperties::operator=(
    const safe_VkPhysicalDeviceShaderIntegerDotProductProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    integerDotProduct8BitUnsignedAccelerated = copy_src.integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src.integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src.integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src.integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src.integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src.integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src.integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src.integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src.integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src.integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src.integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src.integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src.integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src.integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src.integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceShaderIntegerDotProductProperties::~safe_VkPhysicalDeviceShaderIntegerDotProductProperties() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceShaderIntegerDotProductProperties::initialize(
    const VkPhysicalDeviceShaderIntegerDotProductProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    integerDotProduct8BitUnsignedAccelerated = in_struct->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = in_struct->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = in_struct->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = in_struct->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = in_struct->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = in_struct->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = in_struct->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = in_struct->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = in_struct->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = in_struct->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = in_struct->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = in_struct->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = in_struct->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = in_struct->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = in_struct->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        in_struct->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceShaderIntegerDotProductProperties::initialize(
    const safe_VkPhysicalDeviceShaderIntegerDotProductProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    integerDotProduct8BitUnsignedAccelerated = copy_src->integerDotProduct8BitUnsignedAccelerated;
    integerDotProduct8BitSignedAccelerated = copy_src->integerDotProduct8BitSignedAccelerated;
    integerDotProduct8BitMixedSignednessAccelerated = copy_src->integerDotProduct8BitMixedSignednessAccelerated;
    integerDotProduct4x8BitPackedUnsignedAccelerated = copy_src->integerDotProduct4x8BitPackedUnsignedAccelerated;
    integerDotProduct4x8BitPackedSignedAccelerated = copy_src->integerDotProduct4x8BitPackedSignedAccelerated;
    integerDotProduct4x8BitPackedMixedSignednessAccelerated = copy_src->integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    integerDotProduct16BitUnsignedAccelerated = copy_src->integerDotProduct16BitUnsignedAccelerated;
    integerDotProduct16BitSignedAccelerated = copy_src->integerDotProduct16BitSignedAccelerated;
    integerDotProduct16BitMixedSignednessAccelerated = copy_src->integerDotProduct16BitMixedSignednessAccelerated;
    integerDotProduct32BitUnsignedAccelerated = copy_src->integerDotProduct32BitUnsignedAccelerated;
    integerDotProduct32BitSignedAccelerated = copy_src->integerDotProduct32BitSignedAccelerated;
    integerDotProduct32BitMixedSignednessAccelerated = copy_src->integerDotProduct32BitMixedSignednessAccelerated;
    integerDotProduct64BitUnsignedAccelerated = copy_src->integerDotProduct64BitUnsignedAccelerated;
    integerDotProduct64BitSignedAccelerated = copy_src->integerDotProduct64BitSignedAccelerated;
    integerDotProduct64BitMixedSignednessAccelerated = copy_src->integerDotProduct64BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating8BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating8BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating16BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating16BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating32BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating32BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    integerDotProductAccumulatingSaturating64BitUnsignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    integerDotProductAccumulatingSaturating64BitSignedAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated =
        copy_src->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceTexelBufferAlignmentProperties::safe_VkPhysicalDeviceTexelBufferAlignmentProperties(
    const VkPhysicalDeviceTexelBufferAlignmentProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      storageTexelBufferOffsetAlignmentBytes(in_struct->storageTexelBufferOffsetAlignmentBytes),
      storageTexelBufferOffsetSingleTexelAlignment(in_struct->storageTexelBufferOffsetSingleTexelAlignment),
      uniformTexelBufferOffsetAlignmentBytes(in_struct->uniformTexelBufferOffsetAlignmentBytes),
      uniformTexelBufferOffsetSingleTexelAlignment(in_struct->uniformTexelBufferOffsetSingleTexelAlignment) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceTexelBufferAlignmentProperties::safe_VkPhysicalDeviceTexelBufferAlignmentProperties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES),
      pNext(nullptr),
      storageTexelBufferOffsetAlignmentBytes(),
      storageTexelBufferOffsetSingleTexelAlignment(),
      uniformTexelBufferOffsetAlignmentBytes(),
      uniformTexelBufferOffsetSingleTexelAlignment() {}

safe_VkPhysicalDeviceTexelBufferAlignmentProperties::safe_VkPhysicalDeviceTexelBufferAlignmentProperties(
    const safe_VkPhysicalDeviceTexelBufferAlignmentProperties& copy_src) {
    sType = copy_src.sType;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceTexelBufferAlignmentProperties& safe_VkPhysicalDeviceTexelBufferAlignmentProperties::operator=(
    const safe_VkPhysicalDeviceTexelBufferAlignmentProperties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    storageTexelBufferOffsetAlignmentBytes = copy_src.storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src.storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src.uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src.uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceTexelBufferAlignmentProperties::~safe_VkPhysicalDeviceTexelBufferAlignmentProperties() {
    FreePnextChain(pNext);
}

void safe_VkPhysicalDeviceTexelBufferAlignmentProperties::initialize(
    const VkPhysicalDeviceTexelBufferAlignmentProperties* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    storageTexelBufferOffsetAlignmentBytes = in_struct->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = in_struct->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = in_struct->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = in_struct->uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceTexelBufferAlignmentProperties::initialize(
    const safe_VkPhysicalDeviceTexelBufferAlignmentProperties* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    storageTexelBufferOffsetAlignmentBytes = copy_src->storageTexelBufferOffsetAlignmentBytes;
    storageTexelBufferOffsetSingleTexelAlignment = copy_src->storageTexelBufferOffsetSingleTexelAlignment;
    uniformTexelBufferOffsetAlignmentBytes = copy_src->uniformTexelBufferOffsetAlignmentBytes;
    uniformTexelBufferOffsetSingleTexelAlignment = copy_src->uniformTexelBufferOffsetSingleTexelAlignment;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkFormatProperties3::safe_VkFormatProperties3(const VkFormatProperties3* in_struct,
                                                   [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType),
      linearTilingFeatures(in_struct->linearTilingFeatures),
      optimalTilingFeatures(in_struct->optimalTilingFeatures),
      bufferFeatures(in_struct->bufferFeatures) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkFormatProperties3::safe_VkFormatProperties3()
    : sType(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3),
      pNext(nullptr),
      linearTilingFeatures(),
      optimalTilingFeatures(),
      bufferFeatures() {}

safe_VkFormatProperties3::safe_VkFormatProperties3(const safe_VkFormatProperties3& copy_src) {
    sType = copy_src.sType;
    linearTilingFeatures = copy_src.linearTilingFeatures;
    optimalTilingFeatures = copy_src.optimalTilingFeatures;
    bufferFeatures = copy_src.bufferFeatures;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkFormatProperties3& safe_VkFormatProperties3::operator=(const safe_VkFormatProperties3& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    linearTilingFeatures = copy_src.linearTilingFeatures;
    optimalTilingFeatures = copy_src.optimalTilingFeatures;
    bufferFeatures = copy_src.bufferFeatures;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkFormatProperties3::~safe_VkFormatProperties3() { FreePnextChain(pNext); }

void safe_VkFormatProperties3::initialize(const VkFormatProperties3* in_struct, [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    linearTilingFeatures = in_struct->linearTilingFeatures;
    optimalTilingFeatures = in_struct->optimalTilingFeatures;
    bufferFeatures = in_struct->bufferFeatures;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkFormatProperties3::initialize(const safe_VkFormatProperties3* copy_src, [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    linearTilingFeatures = copy_src->linearTilingFeatures;
    optimalTilingFeatures = copy_src->optimalTilingFeatures;
    bufferFeatures = copy_src->bufferFeatures;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMaintenance4Features::safe_VkPhysicalDeviceMaintenance4Features(
    const VkPhysicalDeviceMaintenance4Features* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maintenance4(in_struct->maintenance4) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMaintenance4Features::safe_VkPhysicalDeviceMaintenance4Features()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES), pNext(nullptr), maintenance4() {}

safe_VkPhysicalDeviceMaintenance4Features::safe_VkPhysicalDeviceMaintenance4Features(
    const safe_VkPhysicalDeviceMaintenance4Features& copy_src) {
    sType = copy_src.sType;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMaintenance4Features& safe_VkPhysicalDeviceMaintenance4Features::operator=(
    const safe_VkPhysicalDeviceMaintenance4Features& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maintenance4 = copy_src.maintenance4;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMaintenance4Features::~safe_VkPhysicalDeviceMaintenance4Features() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMaintenance4Features::initialize(const VkPhysicalDeviceMaintenance4Features* in_struct,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maintenance4 = in_struct->maintenance4;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMaintenance4Features::initialize(const safe_VkPhysicalDeviceMaintenance4Features* copy_src,
                                                           [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maintenance4 = copy_src->maintenance4;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkPhysicalDeviceMaintenance4Properties::safe_VkPhysicalDeviceMaintenance4Properties(
    const VkPhysicalDeviceMaintenance4Properties* in_struct, [[maybe_unused]] PNextCopyState* copy_state, bool copy_pnext)
    : sType(in_struct->sType), maxBufferSize(in_struct->maxBufferSize) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
}

safe_VkPhysicalDeviceMaintenance4Properties::safe_VkPhysicalDeviceMaintenance4Properties()
    : sType(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES), pNext(nullptr), maxBufferSize() {}

safe_VkPhysicalDeviceMaintenance4Properties::safe_VkPhysicalDeviceMaintenance4Properties(
    const safe_VkPhysicalDeviceMaintenance4Properties& copy_src) {
    sType = copy_src.sType;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);
}

safe_VkPhysicalDeviceMaintenance4Properties& safe_VkPhysicalDeviceMaintenance4Properties::operator=(
    const safe_VkPhysicalDeviceMaintenance4Properties& copy_src) {
    if (&copy_src == this) return *this;

    FreePnextChain(pNext);

    sType = copy_src.sType;
    maxBufferSize = copy_src.maxBufferSize;
    pNext = SafePnextCopy(copy_src.pNext);

    return *this;
}

safe_VkPhysicalDeviceMaintenance4Properties::~safe_VkPhysicalDeviceMaintenance4Properties() { FreePnextChain(pNext); }

void safe_VkPhysicalDeviceMaintenance4Properties::initialize(const VkPhysicalDeviceMaintenance4Properties* in_struct,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    FreePnextChain(pNext);
    sType = in_struct->sType;
    maxBufferSize = in_struct->maxBufferSize;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
}

void safe_VkPhysicalDeviceMaintenance4Properties::initialize(const safe_VkPhysicalDeviceMaintenance4Properties* copy_src,
                                                             [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    maxBufferSize = copy_src->maxBufferSize;
    pNext = SafePnextCopy(copy_src->pNext);
}

safe_VkDeviceBufferMemoryRequirements::safe_VkDeviceBufferMemoryRequirements(const VkDeviceBufferMemoryRequirements* in_struct,
                                                                             [[maybe_unused]] PNextCopyState* copy_state,
                                                                             bool copy_pnext)
    : sType(in_struct->sType), pCreateInfo(nullptr) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCreateInfo) pCreateInfo = new safe_VkBufferCreateInfo(in_struct->pCreateInfo);
}

safe_VkDeviceBufferMemoryRequirements::safe_VkDeviceBufferMemoryRequirements()
    : sType(VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS), pNext(nullptr), pCreateInfo(nullptr) {}

safe_VkDeviceBufferMemoryRequirements::safe_VkDeviceBufferMemoryRequirements(
    const safe_VkDeviceBufferMemoryRequirements& copy_src) {
    sType = copy_src.sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new safe_VkBufferCreateInfo(*copy_src.pCreateInfo);
}

safe_VkDeviceBufferMemoryRequirements& safe_VkDeviceBufferMemoryRequirements::operator=(
    const safe_VkDeviceBufferMemoryRequirements& copy_src) {
    if (&copy_src == this) return *this;

    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new safe_VkBufferCreateInfo(*copy_src.pCreateInfo);

    return *this;
}

safe_VkDeviceBufferMemoryRequirements::~safe_VkDeviceBufferMemoryRequirements() {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
}

void safe_VkDeviceBufferMemoryRequirements::initialize(const VkDeviceBufferMemoryRequirements* in_struct,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pCreateInfo) pCreateInfo = new safe_VkBufferCreateInfo(in_struct->pCreateInfo);
}

void safe_VkDeviceBufferMemoryRequirements::initialize(const safe_VkDeviceBufferMemoryRequirements* copy_src,
                                                       [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pCreateInfo = nullptr;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pCreateInfo) pCreateInfo = new safe_VkBufferCreateInfo(*copy_src->pCreateInfo);
}

safe_VkDeviceImageMemoryRequirements::safe_VkDeviceImageMemoryRequirements(const VkDeviceImageMemoryRequirements* in_struct,
                                                                           [[maybe_unused]] PNextCopyState* copy_state,
                                                                           bool copy_pnext)
    : sType(in_struct->sType), pCreateInfo(nullptr), planeAspect(in_struct->planeAspect) {
    if (copy_pnext) {
        pNext = SafePnextCopy(in_struct->pNext, copy_state);
    }
    if (in_struct->pCreateInfo) pCreateInfo = new safe_VkImageCreateInfo(in_struct->pCreateInfo);
}

safe_VkDeviceImageMemoryRequirements::safe_VkDeviceImageMemoryRequirements()
    : sType(VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS), pNext(nullptr), pCreateInfo(nullptr), planeAspect() {}

safe_VkDeviceImageMemoryRequirements::safe_VkDeviceImageMemoryRequirements(const safe_VkDeviceImageMemoryRequirements& copy_src) {
    sType = copy_src.sType;
    pCreateInfo = nullptr;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new safe_VkImageCreateInfo(*copy_src.pCreateInfo);
}

safe_VkDeviceImageMemoryRequirements& safe_VkDeviceImageMemoryRequirements::operator=(
    const safe_VkDeviceImageMemoryRequirements& copy_src) {
    if (&copy_src == this) return *this;

    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);

    sType = copy_src.sType;
    pCreateInfo = nullptr;
    planeAspect = copy_src.planeAspect;
    pNext = SafePnextCopy(copy_src.pNext);
    if (copy_src.pCreateInfo) pCreateInfo = new safe_VkImageCreateInfo(*copy_src.pCreateInfo);

    return *this;
}

safe_VkDeviceImageMemoryRequirements::~safe_VkDeviceImageMemoryRequirements() {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
}

void safe_VkDeviceImageMemoryRequirements::initialize(const VkDeviceImageMemoryRequirements* in_struct,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    if (pCreateInfo) delete pCreateInfo;
    FreePnextChain(pNext);
    sType = in_struct->sType;
    pCreateInfo = nullptr;
    planeAspect = in_struct->planeAspect;
    pNext = SafePnextCopy(in_struct->pNext, copy_state);
    if (in_struct->pCreateInfo) pCreateInfo = new safe_VkImageCreateInfo(in_struct->pCreateInfo);
}

void safe_VkDeviceImageMemoryRequirements::initialize(const safe_VkDeviceImageMemoryRequirements* copy_src,
                                                      [[maybe_unused]] PNextCopyState* copy_state) {
    sType = copy_src->sType;
    pCreateInfo = nullptr;
    planeAspect = copy_src->planeAspect;
    pNext = SafePnextCopy(copy_src->pNext);
    if (copy_src->pCreateInfo) pCreateInfo = new safe_VkImageCreateInfo(*copy_src->pCreateInfo);
}

// NOLINTEND

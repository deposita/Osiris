#pragma once

#include "Utils.h"

class EntityList {
public:
    constexpr class Entity* getEntity(int index) noexcept
    {
        return callVirtualFunction<class Entity*(__thiscall*)(void*, int)>(this, 3)(this, index);
    }

    constexpr class Entity* getClientEntityFromHandle(int handle) noexcept
    {
        return callVirtualFunction<class Entity*(__thiscall*)(void*, int)>(this, 4)(this, handle);
    }

    constexpr int getHighestEntityIndex() noexcept
    {
        return callVirtualFunction<int(__thiscall*)(void*)>(this, 6)(this);
    }
};

#pragma once

#include "core/object.h"

class PluginClass : public Object {
    GDCLASS(PluginClass, Object);
    
    static void _bind_methods();
    
public:
    
    PluginClass();
    ~PluginClass();
};


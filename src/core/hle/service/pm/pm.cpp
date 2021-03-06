// Copyright 2018 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/pm/pm.h"
#include "core/hle/service/pm/pm_app.h"
#include "core/hle/service/pm/pm_dbg.h"

namespace Service::PM {

void InstallInterfaces(SM::ServiceManager& service_manager) {
    std::make_shared<PM_APP>()->InstallAsService(service_manager);
    std::make_shared<PM_DBG>()->InstallAsService(service_manager);
}

} // namespace Service::PM

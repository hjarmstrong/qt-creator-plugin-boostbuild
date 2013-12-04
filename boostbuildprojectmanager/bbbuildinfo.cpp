//
// Copyright (C) 2013 Mateusz Łoskot <mateusz@loskot.net>
//
// This file is part of Qt Creator Boost.Build plugin project.
//
// This is free software; you can redistribute and/or modify it under
// the terms of the  GNU Lesser General Public License, version 2.1
// as published by the Free Software Foundation.
// See the LICENSE.txt file for more information.
//
#include "bbbuildinfo.hpp"
#include "bbbuildconfiguration.hpp"
#include "bbprojectmanagerconstants.hpp"

namespace BoostBuildProjectManager {
namespace Internal {

BuildInfo::BuildInfo(BuildConfigurationFactory const* f)
    : ProjectExplorer::BuildInfo(f)
    , buildType(BuildConfiguration::Debug)
{
}

} // namespace Internal
} // namespace BoostBuildProjectManager

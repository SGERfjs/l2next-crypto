# Copyright (c) 2019 Alexei Gaidulean
# All rights reserved.
#
# Use of this source code is governed by a MIT-style license that
# can be found in the LICENSE file.

# Project metadata.
project(${PROJECT_NAME} VERSION 1.0.0)

# Add sources.
include(App/Sources)

# Enqueue yaml for download.
include("ThirdParty/yaml" REQUIRED)

# Add executable target.
add_executable(${PROJECT_NAME} WIN32 ${L2NextCryptoApp_SOURCES})

# Add resources.
include(App/Resources)

# Set test app properties.
set_test_app_properties(L2NextCrypto)

# Add project dependencies.
link_internal_dependency(L2NextCrypto)

# Link third party dependencies. 
link_external_dependency(yaml ${PROJECT_NAME})

# Install export.
if (L2NEXT_CPP_INSTALL)
	export_install_configs()
endif()
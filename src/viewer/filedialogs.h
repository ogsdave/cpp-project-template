#pragma once

////////////////////////////////////////////////////////////////////////////////
#include <string>
#include <vector>
////////////////////////////////////////////////////////////////////////////////

namespace @project_name@ {

// -----------------------------------------------------------------------------

std::string open_filename(const std::string &defaultPath = "./.*",
                          const std::vector<std::string> &filters = {},
                          const std::string &desc = "");

std::string save_filename(const std::string &defaultPath = "./.*",
                          const std::vector<std::string> &filters = {},
                          const std::string &desc = "");

std::string open_folder(const std::string &defaultPath = ".");

// -----------------------------------------------------------------------------

}  // namespace @project_name@

/*
 *  This file is part of clearskies_core file synchronization program
 *  Copyright (C) 2014 Pedro Larroy

 *  clearskies_core is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  clearskies_core is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.

 *  You should have received a copy of the GNU Lesser General Public License
 *  along with clearskies_core.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <string>
#include <vector>
#include "config.hpp"
#include "share.hpp"
#include "conf.hpp"

namespace cs
{
namespace daemon
{


class Daemon
{
public:
    Daemon(conf::Conf& conf);
    ~Daemon();

    Daemon(const Daemon&) = delete;
    Daemon& operator=(const Daemon&) = delete;

    void attach_share(const std::string& share_path, const std::string& dbpath = std::string());
    void start();
    void stop();
    void set_port(i16 port);


    conf::Conf& r_conf;
    i16 m_port;
    bool m_running;
    std::vector<share::Share> m_shares;
};

} // end ns
} // end ns


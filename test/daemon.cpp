/*
 *  This file is part of clearskies_core.

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
#include <boost/test/unit_test.hpp>
#include "cs/daemon.hpp"
#include "cs/config.hpp"
#include "cs/utils.hpp"

using namespace std;
using namespace cs::daemon;

#if 0

BOOST_AUTO_TEST_CASE(daemon_test_01)
{
    cs::utils::Tmpdir tmpdir;
    Daemon d;
    d.attach_share(tmpdir.path.string());
    d.set_port(4000);
    d.start();
    BOOST_CHECK_THROW(d.set_port(1025), std::runtime_error);
}

#endif

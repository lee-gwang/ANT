/* Copyright 2017-2018 All Rights Reserved.
 *  Gyeonghwan Hong (redcarrottt@gmail.com)
 *  
 * [Contact]
 *  Gyeonghwan Hong (redcarrottt@gmail.com)
 *
 * Licensed under the Apache License, Version 2.0(the "License");
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
 */

#ifndef __WFD_IP_ADDRESS_LISTENER_H__
#define __WFD_IP_ADDRESS_LISTENER_H__

namespace sc {
class WfdIpAddressListener {
public:
  virtual void on_change_ip_address(const char* ip_address) = 0;
}; /* class WfdIpAddressListener */
} /* namespace sc */

#endif /* !defined(__WFD_IP_ADDRESS_LISTENER_H__) */
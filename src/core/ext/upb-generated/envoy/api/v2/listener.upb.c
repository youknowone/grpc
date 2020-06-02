/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/listener.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/listener.upb.h"
#include "envoy/api/v2/core/address.upb.h"
#include "envoy/api/v2/core/base.upb.h"
#include "envoy/api/v2/core/socket_option.upb.h"
#include "envoy/api/v2/listener/listener_components.upb.h"
#include "envoy/api/v2/listener/udp_listener_config.upb.h"
#include "envoy/config/filter/accesslog/v2/accesslog.upb.h"
#include "envoy/config/listener/v2/api_listener.upb.h"
#include "google/api/annotations.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_Listener_submsgs[16] = {
  &envoy_api_v2_Listener_ConnectionBalanceConfig_msginit,
  &envoy_api_v2_Listener_DeprecatedV1_msginit,
  &envoy_api_v2_core_Address_msginit,
  &envoy_api_v2_core_Metadata_msginit,
  &envoy_api_v2_core_SocketOption_msginit,
  &envoy_api_v2_listener_FilterChain_msginit,
  &envoy_api_v2_listener_ListenerFilter_msginit,
  &envoy_api_v2_listener_UdpListenerConfig_msginit,
  &envoy_config_filter_accesslog_v2_AccessLog_msginit,
  &envoy_config_listener_v2_ApiListener_msginit,
  &google_protobuf_BoolValue_msginit,
  &google_protobuf_Duration_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_Listener__fields[21] = {
  {1, UPB_SIZE(20, 24), 0, 0, 9, 1},
  {2, UPB_SIZE(28, 40), 0, 2, 11, 1},
  {3, UPB_SIZE(76, 136), 0, 5, 11, 3},
  {4, UPB_SIZE(32, 48), 0, 10, 11, 1},
  {5, UPB_SIZE(36, 56), 0, 12, 11, 1},
  {6, UPB_SIZE(40, 64), 0, 3, 11, 1},
  {7, UPB_SIZE(44, 72), 0, 1, 11, 1},
  {8, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {9, UPB_SIZE(80, 144), 0, 6, 11, 3},
  {10, UPB_SIZE(48, 80), 0, 10, 11, 1},
  {11, UPB_SIZE(52, 88), 0, 10, 11, 1},
  {12, UPB_SIZE(56, 96), 0, 12, 11, 1},
  {13, UPB_SIZE(84, 152), 0, 4, 11, 3},
  {15, UPB_SIZE(60, 104), 0, 11, 11, 1},
  {16, UPB_SIZE(8, 8), 0, 0, 14, 1},
  {17, UPB_SIZE(16, 16), 0, 0, 8, 1},
  {18, UPB_SIZE(64, 112), 0, 7, 11, 1},
  {19, UPB_SIZE(68, 120), 0, 9, 11, 1},
  {20, UPB_SIZE(72, 128), 0, 0, 11, 1},
  {21, UPB_SIZE(17, 17), 0, 0, 8, 1},
  {22, UPB_SIZE(88, 160), 0, 8, 11, 3},
};

const upb_msglayout envoy_api_v2_Listener_msginit = {
  &envoy_api_v2_Listener_submsgs[0],
  &envoy_api_v2_Listener__fields[0],
  UPB_SIZE(96, 176), 21, false,
};

static const upb_msglayout *const envoy_api_v2_Listener_DeprecatedV1_submsgs[1] = {
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_api_v2_Listener_DeprecatedV1__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Listener_DeprecatedV1_msginit = {
  &envoy_api_v2_Listener_DeprecatedV1_submsgs[0],
  &envoy_api_v2_Listener_DeprecatedV1__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_Listener_ConnectionBalanceConfig_submsgs[1] = {
  &envoy_api_v2_Listener_ConnectionBalanceConfig_ExactBalance_msginit,
};

static const upb_msglayout_field envoy_api_v2_Listener_ConnectionBalanceConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-4, -8), 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Listener_ConnectionBalanceConfig_msginit = {
  &envoy_api_v2_Listener_ConnectionBalanceConfig_submsgs[0],
  &envoy_api_v2_Listener_ConnectionBalanceConfig__fields[0],
  UPB_SIZE(8, 16), 1, false,
};

const upb_msglayout envoy_api_v2_Listener_ConnectionBalanceConfig_ExactBalance_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

#include "upb/port_undef.inc"



#ifndef _YANG_H
#define _YANG_H
#include <stddef.h>
#include <json-c/json.h>
#include <string.h>

struct map_str2str{
  char *key;
  char *str;
};
typedef struct map_str2str map_str2str;

static const map_str2str modulemap[] = {
    {"openwrt-network", "{\"type\": \"module\", \"map\": {\"globals\": {\"type\": \"container\", \"map\": {\"ula_prefix\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ula_prefix\", \"leaf-type\": \"inet:ipv6-prefix\"}, \"dhcp_default_duid\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"dhcp_default_duid\", \"leaf-type\": \"string\"}}, \"section\": \"globals\", \"section-name\": \"globals\"}, \"devices\": {\"type\": \"container\", \"map\": {\"device\": {\"type\": \"list\", \"map\": {\"devname\": {\"type\": \"leaf\", \"map\": {}, \"leaf-type\": \"string\"}, \"name\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"name\", \"leaf-type\": \"string\", \"mandatory\": true}, \"macaddr\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"macaddr\", \"leaf-type\": \"yang:phys-address\"}, \"devtype\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"type\", \"leaf-type\": \"string\"}, \"ifname\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ifname\", \"leaf-type\": \"string\"}, \"rxpause\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"rxpause\", \"leaf-type\": \"openwrt-bool\"}, \"txpause\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"txpause\", \"leaf-type\": \"openwrt-bool\"}, \"autoneg\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"autoneg\", \"leaf-type\": \"openwrt-bool\"}, \"speed\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"speed\", \"leaf-type\": \"string\"}, \"duplex\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"duplex\", \"leaf-type\": \"openwrt-bool\"}, \"table\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"table\", \"leaf-type\": \"string\"}}, \"section\": \"device\", \"leaf-as-name\": \"devname\", \"keys\": [\"name\"], \"mandatory\": [\"name\"]}}}, \"interfaces\": {\"type\": \"container\", \"map\": {\"interface\": {\"type\": \"list\", \"map\": {\"name\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"name\", \"leaf-type\": \"string\"}, \"device\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"device\", \"leaf-type\": \"string\", \"mandatory\": true}, \"mtu\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"mtu\", \"leaf-type\": \"int64\"}, \"auto\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"auto\", \"leaf-type\": \"openwrt-bool\"}, \"ipv6\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ipv6\", \"leaf-type\": \"openwrt-bool\"}, \"force_link\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"force_link\", \"leaf-type\": \"openwrt-bool\"}, \"disabled\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"disabled\", \"leaf-type\": \"openwrt-bool\"}, \"ip4table\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ip4table\", \"leaf-type\": \"string\"}, \"ip6table\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ip6table\", \"leaf-type\": \"string\"}, \"proto\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"proto\", \"leaf-type\": \"string\"}, \"ipaddr\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ipaddr\", \"leaf-type\": \"inet:ipv4-address\"}, \"netmask\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"netmask\", \"leaf-type\": \"inet:ipv4-address\"}, \"gateway\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"gateway\", \"leaf-type\": \"inet:ipv4-address\"}, \"broadcast\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"broadcast\", \"leaf-type\": \"inet:ipv4-address\"}, \"ip6addr\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ip6addr\", \"leaf-type\": \"inet:ipv6-address\"}, \"ip6gw\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"ip6gw\", \"leaf-type\": \"inet:ipv6-address\"}, \"layer\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"layer\", \"leaf-type\": {\"leaf-type\": \"uint8\", \"from\": \"1\", \"to\": \"3\"}}, \"dns\": {\"type\": \"leaf-list\", \"map\": {}, \"option\": \"dns\", \"leaf-type\": \"inet:ipv4-address\"}}, \"section\": \"interface\", \"leaf-as-name\": \"name\", \"keys\": [\"name\"], \"mandatory\": [\"device\"]}}}, \"rules\": {\"type\": \"container\", \"map\": {\"ip4rules\": {\"type\": \"list\", \"map\": {\"mark\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"mark\", \"leaf-type\": \"string\"}, \"in\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"in\", \"leaf-type\": \"string\"}, \"out\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"out\", \"leaf-type\": \"string\"}, \"src\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"src\", \"leaf-type\": \"inet:ipv4-prefix\"}, \"dest\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"dest\", \"leaf-type\": \"inet:ipv4-prefix\"}, \"tos\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"tos\", \"leaf-type\": \"uint64\"}, \"invert\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"invert\", \"leaf-type\": \"openwrt-bool\"}, \"priority\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"priority\", \"leaf-type\": \"uint64\"}, \"lookup\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"lookup\", \"leaf-type\": \"string\"}, \"goto\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"goto\", \"leaf-type\": \"uint64\"}, \"action\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"action\", \"leaf-type\": \"string\"}}, \"section\": \"rule\", \"keys\": [\"mark\"]}, \"ip6rules\": {\"type\": \"list\", \"map\": {\"mark\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"mark\", \"leaf-type\": \"string\"}, \"in\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"in\", \"leaf-type\": \"string\"}, \"out\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"out\", \"leaf-type\": \"string\"}, \"src\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"src\", \"leaf-type\": \"inet:ipv6-prefix\"}, \"dest\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"dest\", \"leaf-type\": \"inet:ipv6-prefix\"}, \"tos\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"tos\", \"leaf-type\": \"uint64\"}, \"invert\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"invert\", \"leaf-type\": \"openwrt-bool\"}, \"priority\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"priority\", \"leaf-type\": \"uint64\"}, \"lookup\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"lookup\", \"leaf-type\": \"string\"}, \"goto\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"goto\", \"leaf-type\": \"uint64\"}, \"action\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"action\", \"leaf-type\": \"string\"}}, \"section\": \"rule\", \"keys\": [\"mark\"]}}}, \"routes\": {\"type\": \"container\", \"map\": {\"ip4routes\": {\"type\": \"list\", \"map\": {\"name\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"name\", \"leaf-type\": \"string\"}, \"interface\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"interface\", \"leaf-type\": \"string\", \"mandatory\": true}, \"target\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"target\", \"leaf-type\": \"inet:ipv4-address\"}, \"netmask\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"netmask\", \"leaf-type\": \"inet:ipv4-prefix\"}, \"gateway\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"gateway\", \"leaf-type\": \"inet:ipv4-address\"}, \"metric\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"metric\", \"leaf-type\": \"uint64\"}, \"mtu\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"mtu\", \"leaf-type\": \"uint64\"}, \"table\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"table\", \"leaf-type\": \"string\"}, \"source\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"source\", \"leaf-type\": \"inet:ipv4-address\"}, \"onlink\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"onlink\", \"leaf-type\": \"openwrt-bool\"}, \"rtype\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"type\", \"leaf-type\": \"string\"}}, \"section\": \"route\", \"keys\": [\"name\"], \"mandatory\": [\"interface\"]}, \"ip6routes\": {\"type\": \"list\", \"map\": {\"name\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"name\", \"leaf-type\": \"string\"}, \"interface\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"interface\", \"leaf-type\": \"string\", \"mandatory\": true}, \"target\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"target\", \"leaf-type\": \"inet:ipv6-address\"}, \"gateway\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"gateway\", \"leaf-type\": \"inet:ipv6-address\"}, \"metric\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"metric\", \"leaf-type\": \"uint64\"}, \"mtu\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"mtu\", \"leaf-type\": \"uint64\"}, \"table\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"table\", \"leaf-type\": \"string\"}, \"source\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"source\", \"leaf-type\": \"inet:ipv4-address\"}, \"onlink\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"onlink\", \"leaf-type\": \"openwrt-bool\"}, \"rtype\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"type\", \"leaf-type\": \"string\"}}, \"section\": \"route6\", \"keys\": [\"name\"], \"mandatory\": [\"interface\"]}}}, \"switches\": {\"type\": \"container\", \"map\": {\"switch\": {\"type\": \"list\", \"map\": {\"name\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"name\", \"leaf-type\": \"string\", \"mandatory\": true}, \"reset\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"reset\", \"leaf-type\": \"openwrt-bool\"}, \"enable_vlan\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"enable_vlan\", \"leaf-type\": \"openwrt-bool\"}, \"enable_mirror_rx\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"enable_mirror_rx\", \"leaf-type\": \"openwrt-bool\"}, \"enable_mirror_tx\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"enable_mirror_tx\", \"leaf-type\": \"openwrt-bool\"}, \"mirror_monitor_port\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"mirror_monitor_port\", \"leaf-type\": \"uint64\"}, \"mirror_source_port\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"mirror_source_port\", \"leaf-type\": \"uint64\"}, \"arl_age_time\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"arl_age_time\", \"leaf-type\": \"uint64\"}, \"igmp_snooping\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"igmp_snooping\", \"leaf-type\": \"openwrt-bool\"}, \"igmp_v3\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"igmp_v3\", \"leaf-type\": \"openwrt-bool\"}}, \"section\": \"switch\", \"keys\": [\"name\"], \"mandatory\": [\"name\"]}, \"switch_vlan\": {\"type\": \"list\", \"map\": {\"vlan_description\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"description\", \"leaf-type\": \"string\"}, \"device\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"device\", \"leaf-type\": \"string\", \"mandatory\": true}, \"vlan\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"vlan\", \"leaf-type\": \"uint64\", \"mandatory\": true}, \"vid\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"vid\", \"leaf-type\": \"uint64\"}, \"ports\": {\"type\": \"leaf-list\", \"map\": {}, \"option\": \"ports\", \"leaf-type\": \"string\"}}, \"section\": \"switch_vlan\", \"keys\": [\"device\", \"vlan\"], \"mandatory\": [\"device\", \"vlan\"]}, \"switch_port\": {\"type\": \"list\", \"map\": {\"device\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"device\", \"leaf-type\": \"string\", \"mandatory\": true}, \"port\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"port\", \"leaf-type\": \"uint64\", \"mandatory\": true}, \"pvid\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"pvid\", \"leaf-type\": \"uint64\"}, \"enable_eee\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"enable_eee\", \"leaf-type\": \"openwrt-bool\"}, \"igmp_snooping\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"igmp_snooping\", \"leaf-type\": \"openwrt-bool\"}, \"igmp_v3\": {\"type\": \"leaf\", \"map\": {}, \"option\": \"igmp_v3\", \"leaf-type\": \"openwrt-bool\"}}, \"section\": \"switch_port\", \"keys\": [\"device\", \"port\"], \"mandatory\": [\"device\", \"port\"]}}}}, \"package\": \"network\"}"}
};

static const map_str2str yang2regex[] = {
    {"openwrt-bool", "{\"leaf-type\": \"string\", \"pattern\": \"^(0|1)$\"}"},
    {"inet:ipv4-address", "{\"leaf-type\": \"string\", \"pattern\": [\"^(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])(%[\\\\p{N}\\\\p{L}]+)?$\"]}"},
    {"inet:ipv6-address", "{\"leaf-type\": \"string\", \"pattern\": [\"^((:|[0-9a-fA-F]{0,4}):)([0-9a-fA-F]{0,4}:){0,5}((([0-9a-fA-F]{0,4}:)?(:|[0-9a-fA-F]{0,4}))|(((25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])\\\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])))(%[\\\\p{N}\\\\p{L}]+)?$\", \"^(([^:]+:){6}(([^:]+:[^:]+)|(.*\\\\..*)))|((([^:]+:)*[^:]+)?::(([^:]+:)*[^:]+)?)(%.+)?$\"]}"},
    {"inet:ipv4-prefix", "{\"leaf-type\": \"string\", \"pattern\": [\"^(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])/(([0-9])|([1-2][0-9])|(3[0-2]))$\"]}"},
    {"inet:ipv6-prefix", "{\"leaf-type\": \"string\", \"pattern\": [\"^((:|[0-9a-fA-F]{0,4}):)([0-9a-fA-F]{0,4}:){0,5}((([0-9a-fA-F]{0,4}:)?(:|[0-9a-fA-F]{0,4}))|(((25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])\\\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])))(/(([0-9])|([0-9]{2})|(1[0-1][0-9])|(12[0-8])))$\", \"^(([^:]+:){6}(([^:]+:[^:]+)|(.*\\\\..*)))|((([^:]+:)*[^:]+)?::(([^:]+:)*[^:]+)?)(/.+)$\"]}"},
    {"yang:phys-address", "{\"leaf-type\": \"string\", \"pattern\": [\"^([0-9a-fA-F]{2}(:[0-9a-fA-F]{2})*)?$\"]}"}
};

enum yang_type {
  NONE,
  BINARY,
  BITS,
  BOOLEAN,
  DECIMAL_64,
  EMPTY,
  ENUMERATION,
  IDENTITY_REF,
  INSTANCE_IDENTIFIER,
  INT_8,
  INT_16,
  INT_32,
  INT_64,
  LEAF_REF,
  STRING,
  UINT_8,
  UINT_16,
  UINT_32,
  UINT_64,
  UNION
};
typedef enum yang_type yang_type;

struct map_str2yang_type {
  char* str;
  yang_type type;
};
typedef struct map_str2yang_type map_str2yang_type;

static const map_str2yang_type str2yang_type[] = {
    {"string", STRING},
    {"int8", INT_8},
    {"int16", INT_16},
    {"int32", INT_32},
    {"int64", INT_64},
    {"uint8", UINT_8},
    {"uint16", UINT_16},
    {"uint32", UINT_32},
    {"uint64", UINT_64},
    {"binary", BINARY},
    {"boolean", BOOLEAN},
    {"decimal64", DECIMAL_64}
};

struct json_object* yang_module_exists(char* module);
yang_type str_to_yang_type(const char* str);
const char* yang_for_type(const char* type);

#endif
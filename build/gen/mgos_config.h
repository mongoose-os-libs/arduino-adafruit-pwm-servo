/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/1.24/apps/arduino-adafruit-pwm-servo/esp8266/build_contexts/build_ctx_376334289/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/platforms/esp8266/src/esp_mbedtls_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp8266/src/esp_sys_config.yaml /fwbuild-volumes/1.24/apps/arduino-adafruit-pwm-servo/esp8266/build_contexts/build_ctx_376334289/build/gen/mos_conf_schema.yml
 */

#ifndef MGOS_CONFIG_H_
#define MGOS_CONFIG_H_

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_config_device {
  char *id;
  char *password;
};

struct mgos_config_debug {
  char *udp_log_addr;
  int mbedtls_level;
  int level;
  char *filter;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  char *tz_spec;
  int wdt_timeout;
  char *pref_ota_lib;
};

struct mgos_config_spi {
  int enable;
  int debug;
  int miso_gpio;
  int mosi_gpio;
  int sclk_gpio;
  int cs0_gpio;
  int cs1_gpio;
  int cs2_gpio;
};

struct mgos_config_i2c {
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config {
  struct mgos_config_device device;
  struct mgos_config_debug debug;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_spi spi;
  struct mgos_config_i2c i2c;
};

/* Parametrized accessor prototypes {{{ */
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
const char *mgos_config_get_device_id(struct mgos_config *cfg);
const char *mgos_config_get_device_password(struct mgos_config *cfg);
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
int         mgos_config_get_debug_level(struct mgos_config *cfg);
const char *mgos_config_get_debug_filter(struct mgos_config *cfg);
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
const struct mgos_config_spi *mgos_config_get_spi(struct mgos_config *cfg);
int         mgos_config_get_spi_enable(struct mgos_config *cfg);
int         mgos_config_get_spi_debug(struct mgos_config *cfg);
int         mgos_config_get_spi_miso_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_mosi_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_sclk_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs0_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs1_gpio(struct mgos_config *cfg);
int         mgos_config_get_spi_cs2_gpio(struct mgos_config *cfg);
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg);
int         mgos_config_get_i2c_enable(struct mgos_config *cfg);
int         mgos_config_get_i2c_freq(struct mgos_config *cfg);
int         mgos_config_get_i2c_debug(struct mgos_config *cfg);
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);

void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_spi_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_miso_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_mosi_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_sclk_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs0_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs1_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_spi_cs2_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_password(void) { return mgos_config_get_device_password(&mgos_sys_config); }
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_filter(void) { return mgos_config_get_debug_filter(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const struct mgos_config_spi *mgos_sys_config_get_spi(void) { return mgos_config_get_spi(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_enable(void) { return mgos_config_get_spi_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_debug(void) { return mgos_config_get_spi_debug(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_miso_gpio(void) { return mgos_config_get_spi_miso_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_mosi_gpio(void) { return mgos_config_get_spi_mosi_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_sclk_gpio(void) { return mgos_config_get_spi_sclk_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs0_gpio(void) { return mgos_config_get_spi_cs0_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs1_gpio(void) { return mgos_config_get_spi_cs1_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_spi_cs2_gpio(void) { return mgos_config_get_spi_cs2_gpio(&mgos_sys_config); }
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
static inline int         mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }

static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_password(const char *val) { mgos_config_set_device_password(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_filter(const char *val) { mgos_config_set_debug_filter(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char *val) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_enable(int         val) { mgos_config_set_spi_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_debug(int         val) { mgos_config_set_spi_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_miso_gpio(int         val) { mgos_config_set_spi_miso_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_mosi_gpio(int         val) { mgos_config_set_spi_mosi_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_sclk_gpio(int         val) { mgos_config_set_spi_sclk_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs0_gpio(int         val) { mgos_config_set_spi_cs0_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs1_gpio(int         val) { mgos_config_set_spi_cs1_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_spi_cs2_gpio(int         val) { mgos_config_set_spi_cs2_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_enable(int         val) { mgos_config_set_i2c_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_freq(int         val) { mgos_config_set_i2c_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_debug(int         val) { mgos_config_set_i2c_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_sda_gpio(int         val) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_scl_gpio(int         val) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, val); }


const struct mgos_conf_entry *mgos_config_schema();

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_CONFIG_H_ */

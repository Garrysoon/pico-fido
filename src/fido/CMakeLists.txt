set(PICOKEYS_SDK_DIR ${CMAKE_CURRENT_LIST_DIR}/../../pico-keys-sdk)

idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS .
        ${PICOKEYS_SDK_DIR}/src
        ${PICOKEYS_SDK_DIR}/src/compat
        ${PICOKEYS_SDK_DIR}/src/fs
        ${PICOKEYS_SDK_DIR}/src/otp
        ${PICOKEYS_SDK_DIR}/src/rng
        ${PICOKEYS_SDK_DIR}/src/usb
        ${PICOKEYS_SDK_DIR}/src/led
        ${PICOKEYS_SDK_DIR}/third-party/tinycbor/src
        ${PICOKEYS_SDK_DIR}/third-party/cjson
    REQUIRES esp_tinyusb mbedtls efuse pico-keys-sdk
)
idf_component_set_property(${COMPONENT_NAME} WHOLE_ARCHIVE ON)

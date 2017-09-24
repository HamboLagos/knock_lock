add_source_files(
    bsp/device_configuration.c

    main.c

    oscillator/oscillator.c
)

configure_hal(oscillator/hal oscillator_hal)

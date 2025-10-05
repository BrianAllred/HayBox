#ifndef _MODES_HDR_HPP
#define _MODES_HDR_HPP

#include "core/ControllerMode.hpp"
#include "core/state.hpp"

#include <config.pb.h>

class HDR : public ControllerMode {
  public:
    HDR();
    void SetConfig(GameModeConfig &config, const HDROptions options);

  private:
    HDROptions _options;
    bool _horizontal_socd;

    void HandleSocd(InputState &inputs);
    void UpdateDigitalOutputs(const InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(const InputState &inputs, OutputState &outputs);
};

#endif

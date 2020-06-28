#pragma once

#include "Action.h"

class ToggleMuteAction final : public Action {
 public:
  ToggleMuteAction(
    ESDConnectionManager* esd,
    const std::string& context);
  static const std::string ACTION_ID;

 protected:
  virtual void MuteStateDidChange(bool isMuted) override;
  virtual void WillAppear() override;
  virtual void KeyUp() override;
};

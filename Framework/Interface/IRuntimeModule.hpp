#pragma once

#include "Interface.hpp"

namespace My {
Interface IRuntimeModule {
  public:
    virtual ~IRuntimeModule(){};
    // 初始化
    virtual int Initialize() = 0;
    // 结束化
    virtual void Finalize() = 0;
    // 时钟周期
    virtual int Tick() = 0;
};

} // namespace My
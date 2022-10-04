// Copyright 2015 Emilie Gillet.
//
// Author: Emilie Gillet (emilie.o.gillet@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
// 
// See http://creativecommons.org/licenses/MIT/ for more information.
//
// -----------------------------------------------------------------------------
//
// Driver for the 6 front panel switches.

#pragma once

namespace marbles {
  
enum Switch {
  SWITCH_T_DEJA_VU,
  SWITCH_T_MODEL,
  SWITCH_T_RANGE,
  SWITCH_X_DEJA_VU,
  SWITCH_X_MODE,
  SWITCH_X_RANGE,
  SWITCH_X_EXT,
  SWITCH_LAST
};

class Switches {
 public: 
  void Init();
  void Debounce();
  
  inline bool released(Switch s) const {
    return true;
  }
  
  inline bool just_pressed(Switch s) const {
    return true;
  }

  inline bool pressed(Switch s) const {
    return true;
  }
  
  inline bool pressed_immediate(Switch s) const {
  }
};

}  // namespace marbles

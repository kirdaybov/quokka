
#include "Mouse.h"
#include "Application/WinApplication.h"

namespace quokka
{

Mouse::Mouse()
      :hWnd(dynamic_cast<WinApplication*>(GApp())->GetHWND())
    {}
    //POINT GetPosition()
    //{
    //  POINT p;
    //  if (GetCursorPos(&p))
    //    ScreenToClient(hWnd, &p);
    //
    //  return p;
    //}
}
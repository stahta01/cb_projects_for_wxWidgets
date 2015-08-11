cb_projects_for_wxWidgets
=========================

Code::Blocks projects for building wxWidgets sample code

The file wx-config.exe needs to be in the exe search path.
To build it compile the CB project in folder wx-config-win.

The way these CB Projects are setup requires
that these windows env. variables be set
WXWIN to the base folder of the wxWidgets source code.
 This base folder should contain an include folder under it.
WXCFG to the relative path that contains the build.cfg
 Example: gcc_dll\mswu

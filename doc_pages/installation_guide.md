@page installation_guide Installation Guide

@tableofcontents

@section installation_guidesection1 Layout

Ths installed verion of this project comes with the following:
- bin
- lib
- include
- doc
- config

@section installation_guidesection2 Cmake Import

```cmake
list(APPEND CMAKE_PATH_PREFIX ${CMAKE_SOURCE_DIR}/../ObjectModelInstall)
find_package(ObjectModel)
target_link_libraries(MySimulation ObjectModel::ObjectModel)
```

@subsection installation_guidesubsection2sub1 CMAKE PATH PREFIX

The `CMAKE_PATH_PREFIX` must be to the root of your ObjectModel install folder.

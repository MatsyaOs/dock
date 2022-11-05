# Install script for directory: /run/media/tokyo/DATA/Documents/final/dock

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tokyo/archuseriso/profiles/matsya/airootfs/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-dock" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-dock")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-dock"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/run/media/tokyo/DATA/Documents/final/dock/build/matsya-dock")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-dock" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-dock")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/matsya-dock")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/matsya-dock/translations/ar_AA.qm;/usr/share/matsya-dock/translations/be_BY.qm;/usr/share/matsya-dock/translations/be_Latn.qm;/usr/share/matsya-dock/translations/bg_BG.qm;/usr/share/matsya-dock/translations/bs_BA.qm;/usr/share/matsya-dock/translations/cs_CZ.qm;/usr/share/matsya-dock/translations/da_DK.qm;/usr/share/matsya-dock/translations/de_DE.qm;/usr/share/matsya-dock/translations/en_US.qm;/usr/share/matsya-dock/translations/eo_XX.qm;/usr/share/matsya-dock/translations/es_ES.qm;/usr/share/matsya-dock/translations/es_MX.qm;/usr/share/matsya-dock/translations/fa_IR.qm;/usr/share/matsya-dock/translations/fi_FI.qm;/usr/share/matsya-dock/translations/fr_FR.qm;/usr/share/matsya-dock/translations/he_IL.qm;/usr/share/matsya-dock/translations/hi_IN.qm;/usr/share/matsya-dock/translations/hu_HU.qm;/usr/share/matsya-dock/translations/id_ID.qm;/usr/share/matsya-dock/translations/ie.qm;/usr/share/matsya-dock/translations/it_IT.qm;/usr/share/matsya-dock/translations/ja_JP.qm;/usr/share/matsya-dock/translations/lt_LT.qm;/usr/share/matsya-dock/translations/lv_LV.qm;/usr/share/matsya-dock/translations/mg.qm;/usr/share/matsya-dock/translations/ml_IN.qm;/usr/share/matsya-dock/translations/nb_NO.qm;/usr/share/matsya-dock/translations/ne_NP.qm;/usr/share/matsya-dock/translations/pl_PL.qm;/usr/share/matsya-dock/translations/pt_BR.qm;/usr/share/matsya-dock/translations/pt_PT.qm;/usr/share/matsya-dock/translations/ro_RO.qm;/usr/share/matsya-dock/translations/ru_RU.qm;/usr/share/matsya-dock/translations/si_LK.qm;/usr/share/matsya-dock/translations/sk_SK.qm;/usr/share/matsya-dock/translations/so.qm;/usr/share/matsya-dock/translations/sr_RS.qm;/usr/share/matsya-dock/translations/sv_SE.qm;/usr/share/matsya-dock/translations/sw.qm;/usr/share/matsya-dock/translations/ta_IN.qm;/usr/share/matsya-dock/translations/tr_TR.qm;/usr/share/matsya-dock/translations/uk_UA.qm;/usr/share/matsya-dock/translations/uz_UZ.qm;/usr/share/matsya-dock/translations/vi_VN.qm;/usr/share/matsya-dock/translations/zh_CN.qm;/usr/share/matsya-dock/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/matsya-dock/translations" TYPE FILE FILES
    "/run/media/tokyo/DATA/Documents/final/dock/build/ar_AA.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/be_BY.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/be_Latn.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/bg_BG.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/bs_BA.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/cs_CZ.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/da_DK.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/de_DE.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/en_US.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/eo_XX.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/es_ES.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/es_MX.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/fa_IR.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/fi_FI.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/fr_FR.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/he_IL.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/hi_IN.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/hu_HU.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/id_ID.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/ie.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/it_IT.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/ja_JP.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/lt_LT.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/lv_LV.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/mg.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/ml_IN.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/nb_NO.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/ne_NP.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/pl_PL.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/pt_BR.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/pt_PT.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/ro_RO.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/ru_RU.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/si_LK.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/sk_SK.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/so.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/sr_RS.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/sv_SE.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/sw.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/ta_IN.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/tr_TR.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/uk_UA.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/uz_UZ.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/vi_VN.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/zh_CN.qm"
    "/run/media/tokyo/DATA/Documents/final/dock/build/zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/tokyo/archuseriso/profiles/matsya/airootfs/etc/matsya-dock-list.conf")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/tokyo/archuseriso/profiles/matsya/airootfs/etc" TYPE FILE FILES "/run/media/tokyo/DATA/Documents/final/dock/matsya-dock-list.conf")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/run/media/tokyo/DATA/Documents/final/dock/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

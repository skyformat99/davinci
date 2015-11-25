# HTML5 runtime
# 
# Copyright (C) 2015 Zhang Ji Peng
# Contact: onecoolx@gmail.com

{
  'variables': {
    'lib_root_dir': 'webkit-2.2.8/Source',
    'lib_dir': 'webkit-2.2.8/Source/WebCore',
    'lib_src': '<(lib_dir)/../../../WebKit',
    'lib_name': 'WebCore',
  },
  'target_name': '<(lib_name)',
  'type': 'shared_library',
  'dependencies': [
    'WTF',
    'JavaScriptCore',
    'translator',
    'sqlite',
    'curl',
    'icuuc',
    'icui18n',
    'jpeg',
    'png',
    'xml2',
    'xslt',
    'zlib',
  ],
  'defines': [
    'BUILDING_WebCore',
  ],
  'include_dirs': [
    '<(lib_dir)',
    '<(lib_dir)/Generated',
    '<(lib_dir)/Modules/battery',
    '<(lib_dir)/Modules/filesystem',
    '<(lib_dir)/Modules/gamepad',
    '<(lib_dir)/Modules/geolocation',
    '<(lib_dir)/Modules/indexeddb',
    '<(lib_dir)/Modules/indieui',
    '<(lib_dir)/Modules/mediasource',
    '<(lib_dir)/Modules/mediastream',
    '<(lib_dir)/Modules/navigatorcontentutils',
    '<(lib_dir)/Modules/networkinfo',
    '<(lib_dir)/Modules/notifications',
    '<(lib_dir)/Modules/proximity',
    '<(lib_dir)/Modules/quota',
    '<(lib_dir)/Modules/speech',
    '<(lib_dir)/Modules/vibration',
    '<(lib_dir)/Modules/webaudio',
    '<(lib_dir)/Modules/webdatabase',
    '<(lib_dir)/Modules/websockets',
    '<(lib_dir)/accessibility',
    '<(lib_dir)/bindings',
    '<(lib_dir)/bindings/generic',
    '<(lib_dir)/bindings/js',
    '<(lib_dir)/bridge',
    '<(lib_dir)/bridge/c',
    '<(lib_dir)/bridge/jsc',
    '<(lib_dir)/css',
    '<(lib_dir)/dom',
    '<(lib_dir)/dom/default',
    '<(lib_dir)/editing',
    '<(lib_dir)/fileapi',
    '<(lib_dir)/history',
    '<(lib_dir)/html',
    '<(lib_dir)/html/canvas',
    '<(lib_dir)/html/forms',
    '<(lib_dir)/html/parser',
    '<(lib_dir)/html/shadow',
    '<(lib_dir)/html/track',
    '<(lib_dir)/inspector',
    '<(lib_dir)/loader',
    '<(lib_dir)/loader/appcache',
    '<(lib_dir)/loader/archive',
    '<(lib_dir)/loader/archive/mhtml',
    '<(lib_dir)/loader/cache',
    '<(lib_dir)/loader/icon',
    '<(lib_dir)/mathml',
    '<(lib_dir)/page',
    '<(lib_dir)/page/animation',
    '<(lib_dir)/page/scrolling',
    '<(lib_dir)/platform',
    '<(lib_dir)/platform/animation',
    '<(lib_dir)/platform/audio',
    '<(lib_dir)/platform/graphics',
    '<(lib_dir)/platform/graphics/cpu/arm',
    '<(lib_dir)/platform/graphics/cpu/arm/filters/',
    '<(lib_dir)/platform/graphics/filters',
    '<(lib_dir)/platform/graphics/filters/texmap',
    '<(lib_dir)/platform/graphics/freetype',
    '<(lib_dir)/platform/graphics/gpu',
    '<(lib_dir)/platform/graphics/harfbuzz',
    '<(lib_dir)/platform/graphics/harfbuzz/ng',
    '<(lib_dir)/platform/graphics/opengl',
    '<(lib_dir)/platform/graphics/opentype',
    '<(lib_dir)/platform/graphics/transforms',
    '<(lib_dir)/platform/image-decoders',
    '<(lib_dir)/platform/image-decoders/bmp',
    '<(lib_dir)/platform/image-decoders/gif',
    '<(lib_dir)/platform/image-decoders/ico',
    '<(lib_dir)/platform/image-decoders/jpeg',
    '<(lib_dir)/platform/image-decoders/png',
    '<(lib_dir)/platform/image-decoders/webp',
    '<(lib_dir)/platform/leveldb',
    '<(lib_dir)/platform/linux',
    '<(lib_dir)/platform/mediastream',
    '<(lib_dir)/platform/mediastream/gstreamer',
    '<(lib_dir)/platform/mock',
    '<(lib_dir)/platform/network',
    '<(lib_dir)/platform/sql',
    '<(lib_dir)/platform/text',
    '<(lib_dir)/platform/text/transcoder',
    '<(lib_dir)/plugins',
    '<(lib_dir)/rendering',
    '<(lib_dir)/rendering/mathml',
    '<(lib_dir)/rendering/shapes',
    '<(lib_dir)/rendering/style',
    '<(lib_dir)/rendering/svg',
    '<(lib_dir)/storage',
    '<(lib_dir)/style',
    '<(lib_dir)/svg',
    '<(lib_dir)/svg/animation',
    '<(lib_dir)/svg/graphics',
    '<(lib_dir)/svg/graphics/filters',
    '<(lib_dir)/svg/properties',
    '<(lib_dir)/testing',
    '<(lib_dir)/testing/js',
    '<(lib_dir)/websockets',
    '<(lib_dir)/workers',
    '<(lib_dir)/xml',
    '<(lib_dir)/xml/parser',
    '<(lib_src)/platform/network',
    '<(lib_src)/platform/graphics',
    '<(lib_root_dir)',
    '<(lib_root_dir)/JavaScriptCore',
    '<(lib_root_dir)/JavaScriptCore/API',
	'<(lib_root_dir)/JavaScriptCore/ForwardingHeaders',
	'<(lib_root_dir)/JavaScriptCore/assembler',
	'<(lib_root_dir)/JavaScriptCore/bytecode',
	'<(lib_root_dir)/JavaScriptCore/bytecompiler',
	'<(lib_root_dir)/JavaScriptCore/debugger',
	'<(lib_root_dir)/JavaScriptCore/dfg',
	'<(lib_root_dir)/JavaScriptCore/disassembler',
	'<(lib_root_dir)/JavaScriptCore/ftl',
	'<(lib_root_dir)/JavaScriptCore/heap',
	'<(lib_root_dir)/JavaScriptCore/interpreter',
	'<(lib_root_dir)/JavaScriptCore/jit',
	'<(lib_root_dir)/JavaScriptCore/llint',
	'<(lib_root_dir)/JavaScriptCore/parser',
	'<(lib_root_dir)/JavaScriptCore/profiler',
	'<(lib_root_dir)/JavaScriptCore/runtime',
	'<(lib_root_dir)/JavaScriptCore/tools',
	'<(lib_root_dir)/JavaScriptCore/yarr',
    '<(lib_root_dir)/WTF',
    '<(lib_root_dir)/ThirdParty/ANGLE/include',
    '<(lib_root_dir)/ThirdParty/ANGLE/include/GLSLANG',
    '<(lib_root_dir)/ThirdParty/ANGLE/include/KHR',
  ],
  'conditions': [
    ['OS=="win"', {
      'include_dirs': [
        '<(lib_dir)/plugins/win',
        '$(OutDir)/include',
        '$(OutDir)/include/uc',
        '$(OutDir)/include/i18n',
        '$(OutDir)/include/freetype',
        '$(OutDir)/include/harfbuzz',
        '$(OutDir)/<(lib_name)',
        '$(OutDir)/../../build',
      ],
      'defines': [
        'HAVE_BOOLEAN',
        'XMD_H',
      ],
      'dependencies': [
        'EGL',
        'GLESv2',
      ],
      'sources': [ 
      ],
      'actions': [
      {
       'action_name': 'generated_files',
       'inputs': [
         '<(lib_dir)',
       ],
       'outputs': [
         '<(lib_dir)/Generated',
       ],
       'action': [
         'call',
         '<(lib_dir)/generated_files.bat',
         '<(_inputs)',
         '<(lib_dir)/Generated',
       ],
       'msvs_cygwin_shell': 0,
      }],
      'msvs_disabled_warnings': [4800, 4805, 4355, 4396, 4244, 4251, 4291, 4344, 4065, 4018, 4503, 4996, 4005],
    }],
    ['OS=="linux"', {
      'include_dirs': [
        '$(builddir)/include',
        '$(builddir)/include/uc',
        '$(builddir)/include/i18n',
        '$(builddir)/include/freetype',
        '$(builddir)/include/harfbuzz',
        '$(builddir)/<(lib_name)',
      ],
      'defines': [
      ],
      'sources': [ 
      ],
      'cflags': [
        '-fstrict-aliasing',
        '-fvisibility=hidden',
      ],
      'cflags_cc': [
        '-fvisibility-inlines-hidden',
        '-fno-rtti',
      ],
      'actions': [
      {
       'action_name': 'generated_files',
       'inputs': [
         '<(lib_dir)',
       ],
       'outputs': [
         '<(lib_dir)/Generated',
       ],
       'action': [
         'python',
         '<(lib_dir)/generated_files.py',
         '<(_inputs)',
         'Generated',
       ],
      }],
      'libraries': [
        '-lpthread',
      ],
    }],
  ],
  'includes': [
    './WebCoreList.gypi',
    '../build/configs.gypi',
    '../build/defines.gypi',
  ],
}


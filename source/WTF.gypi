# HTML5 runtime
# 
# Copyright (C) 2015 Zhang Ji Peng
# Contact: onecoolx@gmail.com

{
  'variables': {
    'lib_dir': 'webkit-2.2.8/Source/WTF',
    'lib_name': 'WTF',
  },
  'target_name': '<(lib_name)',
  'type': 'shared_library',
  'dependencies': [
    'icuuc',
    'zlib',
  ],
  'defines': [
  ],
  'include_dirs': [
    '<(lib_dir)',
    '<(lib_dir)/wtf',
  ],
  'sources': [ 
    '<(lib_dir)/wtf/Assertions.cpp',
    '<(lib_dir)/wtf/Atomics.cpp',
    '<(lib_dir)/wtf/BitVector.cpp',
    '<(lib_dir)/wtf/CompilationThread.cpp',
    '<(lib_dir)/wtf/Compression.cpp',
    '<(lib_dir)/wtf/CryptographicallyRandomNumber.cpp',
    '<(lib_dir)/wtf/CurrentTime.cpp',
    '<(lib_dir)/wtf/DataLog.cpp',
    '<(lib_dir)/wtf/DateMath.cpp',
    '<(lib_dir)/wtf/DecimalNumber.cpp',
    '<(lib_dir)/wtf/DynamicAnnotations.cpp',
    '<(lib_dir)/wtf/FastMalloc.cpp',
    '<(lib_dir)/wtf/FilePrintStream.cpp',
    '<(lib_dir)/wtf/FunctionDispatcher.cpp',
    '<(lib_dir)/wtf/GregorianDateTime.cpp',
    '<(lib_dir)/wtf/HashTable.cpp',
    '<(lib_dir)/wtf/MD5.cpp',
    '<(lib_dir)/wtf/MainThread.cpp',
    '<(lib_dir)/wtf/MediaTime.cpp',
    '<(lib_dir)/wtf/MetaAllocator.cpp',
    '<(lib_dir)/wtf/NumberOfCores.cpp',
    '<(lib_dir)/wtf/RAMSize.cpp',
    '<(lib_dir)/wtf/OSRandomSource.cpp',
    '<(lib_dir)/wtf/PageAllocationAligned.cpp',
    '<(lib_dir)/wtf/PageBlock.cpp',
    '<(lib_dir)/wtf/ParallelJobsGeneric.cpp',
    '<(lib_dir)/wtf/PrintStream.cpp',
    '<(lib_dir)/wtf/RandomNumber.cpp',
    '<(lib_dir)/wtf/RefCountedLeakCounter.cpp',
    '<(lib_dir)/wtf/SHA1.cpp',
    '<(lib_dir)/wtf/SixCharacterHash.cpp',
    '<(lib_dir)/wtf/StackBounds.cpp',
    '<(lib_dir)/wtf/StringPrintStream.cpp',
    '<(lib_dir)/wtf/TCSystemAlloc.cpp',
    '<(lib_dir)/wtf/Threading.cpp',
    '<(lib_dir)/wtf/TypeTraits.cpp',
    '<(lib_dir)/wtf/WTFThreadData.cpp',
    '<(lib_dir)/wtf/dtoa.cpp',
    '<(lib_dir)/wtf/dtoa/bignum-dtoa.cc',
    '<(lib_dir)/wtf/dtoa/bignum.cc',
    '<(lib_dir)/wtf/dtoa/cached-powers.cc',
    '<(lib_dir)/wtf/dtoa/diy-fp.cc',
    '<(lib_dir)/wtf/dtoa/double-conversion.cc',
    '<(lib_dir)/wtf/dtoa/fast-dtoa.cc',
    '<(lib_dir)/wtf/dtoa/fixed-dtoa.cc',
    '<(lib_dir)/wtf/dtoa/strtod.cc',
    '<(lib_dir)/wtf/text/AtomicString.cpp',
    '<(lib_dir)/wtf/text/AtomicStringTable.cpp',
    '<(lib_dir)/wtf/text/Base64.cpp',
    '<(lib_dir)/wtf/text/CString.cpp',
    '<(lib_dir)/wtf/text/StringBuilder.cpp',
    '<(lib_dir)/wtf/text/StringImpl.cpp',
    '<(lib_dir)/wtf/text/StringStatics.cpp',
    '<(lib_dir)/wtf/text/WTFString.cpp',
    '<(lib_dir)/wtf/threads/BinarySemaphore.cpp',
    '<(lib_dir)/wtf/unicode/CollatorDefault.cpp',
    '<(lib_dir)/wtf/unicode/UTF8.cpp',
    '<(lib_dir)/wtf/unicode/icu/CollatorICU.cpp',
  ],
  'conditions': [
    ['OS=="win"', {
      'include_dirs': [
        '$(OutDir)/include',
      ],
      'defines': [
      ],
      'sources': [ 
        '<(lib_dir)/wtf/OSAllocatorWin.cpp',
        '<(lib_dir)/wtf/ThreadSpecificWin.cpp',
        '<(lib_dir)/wtf/ThreadingWin.cpp',
        '<(lib_dir)/wtf/win/OwnPtrWin.cpp',
      ],
#      'msvs_disabled_warnings': [4251, 4244],
    }],
    ['OS=="linux"', {
      'include_dirs': [
        '$(builddir)/include',
      ],
      'defines': [
      ],
      'cflags': [
        '-fstrict-aliasing',
      ],
      'cflags_cc': [
        '-fno-rtti',
      ],
      'libraries': [
        '-lpthread',
      ],
      'sources': [ 
        '<(lib_dir)/wtf/OSAllocatorPosix.cpp',
        '<(lib_dir)/wtf/ThreadIdentifierDataPthreads.cpp',
        '<(lib_dir)/wtf/ThreadingPthreads.cpp',
      ],
    }],
  ],
  'includes': [
    '../build/configs.gypi',
    '../build/defines.gypi',
  ],
}


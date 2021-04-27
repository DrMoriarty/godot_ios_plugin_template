#!/bin/bash

OUT=${1:-godot_plugin}
SCHEME=${2:-godot_plugin}
PROJECT=${3:-godot_plugin.xcodeproj}

xcodebuild archive \
    -project "./$PROJECT" \
    -scheme $SCHEME \
    -archivePath "./bin/ios_release.xcarchive" \
    -sdk iphoneos \
    SKIP_INSTALL=NO

xcodebuild archive \
    -project "./$PROJECT" \
    -scheme $SCHEME \
    -archivePath "./bin/sim_release.xcarchive" \
    -sdk iphonesimulator \
    SKIP_INSTALL=NO

xcodebuild archive \
    -project "./$PROJECT" \
    -scheme $SCHEME \
    -archivePath "./bin/ios_debug.xcarchive" \
    -sdk iphoneos \
    SKIP_INSTALL=NO \
    GCC_PREPROCESSOR_DEFINITIONS="DEBUG_ENABLED=1"

xcodebuild archive \
    -project "./$PROJECT" \
    -scheme $SCHEME \
    -archivePath "./bin/sim_debug.xcarchive" \
    -sdk iphonesimulator \
    SKIP_INSTALL=NO \
    GCC_PREPROCESSOR_DEFINITIONS="DEBUG_ENABLED=1"

# Creating a fat libraries for device and simulator
#lipo -create "./bin/ios_release.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" \
#     "./bin/sim_release.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" \
#     -output "./bin/${SCHEME}.release.a"

#lipo -create "./bin/ios_debug.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" \
#     "./bin/sim_debug.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" \
#     -output "./bin/${SCHEME}.debug.a"

mv "./bin/ios_release.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" "./bin/ios_release.xcarchive/Products/usr/local/lib/${OUT}.a"
mv "./bin/sim_release.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" "./bin/sim_release.xcarchive/Products/usr/local/lib/${OUT}.a"
mv "./bin/ios_debug.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" "./bin/ios_debug.xcarchive/Products/usr/local/lib/${OUT}.a"
mv "./bin/sim_debug.xcarchive/Products/usr/local/lib/lib${SCHEME}.a" "./bin/sim_debug.xcarchive/Products/usr/local/lib/${OUT}.a"

xcodebuild -create-xcframework \
    -library "./bin/ios_release.xcarchive/Products/usr/local/lib/${OUT}.a" \
    -library "./bin/sim_release.xcarchive/Products/usr/local/lib/${OUT}.a" \
    -output "./bin/${OUT}.release.xcframework"

xcodebuild -create-xcframework \
    -library "./bin/ios_debug.xcarchive/Products/usr/local/lib/${OUT}.a" \
    -library "./bin/sim_debug.xcarchive/Products/usr/local/lib/${OUT}.a" \
    -output "./bin/${OUT}.debug.xcframework"

#!/bin/bash

PROJECT=${1:-godot_plugin.xcodeproj}
SCHEME=${2:-godot_plugin}

xcodebuild archive \
    -project "./$PROJECT" \
    -scheme $SCHEME \
    -archivePath "./bin/ios.xcarchive" \
    -sdk iphoneos \
    SKIP_INSTALL=NO

xcodebuild archive \
    -project "./$PROJECT" \
    -scheme $SCHEME \
    -archivePath "./bin/ios_sim.xcarchive" \
    -sdk iphonesimulator \
    -arch x86_64 \
    SKIP_INSTALL=NO

# Creating a fat libraries for device and simulator
lipo -create "./bin/ios.xcarchive/Products/usr/local/lib/libgodot_plugin.a" \
     "./bin/ios_sim.xcarchive/Products/usr/local/lib/libgodot_plugin.a" \
     -output "./bin/godot_plugin.a"

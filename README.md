# Godot iOS Plugin template

This repo contains a *starter* Xcode configuration to build Godot plugin for iOS and publish it in NativeLib repo.
Xcode project allows to build static `.a` libraries, that could be used with `.gdip` file as Godot's plugin to include platform functionality into exported application.

# Initial setup

## Getting Godot engine headers

To build iOS plugin library it's required to have Godot's header files including generated ones. 

If you want to use cloned godot repo than run `git submodule init; git submodule update`. After that run `scons platform=iphone target=<release|debug|release_debug>` in `godot` submodule folder.

Or you can just copy your local godot repo into `godot` folder.

# Plugin building

When making changes in template you could build it in Xcode and check that all ok. When you are ready to make final build exit from Xcode and run `./generate_static_library.sh` in plugin template folder.

It will make two libraries in `bin` folder: `godot_plugin.debug.a` and `godot_plugin.release.a`. Actually they both are release but one of them uses debug godot interface and will work with debug export.

After building you could pack your plugin with `nativelib -P .` runned in template folder.

# Plugin publishing

You can use your plugin from your local repo after completing the previous step. But if you want to share your work with other people you should make additional steps.

At first make new github repo. Copy, commit and push all files from the template folder to this new repository. Then check that you have installed [gh](https://github.com/cli/cli). 

# Godot iOS Plugin template

This repo contains a *starter* Xcode configuration to build Godot plugin for iOS and publish it in NativeLib repo.
Xcode project allows to build static `.a` libraries, that could be used with `.gdip` file as Godot's plugin to include platform functionality into exported application.

# Initial setup

In common case you should not clone or fork this repository. Just download [https://github.com/DrMoriarty/godot_ios_plugin_template/archive/master.zip](https://github.com/DrMoriarty/godot_ios_plugin_template/archive/master.zip) and you can start code.

# Add some useful code

This plugin template allows you write your code in Swift, but you should use C++ class in order to glue Swift code with internals of Godot.

Add new methods to `godot_plugin/godot_plugin_class.h` and write their implementation in `godot_plugin/godot_plugin_class.mm`. The template has two methods which you can use as reference: `input_method` and `output_method`. First show you how to process input parameters from Godot's types into Objective-C types. There are several methods for translating, see them in the beginning of file `godot_plugin_class.mm`. The second method shows you how to return complex dictionary from native code to Godot.

In file `SwiftClass.swift` you can find the place for your Swift code. Then you can call it's methods from C++ glue class.

After adding new methods don't forget to make them available for Godot. Open file `godot_plugin/godot_plugin_class.mm` find method `PluginExample::_bind_methods` and add new method declarations (use two existing methods as reference).

# Rename plugin template

In order to use several plugins at one time there are necessary that all of them have unique names. So you should rename `plugin_template` to something more suitable.

Let's imagine that our new plugin name will be `foo-bar135`. Now I show you what exactly should you change step by step:

1) File `godot_plugin/godot_plugin.h` - change `godot_plugin_init()` -> `foo_bar135_init()`, `godot_plugin_deinit()` -> `foo_bar135_deinit()`
2) File `godot_plugin/godot_plugin.mm` - change `godot_plugin_init()` -> `foo_bar135_init()`, `godot_plugin_deinit()` -> `foo_bar135_deinit()`, `Engine::Singleton("PluginExample", plugin)` -> `Engine::Singleton("FooBar135", plugin)`
3) File `plugin_template.gdip` - change `"PluginTemplate"` -> `"FooBar135"`, `"godot_plugin.a"` -> `"foo_bar135.a"`, `godot_plugin_init` -> `foo_bar135_init`, `godot_plugin_deinit` -> `foo_bar135_deinit`, 

In file `nativelib.json` there are more changes. I will show you final variant:
```
{
  "name": "foo-bar135",
  "display_name": "Foo Bar 135",
  "description": "Description of your plugin. One line, but it can be very long.",
  "version": "1.0.0",
  "license": "MIT",
  "url": "https://github.com/YourGitHubName/your_github_repository",
  "category": "misc",
  "godot_version": "3.2.4",
  "author": {
    "name": "Your Name",
    "url": "https://your_site.com",
    "donate": "Url to your donate page, or remove if not needed"
  },
  "platform_ios": {
    "files": {
      "bin/godot_plugin.debug.a": "ios/plugins/foo_bar135/foo_bar135.debug.a",
      "bin/godot_plugin.release.a": "ios/plugins/foo_bar135/foo_bar135.release.a",
      "plugin_template.gdip": "ios/plugins/foo_bar135/foo_bar135.gdip"
    }
  }
}
```

# Plugin building

When making changes in template you could build it in Xcode and check that all ok. When you are ready to make final build exit from Xcode and run `./generate_static_library.sh` in plugin template folder.

It will make two libraries in `bin` folder: `godot_plugin.debug.a` and `godot_plugin.release.a`. Actually they both are release but one of them uses debug godot interface and will work with debug export.

After building you could pack your plugin with `nativelib -P .` runned in template folder.

If you don't have NativeLib just grab it from [this](https://github.com/DrMoriarty/nativelib-cli)

# Plugin publishing

You can use your plugin from your local repo after completing the previous step. But if you want to share your work with other people you should make additional steps.

At first make new github repo. Copy, commit and push all files from the template folder to this new repository. Then check that you have installed [gh](https://github.com/cli/cli). (in any complex cases ensure that your `origin` is your repository where you want to release the plugin)

When you are ready run `nativelib --github --publish .` in plugin's folder. It will pack your plugin, make release in your repo and upload metafile to [Godot Asset Index](https://github.com/godot-asset/index).

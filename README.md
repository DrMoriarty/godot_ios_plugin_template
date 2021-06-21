# Godot iOS Plugin template

This repo contains a *starter* Xcode configuration to build Godot plugin for iOS and publish it in NativeLib repo.
Xcode project allows to build `.xcframework` libraries, that could be used with `.gdip` file as Godot's plugin to include platform functionality into exported application.

# Initial setup

In common case you should not clone or fork this repository. Just download [https://github.com/DrMoriarty/godot_ios_plugin_template/archive/master.zip](https://github.com/DrMoriarty/godot_ios_plugin_template/archive/master.zip) and you can start code.

# Rename plugin template

In order to use several plugins at one time there are necessary that all of them have unique names. In order to set some unique name to your plugin just run `plugin` script in it's directory.

Note: To run this script you should have python installed in your system. All MacOSes and the most of Linuxes already have preinstalled python. For Windows you should go to https://www.python.org/downloads/windows/ and download it first.

Script usage is very simple:
![2021-03-15-120654](https://user-images.githubusercontent.com/1177068/111130490-526f3b80-8588-11eb-968a-fee67c1ba5a1.gif)

The script generates all needed files to compile and publish your plugin with new name. Additionaly you may want to edit generated `nativelib.json` and set your (author) name, URL of your repository plugin's description and so on.

This is example of `nativelib.json` file with all necessary fields:
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
      "bin/godot_plugin.debug.xcframework": "ios/plugins/foo_bar135/foo_bar135.debug.xcframework",
      "bin/godot_plugin.release.xcframework": "ios/plugins/foo_bar135/foo_bar135.release.xcframework",
      "plugin_template.gdip": "ios/plugins/foo_bar135/foo_bar135.gdip"
    }
  }
}
```

# Add some useful code

This plugin template allows you write your code in Objective-C and Swift. But in all cases it uses C++ class in order to glue native code with internals of Godot.

You can add new methods to plugin by again using `plugin` script:

![2021-03-15-120807](https://user-images.githubusercontent.com/1177068/111142355-a3d1f780-8595-11eb-89bb-72fa65dea349.gif)

During script work you should enter the name of the method, return type and all arguments types. It will create C++ method and optionally Swift method (if you choosed this option). After creating you should add return statement if the method's return type not `void`.

You can use script `plugin` many times to add more methods. But avoid editing other plugin's files because it can may lead to erros in executing of script. The best case is when you at first created all needed method stubs and after that you added your own code. 

# Plugin building

When making changes in template you could build it running the script `./generate_static_library.sh` and check that all ok. (The plugin template don't designed to compile in pure Xcode.)

It will make two libraries in `bin` folder: `godot_plugin.debug.xcframework` and `godot_plugin.release.xcframework`. Actually they both are release but one of them uses debug godot interface and will work with debug export.

After building you could pack your plugin with `nativelib -P .` runned in the plugin's folder.

If you don't have NativeLib just grab it from [this](https://github.com/DrMoriarty/nativelib-cli)

# Test plugin

If you skipped renaming plugin stage you can use this code to test your plugin (actually I use it myself for testing the template):
```
    if Engine.has_singleton('PluginExample'):
        print('PluginExample found')
        var pe = Engine.get_singleton('PluginExample')
        pe.input_method('World', {'none': 'there'})
        print(var2str(pe.output_method()))
    else:
        print('No PluginExample!')
```
If you already changed plugin name and public methods so make additional changes in this test code.

# Plugin publishing

You can use your plugin from your local repo after completing the previous step. But if you want to share your work with other people you should make additional steps.

At first make new github repo. Copy, commit and push all files from the template folder to this new repository. Then check that you have installed [gh](https://github.com/cli/cli). (in any complex cases ensure that your `origin` is your repository where you want to release the plugin)

When you are ready run `nativelib --github --publish .` in plugin's folder. It will pack your plugin, make release in your repo and upload metafile to [Godot Asset Index](https://github.com/godot-asset/index).

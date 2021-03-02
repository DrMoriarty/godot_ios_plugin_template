//
//  godot_plugin_class.swift
//  godot_plugin
//
//  Created by Vasya on 02.03.2021.
//  Copyright © 2021 Godot. All rights reserved.
//

import Foundation

@objcMembers public class SwiftClass : NSObject
{
    static func sayHello(str: String) {
        print("Hello, " + str)
    }
    
    static func makeSomethingCool() -> NSDictionary {
        let dictionary = NSMutableDictionary()
        dictionary["something"] = "cool"
        return dictionary as NSDictionary
    }
}

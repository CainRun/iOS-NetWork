//
//  AppDelegate.h
//  MusicTunes
//
//  Created by Cain on 2017/6/21.
//  Copyright © 2017年 Cain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, copy) void(^backgroundSessionCompletionHandler)();

@end


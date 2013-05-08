//
//  WXAppDelegate.h
//  WithoutXib
//
//  Created by Tatsuya Tobioka on 13/05/08.
//  Copyright (c) 2013年 Tatsuya Tobioka. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WXViewController;

@interface WXAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) WXViewController *viewController;

@end

//
//  AppDelegate.h
//  Watchie
//
//  Created by Andrew Sankey on 05/01/2015.
//  Copyright (c) 2015 Andrew Sankey. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define MIN_PASSWORD_LENGTH 6

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@end


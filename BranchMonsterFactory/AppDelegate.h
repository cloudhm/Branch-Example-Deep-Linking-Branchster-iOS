//
//  AppDelegate.h
//  BranchMonsterFactory
//
//  Created by Alex Austin on 9/6/14.
//  Copyright (c) 2014 Branch, Inc All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BranchUniversalObject.h"
#import "BranchUniversalObject+MonsterHelpers.h"


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property BranchUniversalObject *initialMonster;


@end


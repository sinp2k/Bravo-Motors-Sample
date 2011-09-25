//
//  TestAppDelegate.h
//  Test
//
//  Created by Prasanna yogesh on 25/09/11.
//  Copyright 2011 Ec Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestViewController;

@interface TestAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestViewController *viewController;

@end

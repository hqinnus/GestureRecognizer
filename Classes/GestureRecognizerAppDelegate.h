//
//  GestureRecognizerAppDelegate.h
//  GestureRecognizer
//
//  Created by Zhao Cong on 6/30/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GestureRecognizerViewController;

@interface GestureRecognizerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    GestureRecognizerViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet GestureRecognizerViewController *viewController;

@end


//
//  VLAppDelegate.h
//  VeryLight
//
//  Created by Shevchuk Pavel on 1/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class VLViewController;

@interface VLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) VLViewController *viewController;

@property (retain, nonatomic) AVCaptureDevice *captureDevice;

@end

//
//  AppDelegate.h
//  NewGoogleSample
//
//  Created by Aiswarya Viswanath on 20/10/15.
//  Copyright (c) 2015 Aiswarya Viswanath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>


@interface AppDelegate : UIResponder <UIApplicationDelegate,GIDSignInDelegate>

@property (strong, nonatomic) UIWindow *window;


@end


//
//  MGSplitViewAppDelegate.h
//  MGSplitView
//
//  Created by Matt Gemmell on 26/07/2010.
//  Copyright Instinctive Code 2010.
//

#import <UIKit/UIKit.h>

@class MGRootViewController;
@class MGDetailViewController;
@class MGSplitViewController;

@interface MGSplitViewAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MGSplitViewController *splitViewController;
    MGRootViewController *rootViewController;
    MGDetailViewController *detailViewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@property (nonatomic, strong) IBOutlet MGSplitViewController *splitViewController;
@property (nonatomic, strong) IBOutlet MGRootViewController *rootViewController;
@property (nonatomic, strong) IBOutlet MGDetailViewController *detailViewController;

@end

//
//  MGSplitViewAppDelegate.h
//  MGSplitView
//
//  Created by Matt Gemmell on 26/07/2010.
//  Copyright Instinctive Code 2010.
//

#import <UIKit/UIKit.h>

@class RootViewController;
@class DetailViewController;
@class MGSplitViewController;

@interface MGSplitViewAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MGSplitViewController *splitViewController;
    RootViewController *rootViewController;
    DetailViewController *detailViewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@property (nonatomic, strong) IBOutlet MGSplitViewController *splitViewController;
@property (nonatomic, strong) IBOutlet RootViewController *rootViewController;
@property (nonatomic, strong) IBOutlet DetailViewController *detailViewController;

@end

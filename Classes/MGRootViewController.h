//
//  RootViewController.h
//  MGSplitView
//
//  Created by Matt Gemmell on 26/07/2010.
//  Copyright Instinctive Code 2010.
//

#import <UIKit/UIKit.h>

@class MGDetailViewController;

@interface MGRootViewController : UITableViewController {
    MGDetailViewController *detailViewController;
}

@property (nonatomic, strong) IBOutlet MGDetailViewController *detailViewController;

- (void)selectFirstRow;

@end

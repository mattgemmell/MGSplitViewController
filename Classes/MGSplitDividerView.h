//
//  MGSplitDividerView.h
//  MGSplitView
//
//  Created by Matt Gemmell on 26/07/2010.
//  Copyright 2010 Instinctive Code.
//

#import <UIKit/UIKit.h>

@class MGSplitViewController;
@interface MGSplitDividerView : UIView {
}

@property (nonatomic, weak) MGSplitViewController *splitViewController;
@property (nonatomic, assign) BOOL allowsDragging;

- (void)drawGripThumbInRect:(CGRect)rect;

@end

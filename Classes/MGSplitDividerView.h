//
//  MGSplitDividerView.h
//  MGSplitView
//
//  Created by Matt Gemmell on 26/07/2010.
//  Copyright 2010 Instinctive Code.
//

#import <UIKit/UIKit.h>

@class MGSplitViewController, MGSplitDividerView;

@protocol MGSplitDividerViewDelegate <NSObject>
@optional
// Called when dividerView is tapped
- (void)dividerViewDidTap: (MGSplitDividerView *) dividerView;
// Called when dividerView end touch
- (void)dividerViewDidEndTouch: (MGSplitDividerView *) dividerView;
@end

@interface MGSplitDividerView : UIView {
}

@property (nonatomic, weak) MGSplitViewController *splitViewController;
@property (nonatomic, weak) id<MGSplitDividerViewDelegate> delegate;
@property (nonatomic, assign) BOOL allowsDragging;

- (void)drawGripThumbInRect:(CGRect)rect;

@end
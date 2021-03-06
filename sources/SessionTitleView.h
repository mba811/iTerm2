//
//  SessionTitleView.h
//  iTerm
//
//  Created by George Nachman on 10/21/11.
//  Copyright 2011 George Nachman. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol SessionTitleViewDelegate

- (NSColor *)tabColor;
- (NSMenu *)menu;
- (void)close;
- (void)beginDrag;

@end


@interface SessionTitleView : NSView

@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) NSObject<SessionTitleViewDelegate> *delegate;
@property (nonatomic, assign) double dimmingAmount;
@property (nonatomic, assign) int ordinal;

@end

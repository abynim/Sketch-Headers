//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@interface _TtC6Sketch22ComponentsPanelRowView : NSTableRowView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: outlineView
    // Error parsing type: , name: boundsAnimationsDisabled
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (void)setFrameWidth:(double)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewWillDraw;
- (void)updateLayer;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
@property(nonatomic) BOOL selected;
- (BOOL)isSelected;
@property(nonatomic) long long interiorBackgroundStyle;
@property(nonatomic) long long draggingDestinationFeedbackStyle;
@property(nonatomic) long long selectionHighlightStyle;
- (void)didAddSubview:(id)arg1;
- (BOOL)isOpaque;
@property(nonatomic) BOOL wantsLayer;

// Remaining properties
@property(nonatomic, readonly) BOOL opaque;

@end


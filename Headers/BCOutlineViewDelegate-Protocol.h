//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCLayerList/NSOutlineViewDelegate-Protocol.h>

@class BCOutlineView;

@protocol BCOutlineViewDelegate <NSOutlineViewDelegate>
- (void)outlineViewBackingPropertiesDidChange:(BCOutlineView *)arg1;
- (BOOL)isOutlineViewShowingContextMenu:(BCOutlineView *)arg1;

@optional
- (void)outlineView:(BCOutlineView *)arg1 disclosureTriangleClickedForItem:(id)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDocument, NSCache, NSViewController;

@protocol MSInspectorItemDelegate <NSObject>
- (MSDocument *)documentForInspectorItem:(NSViewController *)arg1;
- (void)itemDidResize:(NSViewController *)arg1;

@optional
- (NSCache *)userInterfaceCacheForItem:(NSViewController *)arg1;
- (void)item:(NSViewController *)arg1 wantsSectionToCollapse:(BOOL)arg2;
@end


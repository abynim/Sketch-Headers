//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMenu, NSString;

@protocol BCOutlineViewNode <NSObject>
@property(readonly, nonatomic) unsigned long long selectedBadgeMenuItem;
@property(readonly, nonatomic) NSMenu *badgeMenu;
@property(readonly, nonatomic) NSDictionary *previewImages;
@property(readonly, nonatomic) NSDictionary *badgeMap;
@property(readonly, nonatomic) BOOL hasSliceIcon;
@property(readonly, nonatomic) BOOL hasHighlight;
@property(readonly, nonatomic) BOOL isActive;
@property(retain, nonatomic) NSString *nodeName;
@property(readonly, nonatomic) unsigned long long filterType;
@property(readonly, nonatomic) unsigned long long displayType;
@end

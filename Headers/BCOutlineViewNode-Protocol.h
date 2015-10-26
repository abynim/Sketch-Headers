#import "NSObject.h"

@class NSDictionary, NSMenu, NSString;

@protocol BCOutlineViewNode <NSObject>
@property(readonly, nonatomic) unsigned long long selectedBadgeMenuItem;
@property(readonly, nonatomic) NSMenu *badgeMenu;
@property(readonly, nonatomic) NSDictionary *previewImages;
@property(readonly, nonatomic) NSDictionary *badgeMap;
@property(readonly, nonatomic) BOOL hasHighlight;
@property(readonly, nonatomic) BOOL isActive;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long filterType;
@property(readonly, nonatomic) unsigned long long displayType;
@end


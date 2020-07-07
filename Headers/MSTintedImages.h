//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface MSTintedImages : NSObject
{
    NSImage *_sidebarAddPageImage;
    NSImage *_sidebarCollapseListImage;
    NSImage *_sidebarExpandListImage;
    NSImage *_sidebarOpenPreferencesImage;
    NSImage *_selectedActiveHideImage;
    NSImage *_selectedInactiveHideImage;
    NSImage *_unselectedHideImage;
    NSImage *_pressedHideImage;
    NSImage *_pressedSelectedHideImage;
    NSImage *_selectedActiveLockImage;
    NSImage *_selectedInactiveLockImage;
    NSImage *_unselectedLockImage;
    NSImage *_pressedLockImage;
    NSImage *_pressedSelectedLockImage;
    NSImage *_flowBackImage;
    NSImage *_flowOtherPageImage;
    NSImage *_filterImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *filterImage; // @synthesize filterImage=_filterImage;
@property(readonly, nonatomic) NSImage *flowOtherPageImage; // @synthesize flowOtherPageImage=_flowOtherPageImage;
@property(readonly, nonatomic) NSImage *flowBackImage; // @synthesize flowBackImage=_flowBackImage;
@property(readonly, nonatomic) NSImage *pressedSelectedLockImage; // @synthesize pressedSelectedLockImage=_pressedSelectedLockImage;
@property(readonly, nonatomic) NSImage *pressedLockImage; // @synthesize pressedLockImage=_pressedLockImage;
@property(readonly, nonatomic) NSImage *unselectedLockImage; // @synthesize unselectedLockImage=_unselectedLockImage;
@property(readonly, nonatomic) NSImage *selectedInactiveLockImage; // @synthesize selectedInactiveLockImage=_selectedInactiveLockImage;
@property(readonly, nonatomic) NSImage *selectedActiveLockImage; // @synthesize selectedActiveLockImage=_selectedActiveLockImage;
@property(readonly, nonatomic) NSImage *pressedSelectedHideImage; // @synthesize pressedSelectedHideImage=_pressedSelectedHideImage;
@property(readonly, nonatomic) NSImage *pressedHideImage; // @synthesize pressedHideImage=_pressedHideImage;
@property(readonly, nonatomic) NSImage *unselectedHideImage; // @synthesize unselectedHideImage=_unselectedHideImage;
@property(readonly, nonatomic) NSImage *selectedInactiveHideImage; // @synthesize selectedInactiveHideImage=_selectedInactiveHideImage;
@property(readonly, nonatomic) NSImage *selectedActiveHideImage; // @synthesize selectedActiveHideImage=_selectedActiveHideImage;
@property(readonly, nonatomic) NSImage *sidebarOpenPreferencesImage; // @synthesize sidebarOpenPreferencesImage=_sidebarOpenPreferencesImage;
@property(readonly, nonatomic) NSImage *sidebarExpandListImage; // @synthesize sidebarExpandListImage=_sidebarExpandListImage;
@property(readonly, nonatomic) NSImage *sidebarCollapseListImage; // @synthesize sidebarCollapseListImage=_sidebarCollapseListImage;
@property(readonly, nonatomic) NSImage *sidebarAddPageImage; // @synthesize sidebarAddPageImage=_sidebarAddPageImage;
- (id)lockImageWhenNodeIsSelected:(BOOL)arg1 active:(BOOL)arg2;
- (id)pressedLockImageWhenNodeIsSelected:(BOOL)arg1;
- (id)pressedHideImageWhenNodeIsSelected:(BOOL)arg1;
- (id)hideImageWhenNodeIsSelected:(BOOL)arg1 active:(BOOL)arg2;
- (id)initWithTheme:(id)arg1;

@end

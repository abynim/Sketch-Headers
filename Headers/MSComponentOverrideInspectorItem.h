//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverrideInspectorItem.h"

@class NSString, _TtC6Sketch29MSComponentsPopoverController;

@interface MSComponentOverrideInspectorItem : MSOverrideInspectorItem
{
}

- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;
- (void)restorePopoverWithRestorationInfo:(id)arg1;
- (void)viewWillDisappear;
- (void)closeComponentsPopoverIfNecessary;
@property(readonly, nonatomic) _TtC6Sketch29MSComponentsPopoverController *componentsPopoverController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


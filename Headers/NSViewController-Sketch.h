//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSInspectorSectionProvider-Protocol.h"

@interface NSViewController (Sketch) <MSInspectorSectionProvider>
- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;
- (BOOL)presentFontEmbeddingReminderIfNecessaryForDocument:(id)arg1 workspace:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)inspectorController;
- (id)sections;
- (void)updateContainerStack;
- (void)reloadStackContaining:(id)arg1;
@end


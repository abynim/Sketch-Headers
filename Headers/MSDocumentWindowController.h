//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class MSDocument, MSMainSplitViewController, NSString;

@interface MSDocumentWindowController : NSWindowController <NSWindowDelegate>
{
}

- (void)presentFontEmbeddingReminderIfNecessaryForDocument:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (void)saveCurrentWindowFrameAsDefeaultWindowSize;
- (void)windowDidResize:(id)arg1;
@property(readonly, nonatomic) MSDocument *representedDocument;
@property(readonly, nonatomic) MSMainSplitViewController *mainSplitViewController;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class BCWindowBadge, MSDocument, NSEvent;

@interface MSDocumentWindow : NSWindow
{
    MSDocument *_document;
    BCWindowBadge *_titleBarBadge;
    NSEvent *_lastForwardedKeyEvent;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak NSEvent *lastForwardedKeyEvent; // @synthesize lastForwardedKeyEvent=_lastForwardedKeyEvent;
@property(retain, nonatomic) BCWindowBadge *titleBarBadge; // @synthesize titleBarBadge=_titleBarBadge;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) BOOL supportsFilePathMenu;
- (void)setAppearance:(id)arg1;
- (void)refreshAfterAppearanceChange;
- (BOOL)canBecomeKeyWindow;
- (id)touchBar;
- (void)toggleToolbarShown:(id)arg1;
- (void)showFilePopoverFromView:(id)arg1;
- (BOOL)shouldDismissPopover:(id)arg1 event:(id)arg2;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end


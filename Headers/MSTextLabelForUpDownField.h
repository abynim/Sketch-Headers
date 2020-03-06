//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import "NSGestureRecognizerDelegate-Protocol.h"

@class MSMouseTracker, NSArray, NSPanGestureRecognizer, NSString;
@protocol MSUpDownProtocol;

@interface MSTextLabelForUpDownField : NSTextField <NSGestureRecognizerDelegate>
{
    NSTextField<MSUpDownProtocol> *_upDownTextField;
    NSArray *_textFields;
    id _flagsMonitor;
    MSMouseTracker *_mouseTracker;
    NSPanGestureRecognizer *_dragRecognizer;
}

+ (id)resizeCursorForFlags:(unsigned long long)arg1;
@property(retain, nonatomic) NSPanGestureRecognizer *dragRecognizer; // @synthesize dragRecognizer=_dragRecognizer;
@property(retain, nonatomic) MSMouseTracker *mouseTracker; // @synthesize mouseTracker=_mouseTracker;
@property(retain, nonatomic) id flagsMonitor; // @synthesize flagsMonitor=_flagsMonitor;
@property(copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak NSTextField<MSUpDownProtocol> *upDownTextField; // @synthesize upDownTextField=_upDownTextField;
- (void).cxx_destruct;
- (BOOL)canScrub;
- (void)didDrag:(id)arg1;
- (id)textField;
- (void)cursorUpdate:(id)arg1;
- (void)updateCursor;
- (void)trackMouse:(id)arg1;
- (void)windowStatusChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)setShouldTrackFlags:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)dealloc;
- (struct CGRect)visibleRect;
- (void)setupTextLabelForUpDownField;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)clickShouldDismissPopover:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


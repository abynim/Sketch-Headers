//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSCanvasViewDelegate-Protocol.h"

@class MSCanvasView, MSDocument, MSFlashController, NSLayoutConstraint, NSString, NSView, _TtC6Sketch11MSRulerView;

@interface MSCanvasViewController : NSViewController <MSCanvasViewDelegate>
{
    BOOL _shouldHideOverlayControls;
    BOOL _observingDefaults;
    MSCanvasView *_canvasView;
    _TtC6Sketch11MSRulerView *_horizontalRuler;
    _TtC6Sketch11MSRulerView *_verticalRuler;
    NSView *_rulerCornerView;
    NSLayoutConstraint *_rulerWidthConstraint;
    NSLayoutConstraint *_rulerHeightConstraint;
    MSFlashController *_flashController;
    MSDocument *_document;
}

+ (id)overlayOptionsDefaultsKeys;
- (void).cxx_destruct;
@property(nonatomic, getter=isObservingDefaults) BOOL observingDefaults; // @synthesize observingDefaults=_observingDefaults;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) MSFlashController *flashController; // @synthesize flashController=_flashController;
@property(nonatomic) __weak NSLayoutConstraint *rulerHeightConstraint; // @synthesize rulerHeightConstraint=_rulerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rulerWidthConstraint; // @synthesize rulerWidthConstraint=_rulerWidthConstraint;
@property(retain, nonatomic) NSView *rulerCornerView; // @synthesize rulerCornerView=_rulerCornerView;
@property(retain, nonatomic) _TtC6Sketch11MSRulerView *verticalRuler; // @synthesize verticalRuler=_verticalRuler;
@property(retain, nonatomic) _TtC6Sketch11MSRulerView *horizontalRuler; // @synthesize horizontalRuler=_horizontalRuler;
@property(retain, nonatomic) MSCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (void)rulerViewStopCoalescingHistory:(id)arg1;
- (void)rulerViewStartCoalescingHistory:(id)arg1;
- (void)rulerViewDidDisableTemporaryGuide:(id)arg1;
- (void)rulerView:(id)arg1 didMoveTemporaryGuideToPosition:(double)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endObservingDefaults;
- (void)beginObservingDefaults;
- (void)updateContentSettings;
- (void)updateOverlaySettings;
- (unsigned long long)currentOverlayOptions;
- (void)canvasViewDidChangeEffectiveAppearance:(id)arg1;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (void)refreshRulers;
- (void)prepareForDealloc;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)updateRulers;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


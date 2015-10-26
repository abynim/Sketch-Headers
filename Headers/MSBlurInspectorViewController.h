#import "MSStylePartInspectorViewController.h"

#import "NSMenuDelegate.h"

@class NSButton, NSMenuItem, NSString, NSView;

@interface MSBlurInspectorViewController : MSStylePartInspectorViewController <NSMenuDelegate>
{
    NSView *gaussianBlurView;
    NSView *motionBlurView;
    NSView *zoomBlurView;
    NSButton *editButton;
    NSMenuItem *backgroundBlurMenuItem;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handlerFocusDidChange:(id)arg1;
- (void)blurPopUpAction:(id)arg1;
- (void)editZoomCenter:(id)arg1;
- (id)layers;
- (void)menuNeedsUpdate:(id)arg1;
- (id)views;
- (void)reloadInspectorStack:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


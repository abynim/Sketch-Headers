#import "NSObject.h"

#import "NSWindowDelegate.h"

@class BCPopoverWindow, NSString, NSView, NSViewController<BCPopoverContentController>;

@interface BCPopover : NSObject <NSWindowDelegate>
{
    BOOL dontSendNextPopoverWindowSizeNotification;
    NSViewController<BCPopoverContentController> *_contentViewController;
    id <BCPopoverDelegate> _delegate;
    BCPopoverWindow *_window;
    NSView *_attachedToView;
    long long _screenEdgeBehaviour;
    long long _layerDependency;
    unsigned long long _preferredEdge;
}

@property(nonatomic) unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(nonatomic) long long layerDependency; // @synthesize layerDependency=_layerDependency;
@property(nonatomic) long long screenEdgeBehaviour; // @synthesize screenEdgeBehaviour=_screenEdgeBehaviour;
@property(retain, nonatomic) NSView *attachedToView; // @synthesize attachedToView=_attachedToView;
@property(retain, nonatomic) BCPopoverWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <BCPopoverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSViewController<BCPopoverContentController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)windowWillClose:(id)arg1;
- (struct CGRect)windowRectForViewSize:(struct CGSize)arg1 above:(struct CGRect)arg2 pointingTo:(struct CGPoint)arg3 edge:(unsigned long long)arg4;
- (struct CGPoint)pointAtEdge:(unsigned long long)arg1 ofRect:(struct CGRect)arg2;
- (void)attachedViewDidMove:(id)arg1;
- (struct CGRect)ensureRectFitsInParentWindow:(struct CGRect)arg1;
- (struct CGPoint)attachToPointInScreenCoordinates;
- (struct CGRect)screenAnchorRect;
- (struct CGRect)popoverWindowFrame;
- (struct CGRect)screenFrame;
- (double)popoverArrowPosition;
- (void)otherPopoverDidShow:(id)arg1;
- (void)contentViewDidResizeNotification:(id)arg1;
- (void)attachedWindowDidMove:(id)arg1;
- (void)configureNotifications:(id)arg1;
- (void)move;
- (void)showRelativeToView:(id)arg1 preferredEdge:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

